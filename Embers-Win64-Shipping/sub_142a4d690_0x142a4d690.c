// 函数: sub_142a4d690
// 地址: 0x142a4d690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_8 = arg1
int32_t rbp = 0
char* rax = arg1

if (arg4 == 0 || *arg4 s> 0)
    return 0

if (arg1 == 0)
    rax = sub_142a46ef0()
    arg_8 = rax

sub_142a4e610(rax, nullptr, 0, &arg_8)
char* rcx_1 = arg_8
char rax_1 = *rcx_1

if (rax_1 == 0x5f || rax_1 == 0x2d)
    rbp = sub_142a4e860(&rcx_1[1], arg2, arg3, nullptr)

return sub_142a8c3f0(arg2, arg3, rbp, arg4)
