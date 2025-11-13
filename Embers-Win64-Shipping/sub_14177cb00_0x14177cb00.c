// 函数: sub_14177cb00
// 地址: 0x14177cb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10 = arg2[0]
uint64_t var_10 = arg3
int32_t rax = *(arg1 + 0x88)
void* r15 = arg1 + 0x180
int64_t rdi = sx.q(*(r15 + 8))
float zmm2[0x4]
uint32_t zmm4[0x4]

if (rax s> rdi.d)
    *(r15 + 8) = rax
    arg3 = zx.q(rax - rdi.d)
    
    if (rax s> *(r15 + 0xc))
        sub_14177e680(r15)
    
    void* rcx_2 = rdi * 0x1a0 + *r15
    
    if (arg3.d != 0)
        zmm4 = data_143ef7c90
        int32_t i
        
        do
            arg2 = data_143ef7c80
            *(rcx_2 + 0x10) = zx.o(0)
            rcx_2 += 0x1a0
            arg2[0].q = zx.o(0) u>> 0x40
            *(rcx_2 - 0x1a0) = _mm_shuffle_ps(zx.o(0), arg2, 0xc4)
            *(rcx_2 - 0x180) = _mm_and_ps(data_143ef7c80, zmm4)
            zmm2 = data_143ef7c80
            zmm2[0].q = zx.o(0) u>> 0x40
            *(rcx_2 - 0x170) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
            *(rcx_2 - 0x160) = zx.o(0)
            *(rcx_2 - 0x150) = _mm_and_ps(data_143ef7c80, zmm4)
            i = arg3.d
            arg3 = zx.q(arg3.d - 1)
        while (i != 1)
else if (rax s< rdi.d && rax != rdi.d)
    *(r15 + 8) = rax
    sub_14177e870(r15)

int32_t i_1 = 0
int32_t i_2 = 0

if (*(arg1 + 0x88) s> 0)
    float zmm5[0x4] = data_143ef7c60
    int64_t r10_1 = 0
    float zmm6[0x4] = data_143ef7c50
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    float zmm9[0x4]
    float var_88_1[0x4] = zmm9
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm12[0x4]
    float var_b8_1[0x4] = zmm12
    int128_t zmm13
    int128_t var_c8_1 = zmm13
    int128_t zmm14
    int128_t var_d8_1 = zmm14
    float zmm15[0x4] = data_143ef7c70
    int64_t arg_18 = 0
    
    do
        int64_t* rcx_4 = *(arg1 + 0x80)
        void* r8_1 = nullptr
        int64_t i_3 = sx.q(i_1)
        void* r14_3 = i_3 * 0xc0 + *(arg1 + 0x60)
        int128_t* rax_2 = i_3 * 0x1a0 + *r15
        int64_t r9_3 = i_3 * 0x60 + *(arg1 + 0x70)
        void* rax_3 = *(rcx_4 + r10_1)
        
        if (*(rax_3 + 0xc) u>= 2)
            r8_1 = rax_3
        
        void* const rdx_2 = nullptr
        
        if (r8_1 == 0)
            rdx_2 = 8
        
        void* const r15_1 = nullptr
        arg3 = *((zx.q((sbb.q(arg3, arg3, r8_1 != 0)).d) & 8) + rcx_4 + r10_1)
        
        if (r8_1 == 0)
            r15_1 = 0x30
        
        int64_t* rdx_4 = *(rdx_2 + rcx_4 + r10_1)
        char r10_2 = *(rdx_4 + 0xc)
        int64_t* r9_4 = nullptr
        
        if (r10_2 u>= 2)
            r9_4 = rdx_4
        
        float (* rcx_9)[0x4]
        
        if (r9_4 == 0)
            rcx_9 = &data_1439b8e20
        else
            int64_t* rcx_5 = nullptr
            
            if (r10_2 u>= 1)
                rcx_5 = rdx_4
            
            if (rcx_5 == 0)
                rcx_9 = &data_1439b8e20
            else
                int64_t* rax_6 = nullptr
                
                if (*(rcx_5 + 0xc) u>= 2)
                    rax_6 = rcx_5
                
                if (rax_6 == 0 || *(sx.q(rax_6[1].d) + *(*rax_6 + 0x398)) != 4)
                    rcx_9 = &data_1439b8e20
                else
                    rcx_9 = (sx.q(r9_4[1].d) << 6) + *(*r9_4 + 0x2a8)
        
        arg2 = (*rcx_9)[5]
        float var_1a0 = (*rcx_9)[0]
        float var_198_1 = (*rcx_9)[0xa][0]
        float var_19c_1 = arg2[0]
        
        if (r9_4 == 0)
            zmm14 = zx.o(0)
        else
            int64_t* rax_9 = nullptr
            
            if (r10_2 u>= 1)
                rax_9 = rdx_4
            
            if (rax_9 == 0)
                zmm14 = zx.o(0)
            else
                int64_t* rcx_10 = nullptr
                
                if (*(rax_9 + 0xc) u>= 2)
                    rcx_10 = rax_9
                
                if (rcx_10 == 0 || *(sx.q(rcx_10[1].d) + *(*rcx_10 + 0x398)) != 4)
                    zmm14 = zx.o(0)
                else
                    zmm14 = *(*(*r9_4 + 0x2d8) + (sx.q(r9_4[1].d) << 2))
        
        char r11_1 = *(arg3 + 0xc)
        int64_t* r9_5 = nullptr
        
        if (r11_1 u>= 2)
            r9_5 = arg3
        
        float (* rcx_17)[0x4]
        
        if (r9_5 == 0)
            rcx_17 = &data_1439b8e20
        else
            int64_t* rax_12 = nullptr
            
            if (r11_1 u>= 1)
                rax_12 = arg3
            
            if (rax_12 == 0)
                rcx_17 = &data_1439b8e20
            else
                int64_t* rcx_13 = nullptr
                
                if (*(rax_12 + 0xc) u>= 2)
                    rcx_13 = rax_12
                
                if (rcx_13 == 0 || *(sx.q(rcx_13[1].d) + *(*rcx_13 + 0x398)) != 4)
                    rcx_17 = &data_1439b8e20
                else
                    rcx_17 = (sx.q(r9_5[1].d) << 6) + *(*r9_5 + 0x2a8)
        
        arg2 = (*rcx_17)[5]
        float var_194 = (*rcx_17)[0]
        float var_18c_1 = (*rcx_17)[0xa][0]
        float var_190_1 = arg2[0]
        
        if (r9_5 == 0)
            zmm13 = zx.o(0)
        else
            int64_t* rax_15 = nullptr
            
            if (r11_1 u>= 1)
                rax_15 = arg3
            
            if (rax_15 == 0)
                zmm13 = zx.o(0)
            else
                int64_t* rcx_18 = nullptr
                
                if (*(rax_15 + 0xc) u>= 2)
                    rcx_18 = rax_15
                
                if (rcx_18 == 0 || *(sx.q(rcx_18[1].d) + *(*rcx_18 + 0x398)) != 4)
                    zmm13 = zx.o(0)
                else
                    zmm13 = *(*(*r9_5 + 0x2d8) + (sx.q(r9_5[1].d) << 2))
        
        int64_t* r9_6 = nullptr
        
        if (r10_2 u>= 1)
            r9_6 = rdx_4
        
        if (r9_6 == 0)
            zmm4 = data_142d3f660
        else
            zmm4 = *(*(*r9_6 + 0x218) + sx.q(r9_6[1].d) * 0x10)
        
        void* rcx_22 = *rdx_4
        int64_t rdi_1 = sx.q(rdx_4[1].d)
        float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
        int64_t rdi_2 = rdi_1 * 2
        float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x4e)
        int64_t* r10_3 = nullptr
        int64_t r13_1 = *(rcx_22 + 0x68)
        
        if (r11_1 u>= 1)
            r10_3 = arg3
        
        zmm2 = *(r13_1 + (rdi_2 << 3))
        float temp0_8[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(zmm2, zmm2, 0))
        float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm4)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xb1)
        float temp0_13[0x4] = _mm_add_ps(_mm_mul_ps(temp0_8, zmm15), temp0_10)
        float temp0_15[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(zmm2, zmm2, 0x55))
        zmm4 = _mm_mul_ps(zmm4, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
        float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm5)
        zmm4 = _mm_mul_ps(zmm4, zmm6)
        uint128_t var_168 = _mm_add_ps(_mm_add_ps(temp0_13, temp0_18), zmm4)
        
        if (r10_3 == 0)
            zmm4 = data_142d3f660
        else
            zmm4 = *(*(*r10_3 + 0x218) + sx.q(r10_3[1].d) * 0x10)
        
        void* rcx_24 = *arg3
        int64_t r11_2 = sx.q(*(arg3 + 8))
        float temp0_22[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
        int64_t r11_3 = r11_2 * 2
        zmm2 = *(*(rcx_24 + 0x68) + (r11_3 << 3))
        float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_22)
        float temp0_25[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_26[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm4)
        float temp0_28[0x4] = _mm_mul_ps(temp0_24, zmm15)
        float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_30[0x4] = _mm_add_ps(temp0_28, temp0_27)
        float temp0_32[0x4] = _mm_mul_ps(temp0_26, _mm_shuffle_ps(zmm4, zmm4, 0x4e))
        float temp0_34[0x4] = _mm_mul_ps(temp0_29, _mm_shuffle_ps(zmm4, zmm4, 0xb1))
        float temp0_35[0x4] = _mm_mul_ps(temp0_32, zmm5)
        float temp0_36[0x4] = _mm_mul_ps(temp0_34, zmm6)
        uint128_t var_158 = _mm_add_ps(_mm_add_ps(temp0_30, temp0_35), temp0_36)
        float zmm0[0x4]
        float zmm3[0x4]
        
        if (r9_6 == 0)
            zmm3 = zx.o(0)
            zmm11 = zx.o(0)
            zmm12 = zx.o(0)
        else
            int64_t r8_13 = sx.q(r9_6[1].d) * 3
            int64_t rcx_25 = *(*r9_6 + 0x200)
            zmm0 = zx.o(*(rcx_25 + (r8_13 << 2)))
            zmm12 = *(rcx_25 + (r8_13 << 2) + 8)
            zmm3 = zmm0.d
            zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        
        zmm8 = *(r13_1 + (rdi_2 << 3) + 4)
        zmm5 = *(r13_1 + (rdi_2 << 3) + 8)
        zmm7 = *(r13_1 + (rdi_2 << 3))
        zmm2 = *(r13_1 + (rdi_2 << 3) + 0xc)
        int64_t rax_24 = sx.q(rdx_4[1].d)
        zmm11[0] = zmm11[0] * zmm5[0]
        zmm3[0] = zmm3[0] * zmm5[0]
        int64_t rcx_26 = rax_24 * 3
        void* rax_25 = *rdx_4
        zmm11[0] = zmm11[0] f* zmm7.d
        zmm12[0] = zmm12[0] f* zmm8.d
        int64_t rax_26 = *(rax_25 + 0x28)
        zmm12[0] = zmm12[0] - zmm11[0]
        zmm12[0] = zmm12[0] f* zmm7.d
        zmm3[0] = zmm3[0] - zmm12[0]
        zmm3[0] = zmm3[0] f* zmm8.d
        zmm12[0] = zmm12[0] + zmm12[0]
        zmm11[0] = zmm11[0] - zmm3[0]
        zmm2[0] = zmm2[0] * zmm12[0]
        zmm3[0] = zmm3[0] + zmm3[0]
        zmm2[0] = zmm2[0] + zmm3[0]
        zmm12[0] = zmm12[0] * zmm5[0]
        zmm3[0] = zmm3[0] * zmm5[0]
        zmm11[0] = zmm11[0] + zmm11[0]
        zmm12[0] = zmm12[0] f* zmm8.d
        zmm4 = zmm11
        zmm4[0] = zmm4[0] f* zmm8.d
        zmm4[0] = zmm4[0] f- zmm3[0]
        zmm11[0] = zmm11[0] f* zmm7.d
        zmm11[0] = zmm11[0] * zmm2[0]
        zmm4[0] = zmm4[0] f+ zmm2[0]
        zmm2[0] = zmm2[0] * zmm3[0]
        zmm12[0] = zmm12[0] - zmm11[0]
        zmm3[0] = zmm3[0] f* zmm7.d
        zmm11[0] = zmm11[0] + zmm12[0]
        zmm2[0] = zmm2[0] + zmm11[0]
        zmm4[0] = zmm4[0] f+ *(rax_26 + (rcx_26 << 2))
        zmm3[0] = zmm3[0] - zmm12[0]
        zmm12[0] = zmm12[0] + zmm2[0]
        uint32_t var_188 = zmm4[0]
        zmm3[0] = zmm3[0] + zmm11[0]
        zmm12[0] = zmm12[0] f+ *(rax_26 + (rcx_26 << 2) + 4)
        zmm3[0] = zmm3[0] f+ *(rax_26 + (rcx_26 << 2) + 8)
        float var_184_1 = zmm12[0]
        float var_180_1 = zmm3[0]
        
        if (r10_3 == 0)
            zmm3 = zx.o(0)
            zmm11 = zx.o(0)
            zmm12 = zx.o(0)
        else
            int64_t r8_14 = sx.q(r10_3[1].d) * 3
            int64_t rcx_27 = *(*r10_3 + 0x200)
            zmm0 = zx.o(*(rcx_27 + (r8_14 << 2)))
            zmm12 = *(rcx_27 + (r8_14 << 2) + 8)
            zmm3 = zmm0.d
            zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        
        void* r8_15 = *arg3
        int64_t rax_30 = *(r8_15 + 0x68)
        zmm8 = *(rax_30 + (r11_3 << 3) + 4)
        zmm5 = *(rax_30 + (r11_3 << 3) + 8)
        zmm7 = *(rax_30 + (r11_3 << 3))
        zmm2 = *(rax_30 + (r11_3 << 3) + 0xc)
        int64_t rax_31 = sx.q(*(arg3 + 8))
        zmm11[0] = zmm11[0] * zmm5[0]
        zmm3[0] = zmm3[0] * zmm5[0]
        int64_t rcx_28 = rax_31 * 3
        int64_t rax_32 = *(r8_15 + 0x28)
        zmm11[0] = zmm11[0] f* zmm7.d
        zmm12[0] = zmm12[0] f* zmm8.d
        zmm12[0] = zmm12[0] - zmm11[0]
        zmm12[0] = zmm12[0] f* zmm7.d
        zmm3[0] = zmm3[0] - zmm12[0]
        zmm3[0] = zmm3[0] f* zmm8.d
        zmm12[0] = zmm12[0] + zmm12[0]
        zmm11[0] = zmm11[0] - zmm3[0]
        zmm3[0] = zmm3[0] + zmm3[0]
        zmm12[0] = zmm12[0] * zmm2[0]
        zmm11[0] = zmm11[0] + zmm11[0]
        zmm12[0] = zmm12[0] + zmm3[0]
        zmm3[0] = zmm3[0] * zmm5[0]
        zmm12[0] = zmm12[0] * zmm5[0]
        zmm4 = zmm11
        zmm12[0] = zmm12[0] f* zmm8.d
        zmm4[0] = zmm4[0] f* zmm8.d
        zmm4[0] = zmm4[0] f- zmm3[0]
        zmm11[0] = zmm11[0] f* zmm7.d
        zmm11[0] = zmm11[0] * zmm2[0]
        zmm4[0] = zmm4[0] f+ zmm12[0]
        zmm3[0] = zmm3[0] f* zmm7.d
        zmm12[0] = zmm12[0] - zmm11[0]
        zmm3[0] = zmm3[0] * zmm2[0]
        zmm11[0] = zmm11[0] + zmm12[0]
        zmm4[0] = zmm4[0] f+ *(rax_32 + (rcx_28 << 2))
        zmm3[0] = zmm3[0] - zmm12[0]
        zmm3[0] = zmm3[0] + zmm11[0]
        uint32_t var_17c = zmm4[0]
        zmm3[0] = zmm3[0] + zmm11[0]
        zmm12[0] = zmm12[0] + zmm3[0]
        zmm3[0] = zmm3[0] f+ *(rax_32 + (rcx_28 << 2) + 8)
        zmm12[0] = zmm12[0] f+ *(rax_32 + (rcx_28 << 2) + 4)
        float var_174_1 = zmm3[0]
        float var_178_1 = zmm12[0]
        float var_148[0x2][0x4]
        float (* rax_33)[0x4] = sub_14175ec80(&var_148, rdx_4, r15_1 + r9_3)
        float var_118[0x3][0x4]
        float (* rax_34)[0x4]
        int64_t rdx_6
        int512_t zmm1
        rax_34, rdx_6, zmm1 =
            sub_14175ec80(&var_118, arg3, (zx.q((sbb.q(0x30, 0x30, r8_1 != 0)).d) & 0x30) + r9_3)
        zmm1.o = arg_10
        zmm15 = sub_141779ac0(rax_2, rdx_6, arg1 + 8, r14_3, &var_17c, &var_188, &var_158, 
            &var_168, zmm13.d, &var_194, zmm14.d, &var_1a0, rax_34, rax_33)
        r15 = arg1 + 0x180
        zmm5 = data_143ef7c60
        i_1 = i_2 + 1
        zmm6 = data_143ef7c50
        r10_1 = arg_18 + 0x10
        i_2 = i_1
        arg_18 = r10_1
    while (i_1 s< *(arg1 + 0x88))

return i_1
