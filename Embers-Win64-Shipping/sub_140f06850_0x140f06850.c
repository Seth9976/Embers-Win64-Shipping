// 函数: sub_140f06850
// 地址: 0x140f06850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
int64_t rsi = sx.q(arg3)
arg1[1].d = rbp + 1

if (rbp + 1 s> *(arg1 + 0xc))
    sub_1405c4e40(arg1)

int64_t rbx_1 = rsi << 5
int64_t rdx_2 = *arg1 + rbx_1
memmove(rdx_2 + 0x20, rdx_2, (rbp - rsi.d) << 5)
int32_t* rcx_2 = *arg1 + rbx_1
*rcx_2 = *arg2
*(rcx_2 + 4) = *(arg2 + 4)
*(rcx_2 + 0x10) = *(arg2 + 0x10)
void* rax_4 = *(arg2 + 0x18)
*(rcx_2 + 0x18) = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return zx.q(rsi.d)
