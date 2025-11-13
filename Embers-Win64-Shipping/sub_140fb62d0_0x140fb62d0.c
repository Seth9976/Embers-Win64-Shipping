// 函数: sub_140fb62d0
// 地址: 0x140fb62d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
int64_t rsi = sx.q(arg3)
arg1[1].d = rbp + 1

if (rbp + 1 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t rdx_2 = *arg1 + (rsi << 4)
memmove(rdx_2 + 0x10, rdx_2, (rbp - rsi.d) << 4)
int64_t* rcx_1 = *arg1
rcx_1[rsi * 2] = *arg2
void* rax_2 = arg2[1]
rcx_1[rsi * 2 + 1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

return zx.q(rsi.d)
