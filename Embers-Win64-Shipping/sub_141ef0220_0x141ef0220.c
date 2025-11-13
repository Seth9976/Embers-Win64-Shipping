// 函数: sub_141ef0220
// 地址: 0x141ef0220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[0x51]
int32_t zmm7
int32_t var_28 = zmm7
char rax_1 = (*(*rcx + 0x5a0))(rcx)
*(arg1 + 0x168) = rax_1
*(arg1 + 0x38) = rax_1
void* rax_2 = arg2[0x26]
int64_t var_68
float var_60
float zmm1[0x4]

if (rax_2 == 0)
    float rax_3 = data_143dbb200
    var_68 = data_143dbb1f8.q
    var_60 = rax_3
else
    zmm1 = *(rax_2 + 0x1d0)
    var_68.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_60 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_68:4.d = temp0_1[0]

*(arg1 + 0x16c) = var_68
*(arg1 + 0x174) = var_60
void* rbx = arg2[0x26]
int32_t rax_8
float zmm0[0x4]

if (rbx == 0)
    zmm0 = zx.o(data_143dbb208)
    rax_8 = data_143dbb210
else
    zmm1 = *(rbx + 0x1c0)
    uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx + 0x180), zmm1, 4))
    float var_58[0x4] = zmm1
    
    if (temp0_4 != 0)
        *(rbx + 0x180) = zmm1
        int32_t* rax_6 = sub_140adf5d0(&var_58, &var_68)
        *(rbx + 0x190) = *rax_6
        *(rbx + 0x198) = rax_6[2]
    
    zmm0 = zx.o(*(rbx + 0x190))
    rax_8 = *(rbx + 0x198)

var_68 = zmm0.q
*(arg1 + 0x178) = var_68
*(arg1 + 0x180) = rax_8
int64_t* rax_11 = (*(*arg2 + 0x2f0))(arg2, &var_68)
*(arg1 + 0x184) = *rax_11
*(arg1 + 0x18c) = rax_11[1].d
void* rbx_1 = arg2[0x53]
sub_140d3a3a0(arg1 + 0x1a8, rbx_1)
*(arg1 + 0x1b0) = arg2[0x54]

if (sub_141ea5e60(rbx_1) != 0)
    *(arg1 + 0x190) = arg2[0x55]
    *(arg1 + 0x198) = arg2[0x56].d

void* rbx_2 = *(arg2[0x51] + 0xb0)

if (rbx_2 != 0)
    sub_140d3a3a0(arg1 + 0x1c0, *(rbx_2 + 0xc0))
    *(arg1 + 0x1c8) = *(rbx_2 + 0xc8)
    *(arg1 + 0x1d0) = *(rbx_2 + 0x11c)
    *(arg1 + 0x1d8) = *(rbx_2 + 0x124)
    *(arg1 + 0x1dc) = *(rbx_2 + 0x128)
    *(arg1 + 0x1e4) = *(rbx_2 + 0x130)

int64_t* rax_20 = sub_142216e60(arg2, &var_68)
float zmm0_4[0x4]
float zmm7_1[0x4]
zmm0_4, zmm7_1 = sub_140a454f0(rax_20[1].d, 0x43b40000)

if (not(zmm0_4[0] >= 0f))
    zmm7_1[0]

float zmm0_5[0x4]
int32_t zmm6
float zmm7_2[0x4]
zmm0_5, zmm6, zmm7_2 = sub_140a454f0(*(rax_20 + 4), zmm7_1)

if (not(zmm0_5[0] f>= zmm6))
    zmm7_2[0]

float zmm0_6[0x4]
int32_t zmm6_1
int32_t zmm7_3
int64_t zmm8_1
int32_t result_1
zmm0_6, zmm6_1, zmm7_3, zmm8_1, result_1 = sub_140a454f0(*rax_20, zmm7_2)

if (not(zmm0_6[0] f>= zmm6_1))
    zmm0_6[0] = zmm0_6[0] f+ zmm7_3

uint64_t result = zx.q(result_1)
*(arg1 + 0x19c) = (_mm_unpacklo_ps(zmm0_6, zmm8_1)).q
*(arg1 + 0x1a4) = result.d

if (arg3 == 0)
    int64_t* rax_21 = sub_141ea47f0(arg2)
    
    if (rax_21 != 0)
        if (rax_21[0x31].d s<= arg3)
            sub_140d3a3a0(arg1 + 0x208, *rax_21)
            *(arg1 + 0x210) = rax_21[0x25].d
            *(arg1 + 0x220) = arg2[0x7a].b
            *(arg1 + 0x224) = *(arg2 + 0x3d4)
            *(arg1 + 0x230) = *(arg2 + 0x3e0)
            *(arg1 + 0x240) = *(arg2 + 0x3f0)
            *(arg1 + 0x250) = *(arg2 + 0x400)
        
        *(arg1 + 0x18) |= 8
    
    if (sub_142008300(&arg2[0x72]) != 0)
        sub_141ff71c0(arg1 + 0x260, &arg2[0x72])
        *(arg1 + 0x18) |= 8
    
    int32_t rax_26 = *(arg2 + 0x34c)
    *(arg1 + 0x1b8) = rax_26
    int32_t rcx_11 = data_143f3ad98
    *(arg1 + 0x1bc) = rcx_11
    
    if (*(arg1 + 0x138) != rax_26 || *(arg1 + 0x13c) != rcx_11)
        *(arg1 + 0x18) |= 8
    
    if (zmm6_1 f!= *(arg1 + 0x54) || zmm6_1 f!= *(arg1 + 0x58) || zmm6_1 f!= *(arg1 + 0x5c))
        rcx_11.b = 0
    else
        rcx_11.b = 1
    
    if (zmm6_1 f!= *(arg1 + 0x184) || zmm6_1 f!= *(arg1 + 0x188) || zmm6_1 f!= *(arg1 + 0x18c))
        rax_26.b = 0
    else
        rax_26.b = 1
    
    if (rcx_11.b != rax_26.b)
        *(arg1 + 0x18) |= 8
    
    int32_t rdx_7 = *(arg1 + 0x18)
    
    if (*(arg1 + 0x39) != *(arg1 + 0x168))
        rdx_7 |= 8
        *(arg1 + 0x18) = rdx_7
    
    result = *(arg1 + 0x10)
    
    if ((((*(result + 0x330) u>> 2).b ^ rdx_7.b) & 1) != 0)
        *(arg1 + 0x18) = rdx_7 | 8
else if (arg3 == 1 && (arg2[0x66].b & 0x40) != 0)
    return sub_141ff71c0(&arg2[0x72], arg2[0x51] + 0x4d8)

return result
