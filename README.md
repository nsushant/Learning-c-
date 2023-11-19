# Learning-c-plus-plus
### Datatypes in c++

1. Characters : One element of plain text ⇒ chars alphabet = 'A';
2. String: collection of characters ⇒ string phrase = 'words and phrases';
3. Integers: whole numbers ⇒ int Wholenumber = 1;
4. Double: used to store decimals ⇒ double decimal = 0.05;
5. Bool: will store a true or false value inside ⇒ bool isCool = False;

 

### String commands

1. Tabs: double space at the end of the string ⇒ std : : cout << "I'm just great at this \t";
2. Newline: add a newline at the end of this statement ⇒ std : : cout << "maybe not \n";
3. length : if variable phrase is a string length gives the number of chars ⇒ phrase.length()
4. Indexing: to get a char in a string ⇒ std : : cout << phrase[0] 
5. change char: to change the value of a char in a string ⇒ phrase[0] = 'B' ⇒ 'Bords and phrases' 
6. find(): Finding a character or string inside a given phrase⇒ phrase.find('Bords',after what index)⇒ returns starting index of phrase or index of char.  
7. substr(): grab a substring from the string ⇒ phrase.substr(index_start,length)

### Number commands

1. All standard arithmetic operations apply.(*,%,+,-,/ )
2. incrementation of a numeric variable: ++variable : add 1 to the value of the variable,  - -variable : increment by -1 

Pre-increment and pre-decrement operators increments or decrements the value of the object and returns a reference to the result.

variable++: increment var by +1 , variable- - = increment by -1

Post-increment and post-decrement creates a copy of the object, increments or decrements the value of the object and returns the copy from before the increment or decrement.
    
3. #include <cmath> :power: pow(base,exponent)

square root: sqrt(num)

rounding decimals: round(num)

round up: ceil(num)

round down: floor(num)

greater num: fmax(num1,num2) ⇒ greater of the two

num of least value: fmin(num1,num2) 

### Getting User Input

1. cin>>Variable;
2. for strings use getline(cin,variable);

I was able to take a full c++ course at UCL, so I stopped adding code to this repo. Further projects can be found in repos containing my project code which will be created in the future. (subject to UCL's assesment guidlines) 

## please look at https://closed-chime-955.notion.site/C-74600f17b8b5498e98591d6740f369e7 , this is a webpage that i will keep updating with more written material on C++.




