// 函数: sub_1421afc70
// 地址: 0x1421afc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x28) & 1) == 0)
    return 

int64_t rdi_1 = sx.q(*(arg2 + 0x20))
int32_t rax_1 = (rdi_1 + 1).d
*(arg2 + 0x20) = rax_1

if (rax_1 s> *(arg2 + 0x24))
    sub_1405a4d70(arg2 + 0x18)

*(*(arg2 + 0x18) + (rdi_1 << 3)) = arg1
