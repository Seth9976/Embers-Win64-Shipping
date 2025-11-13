// 函数: sub_1413687b0
// 地址: 0x1413687b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = &data_142f64804
int32_t zmm5 = 0xc0128f5c
int32_t rdi = 2
int64_t i_1 = 3
int32_t rbp = *(data_143ebbb98 + 4)
uint32_t zmm14[0x4] = zx.o(0)
int128_t zmm10
zmm10.d = 1f f/ *(data_143ebba88 + 4)
uint128_t zmm15
zmm15.d = 1f f/ _mm_cvtepi32_ps(zx.o(*(arg2 + 0x2c))).d
uint128_t zmm0 = zmm15
zmm15.d = zmm15.d f* arg3:4.d
zmm0.d = zmm0.d f* arg3.d
int32_t arg_8 = zmm0.d
int64_t result
uint32_t zmm1[0x4]
uint32_t zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]
int64_t i

do
    zmm1 = *(rbx - 4)
    zmm3 = *rbx
    zmm1[0] = zmm1[0] f- zmm0.d
    zmm3[0] = zmm3[0] f- zmm15.d
    zmm1[0] = zmm1[0] f* zmm10.d
    zmm3[0] = zmm3[0] f* zmm10.d
    
    if (rbp == 0)
        zmm1[0] = zmm1[0] f* zmm1[0]
        zmm3[0] = zmm3[0] f* zmm3[0]
        zmm1[0] = zmm1[0] f* zmm5
        zmm3[0] = zmm3[0] f* 2.28999996f
        zmm1[0] = zmm1[0] f- zmm3[0]
        zmm0 = expf(zmm1.d)
        zmm5 = 0xc0128f5c
        zmm1 = zmm0
        *(arg1 + (zx.q(rdi - 2) + 4) * 0x10) = zmm0.d
    else
        uint32_t temp0_1[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
        
        if (temp0_1[0] f<= 1f)
            zmm2 = temp0_1
            zmm2[0] = zmm2[0] f* 1.5f
            zmm2[0] = zmm2[0] f- 2.5f
            zmm2[0] = zmm2[0] f* temp0_1[0]
            zmm2[0] = zmm2[0] f* temp0_1[0]
            zmm2[0] = zmm2[0] f+ 1f
        else
            zmm2 = 0x40200000
            zmm0.d = temp0_1.d f* 0.5f
            zmm2[0] = 2.5f f- zmm0.d
            zmm2[0] = zmm2[0] f* temp0_1[0]
            zmm2[0] = zmm2[0] f- 4f
            zmm2[0] = zmm2[0] f* temp0_1[0]
            zmm2[0] = zmm2[0] f+ 2f
        
        uint32_t temp0_2[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
        
        if (temp0_2[0] f<= 1f)
            zmm1 = temp0_2
            zmm1[0] = zmm1[0] f* 1.5f
            zmm1[0] = zmm1[0] f- 2.5f
            zmm1[0] = zmm1[0] f* temp0_2[0]
            zmm1[0] = zmm1[0] f* temp0_2[0]
            zmm1[0] = zmm1[0] f+ 1f
        else
            zmm1 = 0x40200000
            zmm0.d = temp0_2.d f* 0.5f
            zmm1[0] = 2.5f f- zmm0.d
            zmm1[0] = zmm1[0] f* temp0_2[0]
            zmm1[0] = zmm1[0] f- 4f
            zmm1[0] = zmm1[0] f* temp0_2[0]
            zmm1[0] = zmm1[0] f+ 2f
        
        zmm1[0] = zmm1[0] f* zmm2[0]
        *(arg1 + (zx.q(rdi - 2) + 4) * 0x10) = zmm1[0]
    
    zmm3 = *(rbx + 4)
    zmm1[0] = zmm1[0] f+ zmm14[0]
    zmm4 = *(rbx + 8)
    zmm4[0] = zmm4[0] f- zmm15.d
    zmm3[0] = zmm3[0] f- arg_8
    zmm14 = zmm1
    zmm4[0] = zmm4[0] f* zmm10.d
    zmm3[0] = zmm3[0] f* zmm10.d
    
    if (rbp == 0)
        zmm3[0] = zmm3[0] f* zmm3[0]
        zmm4[0] = zmm4[0] f* zmm4[0]
        zmm3[0] = zmm3[0] f* zmm5
        zmm4[0] = zmm4[0] f* 2.28999996f
        zmm3[0] = zmm3[0] f- zmm4[0]
        zmm0 = expf(zmm3.d)
        zmm1 = zmm0
        *(arg1 + (zx.q(rdi - 1) + 4) * 0x10) = zmm0.d
    else
        uint32_t temp0_3[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
        
        if (temp0_3[0] f<= 1f)
            zmm2 = temp0_3
            zmm2[0] = zmm2[0] f* 1.5f
            zmm2[0] = zmm2[0] f- 2.5f
            zmm2[0] = zmm2[0] f* temp0_3[0]
            zmm2[0] = zmm2[0] f* temp0_3[0]
            zmm2[0] = zmm2[0] f+ 1f
        else
            zmm2 = 0x40200000
            zmm0.d = temp0_3.d f* 0.5f
            zmm2[0] = 2.5f f- zmm0.d
            zmm2[0] = zmm2[0] f* temp0_3[0]
            zmm2[0] = zmm2[0] f- 4f
            zmm2[0] = zmm2[0] f* temp0_3[0]
            zmm2[0] = zmm2[0] f+ 2f
        
        uint32_t temp0_4[0x4] = _mm_and_ps(zmm4, 0x7fffffff)
        
        if (temp0_4[0] f<= 1f)
            zmm1 = temp0_4
            zmm1[0] = zmm1[0] f* 1.5f
            zmm1[0] = zmm1[0] f- 2.5f
            zmm1[0] = zmm1[0] f* temp0_4[0]
            zmm1[0] = zmm1[0] f* temp0_4[0]
            zmm1[0] = zmm1[0] f+ 1f
        else
            zmm1 = 0x40200000
            zmm0.d = temp0_4.d f* 0.5f
            zmm1[0] = 2.5f f- zmm0.d
            zmm1[0] = zmm1[0] f* temp0_4[0]
            zmm1[0] = zmm1[0] f- 4f
            zmm1[0] = zmm1[0] f* temp0_4[0]
            zmm1[0] = zmm1[0] f+ 2f
        
        zmm1[0] = zmm1[0] f* zmm2[0]
        *(arg1 + (zx.q(rdi - 1) + 4) * 0x10) = zmm1[0]
    
    zmm3 = *(rbx + 0xc)
    zmm14[0] = zmm14[0] f+ zmm1[0]
    zmm4 = *(rbx + 0x10)
    zmm4[0] = zmm4[0] f- zmm15.d
    zmm3[0] = zmm3[0] f- arg_8
    zmm4[0] = zmm4[0] f* zmm10.d
    zmm3[0] = zmm3[0] f* zmm10.d
    
    if (rbp == 0)
        zmm3[0] = zmm3[0] f* zmm3[0]
        zmm4[0] = zmm4[0] f* zmm4[0]
        zmm3[0] = zmm3[0] f* -2.28999996f
        zmm4[0] = zmm4[0] f* 2.28999996f
        zmm3[0] = zmm3[0] f- zmm4[0]
        zmm0 = expf(zmm3.d)
        zmm1 = zmm0
        result = (zx.q(rdi) + 4) * 2
        *(arg1 + (result << 3)) = zmm0.d
    else
        uint32_t temp0_5[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
        
        if (temp0_5[0] f<= 1f)
            zmm2 = temp0_5
            zmm2[0] = zmm2[0] f* 1.5f
            zmm2[0] = zmm2[0] f- 2.5f
            zmm2[0] = zmm2[0] f* temp0_5[0]
            zmm2[0] = zmm2[0] f* temp0_5[0]
            zmm2[0] = zmm2[0] f+ 1f
        else
            zmm2 = 0x40200000
            zmm0.d = temp0_5.d f* 0.5f
            zmm2[0] = 2.5f f- zmm0.d
            zmm2[0] = zmm2[0] f* temp0_5[0]
            zmm2[0] = zmm2[0] f- 4f
            zmm2[0] = zmm2[0] f* temp0_5[0]
            zmm2[0] = zmm2[0] f+ 2f
        
        uint32_t temp0_6[0x4] = _mm_and_ps(zmm4, 0x7fffffff)
        
        if (temp0_6[0] f<= 1f)
            zmm1 = temp0_6
            zmm1[0] = zmm1[0] f* 1.5f
            zmm1[0] = zmm1[0] f- 2.5f
            zmm1[0] = zmm1[0] f* temp0_6[0]
            zmm1[0] = zmm1[0] f* temp0_6[0]
            zmm1[0] = zmm1[0] f+ 1f
        else
            zmm1 = 0x40200000
            zmm0.d = temp0_6.d f* 0.5f
            zmm1[0] = 2.5f f- zmm0.d
            zmm1[0] = zmm1[0] f* temp0_6[0]
            zmm1[0] = zmm1[0] f- 4f
            zmm1[0] = zmm1[0] f* temp0_6[0]
            zmm1[0] = zmm1[0] f+ 2f
        
        zmm1[0] = zmm1[0] f* zmm2[0]
        result = (zx.q(rdi) + 4) * 2
        *(arg1 + (result << 3)) = zmm1[0]
    
    zmm0 = arg_8
    zmm14[0] = zmm14[0] f+ zmm1[0]
    zmm5 = 0xc0128f5c
    rdi += 3
    rbx += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
zmm2 = 0x3f800000
zmm2[0] = 1f f/ zmm14[0]
zmm0.d = zmm2.d f* *(arg1 + 0x40)
*(arg1 + 0x40) = zmm0.d
zmm2[0] = zmm2[0] f* *(arg1 + 0x50)
*(arg1 + 0x50) = zmm2[0]
zmm0.d = zmm2.d f* *(arg1 + 0x60)
*(arg1 + 0x60) = zmm0.d
zmm2[0] = zmm2[0] f* *(arg1 + 0x70)
*(arg1 + 0x70) = zmm2[0]
zmm0.d = zmm2.d f* *(arg1 + 0x80)
*(arg1 + 0x80) = zmm0.d
zmm2[0] = zmm2[0] f* *(arg1 + 0x90)
*(arg1 + 0x90) = zmm2[0]
zmm0.d = zmm2.d f* *(arg1 + 0xa0)
*(arg1 + 0xa0) = zmm0.d
zmm2[0] = zmm2[0] f* *(arg1 + 0xb0)
*(arg1 + 0xb0) = zmm2[0]
zmm2[0] = zmm2[0] f* *(arg1 + 0xc0)
*(arg1 + 0xc0) = zmm2[0]
zmm2 = *(arg1 + 0x70)
zmm3 = *(arg1 + 0x80)
zmm0.d = zmm2.d f+ *(arg1 + 0x50)
zmm4 = *(arg1 + 0x90)
zmm5 = *(arg1 + 0xb0)
zmm0.d = zmm0.d f+ zmm3[0]
zmm0.d = zmm0.d f+ zmm4[0]
zmm0.d = zmm0.d f+ zmm5
uint128_t zmm6
zmm6.d = 1f f/ zmm0.d
zmm1 = zmm6
zmm0.d = zmm6.d f* *(arg1 + 0x50)
zmm1[0] = zmm1[0] f* zmm2[0]
*(arg1 + 0xd0) = zmm0.d
zmm0.d = zmm6.d f* zmm3[0]
*(arg1 + 0xe0) = zmm1[0]
zmm1 = zmm6
zmm6.d = zmm6.d f* zmm5
zmm1[0] = zmm1[0] f* zmm4[0]
*(arg1 + 0x110) = zmm6.d
*(arg1 + 0xf0) = zmm0.d
*(arg1 + 0x100) = zmm1[0]
return result
