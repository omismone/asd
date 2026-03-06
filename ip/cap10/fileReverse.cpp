// ******************************
// Author: SM
// Programma che legge da file un vector<int> e lo reversa in un altro file.
// ******************************

#include<iostream>
#include<fstream>
#include<vector>

const char* INPUT_FILE = "./input.txt";
const char* OUTPUT_FILE = "./output.txt";

typedef std::vector<int> vec;

vec reverse(vec& v);

int main()
{
    // open input file
    std::ifstream in;
    in.open(INPUT_FILE);
    if(!in)
    {
        std::cerr << "error while opening the input file" << std::endl;
        return -1;
    }

    // get the number of values and create the vector
    int N;
    in >> N;
    vec v(N);

    // get the values
    for(int i=0; i<N; i++)
    {
        in >> v[i];
    }
    in.close();

    // reverse v
    vec rev_v = reverse(v);

    // open output file
    std::ofstream out;
    out.open(OUTPUT_FILE);

    //write the number of values and the values
    out << N << std::endl;
    for(int i=0; i<N-1; i++)
    {
        out << rev_v[i] << std::endl;
    }
    out << rev_v[N-1]; // do not print endline at the end
    out.close();

    return 0;
}

vec reverse(vec& v)
{
    int n = (int)v.size();
    vec rev(n);
    for(int i=0; i<n; i++)
    {
        rev[i] = v[n-i-1];
    }
    return rev;
}