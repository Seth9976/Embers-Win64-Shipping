// 函数: sub_1424f77b0
// 地址: 0x1424f77b0
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

if (rax_2 != 0)
    rdi = rax_2

int32_t var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_4 != 0
*(arg2 + 0x20) = rsi + rax_4
float var_88[0x4]
sub_1408041d0(rdi, &var_88)
int32_t var_9c = 0
float zmm4[0x4] = var_a8.o
zmm4[0] = var_a8[0]
int64_t var_98 = 0
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
int32_t var_a4
temp0[0] = var_a4[0]
int32_t var_90 = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
int32_t var_a0
temp0_1[0] = var_a0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
var_a8.o = temp0_2
float var_58[0x4]
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), var_58)
float var_68[0x4]
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), var_68)
float var_78[0x4]
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), var_78)
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_4, temp0_6), 
    _mm_add_ps(temp0_8, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), var_88)))
float result = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)[0]
*arg3 = (_mm_unpacklo_ps(temp0_13, _mm_shuffle_ps(temp0_13, temp0_13, 0x55)[0].q)).q
arg3[1].d = result
return result
