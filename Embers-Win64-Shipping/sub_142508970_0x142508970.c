// 函数: sub_142508970
// 地址: 0x142508970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_48
int32_t arg_10 = (zx.o(0)).d

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_4 != 0
*(arg2 + 0x20) = rsi + rax_4
float result_1[0x4] = *(rdi + 4)
float zmm6[0x4] = *rdi
float result[0x4] = result_1
int128_t zmm8 = *(rdi + 8)
zmm6[0] = zmm6[0] * zmm6[0]
result[0] = result[0] * result_1[0]
zmm6[0] = zmm6[0] + result[0]
zmm6[0] = zmm6[0] + zmm8.d f* zmm8.d

if (not(zmm6[0] f<= arg_10))
    float zmm3 = zmm6[0]
    float result_2[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3)
    float zmm2[0x4] = 0x3f000000
    zmm3 = zmm3 * 0.5f
    result_2[0] = result_2[0] * result_2[0]
    zmm2[0] = 0.5f - zmm3 * result_2[0]
    result_2[0] = result_2[0] * zmm2[0]
    result_2[0] = result_2[0] + result_2[0]
    result = result_2
    result[0] = result[0] * (0.5f - zmm3 * result_2[0] * result_2[0])
    result_2[0] = result_2[0] + result[0]
    zmm6[0] = zmm6[0] * result_2[0]
    result_1[0] = result_1[0] * result_2[0]
    zmm8.d = zmm8.d f* result_2[0]
    *rdi = zmm6[0]
    *(rdi + 4) = result_1[0]
    *(rdi + 8) = zmm8.d

return result
