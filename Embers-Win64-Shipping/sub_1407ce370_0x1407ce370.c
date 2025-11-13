// 函数: sub_1407ce370
// 地址: 0x1407ce370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd0) s<= 0)
    int512_t zmm0
    zmm0.o = 0x3f800000
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0x3f800000
    *(arg1 + 0x48) = 0x3f800000
    return zmm0

void var_28
*(arg1 + 0x40) = *(sub_141f89220(arg1 + 0x58, &var_28) + 4)
float zmm2 = *(sub_141f89d50(arg1 + 0x58, &var_28) + 4)
float zmm0_1 = zmm2 f- *(arg1 + 0x40)
*(arg1 + 0x44) = zmm2
*(arg1 + 0x48) = 1f / zmm0_1
return zmm0_1
