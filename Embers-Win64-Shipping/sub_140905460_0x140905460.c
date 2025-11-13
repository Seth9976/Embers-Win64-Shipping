// 函数: sub_140905460
// 地址: 0x140905460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb0) != 0)
    *(arg1 + 0xb0) = 0
    return 

uint64_t rcx = *(arg1 + 0x70)

if (rcx != 0 && *(arg1 + 0x98) == 0)
    sub_1409063a0(rcx, *(arg1 + 0x40), *(arg1 + 0x38), *(arg1 + 0x9c))

int64_t* rcx_1 = *(arg1 + 0x88)

if (rcx_1 == 0)
    return 

jump(**rcx_1)
