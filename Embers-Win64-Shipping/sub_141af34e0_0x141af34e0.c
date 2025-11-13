// 函数: sub_141af34e0
// 地址: 0x141af34e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x48)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142d4caa0
result[2] = 0
result[3] = 0
result[7] = 0

if (*(arg1 + 0x18) == 0)
    memmove(&result[4], arg1, 0x18)

int64_t rcx_1 = result[7]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

result[7] = *(arg1 + 0x18)
*(arg1 + 0x18) = 0
result[8].d = *(arg1 + 0x20)
*(result + 0x44) = *(arg1 + 0x24)
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 1
return result
