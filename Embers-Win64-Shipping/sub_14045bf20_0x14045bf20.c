// 函数: sub_14045bf20
// 地址: 0x14045bf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = data_14399f5c0
char rax = data_1439ae64a & 0xfd
data_1439ae5b4 &= 0xfe
data_1439ae5ec &= 0xfe
zmm3[0] = zmm3[0] * 0.600000024f
data_1439ae64a = rax | 1
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
data_1439ae600 = zmm3
data_1439ae620 = zmm3[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
data_1439ae610 = zmm3
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
temp0_2[0] = temp0_2[0] * 0.600000024f
temp0[0] = temp0[0] * 0.600000024f
temp0_1[0] = temp0_1[0] * 0.600000024f
data_1439ae62c = temp0_2[0]
data_1439ae624 = temp0[0]
data_1439ae628 = temp0_1[0]
return atexit(sub_142cc9c30) __tailcall
