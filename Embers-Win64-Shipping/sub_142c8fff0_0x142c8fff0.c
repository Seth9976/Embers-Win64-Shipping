// 函数: sub_142c8fff0
// 地址: 0x142c8fff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t result = gethostname(arg1, arg2)
arg1[sx.q(arg2 - 1)] = 0

if (result != 0)
    return result

char* rax = strchr(arg1, result + 0x2e)

if (rax != 0)
    *rax = 0

return 0
