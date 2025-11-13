// 函数: sub_1411f3290
// 地址: 0x1411f3290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = data_143e75c88
float zmm6[0x4] = 0x3f800000
int32_t rax_4 = *(arg1 + 0x15a4) - *(arg1 + 0x159c)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o((*(arg1 + 0x15a0) - *(arg1 + 0x1598)) * 2))
bool cond:0 = data_143de5480 == 0
zmm6[0] = 1f f/ zmm0.d
int128_t zmm7
zmm7.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_4 * 2)).d
int64_t rcx

if (cond:0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

int32_t rdx = *(rsi + (rcx << 2))
int32_t rax_7

if (rdx s>= 0)
    rax_7 = 0x200
    
    if (rdx s< 0x200)
        rax_7 = rdx
else
    rax_7 = 0

float temp0_2[0x4] = _mm_min_ss(zmm6[0], zmm7.d)
zmm0 = _mm_cvtepi32_ps(zx.o(rax_7))
temp0_2[0] = temp0_2[0] f* zmm0.d
int32_t r9

if (arg2 == 0)
    r9 = 1
else
    r9 = 8
    
    if (data_1439b60cc s<= 4)
        r9 = 4

int32_t zmm2 = *(arg1 + 0xae0)
int32_t arg_8 = *(arg1 + 0x270) - *(arg1 + 0x268)
int32_t arg_c = *(arg1 + 0x274) - *(arg1 + 0x26c)
int32_t var_58
int32_t* rax_12
int32_t zmm6_1
float zmm8
rax_12, zmm6_1, zmm8 = sub_1411dadc0(&var_58, &arg_8, zmm2, r9, 0)
uint128_t zmm2_1 = zx.o(*rax_12)
int32_t result = rax_12[2]
uint128_t zmm1 = zmm2_1
_mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
zmm2_1.d = result
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
zmm2_1.d = zmm1.d
_mm_shuffle_ps(zmm2_1, zmm2_1, 0x27)
zmm2_1.d = zmm6_1
*arg3 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x39)
int32_t rbx
rbx.b = zmm8 f<= *(arg1 + 0x2bc)
*arg4 = rbx
return result
