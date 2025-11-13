// 函数: ?AdjustClassname@@YAXPEAD0_K@Z
// 地址: 0x142a65f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char** result = arg3
char** rax = sub_142a625a0(arg1, "Names", nullptr, arg4)
char** rbp = rax
int32_t rax_1 = sub_142a65200(rax, arg2, arg4)

if (rax_1 != 0xffffffff || *arg4 s> 0)
    char** rax_2 = sub_142a625a0(arg1, "Zones", rbp, arg4)
    rbp = rax_2
    result = sub_142a620c0(rax_2, rax_1, result, arg4)
else
    *arg4 = 2

sub_142a5f860(rbp)

if (*arg4 s> 0)
    return nullptr

return result
