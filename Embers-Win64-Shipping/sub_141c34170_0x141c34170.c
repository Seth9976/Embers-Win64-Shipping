// 函数: sub_141c34170
// 地址: 0x141c34170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c46000(arg1 + 0x448, *(arg1 + 0x14))
float zmm1_1 = *(arg1 + 0x18)
*(arg1 + 0x488) = zmm1_1
*(arg1 + 0x484) = powf(10f, zmm1_1 * 0.0500000007f).d
zmm1_1 = 1f f- *(arg1 + 0x1c)
*(arg1 + 0x494) = zmm1_1
int128_t result
result.d = 1f - zmm1_1
*(arg1 + 0x498) = result.d
int128_t zmm2 = *(arg1 + 0x20)
zmm1_1 = *(arg1 + 0x24)
*(arg1 + 0x638) = (*(arg1 + 0x2c) ^ data_142d3f780).d
*(arg1 + 0x4e8) = zmm2.d
result.d = 1f - zmm1_1
*(arg1 + 0x538) = zmm2.d
zmm2.d = zmm2.d f- 0.125f
*(arg1 + 0x588) = zmm2.d
*(arg1 + 0x5d8) = zmm2.d
*(arg1 + 0x68c) = zmm1_1
*(arg1 + 0x690) = result.d
zmm2 = *(arg1 + 0x2c)
result = *(arg1 + 0x24)
*(arg1 + 0x788) = (zmm2 ^ data_142d3f780).d
*(arg1 + 0x6e0) = zmm2.d - 0.150000006f
*(arg1 + 0x7dc) = result.d
*(arg1 + 0x7e0) = 1f f- result.d
result.d = (*(arg1 + 0x2c)).d f- 0.150000006f
*(arg1 + 0x830) = result.d
return result
