// 函数: sub_142824868
// 地址: 0x142824868
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void var_b8
struct std::exception::VTable* exceptionObject

if ((*(arg2 + 0x40) - *(arg2 + 0x38)) s>> 5 != 1)
    sub_14058a5c0(&var_b8, "YAML directives must have exactly one argument")
    sub_1428244f0(&exceptionObject, arg2 + 8, &var_b8)
    _CxxThrowException(&exceptionObject, &data_143946450)
    noreturn

if (**(arg1 + 8) == 0)
    sub_14058a5c0(&var_b8, "repeated YAML directive")
    sub_1428244f0(&exceptionObject, arg2 + 8, &var_b8)
    _CxxThrowException(&exceptionObject, &data_143946450)
    noreturn

void* var_1b8
sub_14281d3a0(&var_1b8, *(arg2 + 0x38), 3, 1)
std::istream::operator>>(&var_1b8, *(arg1 + 8) + 4)
std::istream::get()
std::istream::operator>>(&var_1b8, *(arg1 + 8) + 8)
char var_1a8[0x88]

if ((var_1a8[sx.q(*(var_1b8 + 4))] & 6) == 0 && std::istream::peek(&var_1b8) == 0xffffffff)
    char* rax_8 = *(arg1 + 8)
    
    if (*(rax_8 + 4) s> 1)
        sub_14058a5c0(&var_b8, "YAML major version too large")
        sub_1428244f0(&exceptionObject, arg2 + 8, &var_b8)
        _CxxThrowException(&exceptionObject, &data_143946450)
        noreturn
    
    *rax_8 = 0
    class std::basic_ios<unsigned short> var_120
    sub_1405893c0(&var_120)
    int64_t result = std::ios::~ios<char, struct std::char_traits<char> >(&var_120)
    __security_check_cookie(rax_1 ^ &var_1d8)
    return result

void var_48
sub_1428244f0(&exceptionObject, arg2 + 8, 
    sub_14281d238(&var_48, sub_14058a5c0(&var_b8, "bad YAML version: "), 
        pdb_internal::Array<struct ClsData>::operator[](arg2 + 0x38, 0)))
_CxxThrowException(&exceptionObject, &data_143946450)
noreturn
