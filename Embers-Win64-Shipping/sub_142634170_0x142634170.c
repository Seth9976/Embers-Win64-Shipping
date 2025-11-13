// 函数: sub_142634170
// 地址: 0x142634170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg5)

if (rbp.d u> 0xf || arg2 s< 0 || arg2 s>= *(arg1 + 0x28))
    int64_t rax
    rax.b = 0
    return rax

int64_t rdi = sx.q(arg2) * 0x84
int32_t count = (rbp << 2).d
memcpy(*(arg1 + 0x30) + rdi, arg3, count)
memcpy(*(arg1 + 0x30) + 0x40 + rdi, arg4, count)
*(rdi + *(arg1 + 0x30) + 0x80) = rbp.d
int64_t rax_2
rax_2.b = 1
return rax_2
