string2.cpp

\\exemplos de codigos

int main()
{
 string str ="Hello";
 str.push_back('!'); // str = "Hello!"
 str.pop_back(); // str = "Hello"
 return 0;
insere e retira elementos de uma string tbm
int main()
{
 string str ="Hello";
 str.insert(1, "ey"); // str = "Heyello"
 str.erase(1, 2); // str = "Hlo"
 return 0;
} insere e retira elementos de uma string

int main()
{
 string str ="Hello, World!";
 size_t pos1 =str.find("World"); // pos1 = 7
 size_t pos2 =str.rfind("!"); // pos2 = 12
 size_t pos3 =str.find("Python"); // pos3 = std::string::npos (não encontrado)
 return 0;
} enontra um caractere na string e devolve a posição do caractere. find é 1° e rfind é ultima

int main()
{
 string str ="Hello, World!";
 string sub1 =str.substr(7); // sub1 = "World!"
 string sub2 =str.substr(0, 5); // sub2 = "Hello"
 return 0;
} \\pega o resto da string a partir de uma posição dada
