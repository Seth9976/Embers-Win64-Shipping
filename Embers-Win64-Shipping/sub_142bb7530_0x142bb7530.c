// 函数: sub_142bb7530
// 地址: 0x142bb7530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
*(arg1 + 0x38) = 1
*(arg1 + 0x3c) = 1
*(arg1 + 0x40) = 0x1f4
*(arg1 + 0x44) = 0x190
*(arg1 + 0x48) = 0x3e8
*(arg1 + 0x4c) = 0x113
*(arg1 + 0x50) = 0x683
*(arg1 + 0x54) = 0x113
*(arg1 + 0x58) = 0x91d
int32_t arg_10
int32_t rcx_2 = *(arg_8 + 0x10) ^ &arg_10 ^ &arg_8
int32_t rcx_3 = rcx_2 ^ (rcx_2 u>> 0xa ^ rcx_2) u>> 0xa
arg_10 = rcx_3
*(arg1 + 0x60) = rcx_3
int32_t rcx_4 = arg_10

if (rcx_4 s< 0)
    *(arg1 + 0x60) = neg.d(rcx_4)
    return 0

int32_t rax_6 = *(arg1 + 0x60)

if (rcx_4 == 0)
    rax_6 = 0x75bcd15

*(arg1 + 0x60) = rax_6
return 0
