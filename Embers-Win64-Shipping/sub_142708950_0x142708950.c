// 函数: sub_142708950
// 地址: 0x142708950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 0x1c)
uint32_t zmm2[0x4] = *(arg1 + 0x10)
uint32_t zmm0[0x4] = zmm1
zmm0[0] = zmm0[0] f- zmm2[0]
zmm0[0] = zmm0[0] f* 0.5f
int64_t var_d8

if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f> 9.99999994e-09f))
    zmm0 = zx.o(*(arg2 + 0x26c))
    zmm2[0] = zmm2[0] f+ zmm1[0]
    int32_t rax_1 = *(arg2 + 0x274)
    var_d8 = zmm0.q
    zmm1 = rax_1
    zmm2[0] = zmm2[0] f* 0.5f
    zmm2[0] = zmm2[0] f- zmm1[0]
    zmm1[0] = zmm1[0] f+ zmm2[0]
    *(arg1 + 0x10) = zmm2[0]
    *(arg1 + 0x1c) = zmm1[0]

int32_t i_2 = 0
int32_t r15 = 0
float (* result_1)[0x4] = nullptr
int32_t r8 = 0
int64_t var_e0 = 0
int32_t i = 0
int128_t var_a8

if (*(arg1 + 0x50) s> 0)
    char* r14_1 = nullptr
    
    do
        if (r14_1[*(arg1 + 0x48)] == 0)
            int64_t zmm4 = data_143dbb1f8.q
            int32_t rcx = data_143dbb200
            int32_t temp2_1 = *(arg1 + 0x40)
            var_a8:8.d = (*(arg1 + 0x2c))[0]
            int32_t var_c0_1 = rcx
            uint32_t var_c8[0x4]
            zmm0 = var_c8
            zmm0[0].q = zmm4
            int32_t var_90_1 = var_a8:8.d
            float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(divu.dp.d(0:i, temp2_1)))
            int32_t var_74_1 = 0.d
            int32_t var_b4_1 = rcx
            zmm2 = _mm_cvtepi32_ps(zx.o(modu.dp.d(0:i, temp2_1)))
            int32_t var_58 = (var_58 & 0xfffffffd) | 5
            int64_t var_60_1 = 0
            var_e0.d = r15 + 1
            temp0_2[0] = temp0_2[0] + 0.5f
            int64_t var_70_1 = zmm4
            zmm2[0] = zmm2[0] f+ 0.5f
            var_c8 = zmm0
            temp0_2[0] = temp0_2[0] f* *(arg1 + 4)
            zmm2[0] = zmm2[0] f* *(arg1 + 4)
            temp0_2[0] = temp0_2[0] f+ *(arg1 + 0x24)
            zmm2[0] = zmm2[0] f+ *(arg1 + 0x28)
            int64_t var_98_1 = (_mm_unpacklo_ps(temp0_2, zmm2[0].q)).q
            
            if (r15 + 1 s> r8)
                sub_140775520(&result_1)
            
            int64_t rcx_2 = sx.q(r15) * 9
            float (* result_2)[0x4] = result_1
            *(result_2 + (rcx_2 << 3)) = var_98_1.o
            *(result_2 + (rcx_2 << 3) + 0x10) = zmm0
            *(result_2 + (rcx_2 << 3) + 0x20) = zmm4:4.o
            *(result_2 + (rcx_2 << 3) + 0x30) = rcx.o
            *(result_2 + (rcx_2 << 3) + 0x40) = var_58.q
            r8 = var_e0:4.d
            r15 = var_e0.d
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x50))
    
    zmm1 = *(arg1 + 0x1c)

uint32_t zmm7[0x4] = *(arg1 + 4)
zmm1[0] = zmm1[0] f- *(arg1 + 0x10)
int64_t rax_12 = *arg2
zmm7[0] = zmm7[0] f* 0.25f
zmm7[0] = zmm7[0] f* zmm7[0]
zmm1[0] = zmm1[0] * 0.5f
zmm7[0] = zmm7[0] f* 0.0625f
var_d8.d = zmm7[0]
var_d8:4.d = zmm7[0]
var_a8 = zx.o(0)
float var_d0_2 = zmm1[0]
float (* result)[0x4] = (*(rax_12 + 0x710))(zx.o(0), &result_1, &var_d8, &var_a8, 0)
int128_t zmm6
zmm6.d = (*(arg1 + 0x1c)).d f+ *(arg1 + 0x10)
uint64_t i_4 = zx.q(*(arg1 + 0x50))
*(arg1 + 0x60) = 0
zmm6.d = zmm6.d f* 0.5f

if (*(arg1 + 0x64) != i_4.d)
    result = sub_1405dadb0(arg1 + 0x58, i_4.d)

if (i_4.d s> 0)
    uint64_t i_3 = i_4
    uint64_t i_1
    
    do
        int64_t r14_2 = sx.q(*(arg1 + 0x60))
        int32_t rax_13 = (r14_2 + 1).d
        *(arg1 + 0x60) = rax_13
        
        if (rax_13 s> *(arg1 + 0x64))
            sub_1406105e0(arg1 + 0x58)
        
        result = *(arg1 + 0x58)
        void* rdx_5 = &(*result)[r14_2]
        
        if (rdx_5 != 0)
            *rdx_5 = zmm6.d
        
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (*(arg1 + 0x50) s> 0)
    int64_t r8_2 = 0
    int64_t rdx_6 = 0
    
    do
        char* rcx_5 = *(arg1 + 0x48)
        
        if (rcx_5[r8_2] == 0)
            result = result_1
            
            if ((*(result + rdx_6 + 0x40) & 2) != 0)
                zmm1 = *(result + rdx_6)
                zmm0 = *(result + rdx_6 + 4)
                zmm0[0] = zmm0[0] f- *(result + rdx_6 + 0x2c)
                zmm1[0] = zmm1[0] f- *(result + rdx_6 + 0x28)
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm0[0] = zmm0[0] f+ zmm1[0]
            
            if ((*(result + rdx_6 + 0x40) & 2) == 0 || zmm0[0] f> zmm7[0])
                rcx_5[r8_2] = 1
            else
                result = zx.q(*(result + rdx_6 + 0x30))
                *(*(arg1 + 0x58) + (r8_2 << 2)) = result.d
            
            rdx_6 += 0x48
        
        i_2 += 1
        r8_2 += 1
    while (i_2 s< *(arg1 + 0x50))

float (* result_3)[0x4] = result_1

if (result_3 == 0)
    return result

return sub_140a74f90(result_3)
