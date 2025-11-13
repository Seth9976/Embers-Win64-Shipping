// 函数: sub_1414d6f90
// 地址: 0x1414d6f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
void* rax = *(arg3 + 0x20)
int128_t zmm3 = *(rax + 0x60) ^ 0x80000000
float var_b4 = (*(rax + 0x50) ^ 0x80000000).d
float var_b8 = (*(rax + 0x40) ^ 0x80000000).d
int32_t var_b0 = zmm3.d
void var_a8
sub_141f5e050(rbx, &var_a8, arg2, &var_b8)
int32_t var_98
int32_t* rax_1 = sub_14244e470(rbx + 0x10, &var_98, &var_a8, zmm3.d)
float zmm10[0x4] = *(rbx + 0xac)
int64_t* rcx_2 = *(arg3 + 0x20)
int128_t zmm0_1 = *rax_1
int64_t rax_2 = *rcx_2
float temp0[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
float zmm9[0x4] = *(rcx_2 + 0x30)
float temp0_1[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
float zmm8 = zmm9[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
temp0_2[0] = temp0_2[0] / temp0[0]
temp0_3[0] = temp0_3[0] / temp0_1[0]
var_b8.o = zmm0_1
zmm8 = zmm8 / zmm10[0]
(*(rax_2 + 0x118))()
int128_t zmm0_2 = cosf(zmm0_1.d)
bool cond:0 = data_143de5480 == 0
float zmm2_1[0x4] = 0x3e22f983
int64_t rbx_1 = data_143ee73e8
float temp0_4[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
zmm2_1[0] = 0.159154937f / (1f f- zmm0_2.d)
float zmm13 = zmm2_1[0] * zmm8
zmm8 = zmm2_1[0] * temp0_2[0]
zmm2_1[0] = zmm2_1[0] * temp0_3[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
temp0_4[0] = temp0_4[0] / temp0_5[0]
temp0_4[0] = temp0_4[0] * zmm2_1[0]
int64_t rcx_3

if (cond:0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

if (*(rbx_1 + (rcx_3 << 2)) s<= 0)
    zmm0_2.d = var_b8.d f/ zmm10[0]
    float zmm1 = var_b4 / temp0[0]
    var_98 = zmm0_2.d
    float var_94_1 = zmm1
    zmm0_2.d = var_b0.d f/ temp0_1[0]
    int32_t var_90_1 = zmm0_2.d
    float var_ac
    float var_8c_1 = var_ac / temp0_5[0]
else
    var_98.o = data_14399f5c0

zmm0_2 = var_98.o
int64_t* rcx_4 = *(arg3 + 0x20)
var_b8 = zmm13
float var_b4_1 = zmm8
float var_b0_1 = zmm2_1[0]
float var_ac_1 = temp0_4[0]
var_98.o = zmm0_2
return (*(*rcx_4 + 0x100))(rcx_4, &var_98, &var_b8)
