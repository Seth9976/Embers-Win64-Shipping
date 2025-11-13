// 函数: sub_14221e7d0
// 地址: 0x14221e7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x258)
float zmm7
float var_28 = zmm7
float var_68[0x4]
uint64_t var_58
void var_48
int64_t* rax_1
uint128_t zmm0

if (rcx == 0)
    void* rbx_1 = *(arg1 + 0x130)
    int32_t rax_5
    
    if (rbx_1 == 0)
        zmm0 = zx.o(data_143dbb208)
        rax_5 = data_143dbb210
    else
        float zmm1[0x4] = *(rbx_1 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1, 4))
        var_68 = zmm1
        
        if (temp0_2 != 0)
            *(rbx_1 + 0x180) = zmm1
            int32_t* rax_3 = sub_140adf5d0(&var_68, &var_58)
            *(rbx_1 + 0x190) = *rax_3
            *(rbx_1 + 0x198) = rax_3[2]
        
        zmm0 = zx.o(*(rbx_1 + 0x190))
        rax_5 = *(rbx_1 + 0x198)
    
    var_68[2] = rax_5
    var_68[0].q = zmm0.q
    float var_50_1 = var_68[2]
    rax_1 = &var_58
    var_58 = var_68[0].q
else
    rax_1 = (*(*rcx + 0x6a0))(rcx, &var_48)

uint128_t zmm2 = zx.o(*rax_1)
int32_t rax_7 = rax_1[1].d
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
int32_t var_50_2 = rax_7
var_58 = zmm2.q
uint128_t zmm0_1
float zmm7_1[0x4]
zmm0_1, zmm7_1 = sub_140a454f0(zmm0, 0x43b40000)

if (not(zmm0_1.d >= 0f))
    zmm7_1[0]

void* rbx_2 = *(arg1 + 0x130)
int32_t rax_11

if (rbx_2 == 0)
    zmm0_1 = zx.o(data_143dbb208)
    rax_11 = data_143dbb210
else
    float zmm1_1[0x4] = *(rbx_2 + 0x1c0)
    uint32_t temp0_5 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_2 + 0x180), zmm1_1, 4))
    var_68 = zmm1_1
    
    if (temp0_5 != 0)
        *(rbx_2 + 0x180) = zmm1_1
        int32_t* rax_9
        rax_9, zmm7_1 = sub_140adf5d0(&var_68, &var_48)
        *(rbx_2 + 0x190) = *rax_9
        *(rbx_2 + 0x198) = rax_9[2]
    
    zmm0_1 = zx.o(*(rbx_2 + 0x190))
    rax_11 = *(rbx_2 + 0x198)

int32_t var_50_3 = rax_11
var_58 = zmm0_1.q
zmm0_1 = zx.o(var_58)
int64_t result
float zmm0_2
uint32_t zmm6_1[0x4]
float zmm7_2
int32_t zmm8
zmm0_2, result, zmm6_1, zmm7_2, zmm8 = sub_140a454f0(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55), zmm7_1)

if (not(zmm0_2 f>= zmm8))
    zmm0_2 = zmm0_2 + zmm7_2

zmm6_1[0] = zmm6_1[0] f- zmm0_2
zmm0_2 = *(arg1 + 0x260)
uint32_t temp0_7[0x4] = __andps_xmmxud_memxud(zmm6_1, data_142d3f770)

if (temp0_7[0] f< zmm0_2 || temp0_7[0] f> zmm7_2 - zmm0_2)
    result.b = 1
else
    result.b = 0

return result
