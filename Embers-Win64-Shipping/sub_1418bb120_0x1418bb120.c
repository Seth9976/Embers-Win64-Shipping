// 函数: sub_1418bb120
// 地址: 0x1418bb120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x58))
int32_t rax = (rdi + 1).d
*(arg1 + 0x58) = rax

if (rax s> *(arg1 + 0x5c))
    sub_1405a4cf0(arg1 + 0x50)

*(*(arg1 + 0x50) + (rdi << 2)) = arg2
*(arg3 + 8) += 1
int64_t rdi_1 = sx.q(*(arg1 + 0x68))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x68) = rax_2

if (rax_2 s> *(arg1 + 0x6c))
    sub_1405a4d70(arg1 + 0x60)

int64_t result = *(arg1 + 0x60)
*(result + (rdi_1 << 3)) = arg3
return result
