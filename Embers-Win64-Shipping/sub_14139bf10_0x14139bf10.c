// 函数: sub_14139bf10
// 地址: 0x14139bf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)
*arg2 = *(rax + 0xc0)
arg2[1].q = *(rax + 0xd0)
*(arg2 + 0x18) = *(rax + 0xd8)

if (*(arg1 + 0x20) u<= 0 && (*(*(arg1 + 8) + 0x3a) & 0x40) != 0)
    void* r10_1 = *(arg1 + 0xf0)
    int32_t i = 0
    void* const rcx_4
    
    if (*(r10_1 + 0x1d10) == *(r10_1 + 0x1d3c))
    label_14139bfd0:
        rcx_4 = nullptr
    else
        int64_t rbx_1 = sx.q(*(arg1 + 0x10))
        void* r8_1 = r10_1 + 0x1d40
        void* rdx = *(r8_1 + 8)
        
        if (rdx != 0)
            r8_1 = rdx
        
        int32_t rax_4 = *(r8_1 + (((sx.q(*(r10_1 + 0x1d50)) - 1) & rbx_1) << 2))
        
        if (rax_4 == 0xffffffff)
        label_14139bfd0_1:
            rcx_4 = nullptr
        else
            int64_t r8_2 = *(r10_1 + 0x1d08)
            
            while (true)
                int64_t rdx_1 = sx.q(rax_4) * 5
                rcx_4 = r8_2 + (rdx_1 << 3)
                
                if (*(r8_2 + (rdx_1 << 3)) == rbx_1.d)
                    break
                
                rax_4 = *(rcx_4 + 0x20)
                
                if (rax_4 == 0xffffffff)
                    goto label_14139bfd0_2
            
            if (rax_4 == 0xffffffff)
            label_14139bfd0_2:
                rcx_4 = nullptr
    
    void* r8_3 = rcx_4 + 8
    
    if (rcx_4 == 0)
        r8_3 = nullptr
    
    if (r8_3 != 0 && *(r8_3 + 0x10) s> 0)
        uint128_t zmm6
        uint128_t var_18_1 = zmm6
        int64_t* r10_2 = nullptr
        uint128_t zmm7
        uint128_t var_28_1 = zmm7
        uint128_t zmm8
        uint128_t var_38_1 = zmm8
        uint128_t zmm9
        uint128_t var_48_1 = zmm9
        uint128_t zmm10
        uint128_t var_58_1 = zmm10
        uint128_t zmm11
        uint128_t var_68_1 = zmm11
        uint128_t zmm12
        uint128_t var_78_1 = zmm12
        float zmm13[0x4]
        float var_88_1[0x4] = zmm13
        uint128_t zmm14
        uint128_t var_98_1 = zmm14
        uint128_t zmm15
        uint128_t var_a8_1 = zmm15
        
        do
            zmm7 = *arg2
            zmm11 = *(arg2 + 8)
            zmm15 = *(arg2 + 4)
            zmm6.d = zmm7.d f- *(arg2 + 0xc)
            uint128_t zmm4
            zmm4.d = zmm15.d f- arg2[1].d
            uint128_t zmm5
            zmm5.d = zmm11.d f- *(arg2 + 0x14)
            int32_t arg_8 = zmm7.d
            zmm7.d = zmm7.d f+ *(arg2 + 0xc)
            uint128_t zmm3
            zmm3.d = zmm15.d f+ arg2[1].d
            uint128_t zmm1
            zmm1.d = zmm11.d f+ *(arg2 + 0x14)
            zmm10 = zmm6
            int128_t* rdx_3 = *(*(r10_2 + *(r8_3 + 8)) + 8) + 0xc0
            int32_t arg_10 = zmm11.d
            zmm9 = zmm4
            zmm8 = zmm5
            
            if (not(zmm6.d f<= zmm7.d))
                zmm10 = zmm7
            
            if (not(zmm4.d f<= zmm3.d))
                zmm9 = zmm3
            
            if (not(zmm5.d f<= zmm1.d))
                zmm8 = zmm1
            
            if (not(zmm6.d f>= zmm7.d))
                zmm6 = zmm7
            
            if (not(zmm4.d f>= zmm3.d))
                zmm4 = zmm3
            
            if (not(zmm5.d f>= zmm1.d))
                zmm5 = zmm1
            
            zmm14 = *rdx_3
            zmm3 = *(rdx_3 + 0xc)
            zmm12 = *(rdx_3 + 4)
            zmm1.d = zmm14.d f- zmm3.d
            zmm13 = *(rdx_3 + 8)
            zmm7 = rdx_3[1].d
            zmm11 = *(rdx_3 + 0x14)
            uint128_t zmm0
            zmm0.d = zmm12.d f- zmm7.d
            zmm13[0] = zmm13[0] f- zmm11.d
            
            if (not(zmm10.d f<= zmm1.d))
                zmm10 = zmm1
            
            if (not(zmm9.d f<= zmm0.d))
                zmm9 = zmm0
            
            if (not(zmm8.d f<= zmm13[0]))
                zmm8 = zmm13
            
            if (not(zmm6.d f>= zmm1.d))
                zmm6 = zmm1
            
            if (not(zmm4.d f>= zmm0.d))
                zmm4 = zmm0
            
            if (not(zmm5.d f>= zmm13[0]))
                zmm5 = zmm13
            
            zmm1.d = zmm14.d f+ zmm3.d
            zmm0.d = zmm12.d f+ zmm7.d
            zmm13[0] = zmm13[0] f+ zmm11.d
            
            if (not(zmm10.d f<= zmm1.d))
                zmm10 = zmm1
            
            if (not(zmm9.d f<= zmm0.d))
                zmm9 = zmm0
            
            if (not(zmm8.d f<= zmm13[0]))
                zmm8 = zmm13
            
            if (not(zmm6.d f>= zmm1.d))
                zmm6 = zmm1
            
            if (not(zmm4.d f>= zmm0.d))
                zmm4 = zmm0
            
            if (not(zmm5.d f>= zmm13[0]))
                zmm5 = zmm13
            
            zmm4.d = zmm4.d f- zmm9.d
            zmm6.d = zmm6.d f- zmm10.d
            zmm5.d = zmm5.d f- zmm8.d
            float zmm2[0x4] = zmm4
            zmm4.d = zmm4.d f* zmm4.d
            zmm2[0] = zmm2[0] * 0.5f
            zmm1.d = zmm6.d f* 0.5f
            zmm3.d = zmm5.d f* 0.5f
            zmm9.d = zmm9.d f+ zmm2[0]
            zmm10.d = zmm10.d f+ zmm1.d
            zmm6.d = zmm6.d f* zmm6.d
            zmm5.d = zmm5.d f* zmm5.d
            zmm8.d = zmm8.d f+ zmm3.d
            uint64_t var_c0_1 = (_mm_unpacklo_ps(zmm1, zmm2[0].q)).q
            zmm12.d = zmm12.d f- zmm9.d
            zmm15.d = zmm15.d f- zmm9.d
            zmm0.d = arg_8.d f- zmm10.d
            zmm4.d = zmm4.d f+ zmm6.d
            zmm14.d = zmm14.d f- zmm10.d
            zmm12.d = zmm12.d f* zmm12.d
            int32_t var_b8_1 = zmm3.d
            zmm15.d = zmm15.d f* zmm15.d
            zmm13[0] = zmm13[0] f- zmm8.d
            zmm0.d = zmm0.d f* zmm0.d
            zmm3.d = arg_10.d f- zmm8.d
            zmm14.d = zmm14.d f* zmm14.d
            zmm4.d = zmm4.d f+ zmm5.d
            zmm15.d = zmm15.d f+ zmm0.d
            zmm13[0] = zmm13[0] * zmm13[0]
            zmm12.d = zmm12.d f+ zmm14.d
            zmm3.d = zmm3.d f* zmm3.d
            zmm4.d = zmm4.d f* 0.25f
            zmm15.d = zmm15.d f+ zmm3.d
            int32_t var_c8_1 = zmm9.d
            zmm12.d = zmm12.d f+ zmm13[0]
            float temp0_2[0x4] = _mm_sqrt_ss(0, zmm4.d)
            zmm1 = _mm_sqrt_ss(0, zmm12.d)
            zmm0 = _mm_sqrt_ss(0, zmm15.d)
            zmm1.d = zmm1.d f+ *(rdx_3 + 0x18)
            zmm0.d = zmm0.d f+ *(arg2 + 0x18)
            int32_t var_c4_1 = zmm8.d
            zmm1 = _mm_max_ss(zmm1.d, zmm0.d)
            float var_b4_1
            
            if (temp0_2[0] f> zmm1.d)
                var_b4_1 = zmm1.d
            else
                var_b4_1 = temp0_2[0]
            
            i += 1
            r10_2 = &r10_2[1]
            *arg2 = zmm10.d.o
            arg2[1].q = var_c0_1
            *(arg2 + 0x18) = var_b4_1
        while (i s< *(r8_3 + 0x10))

return arg2
