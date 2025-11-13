// 函数: sub_141a95e80
// 地址: 0x141a95e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg2
void* r14 = arg1

if (*(arg1 + 0x238) s> 0)
    int32_t i_2 = 0
    int64_t var_118 = 0
    int64_t var_110_1 = 0
    float zmm6_1[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    float zmm14_1[0x4]
    float zmm15_1[0x4]
    zmm6_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
        sub_141de8500(result, arg2 + 0x30, &var_118)
    *(r14 + 0x248) = 0
    
    if (*(r14 + 0x24c) s<= 0xffffffff)
        sub_1405dadb0(r14 + 0x240, 0)
    
    int32_t rax = *(r14 + 0x25c)
    *(r14 + 0x258) = 0
    
    if (rax s< 0 && rax != 0)
        sub_1405a5410(r14 + 0x250, 0)
    
    int32_t i = 0
    float zmm7_1[0x4] = 0x3f800000
    float var_48_1[0x4] = zmm6_1
    float var_68_1[0x4] = zmm8_1
    float var_78_1[0x4] = zmm9_1
    float var_168
    float var_158
    float var_148
    int32_t var_138
    uint64_t var_128[0x2]
    float var_f8[0x4]
    void var_e8
    float zmm0_1[0x4]
    float zmm1_1[0x4]
    float zmm2_1[0x4]
    
    if (*(r14 + 0x238) s> 0)
        float var_98_1[0x4] = zmm11_1
        int64_t r12_1 = 0
        zmm11_1 = 0x322bcc77
        int64_t r9_1 = 0
        float var_88_1[0x4] = zmm10_1
        float var_a8_1[0x4] = zmm12_1
        float var_b8_1[0x4] = zmm13_1
        float var_c8_1[0x4] = zmm14_1
        float var_d8_1[0x4] = zmm15_1
        var_128[0] = 0
        
        do
            zmm6_1 = data_14399f720
            zmm8_1 = zx.o(0)
            
            if (r12_1 s> 0)
                int64_t rcx_3 = *(r14 + 0x230)
                int64_t rdx_1 = var_118
                zmm14_1 = data_143dbb200
                zmm15_1 = data_143dbb1fc
                float zmm3_1[0x4] = data_143dbb1f8
                int64_t r8_3 = sx.q(*(rcx_3 + r9_1 + 0x10)) * 6
                int64_t rcx_4 = sx.q(*(rcx_3 + r9_1 - 4)) * 3
                zmm9_1 = *(rdx_1 + (r8_3 << 3) + 0x10)
                zmm12_1 = zmm9_1
                zmm13_1 = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55)
                zmm9_1 = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa)
                zmm1_1 = *(rdx_1 + rcx_4 * 0x10 + 0x10)
                uint32_t rcx_6 = zx.d(*(r14 + 0xe8))
                zmm12_1[0] = zmm12_1[0] - zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                zmm13_1[0] = zmm13_1[0] - zmm0_1[0]
                zmm9_1[0] = zmm9_1[0] - zmm1_1[0]
                zmm12_1[0] = zmm12_1[0] * zmm12_1[0]
                zmm13_1[0] = zmm13_1[0] * zmm13_1[0]
                zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
                zmm13_1[0] = zmm13_1[0] + zmm12_1[0]
                zmm13_1[0] = zmm13_1[0] + zmm9_1[0]
                float arg_20 = _mm_sqrt_ss(0, zmm13_1[0])[0]
                
                if (rcx_6 == 1)
                    zmm8_1 = data_14399f6e0.d
                    zmm6_1 = data_14399f6e0:4.d
                    zmm7_1 = data_14399f6e0:8.d
                    var_158 = zmm8_1[0]
                else if (rcx_6 == 2)
                    zmm8_1 = data_14399f6f0.d
                    zmm6_1 = data_14399f6f0:4.d
                    zmm7_1 = data_14399f6f0:8.d
                    var_158 = zmm8_1[0]
                else if (rcx_6 == 3)
                    zmm8_1 = data_14399f700.d
                    zmm6_1 = data_14399f700:4.d
                    zmm7_1 = data_14399f700:8.d
                    var_158 = zmm8_1[0]
                else
                    var_158 = zmm3_1[0]
                    zmm8_1 = zmm3_1
                    zmm6_1 = zmm15_1
                    zmm7_1 = zmm14_1
                
                float var_150_1 = zmm7_1[0]
                zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                zmm6_1[0] = zmm6_1[0] + zmm8_1[0]
                float var_154_1 = zmm6_1[0]
                zmm6_1[0] = zmm6_1[0] + zmm7_1[0]
                float arg_18
                float zmm5_1[0x4]
                
                if (not(zmm6_1[0] != 1f))
                    zmm0_1 = zx.o(var_158.q)
                    zmm7_1 = var_150_1
                    var_138.q = zmm0_1.q
                    zmm8_1 = var_138
                    zmm11_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                else if (zmm6_1[0] >= zmm11_1[0])
                    zmm5_1 = _mm_rsqrt_ss(zmm6_1[0], zmm6_1[0])
                    zmm2_1 = 0x3f000000
                    zmm6_1[0] = zmm6_1[0] * 0.5f
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm6_1[0] = zmm6_1[0] * zmm5_1[0]
                    zmm2_1[0] = 0.5f - zmm6_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm2_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm6_1[0] = zmm6_1[0] * zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * (0.5f - zmm6_1[0])
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm6_1[0] = zmm6_1[0] * zmm5_1[0]
                    arg_18 = zmm5_1[0]
                    zmm8_1[0] = zmm8_1[0] * zmm5_1[0]
                    zmm11_1 = zmm6_1
                    zmm7_1[0] = zmm7_1[0] * zmm5_1[0]
                else
                    zmm8_1 = zmm3_1
                    zmm11_1 = zmm15_1
                    zmm7_1 = zmm14_1
                
                zmm1_1 = *(rdx_1 + (r8_3 << 3))
                var_f8 = zmm1_1
                zmm6_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm2_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                float var_108_1[0x4] = zmm2_1
                zmm2_1[0] = zmm2_1[0] * zmm11_1[0]
                float zmm4_1 = zmm2_1[0] * zmm8_1[0]
                zmm6_1[0] = zmm6_1[0] * zmm7_1[0]
                zmm1_1[0] = zmm1_1[0] * zmm11_1[0]
                zmm6_1[0] = zmm6_1[0] - zmm2_1[0]
                zmm1_1[0] = zmm1_1[0] * zmm7_1[0]
                zmm4_1 = zmm4_1 - zmm1_1[0]
                zmm6_1[0] = zmm6_1[0] * zmm8_1[0]
                zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] - zmm6_1[0]
                zmm4_1 = zmm4_1 + zmm4_1
                zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
                zmm6_1[0] = zmm6_1[0] * zmm1_1[0]
                zmm0_1 = zmm2_1
                zmm2_1 = zmm6_1[0]
                zmm0_1[0] = zmm0_1[0] * zmm4_1
                zmm2_1[0] = zmm2_1[0] - zmm0_1[0]
                arg_18 = zmm2_1[0]
                zmm2_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                zmm2_1[0] = zmm2_1[0] * zmm6_1[0]
                zmm2_1[0] = zmm2_1[0] + zmm8_1[0]
                zmm8_1 = arg_18
                zmm8_1[0] = zmm8_1[0] + zmm2_1[0]
                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                zmm2_1[0] = zmm2_1[0] * zmm1_1[0]
                arg_18 = zmm8_1[0]
                var_108_1[0] = var_108_1[0] * zmm6_1[0]
                zmm2_1[0] = zmm2_1[0] + zmm7_1[0]
                zmm7_1 = arg_18
                zmm2_1[0] = zmm2_1[0] * zmm4_1
                var_108_1[0] = var_108_1[0] - zmm1_1[0]
                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                zmm2_1[0] = zmm2_1[0] + zmm11_1[0]
                zmm11_1 = 0x322bcc77
                var_108_1[0] = var_108_1[0] + zmm2_1[0]
                zmm8_1 = var_f8
                zmm8_1[0] = zmm8_1[0] * zmm4_1
                zmm8_1[0] = zmm8_1[0] - zmm6_1[0]
                zmm8_1[0] = zmm8_1[0] + zmm2_1[0]
                var_108_1[0] = var_108_1[0] * var_108_1[0]
                var_108_1[0] = var_108_1[0] + zmm7_1[0]
                zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
                var_108_1[0] = var_108_1[0] + zmm8_1[0]
                
                if (not(var_108_1[0] != 1f))
                    var_148 = zmm7_1[0]
                    float var_144_1 = var_108_1[0]
                    float var_140_1 = zmm8_1[0]
                    zmm0_1 = data_143dbb1f8
                else if (var_108_1[0] >= 9.99999994e-09f)
                    zmm3_1 = zx.o(0)
                    zmm2_1 = 0x3f000000
                    zmm3_1[0] = var_108_1[0]
                    zmm5_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                    zmm3_1[0] = zmm3_1[0] * 0.5f
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                    zmm2_1[0] = 0.5f - zmm3_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm2_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * (0.5f - zmm3_1[0])
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    arg_18 = zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm7_1[0]
                    zmm5_1[0] = zmm5_1[0] * var_108_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm8_1[0]
                    var_148 = zmm5_1[0]
                    float var_144_3 = zmm5_1[0]
                    float var_140_3 = zmm5_1[0]
                    zmm0_1 = data_143dbb1f8
                else
                    zmm0_1 = data_143dbb1f8
                    var_148 = zmm0_1[0]
                    float var_144_2 = zmm15_1[0]
                    float var_140_2 = zmm14_1[0]
                
                if (not(zmm13_1[0] != 1f))
                    float var_164_1 = zmm13_1[0]
                    float var_160_1 = zmm9_1[0]
                    var_168 = zmm12_1[0]
                else if (zmm13_1[0] >= 9.99999994e-09f)
                    zmm3_1 = zx.o(0)
                    zmm2_1 = 0x3f000000
                    zmm3_1[0] = zmm13_1[0]
                    zmm5_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
                    zmm3_1[0] = zmm3_1[0] * 0.5f
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                    zmm2_1[0] = 0.5f - zmm3_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm2_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * (0.5f - zmm3_1[0])
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    arg_18 = zmm5_1[0]
                    zmm12_1[0] = zmm12_1[0] * zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm13_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm9_1[0]
                    float var_164_3 = zmm5_1[0]
                    float var_160_3 = zmm5_1[0]
                    var_168 = zmm12_1[0]
                else
                    var_168 = zmm0_1[0]
                    float var_164_2 = zmm15_1[0]
                    float var_160_2 = zmm14_1[0]
                
                float (* rax_4)[0x4]
                rax_4, zmm7_1 = sub_140ad6660(&var_e8, &var_168, &var_148)
                zmm8_1 = arg_20
                zmm6_1 = *rax_4
            
            int64_t rsi_1 = sx.q(*(r14 + 0x248))
            int32_t rax_5 = (rsi_1 + 1).d
            *(r14 + 0x248) = rax_5
            
            if (rax_5 s> *(r14 + 0x24c))
                sub_1406105e0(r14 + 0x240)
            
            *(*(r14 + 0x240) + (rsi_1 << 2)) = zmm8_1[0]
            int64_t rsi_2 = sx.q(*(r14 + 0x258))
            int32_t rax_7 = (rsi_2 + 1).d
            *(r14 + 0x258) = rax_7
            
            if (rax_7 s> *(r14 + 0x25c))
                sub_1405a4f90(r14 + 0x250)
            
            int64_t rax_8 = *(r14 + 0x250)
            r9_1 = var_128[0] + 0x14
            i += 1
            r12_1 += 1
            var_128[0] = r9_1
            *(rax_8 + rsi_2 * 0x10) = zmm6_1
        while (i s< *(r14 + 0x238))
    
    int64_t* rbx_2 = r14 + 0x1c0
    rbx_2[1].d = 0
    
    if (*(rbx_2 + 0xc) != 0)
        sub_141846c50(rbx_2, 0)
    
    void* rsi_3 = r14 + 0x1d8
    *(rsi_3 + 8) = 0
    
    if (*(rsi_3 + 0xc) != 0)
        sub_1405a5310(rsi_3, 0)
    
    int64_t* rdi_2 = r14 + 0x1f0
    rdi_2[1].d = 0
    
    if (*(rdi_2 + 0xc) != 0)
        sub_141846c50(rdi_2, 0)
    
    float rax_9 = *(r14 + 0xec)
    
    if (rax_9 s<= 2)
        rax_9 = 2.80259693e-45f
    
    if (*(r14 + 0xe9) == 0 && rax_9 != *(r14 + 0x238))
        void* r13_1 = r14 + 0x148
        *(r13_1 + 8) = 0
        
        if (*(r13_1 + 0xc) != 0)
            sub_141846c50(r13_1, 0)
        
        var_158.q = r14 + 0x160
        *(r14 + 0x168) = 0
        
        if (*(r14 + 0x16c) != 0)
            sub_1405a5310(r14 + 0x160, 0)
        
        int64_t* r12_2 = r14 + 0x178
        r12_2[1].d = 0
        
        if (*(r12_2 + 0xc) != 0)
            sub_141846c50(r12_2, 0)
        
        int32_t rcx_20 = *(r14 + 0x238)
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_20 - 1))
        
        if (rcx_20 s> 0)
            int64_t rbx_3 = 0
            zmm7_1[0] = zmm7_1[0] / zmm0_1[0]
            int32_t i_1 = 0
            
            do
                int64_t rax_12 = *(r14 + 0x230)
                zmm6_1 = _mm_cvtepi32_ps(zx.o(i_1))
                int64_t rcx_21 = sx.q(*(rax_12 + rbx_3 + 0x10))
                zmm6_1[0] = zmm6_1[0] * zmm7_1[0]
                float rcx_22 = *(r13_1 + 8)
                void* rax_15 = rcx_21 * 0x30 + var_118
                var_128[0] = rax_15
                zmm1_1 = *(rax_15 + 0x10)
                var_168 = zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float var_160_4 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                float var_164_4 = zmm0_1[0]
                *(r13_1 + 8) = rcx_22 i+ 1
                
                if (rcx_22 i+ 1 s> *(r13_1 + 0xc))
                    sub_140ac0cd0(r13_1)
                
                float* rcx_25 = sx.q(rcx_22) * 0x2c + *r13_1
                *(rcx_25 + 4) = var_168.q
                rcx_25[3] = var_160_4
                *rcx_25 = zmm6_1[0]
                *(rcx_25 + 0x10) = data_143dbb1f8.q
                rcx_25[6] = data_143dbb200
                *(rcx_25 + 0x1c) = data_143dbb1f8.q
                rcx_25[9] = data_143dbb200
                rcx_25[0xa].b = 1
                float rcx_26 = *(r14 + 0x168)
                zmm8_1 = *var_128[0]
                *(r14 + 0x168) = rcx_26 i+ 1
                
                if (rcx_26 i+ 1 s> *(r14 + 0x16c))
                    sub_1405c5060(r14 + 0x160)
                
                uint64_t rax_24 = var_128[0]
                float* rcx_30 = sx.q(rcx_26) * 0x50 + *(r14 + 0x160)
                *rcx_30 = zmm6_1[0]
                *(rcx_30 + 0x10) = zmm8_1
                *(rcx_30 + 0x20) = data_14399f720
                *(rcx_30 + 0x30) = data_14399f720
                rcx_30[0x10].b = 0
                zmm2_1 = *(rax_24 + 0x20)
                float rcx_31 = r12_2[1].d
                zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                var_148 = zmm2_1[0]
                zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                float var_144_4 = zmm0_1[0]
                float var_140_4 = zmm2_1[0]
                r12_2[1].d = rcx_31 i+ 1
                
                if (rcx_31 i+ 1 s> *(r12_2 + 0xc))
                    sub_140ac0cd0(r12_2)
                
                i_1 += 1
                rbx_3 += 0x14
                float* rcx_34 = sx.q(rcx_31) * 0x2c + *r12_2
                *(rcx_34 + 4) = var_148.q
                rcx_34[3] = var_140_4
                *rcx_34 = zmm6_1[0]
                *(rcx_34 + 0x10) = data_143dbb1f8.q
                rcx_34[6] = data_143dbb200
                *(rcx_34 + 0x1c) = data_143dbb1f8.q
                rcx_34[9] = data_143dbb200
                rcx_34[0xa].b = 1
            while (i_1 s< *(r14 + 0x238))
            
            rbx_2 = r14 + 0x1c0
            rdi_2 = r14 + 0x1f0
            rsi_3 = r14 + 0x1d8
        
        var_138 = 0x3f800000
        int32_t var_134_1 = 0x3f800000
        int32_t var_130_2 = 0x3f800000
        float zmm7_2 = sub_141f771f0(r13_1, 0, 0, 0xa, 0, zx.o(0)[0], &var_138)
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_9 - 1))
        
        if (rax_9 s> 0)
            int64_t* r14_1 = var_158.q
            zmm7_2 = zmm7_2 / zmm0_1[0]
            var_138.q = 0
            int32_t var_130_3 = 0
            var_168.q = 0
            int32_t var_160_5 = 0
            var_f8 = data_142d3f660
            
            do
                uint128_t zmm6_2
                zmm6_2.d = _mm_cvtepi32_ps(zx.o(i_2)).d f* zmm7_2
                uint64_t* rax_31
                float zmm6_3[0x4]
                rax_31, zmm6_3 = sub_141a1d730(r13_1, &var_148, zmm6_2, &var_138)
                uint64_t* r8_5 = rax_31
                var_158.q = rax_31
                float rax_32 = rbx_2[1].d
                rbx_2[1].d = rax_32 i+ 1
                
                if (rax_32 i+ 1 s> *(rbx_2 + 0xc))
                    sub_140ac0cd0(rbx_2)
                    r8_5 = var_158.q
                
                int32_t* rdx_11 = sx.q(rax_32) * 0x2c + *rbx_2
                *rdx_11 = zmm6_3[0]
                *(rdx_11 + 4) = *r8_5
                rdx_11[3] = r8_5[1].d
                *(rdx_11 + 0x10) = data_143dbb1f8.q
                rdx_11[6] = data_143dbb200
                *(rdx_11 + 0x1c) = data_143dbb1f8.q
                rdx_11[9] = data_143dbb200
                rdx_11[0xa].b = 1
                int128_t* rax_36
                uint128_t zmm6_4
                rax_36, zmm6_4 = sub_141a7fc30(r14_1, &var_e8, zmm6_3, &var_f8)
                var_158.q = rax_36
                float rax_37 = *(rsi_3 + 8)
                *(rsi_3 + 8) = rax_37 i+ 1
                
                if (rax_37 i+ 1 s> *(rsi_3 + 0xc))
                    sub_1405c5060(rsi_3)
                
                int32_t* rdx_16 = sx.q(rax_37) * 0x50 + *rsi_3
                *rdx_16 = zmm6_4.d
                *(rdx_16 + 0x10) = *var_158.q
                *(rdx_16 + 0x20) = data_14399f720
                *(rdx_16 + 0x30) = data_14399f720
                rdx_16[0x10].b = 0
                uint64_t* rax_39
                rax_39, zmm6_2, zmm7_2 = sub_141a1d730(r12_2, &var_128, zmm6_4, &var_168)
                uint64_t* r8_6 = rax_39
                var_158.q = rax_39
                float rax_40 = rdi_2[1].d
                rdi_2[1].d = rax_40 i+ 1
                
                if (rax_40 i+ 1 s> *(rdi_2 + 0xc))
                    sub_140ac0cd0(rdi_2)
                    r8_6 = var_158.q
                
                i_2 += 1
                int32_t* rdx_20 = sx.q(rax_40) * 0x2c + *rdi_2
                *rdx_20 = zmm6_2.d
                *(rdx_20 + 4) = *r8_6
                rdx_20[3] = r8_6[1].d
                *(rdx_20 + 0x10) = data_143dbb1f8.q
                rdx_20[6] = data_143dbb200
                *(rdx_20 + 0x1c) = data_143dbb1f8.q
                rdx_20[9] = data_143dbb200
                rdx_20[0xa].b = 1
            while (i_2 s< rax_9)
            
            r14 = arg1
        
        bool cond:2_1 = *(r13_1 + 0xc) == 0
        *(r13_1 + 8) = 0
        
        if (not(cond:2_1))
            sub_141846c50(r13_1, 0)
        
        bool cond:3_1 = *(r14 + 0x16c) == 0
        *(r14 + 0x168) = 0
        
        if (not(cond:3_1))
            sub_1405a5310(r14 + 0x160, 0)
        
        r12_2[1].d = 0
        
        if (*(r12_2 + 0xc) != 0)
            sub_141846c50(r12_2, 0)
    else if (*(r14 + 0x238) s> 0)
        void* rcx_52 = nullptr
        void* arg_8 = nullptr
        
        do
            int64_t rax_44 = *(r14 + 0x230)
            int64_t r13_2 = sx.q(rbx_2[1].d)
            zmm6_1 = _mm_cvtepi32_ps(zx.o(i_2))
            int32_t rax_45 = (r13_2 + 1).d
            float (* r12_5)[0x4] = sx.q(*(rax_44 + rcx_52 + 0x10)) * 0x30 + var_118
            zmm1_1 = r12_5[1]
            var_168 = zmm1_1[0]
            zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            float var_160_6 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            float var_164_5 = zmm0_1[0]
            rbx_2[1].d = rax_45
            
            if (rax_45 s> *(rbx_2 + 0xc))
                sub_140ac0cd0(rbx_2)
            
            float* rcx_56 = r13_2 * 0x2c + *rbx_2
            *(rcx_56 + 4) = var_168.q
            rcx_56[3] = var_160_6
            *rcx_56 = zmm6_1[0]
            *(rcx_56 + 0x10) = data_143dbb1f8.q
            rcx_56[6] = data_143dbb200
            *(rcx_56 + 0x1c) = data_143dbb1f8.q
            rcx_56[9] = data_143dbb200
            rcx_56[0xa].b = 1
            int64_t r13_3 = sx.q(*(rsi_3 + 8))
            zmm7_1 = *r12_5
            int32_t rax_49 = (r13_3 + 1).d
            *(rsi_3 + 8) = rax_49
            
            if (rax_49 s> *(rsi_3 + 0xc))
                sub_1405c5060(rsi_3)
            
            float* rcx_61 = r13_3 * 0x50 + *rsi_3
            *rcx_61 = zmm6_1[0]
            *(rcx_61 + 0x10) = zmm7_1
            *(rcx_61 + 0x20) = data_14399f720
            *(rcx_61 + 0x30) = data_14399f720
            rcx_61[0x10].b = 0
            zmm2_1 = r12_5[2]
            int64_t r13_4 = sx.q(rdi_2[1].d)
            zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            var_148 = zmm2_1[0]
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            int32_t rax_50 = (r13_4 + 1).d
            float var_144_5 = zmm0_1[0]
            float var_140_5 = zmm2_1[0]
            rdi_2[1].d = rax_50
            
            if (rax_50 s> *(rdi_2 + 0xc))
                sub_140ac0cd0(rdi_2)
            
            i_2 += 1
            float* rcx_64 = r13_4 * 0x2c + *rdi_2
            *(rcx_64 + 4) = var_148.q
            rcx_64[3] = var_140_5
            *rcx_64 = zmm6_1[0]
            *(rcx_64 + 0x10) = data_143dbb1f8.q
            rcx_64[6] = data_143dbb200
            *(rcx_64 + 0x1c) = data_143dbb1f8.q
            rcx_64[9] = data_143dbb200
            rcx_64[0xa].b = 1
            rcx_52 = arg_8 + 0x14
            arg_8 = rcx_52
        while (i_2 s< *(r14 + 0x238))
    
    var_138 = 0x3f800000
    int32_t var_134_2 = 0x3f800000
    int32_t var_130_4 = 0x3f800000
    sub_141f771f0(rbx_2, 0, 0, 0xa, 0, zx.o(0)[0], &var_138)
    *(r14 + 0x228) = sub_141f68030(rbx_2)
    int512_t zmm6_5
    int512_t zmm8_2
    int512_t zmm9_2
    result, zmm6_5, zmm8_2, zmm9_2 = sub_141f56760(rbx_2, r14 + 0x1b0, 0x3f000000)
    int64_t rcx_69 = var_118
    zmm9_2.o = var_78_1
    zmm8_2.o = var_68_1
    zmm6_5.o = var_48_1
    
    if (rcx_69 != 0)
        return sub_140a74f90(rcx_69)

return result
