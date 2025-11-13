// 函数: sub_14203dff0
// 地址: 0x14203dff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rcx = *(arg3 + 0x130)
int32_t var_98 = 0
int32_t var_90 = 0
int64_t var_a8
float var_88[0x4]
int32_t rax_5
float zmm0[0x4]
float zmm1[0x4]

if (rcx == 0)
    zmm0 = zx.o(data_143dbb208)
    rax_5 = data_143dbb210
else
    zmm1 = *(rcx + 0x1c0)
    void* rbx_1 = rcx + 0x180
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*rbx_1, zmm1, 4))
    var_88 = zmm1
    
    if (temp0_2 != 0)
        *rbx_1 = zmm1
        int32_t* rax_3 = sub_140adf5d0(&var_88, &var_a8)
        *(rbx_1 + 0x10) = *rax_3
        *(rbx_1 + 0x18) = rax_3[2]
        rcx = *(arg3 + 0x130)
    
    zmm0 = zx.o(*(rbx_1 + 0x10))
    rax_5 = *(rbx_1 + 0x18)

var_a8 = zmm0.q
zmm1 = zx.o(var_a8)
float var_94 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
int32_t var_a0_1 = rax_5
var_a8 = zmm1.q
float var_a0_2

if (rcx == 0)
    float rax_7 = data_143dbb200
    var_a8 = data_143dbb1f8.q
    var_a0_2 = rax_7
else
    zmm1 = *(rcx + 0x1d0)
    var_a8.d = zmm1[0]
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_a0_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_a8:4.d = temp0_4[0]

float zmm6[0x4] = sub_140ade170(&var_98, &var_88)
float var_78[0x4] = var_88
float temp0_6[0x4] = _mm_unpacklo_ps(zmm6, var_a0_2)
float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float zmm0_1[0x4] = data_14399f670
float var_68[0x4] = _mm_unpacklo_ps(temp0_6, _mm_unpacklo_ps(temp0_7, 0)[0].q)
float var_58[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0_1[0].q), 
    _mm_unpacklo_ps(data_14399f66c, (zx.o(0)).q)[0].q)
int64_t result
int512_t zmm6_1
result, zmm6_1 = sub_1424b2ca0(arg1, arg2, &var_78)
__security_check_cookie(rax_1 ^ &var_c8)
zmm6_1.o = arg4
return result
