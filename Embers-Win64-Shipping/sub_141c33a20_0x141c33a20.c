// 函数: sub_141c33a20
// 地址: 0x141c33a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0x70
void* rsi = arg1 + 0x20
int64_t i_1 = 2
int64_t result
int64_t i

do
    result = sub_141c46000(rsi, *(arg1 + 0xc))
    float zmm1 = *(arg1 + 0x10)
    *(rbx - 4) = zmm1
    rsi += 0x1f8
    *rbx = 1f - zmm1
    rbx += 0x1f8
    i = i_1
    i_1 -= 1
while (i != 1)
float temp0_1 = _mm_min_ss(*(arg1 + 0x18) + 0.100000001f, 0x3f7ff972)
*(arg1 + 0x1bc) = temp0_1
*(arg1 + 0x1c0) = 1f - temp0_1
float temp0_2 = _mm_min_ss(*(arg1 + 0x18) - 0.119999997f, 0x3f7ff972)
*(arg1 + 0x1cc) = temp0_2
*(arg1 + 0x1d0) = 1f - temp0_2
float temp0_3 = _mm_min_ss(*(arg1 + 0x18) + 0.0799999982f, 0x3f7ff972)
*(arg1 + 0x1dc) = temp0_3
*(arg1 + 0x1e0) = 1f - temp0_3
float temp0_4 = _mm_min_ss(*(arg1 + 0x18) - 0.0700000003f, 0x3f7ff972)
*(arg1 + 0x1ec) = temp0_4
*(arg1 + 0x1f0) = 1f - temp0_4
float temp0_5 = _mm_min_ss(*(arg1 + 0x18) + 0.170000002f, 0x3f7fbe77)
*(arg1 + 0x3b4) = temp0_5
*(arg1 + 0x3b8) = 1f - temp0_5
float temp0_6 = _mm_min_ss(*(arg1 + 0x18) - 0.0700000003f, 0x3f7fbe77)
*(arg1 + 0x3c4) = temp0_6
*(arg1 + 0x3c8) = 1f - temp0_6
float temp0_7 = _mm_min_ss(*(arg1 + 0x18) + 0.0500000007f, 0x3f7fbe77)
*(arg1 + 0x3d4) = temp0_7
*(arg1 + 0x3d8) = 1f - temp0_7
float temp0_8 = _mm_min_ss(*(arg1 + 0x18) - 0.109999999f, 0x3f7fbe77)
*(arg1 + 0x3e4) = temp0_8
*(arg1 + 0x3e8) = 1f - temp0_8
int128_t zmm6
zmm6.d = 1f f- *(arg1 + 0x14)
zmm6.d = zmm6.d f* 0.707000017f
*(arg1 + 0x1c) = zmm6.d
return result
