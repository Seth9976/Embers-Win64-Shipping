// 函数: sub_14186c8d0
// 地址: 0x14186c8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4f50(arg1)

int32_t* result = rdi * 0x30 + *arg1
*result = 1
__builtin_memset(&result[2], 0, 0x28)
return result
