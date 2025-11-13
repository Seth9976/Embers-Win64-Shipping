// 函数: sub_142096540
// 地址: 0x142096540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1408888d0(arg1)

int32_t* result = (rdi << 7) + *arg1
*(result + 0x68) = 0
*(result + 0x70) = 0
*result = arg2
result[1] = 2
*(arg1 + 0x14) += 1
return result
