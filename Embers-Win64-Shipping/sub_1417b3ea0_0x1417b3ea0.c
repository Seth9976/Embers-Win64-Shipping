// 函数: sub_1417b3ea0
// 地址: 0x1417b3ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(arg2)
int32_t rcx = arg1[1].d

if (rcx == rsi + 1)
    arg1[1].d = rcx - 1
    return rcx - 1

*(*arg1 + (zx.q(rsi.w) << 3)) = 0
int64_t rdi = sx.q(arg1[3].d)
int32_t rax_3 = (rdi + 1).d
arg1[3].d = rax_3

if (rax_3 s> *(arg1 + 0x1c))
    sub_140594770(&arg1[2])

int64_t result = arg1[2]
*(result + (rdi << 1)) = rsi.w
return result
