#ifndef STRING_VALUE_H
#define STRING_VALUE_H

struct StringValue
{
  StringValue( const char* );
  ~StringValue();
  int ref_count;
  char *data;
};

#endif