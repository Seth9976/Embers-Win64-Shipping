// 函数: sub_1427a7640
// 地址: 0x1427a7640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x10)
void* r9 = *(arg1 + 8)
int64_t var_68 = 0
int32_t var_60 = 0
int32_t rax

if (r8 s>= 0)
    rax = 2
    
    if (r8 s< 2)
        rax = r8
else
    rax = 0

bool cond:0 = *(arg1 + 0x14) == 0
*(&var_68 + (sx.q(rax) << 2)) = 0x3f800000

if (cond:0)
    *arg2 = var_68
    arg2[2] = var_60
    return arg2

float zmm4 = var_68.d
float zmm10[0x4] = *(r9 + 0x1c0)
zmm10[0] = zmm10[0] f* var_68:4.d
float temp0[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
temp0[0] = temp0[0] f* var_60
temp0_1[0] = temp0_1[0] * zmm4
int64_t zmm0
zmm0.d = temp0_1[0].q.d f* var_68:4.d
float temp0_2[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
temp0[0] = temp0[0] f- zmm0.d
zmm0.d = zmm10[0].q.d f* var_60
temp0_1[0] = temp0_1[0] f- zmm0.d
zmm0.d = temp0[0].q.d f* zmm4
temp0[0] = temp0[0] + temp0[0]
zmm10[0] = zmm10[0] f- zmm0.d
temp0_1[0] = temp0_1[0] + temp0_1[0]
float zmm1 = temp0[0] * temp0_2[0]
zmm10[0] = zmm10[0] + zmm10[0]
zmm0.d = temp0_1[0].q.d f* temp0_1[0]
float zmm2 = zmm10[0] * temp0[0] f- zmm0.d
zmm0 = zmm10[0].q
zmm10[0] = zmm10[0] * temp0_2[0]
zmm0.d = zmm0.d f* zmm10[0]
zmm10[0] = zmm10[0] f+ var_60
zmm2 = zmm2 + zmm1 + zmm4
zmm1 = temp0_1[0]
temp0_1[0] = temp0_1[0] * zmm10[0]
zmm1 = zmm1 * temp0_2[0]
*arg2 = zmm2
zmm2 = temp0[0]
temp0[0] = temp0[0] * temp0[0]
zmm1 = zmm1 f+ var_68:4.d
temp0_1[0] = temp0_1[0] - temp0[0]
zmm2 = zmm2 * temp0_1[0] f- zmm0.d
temp0_1[0] = temp0_1[0] + zmm10[0]
arg2[2] = temp0_1[0]
arg2[1] = zmm2 + zmm1
return arg2
