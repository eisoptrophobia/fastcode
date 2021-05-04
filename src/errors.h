#pragma once

#ifndef ERRORS_H
#define ERRORS_H

//value errors
#define ERROR_INVALID_VALUE_TYPE 1
#define ERROR_CONFLICTING_VALUE_PTRS 2
#define ERROR_INDEX_OUT_OF_RANGE 3
#define ERROR_PROPERTY_NOT_FOUND 4
#define ERROR_MUST_HAVE_NUM_TYPE 5
#define ERROR_MUST_HAVE_STRUCT_TYPE 6
#define ERROR_MUST_HAVE_COLLECTION_TYPE 7
#define ERROR_MUST_HAVE_CHAR_TYPE 8

//variable errors
#define ERROR_VARIABLE_ALREADY_DEFINED 10
#define ERROR_VARIABLE_NOT_DEFINED 11
#define ERROR_CANNOT_DEREFERENCE 12

//identifier errors
#define ERROR_INVALID_ACCESSOR_MODIFIERS 30

//operator erros
#define ERROR_INVALID_BINARY_OPERATOR 41
#define ERROR_INVALID_UNIARY_OPERATOR 42

//numerical errors (none should be invoked)
#define ERROR_INVALID_NUMERICAL_TYPE 50

//lexographical errors
#define ERROR_UNEXPECTED_TOKEN 51
#define ERROR_UNEXPECTED_END 52
#define ERROR_UNRECOGNIZED_TOKEN 53
#define ERROR_UNRECOGNIZED_ESCAPE_SEQ 54

//runtime errors
#define ERROR_OP_NOT_IMPLEMENTED 60
#define ERROR_UNRECOGNIZED_VARIABLE 62
#define ERROR_DIVIDE_BY_ZERO 64
#define ERROR_UNEXPECTED_ARGUMENT_SIZE 65
#define ERROR_UNEXPECTED_BREAK 66

//prototype erros
#define ERROR_STRUCT_PROTO_ALREADY_DEFINED 70
#define ERROR_FUNCTION_PROTO_ALREADY_DEFINED 71
#define ERROR_STRUCT_PROTO_NOT_DEFINED 72
#define ERROR_FUNCTION_PROTO_NOT_DEFINED 73

//import errors
#define ERROR_CANNOT_INCLUDE_FILE

#endif // !ERRORS_H