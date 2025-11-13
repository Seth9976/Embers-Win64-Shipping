// 函数: sub_14282a2e8
// 地址: 0x14282a2e8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rax_2 = sub_142828cd8(*(arg1 + 8))

if (*arg2 != 0)
    void var_98
    sub_14058a5c0(&var_98, "cannot assign multiple anchors to the same node")
    struct std::exception::VTable* exceptionObject
    sub_1428244f0(&exceptionObject, rax_2 + 8, &var_98)
    _CxxThrowException(&exceptionObject, &data_143946450)
    noreturn

sub_14058a4a0(arg3, rax_2 + 0x18)
*arg2 = sub_14282a56c(arg1, rax_2 + 0x18)
int64_t result = sub_142828d00(*(arg1 + 8))
__security_check_cookie(rax_1 ^ &var_b8)
return result
