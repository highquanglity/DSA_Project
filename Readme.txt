Compile:
1. main:
g++ src\main.cpp -o src\main.exe -std=c++17 -I C:\Users\user\AppData\Local\Programs\Python\Python310\include -I include -I C:\Users\user\AppData\Local\Programs\Python\Python310\Lib\site-packages\numpy\core\include -L C:\Users\user\AppData\Local\Programs\Python\Python310\libs -lpython310
2. evaluate:
g++ src\evaluate.cpp -o src\evaluate.exe -std=c++17 -I C:\Users\user\AppData\Local\Programs\Python\Python310\include -I include -I C:\Users\user\AppData\Local\Programs\Python\Python310\Lib\site-packages\numpy\core\include -L C:\Users\user\AppData\Local\Programs\Python\Python310\libs -lpython310

Test:
./src/main.exe filename 0
Example:
./src/main.exe ./sample/sample1.cpp 0
- If you want to display a graph that illustrates the distribution of code blocks by number of lines: 
* Plot:
./src/main.exe ./sample/sample1.cpp 1  
* Bar:
./src/main.exe ./sample/sample1.cpp 2   


Evaluate the entire dataset:
.\src\evaluate.exe > .\output.txt 