// 函数: sub_14282a230
// 地址: 0x14282a230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void var_98
sub_142824334(arg1 + 0x20, &var_98, arg3)
void* var_88
void* rbx = var_88
char rax_2

if (*(rbx + 0x19) == 0)
    rax_2 = sub_142824260(arg3, rbx + 0x20)

if (*(rbx + 0x19) != 0 || rax_2 != 0)
    rbx = *(arg1 + 0x20)

if (rbx != *(arg1 + 0x20))
    int64_t result = *(rbx + 0x40)
    __security_check_cookie(rax_1 ^ &var_b8)
    return result

sub_14058a5c0(&var_98, "the referenced anchor is not defined")
struct std::exception::VTable* exceptionObject
sub_1428244f0(&exceptionObject, arg2, &var_98)
_CxxThrowException(&exceptionObject, &data_143946450)
noreturn
