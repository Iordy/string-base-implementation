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

   string::string(long long size)
   {
          this-> string_length = size;
          this-> string_letters = new char[size];
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

   char string::operator [](int index)
   {
        return this->string_letters[index];
   }

   char string::at(int index)
   {
          return this->string_letters[index];
   } 

   char string::back()
   {
          return this->string_letters[this->string_length - 1];
   }   

   char string::front()
   {
          return this->string_letters[0];
   }

   bool string::empty()
   {
          if(this->string_length == 0)
          return true;
          return false;
   }

   void string::erase(int index)
   {
          for(int i = 0; i < this-> string_length; i++)
          {
                 if(i == index)
                 {
                      for(int j = i; j < this->string_length; j++)
                      {
                           this->string_letters[j] = this->string_letters[j + 1];
                      }
                 }
          }
   }

   void string::append(const string& source)
   {
          strcat(this-> string_letters, source.string_letters);
   }


   void string::push_back(const char c)
   {
          char temp[1];
          temp[0] = c;
          strncat(this->string_letters, temp, 1);
          this->string_length++;
         
   }

   string& string::assign(const string& source)
   {
          return string::operator=(source);
   }


   void string::pop_back()
   {
          strncpy(this-> string_letters, this->string_letters, this->string_length - 1);
   }

   




























