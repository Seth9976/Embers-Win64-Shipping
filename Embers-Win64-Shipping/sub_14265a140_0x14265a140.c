// 函数: sub_14265a140
// 地址: 0x14265a140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)

if ((*(arg1 + 0x140) & 1) != 0)
    int32_t rdx = *(arg1 + 0x138)
    float zmm0[0x4]
    float zmm1
    
    if (r10.d s< rdx)
        int64_t r9 = *(arg1 + 0x130)
        int32_t* rcx_3 = (r10 << 5) + r9
        void* r11 = &rcx_3[8]
        float zmm9[0x4] = rcx_3[5]
        int128_t zmm8
        zmm8.d = rcx_3[3].d f- *rcx_3
        int128_t zmm6
        zmm6.d = rcx_3[4].d f- rcx_3[1]
        zmm9[0] = zmm9[0] f- rcx_3[2]
        zmm8.d = zmm8.d f* 0.5f
        zmm6.d = zmm6.d f* 0.5f
        zmm9[0] = zmm9[0] * 0.5f
        zmm8.d = zmm8.d f+ *rcx_3
        zmm6.d = zmm6.d f+ rcx_3[1]
        zmm9[0] = zmm9[0] f+ rcx_3[2]
        float zmm3[0x4]
        int128_t zmm4
        
        if (r10.d != 0)
            int64_t rax_5 = r10 << 5
            zmm3 = *(rax_5 + r9 - 0x14)
            zmm3[0] = zmm3[0] f- *(rax_5 + r9 - 0x20)
            zmm4.d = (*(rax_5 + r9 - 0x10)).d f- *(rax_5 + r9 - 0x1c)
            zmm0 = *(rax_5 + r9 - 0xc)
            zmm0[0] = zmm0[0] f- *(rax_5 + r9 - 0x18)
            zmm3[0] = zmm3[0] * 0.5f
            zmm4.d = zmm4.d f* 0.5f
            zmm3[0] = zmm3[0] f+ *(rax_5 + r9 - 0x20)
            zmm0[0] = zmm0[0] * 0.5f
            zmm4.d = zmm4.d f+ *(rax_5 + r9 - 0x1c)
            zmm0[0] = zmm0[0] f+ *(rax_5 + r9 - 0x18)
            zmm3[0] = zmm3[0] f- zmm8.d
            zmm4.d = zmm4.d f- zmm6.d
            zmm0[0] = zmm0[0] - zmm9[0]
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm4.d = zmm4.d f* zmm4.d
            zmm4.d = zmm4.d f+ zmm3[0]
        else
            float* rax_4 = *(arg1 + 0x28)
            zmm0 = zmm9
            zmm4.d = zmm6.d f- rax_4[1]
            zmm1 = zmm8.d - *rax_4
            zmm0[0] = zmm0[0] - rax_4[2]
            zmm4.d = zmm4.d f* zmm4.d
            zmm4.d = zmm4.d f+ zmm1 * zmm1
        
        zmm0[0] = zmm0[0] * zmm0[0]
        int32_t r8_1 = (r10 + 1).d
        zmm4.d = zmm4.d f+ zmm0[0]
        float result[0x4] = _mm_sqrt_ss(0, zmm4.d)
        
        if (r8_1 s< rdx)
            int128_t zmm5
            
            if (rdx - r8_1 s>= 4)
                int128_t zmm7
                int128_t var_28_1 = zmm7
                void* rcx_4 = &rcx_3[0xd]
                uint64_t rax_12 = zx.q(((rdx - r8_1 - 4) u>> 2) + 1)
                uint64_t i_3 = zx.q(rax_12.d)
                r8_1 += (rax_12 << 2).d
                uint64_t i
                
                do
                    zmm7.d = (*(rcx_4 - 8)).d f- *r11
                    zmm5.d = (*(rcx_4 - 4)).d f- *(rcx_4 - 0x10)
                    zmm3 = *rcx_4
                    zmm3[0] = zmm3[0] f- *(rcx_4 - 0xc)
                    zmm4.d = (*(rcx_4 + 0x20)).d f- *(rcx_4 + 0x14)
                    zmm5.d = zmm5.d f* 0.5f
                    zmm7.d = zmm7.d f* 0.5f
                    zmm5.d = zmm5.d f+ *(rcx_4 - 0x10)
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm7.d = zmm7.d f+ *r11
                    zmm4.d = zmm4.d f* 0.5f
                    zmm3[0] = zmm3[0] f+ *(rcx_4 - 0xc)
                    zmm6.d = zmm6.d f- zmm5.d
                    zmm4.d = zmm4.d f+ *(rcx_4 + 0x14)
                    zmm8.d = zmm8.d f- zmm7.d
                    zmm9[0] = zmm9[0] - zmm3[0]
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm8.d = zmm8.d f* zmm8.d
                    zmm3[0] = zmm3[0] f- zmm4.d
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm6.d = zmm6.d f+ zmm8.d
                    zmm8.d = (*(rcx_4 + 0x18)).d f- *(rcx_4 + 0xc)
                    zmm3[0] = zmm3[0] * zmm3[0]
                    zmm6.d = zmm6.d f+ zmm9[0]
                    zmm9 = *(rcx_4 + 0x60)
                    zmm9[0] = zmm9[0] f- *(rcx_4 + 0x54)
                    zmm8.d = zmm8.d f* 0.5f
                    float temp0_1[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm6.d)
                    zmm8.d = zmm8.d f+ *(rcx_4 + 0xc)
                    zmm6 = *(rcx_4 + 0x1c)
                    result[0] = result[0] + temp0_1[0]
                    zmm6.d = zmm6.d f- *(rcx_4 + 0x10)
                    zmm9[0] = zmm9[0] * 0.5f
                    zmm7.d = zmm7.d f- zmm8.d
                    zmm9[0] = zmm9[0] f+ *(rcx_4 + 0x54)
                    zmm6.d = zmm6.d f* 0.5f
                    zmm7.d = zmm7.d f* zmm7.d
                    zmm6.d = zmm6.d f+ *(rcx_4 + 0x10)
                    zmm5.d = zmm5.d f- zmm6.d
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm5.d = zmm5.d f+ zmm7.d
                    zmm7.d = (*(rcx_4 + 0x38)).d f- *(rcx_4 + 0x2c)
                    zmm5.d = zmm5.d f+ zmm3[0]
                    zmm3 = *(rcx_4 + 0x40)
                    zmm3[0] = zmm3[0] f- *(rcx_4 + 0x34)
                    zmm7.d = zmm7.d f* 0.5f
                    float temp0_2[0x4] = _mm_sqrt_ss(0, zmm5.d)
                    zmm5.d = (*(rcx_4 + 0x3c)).d f- *(rcx_4 + 0x30)
                    zmm7.d = zmm7.d f+ *(rcx_4 + 0x2c)
                    result[0] = result[0] + temp0_2[0]
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm5.d = zmm5.d f* 0.5f
                    zmm3[0] = zmm3[0] f+ *(rcx_4 + 0x34)
                    zmm8.d = zmm8.d f- zmm7.d
                    zmm5.d = zmm5.d f+ *(rcx_4 + 0x30)
                    zmm4.d = zmm4.d f- zmm3[0]
                    zmm8.d = zmm8.d f* zmm8.d
                    zmm6.d = zmm6.d f- zmm5.d
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm6.d = zmm6.d f+ zmm8.d
                    zmm8.d = (*(rcx_4 + 0x58)).d f- *(rcx_4 + 0x4c)
                    zmm6.d = zmm6.d f+ zmm4.d
                    zmm8.d = zmm8.d f* 0.5f
                    zmm8.d = zmm8.d f+ *(rcx_4 + 0x4c)
                    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm6.d)
                    zmm6.d = (*(rcx_4 + 0x5c)).d f- *(rcx_4 + 0x50)
                    result[0] = result[0] + temp0_3[0]
                    zmm6.d = zmm6.d f* 0.5f
                    zmm6.d = zmm6.d f+ *(rcx_4 + 0x50)
                    zmm5.d = zmm5.d f- zmm6.d
                    zmm7.d = zmm7.d f- zmm8.d
                    r11 -= -0x80
                    zmm3[0] = zmm3[0] - zmm9[0]
                    rcx_4 -= -0x80
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm7.d = zmm7.d f* zmm7.d
                    zmm3[0] = zmm3[0] * zmm3[0]
                    zmm5.d = zmm5.d f+ zmm7.d
                    zmm5.d = zmm5.d f+ zmm3[0]
                    float temp0_4[0x4] = _mm_sqrt_ss(0, zmm5.d)
                    result[0] = result[0] + temp0_4[0]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            if (r8_1 s< rdx)
                void* rax_13 = r11 + 0x14
                int64_t i_2 = sx.q(rdx - r8_1)
                int64_t i_1
                
                do
                    zmm5.d = (*(rax_13 - 8)).d f- *(rax_13 - 0x14)
                    zmm4.d = (*(rax_13 - 4)).d f- *(rax_13 - 0x10)
                    zmm3 = *rax_13
                    zmm3[0] = zmm3[0] f- *(rax_13 - 0xc)
                    zmm5.d = zmm5.d f* 0.5f
                    zmm4.d = zmm4.d f* 0.5f
                    zmm5.d = zmm5.d f+ *(rax_13 - 0x14)
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm4.d = zmm4.d f+ *(rax_13 - 0x10)
                    zmm3[0] = zmm3[0] f+ *(rax_13 - 0xc)
                    zmm8.d = zmm8.d f- zmm5.d
                    rax_13 += 0x20
                    zmm6.d = zmm6.d f- zmm4.d
                    zmm9[0] = zmm9[0] - zmm3[0]
                    zmm8.d = zmm8.d f* zmm8.d
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm6.d = zmm6.d f+ zmm8.d
                    zmm8 = zmm5
                    zmm6.d = zmm6.d f+ zmm9[0]
                    zmm9 = zmm3
                    float temp0_5 = _mm_sqrt_ss(0, zmm6.d)
                    zmm6 = zmm4
                    result[0] = result[0] + temp0_5
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
        
        return result
    
    if (r10.d == 0)
        int64_t rax_1 = sx.q(*(arg1 + 0x30))
        
        if (rax_1.d s> 1)
            float* rcx = *(arg1 + 0x28)
            zmm0 = rcx[rax_1 * 8 - 6]
            zmm0[0] = zmm0[0] - rcx[2]
            float zmm2 = rcx[rax_1 * 8 - 7] - rcx[1]
            zmm1 = rcx[rax_1 * 8 - 8] - *rcx
            zmm0[0] = zmm0[0] * zmm0[0]
            return _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0[0])

return zx.o(0)
