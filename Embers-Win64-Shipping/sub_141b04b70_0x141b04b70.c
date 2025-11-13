// 函数: sub_141b04b70
// 地址: 0x141b04b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg2 + 0x18))
int32_t rax = (rdi + 1).d
*(arg2 + 0x18) = rax

if (rax s> *(arg2 + 0x1c))
    sub_1407c3b60(arg2 + 0x10)

int64_t result = *(arg2 + 0x10)
int128_t* rcx_1 = rdi * 0x38
*(rcx_1 + result) = *(arg1 + 8)
*(rcx_1 + result + 0x10) = *(arg1 + 0x18)
*(rcx_1 + result + 0x20) = *(arg1 + 0x28)
*(rcx_1 + result + 0x30) = *(arg1 + 0x38)
return result
