# stream  

__1. cin&&getline__  
CS106L　公开课stream II中，有一个错误，先复现一下代码   
　
<code>  
string name;  
int age;  
cout << "what is your name"<< endl;  
cin >> name;  
cout << "what is your age" << endl;  
cin >> age;  
//when we call  
//example 1  
char char_result = cin.get();  
//example 2  
string string_result;  
getline(cin, string_result); 
//example 3   
char s[30];  
cin.getline(s, 2);  
</code>

我们明确以下几点  
1. cin 会把换行作为结束符，也就是cin一次性把当前行的内容都读入buffer中，但每次从buffer中取的时候，会根据分割符切分。　比如我们输入 happy zhou，那么name = happy，而不是happy zhou，就像文件读取一样，我们认为cin也是有一个指针的。  
2. 关于换行符，到底什么时候会被识别到？在上面的代码中，我们输入age之后，会再回车，此时，cin.getline不会取，getline(cin, string)也不会，只有cin.get()才会读取到换行符。但是在CS106L中这块好像将错了，说getline(cin, response)会识别到换行，但是我在实际编译中没有遇到这种情况。  

