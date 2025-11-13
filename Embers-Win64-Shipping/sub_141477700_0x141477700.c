// 函数: sub_141477700
// 地址: 0x141477700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* var_d8 = arg2
int128_t* rdi_1 = *(arg3 + 0x20) + 0x80
void** const var_e0 = &data_142f29fd0
int64_t var_b8 = 0
int64_t var_c8 = (zx.o(0)).q
float var_120
float zmm7_1 = sub_140a04880(rdi_1, &var_120, 1)
float var_11c
float zmm1[0x4] = var_11c
float zmm0 = var_120 * zmm7_1
zmm1[0] = zmm1[0] * zmm7_1
zmm0 = zmm0 + *arg4
zmm1[0] = zmm1[0] + arg4[1]
float var_100 = zmm0
float var_fc = zmm1[0]
float var_118
float var_f8 = var_118 * zmm7_1 + arg4[2]
void var_b0
sub_140acc920(&var_b0, &data_14399f630)
uint32_t zmm4[0x4] = data_143ed9d60
float zmm2[0x4] = arg4[1]
float zmm3[0x4] = *arg4
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm4, data_143ed9d70)
zmm4[0].q = zx.o(0) u>> 0x40
float temp0_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm4, 0xc4)
char var_158 = 0
float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, arg4[2][0].q)
int32_t var_160 = 0
float var_88[0x4] = temp0_1
float var_78[0x4] = _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(zmm2, 0)[0].q)
uint32_t var_68[0x4] = temp0
float zmm6_1
float zmm7_2
zmm6_1, zmm7_2 = sub_14229c650(&var_e0, &var_88, &var_b0, arg6, 0x28, 0, 0, var_160, var_158)
int32_t var_128 = 0xffe70000
void var_f0
sub_140acc920(&var_f0, &var_128)
float zmm1_1 = var_118 * 0.5f * zmm7_2 + arg4[2]
float var_110 = var_120 * 0.5f * zmm7_2 + *arg4
float var_108 = zmm1_1
float var_10c = var_11c * 0.5f * zmm7_2 + arg4[1]
uint64_t var_a0
uint64_t* rax_2 = sub_140a04880(rdi_1, &var_a0, 2)
uint64_t* rax_3
int32_t zmm6_2
float zmm7_3
int32_t zmm8
rax_3, zmm6_2, zmm7_3, zmm8 = sub_140a04880(rdi_1, &var_b0, 3)
var_158.d = 0x19
char var_170
var_170.q = &var_f0
int32_t var_178
var_178.q = &var_120
int32_t zmm8_1 = sub_14229b5c0(&var_e0, &var_110, rax_3, rax_2, var_178, var_170, zmm6_2, zmm7_3, 
    var_158, 0, zmm8, zmm8, 0)
sub_140acc920(&var_f0, &data_14399f634)
int32_t rax_5

if (var_c8 == 0)
    rax_5 = -1
else
    rax_5 = *(var_c8 + 0x18)

float var_160_1
var_160_1.b = 0
var_170.d = zmm8_1
int64_t result =
    sub_141e92fc0(arg2 + 0x18e0, arg4, &var_100, &var_f0, rax_5, var_170, zmm8_1, var_160_1.b)

if (var_c8 != 0)
    int32_t temp0_5 = *(var_c8 + 8)
    *(var_c8 + 8) -= 1
    
    if (temp0_5 == 1)
        result = (**var_c8)(var_c8, 1)

__security_check_cookie(rax_1 ^ &var_198)
return result
