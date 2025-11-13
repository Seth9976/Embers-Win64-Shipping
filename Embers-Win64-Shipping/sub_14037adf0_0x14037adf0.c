// 函数: sub_14037adf0
// 地址: 0x14037adf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r8 = *arg1
int32_t* r9 = arg1[1]
int64_t rdx = *(arg1 + 0x24)
int64_t r10 = sx.q(*(arg1 + 0x3c))
uint128_t zmm8
uint128_t var_38 = zmm8
int128_t* rax = arg1[2]
uint128_t zmm3
zmm3.d = (*(rax + 0x1c)).d f* 3.05175781e-05f
uint128_t zmm4
zmm4.d = rax[2].d.d f* 3.05175781e-05f
uint128_t zmm5
zmm5.d = (*(rax + 0x24)).d f* 3.05175781e-05f
uint128_t zmm6
zmm6.d = (*(rax + 0x28)).d f* 3.05175781e-05f
uint128_t zmm7
zmm7.d = (*(rax + 0x2c)).d f* 3.05175781e-05f
int128_t zmm9
zmm9.d = (*rax).d f* 3.05175781e-05f
int128_t zmm10
zmm10.d = (*(rax + 4)).d f* 3.05175781e-05f
int128_t zmm11
zmm11.d = (*(rax + 8)).d f* 3.05175781e-05f
int128_t zmm12
zmm12.d = (*(rax + 0xc)).d f* 3.05175781e-05f
uint64_t result = arg1[3]
int32_t arg_8 = zmm3.d
int32_t arg_10 = zmm4.d
int32_t arg_18 = zmm5.d
int128_t zmm13
zmm13.d = rax[1].d.d f* 3.05175781e-05f
int128_t zmm14
zmm14.d = (*(rax + 0x14)).d f* 3.05175781e-05f
int128_t zmm15
zmm15.d = (*(rax + 0x18)).d f* 3.05175781e-05f
int32_t arg_20 = zmm6.d
int32_t var_e8 = zmm7.d
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if (result != 0)
    zmm1.d = (*result).d f* 3.05175781e-05f
    int32_t var_cc_1 = zmm1.d
    zmm1.d = (*(result + 4)).d f* 3.05175781e-05f
    int32_t var_dc_1 = zmm1.d
    zmm1.d = (*(result + 8)).d f* 3.05175781e-05f
    int32_t var_bc_1 = zmm1.d
    zmm1.d = (*(result + 0xc)).d f* 3.05175781e-05f
    int32_t var_d4_1 = zmm1.d
    zmm1.d = (*(result + 0x10)).d f* 3.05175781e-05f
    int32_t var_c4_1 = zmm1.d
    zmm1.d = (*(result + 0x14)).d f* 3.05175781e-05f
    int32_t var_e4_1 = zmm1.d
    zmm1.d = (*(result + 0x18)).d f* 3.05175781e-05f
    int32_t var_e0_1 = zmm1.d
    zmm1.d = (*(result + 0x1c)).d f* 3.05175781e-05f
    int32_t var_d8_1 = zmm1.d
    zmm1.d = (*(result + 0x20)).d f* 3.05175781e-05f
    int32_t var_d0_1 = zmm1.d
    zmm1.d = (*(result + 0x24)).d f* 3.05175781e-05f
    int32_t var_c8_1 = zmm1.d
    zmm1.d = (*(result + 0x28)).d f* 3.05175781e-05f
    int32_t var_c0_1 = zmm1.d
    zmm1.d = (*(result + 0x2c)).d f* 3.05175781e-05f
    int32_t var_b8_1 = zmm1.d
    
    if (rdx != 0)
        int64_t i_3 = (rdx - 1) u/ 6 + 1
        int64_t i
        
        do
            int32_t rax_8 = sx.d(*r8)
            r8 = &r8[6]
            zmm8 = zx.o(sx.d(r8[-5]))
            int32_t rax_10 = sx.d(r8[-4])
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_8))
            arg_20 = zmm0.d
            zmm0.d = zmm0.d f* zmm9.d
            int32_t rax_11 = sx.d(r8[-3])
            zmm8 = _mm_cvtepi32_ps(zmm8)
            int32_t rax_12 = sx.d(r8[-2])
            zmm1 = _mm_cvtepi32_ps(zx.o(rax_10))
            int32_t var_e8_1 = zmm1.d
            zmm1.d = zmm1.d f* zmm11.d
            arg_8 = _mm_cvtepi32_ps(zx.o(rax_11)).d
            result = zx.q(sx.d(r8[-1]))
            arg_10 = _mm_cvtepi32_ps(zx.o(rax_12)).d
            arg_18 = _mm_cvtepi32_ps(zx.o(result.d)).d
            zmm2 = zmm8
            zmm8.d = zmm8.d f* zmm3.d
            zmm2.d = zmm2.d f* zmm10.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = arg_8.d f* zmm12.d
            zmm2.d = zmm2.d f+ zmm1.d
            zmm1.d = arg_10.d f* zmm13.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = arg_18.d f* zmm14.d
            zmm2.d = zmm2.d f+ zmm1.d
            zmm1.d = var_e8_1.d f* zmm4.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = arg_20.d f* zmm15.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm0.d = arg_8.d f* zmm5.d
            zmm8.d = zmm8.d f+ zmm1.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm0.d = arg_10.d f* zmm6.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm0.d = arg_18.d f* zmm7.d
            zmm8.d = zmm8.d f+ zmm0.d
            
            if (r10 == 0)
                *r9 = zmm2.d
            else
                zmm2.d = zmm2.d f+ *r9
                *r9 = zmm2.d
                zmm8.d = zmm8.d f+ r9[1]
            
            zmm9.d = zmm9.d f+ var_cc_1
            zmm10.d = zmm10.d f+ var_dc_1
            zmm11.d = zmm11.d f+ var_bc_1
            zmm12.d = zmm12.d f+ var_d4_1
            zmm13.d = zmm13.d f+ var_c4_1
            zmm14.d = zmm14.d f+ var_e4_1
            zmm15.d = zmm15.d f+ var_e0_1
            zmm3.d = zmm3.d f+ var_d8_1
            zmm4.d = zmm4.d f+ var_d0_1
            zmm5.d = zmm5.d f+ var_c8_1
            zmm6.d = zmm6.d f+ var_c0_1
            zmm7.d = zmm7.d f+ var_b8_1
            r9[1] = zmm8.d
            r9 = &r9[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (rdx != 0)
    int64_t i_2 = (rdx - 1) u/ 6 + 1
    int64_t i_1
    
    do
        int32_t rax_2 = sx.d(*r8)
        r8 = &r8[6]
        zmm3 = zx.o(sx.d(r8[-5]))
        int32_t rax_4 = sx.d(r8[-4])
        zmm4 = _mm_cvtepi32_ps(zx.o(rax_2))
        zmm0 = zmm4
        int32_t rax_5 = sx.d(r8[-3])
        zmm3 = _mm_cvtepi32_ps(zmm3)
        zmm4.d = zmm4.d f* zmm15.d
        zmm0.d = zmm0.d f* zmm9.d
        zmm2 = zmm3
        zmm5 = _mm_cvtepi32_ps(zx.o(rax_4))
        zmm3.d = zmm3.d f* arg_8
        int32_t rax_6 = sx.d(r8[-2])
        zmm2.d = zmm2.d f* zmm10.d
        zmm3.d = zmm3.d f+ zmm4.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm6 = _mm_cvtepi32_ps(zx.o(rax_5))
        zmm1 = zmm5
        result = zx.q(sx.d(r8[-1]))
        zmm5.d = zmm5.d f* arg_10
        zmm1.d = zmm1.d f* zmm11.d
        zmm3.d = zmm3.d f+ zmm5.d
        zmm7 = _mm_cvtepi32_ps(zx.o(rax_6))
        zmm0 = zmm6
        zmm6.d = zmm6.d f* arg_18
        zmm0.d = zmm0.d f* zmm12.d
        zmm2.d = zmm2.d f+ zmm1.d
        zmm3.d = zmm3.d f+ zmm6.d
        zmm1 = zmm7
        zmm7.d = zmm7.d f* arg_20
        zmm2.d = zmm2.d f+ zmm0.d
        zmm8 = _mm_cvtepi32_ps(zx.o(result.d))
        zmm1.d = zmm1.d f* zmm13.d
        zmm0 = zmm8
        zmm8.d = zmm8.d f* var_e8
        zmm2.d = zmm2.d f+ zmm1.d
        zmm3.d = zmm3.d f+ zmm7.d
        zmm0.d = zmm0.d f* zmm14.d
        zmm3.d = zmm3.d f+ zmm8.d
        zmm2.d = zmm2.d f+ zmm0.d
        
        if (r10 == 0)
            *r9 = zmm2.d
        else
            zmm2.d = zmm2.d f+ *r9
            *r9 = zmm2.d
            zmm3.d = zmm3.d f+ r9[1]
        
        r9[1] = zmm3.d
        r9 = &r9[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result
