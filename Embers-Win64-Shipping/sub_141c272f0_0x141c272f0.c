// 函数: sub_141c272f0
// 地址: 0x141c272f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
sub_141ddacb0(arg1, arg2)
int64_t* rcx = arg1[0x47]
int32_t var_b0 = 0
int512_t zmm6
zmm6.o = zx.o(0)
int64_t var_a8 = _mm_unpacklo_ps(zx.o(0), *(arg1 + 0x224))
int32_t var_a0 = 0
int64_t zmm6_1 = sub_141f48c80(rcx, &var_a8, 0, 0, 0)
int64_t* rcx_1 = arg1[0x48]
int32_t var_b0_1 = 0
var_a8 = (_mm_unpacklo_ps(arg1[0x44].d, zmm6_1)).q
int32_t var_a0_1 = 0
sub_141f48c80(rcx_1, &var_a8, 0, 0, 0)
void* rcx_2 = arg1[0x49]
int512_t zmm7
zmm7.o = arg1[0x45].d
void* rbx = *(rcx_2 + 0xc0)
int32_t rax_2 = *(rcx_2 + 0x124)
var_a8 = *(rcx_2 + 0x11c)
int64_t var_b8
int32_t var_b0_2
float var_88[0x4]
float zmm1_1[0x4]

if (rbx == 0)
    var_b8 = 0
    var_b0_2 = 0
else
    zmm1_1 = *(rbx + 0x1c0)
    uint32_t temp0_3 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx + 0x180), zmm1_1, 4))
    var_88 = zmm1_1
    
    if (temp0_3 != 0)
        *(rbx + 0x180) = zmm1_1
        int32_t* rax_4 = sub_140adf5d0(&var_88, &var_b8)
        *(rbx + 0x190) = *rax_4
        *(rbx + 0x198) = rax_4[2]
    
    int32_t rax_6 = *(rbx + 0x198)
    var_b8 = *(rbx + 0x190)
    var_b0_2 = rax_6

bool cond:0 = *(arg1 + 0x22c) != 0
uint64_t var_98 = var_b8
int32_t var_90 = var_b0_2

if (not(cond:0))
    var_98.d = 0

if (*(arg1 + 0x22d) == 0)
    void* rax_8 = arg1[0x26]
    zmm1_1 = zx.o(*(rax_8 + 0x128))
    int32_t rax_9 = *(rax_8 + 0x130)
    uint128_t zmm0_2 = zmm1_1
    var_98:4.d = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55).d
    int32_t var_b0_3 = rax_9
    var_b8 = zmm1_1.q

int32_t var_90_1 = 0
float (* rax_10)[0x4] = sub_140ade170(&var_98, &var_b8)
void* rcx_5 = arg1[0x49]
var_88 = *rax_10
float var_78[0x4]
float zmm7_1[0x4] = sub_141f3cd60(rcx_5, &var_78, &var_88)
float zmm0_4[0x4] = var_78
int64_t* rcx_6 = arg1[0x49]
float temp0_5[0x4] = _mm_unpacklo_ps(zmm7_1, rax_2)
float var_68[0x4] = zmm0_4
float temp0_6[0x4] = _mm_unpacklo_ps(var_a8:4.d, 0)
float zmm2[0x4] = data_14399f66c
float var_58[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
float var_48[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
    _mm_unpacklo_ps(zmm2, 0)[0].q)
int64_t result = sub_141f49090(rcx_6, &var_68, 0, 0, 0)
__security_check_cookie(rax_1 ^ &var_e8)
return result
