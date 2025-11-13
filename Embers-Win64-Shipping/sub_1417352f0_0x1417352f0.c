// 函数: sub_1417352f0
// 地址: 0x1417352f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 8) = arg4
*(arg2 + 0x10) = arg3
*(arg3 + 8) = arg2
*(arg3 + 0x10) = arg4
*(arg4 + 0x10) = arg2
*(arg4 + 8) = arg3
int64_t r11 = *(arg1 + 0x28)
int64_t r10 = sx.q(*arg4) * 3
int64_t rdx = sx.q(*arg3) * 3
int64_t rcx = sx.q(*arg2) * 3
int128_t zmm8
zmm8.d = (*(r11 + (rdx << 2) + 8)).d f- *(r11 + (rcx << 2) + 8)
int128_t zmm9
zmm9.d = (*(r11 + (rdx << 2))).d f- *(r11 + (rcx << 2))
int128_t zmm4
zmm4.d = (*(r11 + (rdx << 2) + 4)).d f- *(r11 + (rcx << 2) + 4)
float zmm5 = *(r11 + (r10 << 2) + 4) f- *(r11 + (rcx << 2) + 4)
float zmm3 = *(r11 + (r10 << 2) + 8) f- *(r11 + (rcx << 2) + 8)
int128_t zmm6
zmm6.d = (*(r11 + (r10 << 2))).d f- *(r11 + (rcx << 2))
float zmm0 = zmm8.d * zmm5
int128_t zmm7
zmm7.d = zmm4.d f* zmm3
zmm8.d = zmm8.d f* zmm6.d
zmm7.d = zmm7.d f- zmm0
zmm4.d = zmm4.d f* zmm6.d
zmm0 = zmm9.d
zmm9.d = zmm9.d f* zmm5
zmm9.d = zmm9.d f- zmm4.d
zmm8.d = zmm8.d f- zmm0 * zmm3
int64_t zmm1
zmm1.d = zmm9.q.d f* zmm9.d
float temp0 = _mm_sqrt_ss(0, zmm8.d f* zmm8.d + zmm7.d f* zmm7.d f+ zmm1.d)
zmm7.d = zmm7.d f/ temp0
zmm8.d = zmm8.d f/ temp0
zmm9.d = zmm9.d f/ temp0
int32_t var_74 = zmm8.d
void** result_1 = j_sub_140a82f30(0x38)
void** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t rcx_1 = sx.q(*arg2) * 3
    int64_t rax_4 = *(arg1 + 0x28)
    int32_t var_60_1 = *(rax_4 + (rcx_1 << 2) + 8)
    int32_t var_54_1 = zmm9.d
    uint128_t zmm0_1
    zmm0_1.q = *(rax_4 + (rcx_1 << 2))
    result[1] = 0
    *(result + 0x10) = zmm0_1
    result[4] = zmm7.d.q

*result = arg2
*(arg2 + 0x20) = result
*(arg3 + 0x20) = result
*(arg4 + 0x20) = result
return result
