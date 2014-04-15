#include "StringValue.h"

StringValue::StringValue( const char *init_value )
  : ref_count(1)
{
  if ( init_value == 0 ) {
    // Error
    return;
  }
  this->data = new char[ strlen(init_value) + 1 ];
  strcpy( this->data );
}

StringValue::~StringValue()
{
  delete[] this->data;
}