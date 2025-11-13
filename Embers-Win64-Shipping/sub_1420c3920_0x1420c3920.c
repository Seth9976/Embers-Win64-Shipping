// 函数: sub_1420c3920
// 地址: 0x1420c3920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg3) * 0x38
int64_t rax = *(arg1 + 0x48)
int512_t result

if (arg2 == 0)
    result.o = *(rax + r8 + 4)
    return result

if (arg2 == 1)
    result.o = *(r8 + rax + 8)
    return result

if (arg2 != 2)
    result.o = *(r8 + rax + 0x10)
    return result

result.o = *(r8 + rax + 0xc)
return result
