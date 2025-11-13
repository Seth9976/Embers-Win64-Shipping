// 函数: sub_140421680
// 地址: 0x140421680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t temp0 = _mm_unpacklo_ps(0x3fffffff, 0x3fffffff)
float result[0x4] = _mm_unpacklo_ps(0x3fffffff, 0x3fffffff)[0].q | temp0 << 0x40
data_143cde9d0 = result
return result
