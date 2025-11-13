// 函数: sub_141e6cc90
// 地址: 0x141e6cc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x10)
float zmm1 = *(result + 0x144) f* *(result + 0x14)
*(arg1 + 0x38) = zmm1
void* rcx = *(arg1 + 8)

if ((*(result + 0x100) & 0x100) == 0)
    zmm1 = zmm1 f* *(rcx + 0xc4)
    *(arg1 + 0x38) = zmm1

int32_t zmm0 = sub_141e769f0(rcx, zmm1)
void* rcx_1 = *(arg1 + 8)
*(arg1 + 0x38) = zmm0
*(arg1 + 0x34) = sub_141e7dbc0(rcx_1) f* *(arg1 + 0x38) f+ *(arg1 + 0x34)
return result
