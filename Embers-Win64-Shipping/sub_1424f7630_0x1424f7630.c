// 函数: sub_1424f7630
// 地址: 0x1424f7630
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

int32_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_4 != 0
*(arg2 + 0x20) = rsi + rax_4
float var_88[0x4]
sub_1408041d0(rdi, &var_88)
float zmm4[0x4] = var_98
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
int32_t var_94
temp0[0] = var_94[0]
var_98.q = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
int32_t var_90
temp0_1[0] = var_90[0]
int32_t var_90_1 = 0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = 0x3f800000
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
var_98.o = temp0_3
float var_58[0x4]
float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), var_58)
float var_68[0x4]
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), var_68)
float var_78[0x4]
float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), var_78)
float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_7), 
    _mm_add_ps(temp0_9, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), var_88)))
float result = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)[0]
*arg3 = (_mm_unpacklo_ps(temp0_14, _mm_shuffle_ps(temp0_14, temp0_14, 0x55)[0].q)).q
arg3[1].d = result
return result
