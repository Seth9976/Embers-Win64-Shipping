// 函数: sub_141b0cc50
// 地址: 0x141b0cc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
void* result = sub_141af3690(arg1, 0, 8, 0, 0, 0)
int64_t rdi = sx.q(*(arg1 + 0x60))
int32_t rcx = (rdi + 1).d
*(arg1 + 0x60) = rcx

if (rcx s> *(arg1 + 0x64))
    sub_1405a4d70(arg1 + 0x58)

*(*(arg1 + 0x58) + (rdi << 3)) = result
return result
