// 函数: sub_1406d09f0
// 地址: 0x1406d09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg1)
int32_t rdx = arg2[1].d
int32_t rax_2 = rdx - r9.d - 1

if (rax_2 s>= 1)
    rax_2 = 1

if (rax_2 != 0)
    int64_t rcx = *arg2
    memcpy(rcx + (r9 << 2), rcx + (sx.q(rdx - rax_2) << 2), rax_2 << 2)
    rdx = arg2[1].d

arg2[1].d = rdx - 1
return sub_1405dac90(arg2) __tailcall
