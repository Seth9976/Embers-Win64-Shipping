// 函数: sub_14037b2f0
// 地址: 0x14037b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r8 = *arg1
void* rdx = arg1[1]
int64_t r9 = *(arg1 + 0x24)
int64_t r10 = sx.q(*(arg1 + 0x3c))
int32_t* rax = arg1[2]
uint128_t zmm4
zmm4.d = rax[0xb].d f* 3.05175781e-05f
float zmm5 = *rax * 3.05175781e-05f
int128_t zmm6
zmm6.d = rax[1].d f* 3.05175781e-05f
int128_t zmm7
zmm7.d = rax[2].d f* 3.05175781e-05f
int128_t zmm8
zmm8.d = rax[3].d f* 3.05175781e-05f
int128_t zmm9
zmm9.d = rax[4].d f* 3.05175781e-05f
int128_t zmm10
zmm10.d = rax[5].d f* 3.05175781e-05f
int128_t zmm11
zmm11.d = rax[6].d f* 3.05175781e-05f
int128_t zmm12
zmm12.d = rax[7].d f* 3.05175781e-05f
uint64_t result = arg1[3]
int32_t arg_8 = zmm4.d
int128_t zmm13
zmm13.d = rax[8].d f* 3.05175781e-05f
int128_t zmm14
zmm14.d = rax[9].d f* 3.05175781e-05f
int128_t zmm15
zmm15.d = rax[0xa].d f* 3.05175781e-05f
uint128_t zmm0
float zmm1
uint128_t zmm2
uint128_t zmm3

if (result != 0)
    float arg_10 = *result * 3.05175781e-05f
    float arg_18 = *(result + 4) * 3.05175781e-05f
    float arg_20 = *(result + 8) * 3.05175781e-05f
    float var_d4_1 = *(result + 0xc) * 3.05175781e-05f
    float var_c4_1 = *(result + 0x10) * 3.05175781e-05f
    float var_cc_1 = *(result + 0x14) * 3.05175781e-05f
    float var_bc_1 = *(result + 0x18) * 3.05175781e-05f
    float var_d8_1 = *(result + 0x1c) * 3.05175781e-05f
    float var_d0_1 = *(result + 0x20) * 3.05175781e-05f
    float var_c8_1 = *(result + 0x24) * 3.05175781e-05f
    float var_c0_1 = *(result + 0x28) * 3.05175781e-05f
    float var_b8_1 = *(result + 0x2c) * 3.05175781e-05f
    
    if (r9 != 0)
        int64_t i_3 = ((r9 - 1) u>> 1) + 1
        int64_t i
        
        do
            int32_t rax_2 = sx.d(*r8)
            r8 = &r8[2]
            result = zx.q(sx.d(r8[-1]))
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_2))
            arg_8 = zmm0.d
            zmm0.d = zmm0.d f* zmm5
            zmm3 = _mm_cvtepi32_ps(zx.o(result.d))
            zmm2.d = zmm3.d f* zmm8.d
            zmm1 = zmm3.d f* zmm6.d f+ zmm0.d
            zmm0.d = arg_8.d f* zmm7.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = arg_8.d f* zmm9.d
            
            if (r10 == 0)
                *rdx = zmm1
                *(rdx + 4) = zmm2.d
                zmm2.d = zmm3.d f* zmm12.d
                zmm1 = zmm3.d f* zmm10.d f+ zmm0.d
                zmm0.d = arg_8.d f* zmm11.d
                *(rdx + 8) = zmm1
                zmm2.d = zmm2.d f+ zmm0.d
                zmm1 = zmm3.d
                zmm3.d = zmm3.d f* zmm4.d
                *(rdx + 0xc) = zmm2.d
                zmm2 = arg_8
                zmm0 = zmm2
                zmm2.d = zmm2.d f* zmm15.d
                zmm0.d = zmm0.d f* zmm13.d
                zmm3.d = zmm3.d f+ zmm2.d
                *(rdx + 0x10) = zmm1 f* zmm14.d f+ zmm0.d
            else
                *rdx = zmm1 f+ *rdx
                zmm2.d = zmm2.d f+ *(rdx + 4)
                *(rdx + 4) = zmm2.d
                zmm1 = zmm3.d f* zmm10.d f+ zmm0.d
                zmm2.d = zmm3.d f* zmm12.d
                zmm0.d = arg_8.d f* zmm11.d
                *(rdx + 8) = zmm1 f+ *(rdx + 8)
                zmm2.d = zmm2.d f+ zmm0.d
                zmm1 = zmm3.d
                zmm3.d = zmm3.d f* zmm4.d
                zmm2.d = zmm2.d f+ *(rdx + 0xc)
                *(rdx + 0xc) = zmm2.d
                zmm2 = arg_8
                zmm0 = zmm2
                zmm2.d = zmm2.d f* zmm15.d
                zmm0.d = zmm0.d f* zmm13.d
                zmm3.d = zmm3.d f+ zmm2.d
                *(rdx + 0x10) = zmm1 f* zmm14.d f+ zmm0.d f+ *(rdx + 0x10)
                zmm3.d = zmm3.d f+ *(rdx + 0x14)
            
            zmm5 = zmm5 + arg_10
            zmm6.d = zmm6.d f+ arg_18
            zmm7.d = zmm7.d f+ arg_20
            zmm8.d = zmm8.d f+ var_d4_1
            zmm9.d = zmm9.d f+ var_c4_1
            zmm10.d = zmm10.d f+ var_cc_1
            zmm11.d = zmm11.d f+ var_bc_1
            zmm12.d = zmm12.d f+ var_d8_1
            zmm13.d = zmm13.d f+ var_d0_1
            zmm14.d = zmm14.d f+ var_c8_1
            zmm15.d = zmm15.d f+ var_c0_1
            zmm4.d = zmm4.d f+ var_b8_1
            *(rdx + 0x14) = zmm3.d
            rdx += 0x18
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (r9 != 0)
    int64_t i_2 = ((r9 - 1) u>> 1) + 1
    int64_t i_1
    
    do
        int32_t rax_1 = sx.d(*r8)
        r8 = &r8[2]
        result = zx.q(sx.d(r8[-1]))
        zmm4 = _mm_cvtepi32_ps(zx.o(rax_1))
        zmm3 = _mm_cvtepi32_ps(zx.o(result.d))
        zmm0.d = zmm4.d f* zmm5
        zmm2.d = zmm3.d f* zmm8.d
        zmm1 = zmm3.d f* zmm6.d f+ zmm0.d
        zmm0.d = zmm4.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm0.d = zmm4.d f* zmm9.d
        
        if (r10 == 0)
            *rdx = zmm1
            *(rdx + 4) = zmm2.d
            zmm2.d = zmm3.d f* zmm12.d
            *(rdx + 8) = zmm3.d f* zmm10.d f+ zmm0.d
            zmm0.d = zmm4.d f* zmm11.d
            zmm1 = zmm3.d
            zmm3.d = zmm3.d f* arg_8
            zmm2.d = zmm2.d f+ zmm0.d
            *(rdx + 0xc) = zmm2.d
            zmm0.d = zmm4.d f* zmm13.d
            zmm4.d = zmm4.d f* zmm15.d
            zmm3.d = zmm3.d f+ zmm4.d
            *(rdx + 0x10) = zmm1 f* zmm14.d f+ zmm0.d
        else
            *rdx = zmm1 f+ *rdx
            zmm2.d = zmm2.d f+ *(rdx + 4)
            *(rdx + 4) = zmm2.d
            zmm1 = zmm3.d f* zmm10.d f+ zmm0.d
            zmm0.d = zmm4.d f* zmm11.d
            zmm2.d = zmm3.d f* zmm12.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = zmm4.d f* zmm13.d
            zmm4.d = zmm4.d f* zmm15.d
            *(rdx + 8) = zmm1 f+ *(rdx + 8)
            zmm2.d = zmm2.d f+ *(rdx + 0xc)
            zmm1 = zmm3.d
            zmm3.d = zmm3.d f* arg_8
            *(rdx + 0xc) = zmm2.d
            zmm3.d = zmm3.d f+ zmm4.d
            *(rdx + 0x10) = zmm1 f* zmm14.d f+ zmm0.d f+ *(rdx + 0x10)
            zmm3.d = zmm3.d f+ *(rdx + 0x14)
        
        *(rdx + 0x14) = zmm3.d
        rdx += 0x18
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result
