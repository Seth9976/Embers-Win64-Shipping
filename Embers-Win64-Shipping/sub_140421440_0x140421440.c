// 函数: sub_140421440
// 地址: 0x140421440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm2 = data_143cde8a4[0]
float zmm3[0x4] = data_143cde8a4[0]
float temp0[0x4] = _mm_unpacklo_ps(data_143cde8a4[0], data_143cde8a4[0][0].q)
float result[0x4] = _mm_unpacklo_ps(zmm3, zmm2)[0].q | temp0[0].q << 0x40
data_143cdea60 = result
return result
