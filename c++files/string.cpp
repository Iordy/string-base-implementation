#include <iostream>

#include "/Users/andreiiordache/Documents/GitHub/string-base-implementation/headers/string.h"


using namespace custom_string;


   string::string()
   {
        this-> string_length = 1;
        *(this->string_letters) = 'a' + rand() % 26;
   }

   string::string(char letters[])
   {
        int n = strlen(letters);
        this-> string_letters = new char[n];
        strcpy(this-> string_letters, letters);
        this-> string_length = n;
   }

   string::string(const string &source)
   {
        delete[] this->string_letters;
        this->string_length = source.string_length;
        this->string_letters = new char[this->string_length + 1];
        strcpy(this->string_letters, source.string_letters);
   }

   string::string(char* begin, char* end)
   {
        this-> string_letters = new char[end - begin];
        this-> string_length = end - begin; 

        for(int i = 0; i < this->string_length; i++)
        {
            this->string_letters[i] = begin[i];
        }
   }

     

   string& string::operator = (const string &source)
   {
        if(this != &source)
        {
            delete[] this->string_letters;
            this->string_length = source.string_length;
            this->string_letters = new char[this->string_length + 1];
            strcpy(this->string_letters, source.string_letters);
        }
    return *this;

   }

   string::~string()
   {
        if(this-> string_letters != NULL)
            delete[] this->string_letters;
        this->string_length = 0;
   }


   string string::operator +(const string &source)
   {
        string temp("");
        strcat(temp.string_letters, source.string_letters);
        strcat(temp.string_letters, source.string_letters);

        return temp;
   }

   bool string::operator ==(const string &source)
   {
        if(strcmp(this->string_letters, source.string_letters) != 0 )
        return false;
        return true;
   }

   bool string::operator !=(const string &source)
   {
        if(strcmp(this->string_letters, source.string_letters) != 0 )
        return true;
        return false;
   }


   string& string::operator +=(const string &source)
   {
        strcat(this->string_letters, source.string_letters);
        return *this;
   }












