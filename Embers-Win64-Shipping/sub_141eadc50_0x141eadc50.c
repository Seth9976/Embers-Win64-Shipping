// 函数: sub_141eadc50
// 地址: 0x141eadc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x78) = arg2
int128_t var_88_1
int128_t var_78
int128_t zmm0
int128_t zmm1

if (arg2 != 2)
    var_88_1 = data_14399f6e0
    zmm0 = data_14399f700
    var_78 = data_14399f6f0
    zmm1 = data_14399f710
else
    float var_48[0x10]
    float* rax_1 = sub_14077e760(&var_48, arg3)
    var_88_1 = *rax_1
    zmm0 = *(rax_1 + 0x20)
    var_78 = *(rax_1 + 0x10)
    zmm1 = *(rax_1 + 0x30)

*(arg1 + 0x80) = var_88_1
*(arg1 + 0x90) = var_78
*(arg1 + 0xa0) = zmm0
*(arg1 + 0xb0) = zmm1
