// 函数: sub_142824720
// 地址: 0x142824720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rsi = *(arg2 + 0x38)
void var_a8
struct std::exception::VTable* exceptionObject

if ((*(arg2 + 0x40) - rsi) s>> 5 != 2)
    sub_14058a5c0(&var_a8, "TAG directives must have exactly two arguments")
    sub_1428244f0(&exceptionObject, arg2 + 8, &var_a8)
    _CxxThrowException(&exceptionObject, &data_143946450)
    noreturn

void* r14 = *(arg1 + 8)
int64_t r15 = *(r14 + 0x10)
sub_142824334(r14 + 0x10, &var_a8, rsi)
void* var_98
void* rdi = var_98
char rax_5

if (*(rdi + 0x19) == 0)
    rax_5 = sub_142824260(rsi, rdi + 0x20)

if (*(rdi + 0x19) != 0 || rax_5 != 0)
    rdi = *(r14 + 0x10)

if (rdi == r15)
    int64_t* result =
        sub_14058a4a0(*sub_1428243a0(*(arg1 + 8) + 0x10, &var_a8, rsi) + 0x40, &rsi[4])
    __security_check_cookie(rax_1 ^ &var_c8)
    return result

sub_14058a5c0(&var_a8, "repeated TAG directive")
sub_1428244f0(&exceptionObject, arg2 + 8, &var_a8)
_CxxThrowException(&exceptionObject, &data_143946450)
noreturn
