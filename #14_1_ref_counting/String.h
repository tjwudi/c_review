#ifndef STRING_H
#define STRING_H

class String
{
public:
  String(const char* init_value = "");
  ~String();
private:
  StringValue *string_value;
};

#endif