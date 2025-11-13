// 函数: sub_1421db0a0
// 地址: 0x1421db0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = arg2
uint64_t rax_11
uint128_t zmm0
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (zmm2.d f!= 0f)
    void* rdx_1 = arg1[4]
    uint128_t zmm9 = 0x3f800000
    
    if (rdx_1 == 0 || zmm2.d f!= 1f)
        void* r11_1 = arg1[3]
        void* r9 = arg1[5]
        void* rbx_1 = arg1[2]
        void* rdi_1 = *arg1
        int32_t var_140_1
        float var_13c_1
        uint64_t var_108_1
        int32_t var_100_1
        int32_t var_f4_1
        uint64_t var_e0_1
        int32_t rax_32
        
        if (rbx_1 == 0)
            rbx_1 = rdx_1
            var_108_1 = *(rdx_1 + 0x10)
            var_e0_1 = *(r9 + 0x28)
            var_140_1 = (*(r9 + 0x40)).d
            var_f4_1 = (*(r9 + 0x14)).d
            zmm0.d = (*(rdx_1 + 0x50)).d f* *(rdi_1 + 0x38)
            var_100_1 = *(rdx_1 + 0x18)
            rax_32 = *(r9 + 0x30)
            var_13c_1 = zmm0.d
            zmm0 = *(rdx_1 + 0x60)
        else
            zmm0 = zx.o(*(rbx_1 + 0x10))
            zmm3 = *(r11_1 + 0x40)
            int32_t rax_31 = *(rbx_1 + 0x18)
            arg2 = *(rbx_1 + 0x50)
            arg2[0] = arg2[0] f* *(rdi_1 + 0x38)
            var_100_1 = rax_31
            rax_32 = *(r11_1 + 0x30)
            var_108_1 = zmm0.q
            var_140_1 = zmm3.d
            var_e0_1 = *(r11_1 + 0x28)
            zmm0 = *(rbx_1 + 0x60)
            var_13c_1 = arg2[0]
            var_f4_1 = (*(r11_1 + 0x14)).d
        
        void* r8 = arg1[8]
        uint128_t zmm12 = data_143a2ef88
        uint128_t var_d0_1 = zmm0
        uint64_t var_178_1
        int32_t var_160_1
        uint64_t var_130_1
        int32_t var_128_1
        float var_118_1
        int32_t var_f8_1
        int32_t rax_35
        void* rcx_13
        uint128_t zmm11
        
        if (r8 == 0)
            r8 = arg1[6]
            zmm11 = zmm12
            rcx_13 = arg1[7]
            var_130_1 = *(r8 + 0x10)
            var_178_1 = *(rcx_13 + 0x28)
            var_f8_1 = (*(rcx_13 + 0x40)).d
            var_160_1 = (*(rcx_13 + 0x14)).d
            zmm0.d = (*(r8 + 0x50)).d f* *(rdi_1 + 0x38)
            var_128_1 = *(r8 + 0x18)
            rax_35 = *(rcx_13 + 0x30)
            var_118_1 = zmm0.d
        else
            void* rcx_12 = arg1[9]
            zmm0 = zx.o(*(r8 + 0x10))
            int32_t rax_34 = *(r8 + 0x18)
            arg2 = *(r8 + 0x50)
            zmm3 = *(rcx_12 + 0x40)
            arg2[0] = arg2[0] f* *(rdi_1 + 0x38)
            var_128_1 = rax_34
            rax_35 = *(rcx_12 + 0x30)
            var_f8_1 = zmm3.d
            var_130_1 = zmm0.q
            rcx_13 = arg1[7]
            var_160_1 = (*(rcx_12 + 0x14)).d
            var_118_1 = arg2[0]
            var_178_1 = *(rcx_12 + 0x28)
            zmm11 = *(rcx_13 + 0x44)
        
        zmm4 = *(r9 + 0x44)
        int32_t var_180_1 = zmm11.d
        uint128_t zmm7
        zmm7.d = zmm4.d f+ zmm11.d
        uint128_t var_f0_1 = *(r8 + 0x60)
        
        if (r11_1 != 0)
            zmm12 = *(r11_1 + 0x44)
        
        zmm12.d = zmm12.d f+ zmm7.d
        arg2 = 0x7fffffff
        uint128_t zmm10 = 0x322bcc77
        zmm3.d = zmm7.d f- zmm11.d
        void* rax_37 = arg1[6]
        uint128_t zmm15
        zmm15.d = zmm7.d f- zmm12.d
        zmm4 ^= 0x80000000
        uint128_t zmm6 = zmm11 ^ 0x80000000
        int32_t var_120_1 = zmm4.d
        zmm3.d = zmm3.d f* zmm2.d
        zmm5 = zmm7 ^ 0x80000000
        int32_t var_17c_1 = zmm6.d
        zmm2.d = zmm11.d f- zmm12.d
        int32_t var_158_1 = zmm15.d
        int32_t var_198_1 = zmm5.d
        uint128_t zmm8
        zmm8.d = zmm3.d f+ zmm11.d
        uint128_t zmm13 = _mm_and_ps(zmm15, 0x7fffffff)
        int32_t var_138_1 = zmm8.d
        int32_t var_188_1 = zmm2.d
        int32_t var_15c_1 = zmm13.d
        int32_t var_194_1
        int32_t var_190_1
        float var_18c_1
        float var_184_1
        int32_t var_168_1
        int32_t var_150_3
        int32_t var_14c_3
        int32_t var_11c_2
        int64_t var_108_2
        float arg_10
        int32_t r11_2
        float zmm14[0x4]
        
        if (zmm13.d f<= 9.99999994e-09f)
        label_1421db924:
            r11_2 = *(rdx_1 + 0x18)
            zmm3.d = zmm8.d f- zmm12.d
            var_108_2 = *(rdx_1 + 0x10)
            zmm0.d = zmm7.d f- zmm8.d
            zmm12.d = zmm8.d f- zmm7.d
            zmm7.d = zmm11.d f- zmm8.d
            var_18c_1 = zmm3.d
            var_184_1 = zmm0.d
            zmm0.d = zmm8.d f- zmm11.d
            arg_10 = zmm12.d
            var_168_1 = zmm7.d
            var_194_1 = zmm0.d
            zmm0 = zmm8
            zmm8 = zx.o(var_108_2)
            var_190_1 = (zmm0 ^ 0x80000000).d
            var_14c_3 = r11_2.d
            var_150_3 = _mm_shuffle_ps(zmm8, zmm8, 0x55).d
            var_11c_2 = zmm8.d.d
        else
            if (_mm_and_ps(zmm4, 0x7fffffff).d f<= 9.99999994e-09f)
                goto label_1421db924
            
            if (_mm_and_ps(zmm6, 0x7fffffff).d f<= 9.99999994e-09f)
                goto label_1421db924
            
            if (_mm_and_ps(zmm2, 0x7fffffff).d f<= 9.99999994e-09f)
                goto label_1421db924
            
            if (_mm_and_ps(zmm5, 0x7fffffff).d f<= 9.99999994e-09f)
                goto label_1421db924
            
            zmm3 ^= data_142d3f780
            arg2 = zmm8
            zmm2 = *(rdx_1 + 0x14)
            arg2[0] = arg2[0] f- zmm12.d
            zmm5 = *(rax_37 + 0x14)
            zmm0.d = 1f f/ zmm15.d
            zmm15 = *(rdx_1 + 0x10)
            var_18c_1 = arg2[0]
            zmm14 = arg2
            zmm14[0] = zmm14[0] f* zmm0.d
            arg2 = zmm7
            arg2[0] = arg2[0] f- zmm8.d
            int32_t var_150_1 = zmm5.d
            var_168_1 = zmm3.d
            var_184_1 = arg2[0]
            zmm13.d = arg2.d f* zmm0.d
            arg2 = 0x3f800000
            arg2[0] = 1f f/ zmm4.d
            zmm0.d = zmm8.d f- zmm7.d
            zmm12.d = zmm3.d f* arg2[0]
            zmm7 = *(rax_37 + 0x18)
            zmm8 = zmm7
            int32_t var_14c_1 = zmm7.d
            zmm7 = zmm3
            zmm11 = zmm0
            arg_10 = zmm0.d
            zmm0 = *(rax_37 + 0x10)
            zmm11.d = zmm11.d f* arg2[0]
            int32_t var_11c_1 = zmm0.d
            arg2 = 0x3f800000
            arg2[0] = 1f f/ zmm6.d
            zmm10.d = zmm0.d f* zmm11.d
            zmm0.d = zmm15.d f* zmm12.d
            zmm5.d = zmm5.d f* zmm11.d
            zmm10.d = zmm10.d f+ zmm0.d
            zmm8.d = zmm8.d f* zmm11.d
            zmm0.d = zmm2.d f* zmm12.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm0.d = (*(rdx_1 + 0x18)).d f* zmm12.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm0 = var_138_1
            zmm2 = zmm0
            zmm0 ^= data_142d3f780
            zmm2.d = zmm2.d f- var_180_1
            zmm4 = zmm0
            var_190_1 = zmm0.d
            zmm0.d = 1f f/ var_188_1
            zmm6.d = zmm2.d f* arg2[0]
            zmm4.d = zmm4.d f* arg2[0]
            arg2 = 0x3f800000
            arg2[0] = 1f f/ var_198_1
            zmm9.d = var_18c_1.d f* zmm0.d
            zmm3.d = var_190_1.d f* arg2[0]
            zmm7.d = zmm7.d f* zmm0.d
            zmm0.d = zmm6.d f* var_130_1:4.d
            var_194_1 = zmm2.d
            zmm2.d = arg_10.d f* arg2[0]
            arg2 = var_150_1
            arg2[0] = arg2[0] f* zmm4.d
            arg2[0] = arg2[0] f+ zmm0.d
            zmm0.d = zmm3.d f* zmm5.d
            arg2[0] = arg2[0] f* zmm2.d
            arg2[0] = arg2[0] f+ zmm0.d
            arg2[0] = arg2[0] f* zmm11.d
            float var_150_2 = arg2[0]
            arg2 = var_14c_1
            arg2[0] = arg2[0] f* zmm4.d
            zmm0.d = zmm6.d f* var_128_1
            zmm6.d = zmm6.d f* var_130_1.d
            arg2[0] = arg2[0] f+ zmm0.d
            zmm15.d = zmm15.d f* zmm14[0]
            zmm0 = zmm3
            zmm3.d = zmm3.d f* zmm10.d
            zmm0.d = zmm0.d f* zmm8.d
            arg2[0] = arg2[0] f* zmm2.d
            arg2[0] = arg2[0] f+ zmm0.d
            zmm0.d = var_108_1:4.d.d f* zmm13.d
            arg2[0] = arg2[0] f* zmm11.d
            float var_14c_2 = arg2[0]
            arg2 = *(rdx_1 + 0x14)
            arg2[0] = arg2[0] * zmm14[0]
            arg2[0] = arg2[0] f+ zmm0.d
            zmm0.d = zmm9.d f* zmm5.d
            zmm5.d = (*(rdx_1 + 0x18)).d f* zmm14[0]
            arg2[0] = arg2[0] f* zmm7.d
            arg2[0] = arg2[0] f+ zmm0.d
            zmm0.d = var_100_1.d f* zmm13.d
            zmm5.d = zmm5.d f+ zmm0.d
            arg2[0] = arg2[0] f* zmm12.d
            zmm0 = zmm9
            zmm9.d = zmm9.d f* zmm10.d
            zmm10 = 0x322bcc77
            zmm0.d = zmm0.d f* zmm8.d
            zmm8.d = var_11c_1.d f* zmm4.d
            zmm4 = var_120_1
            zmm8.d = zmm8.d f+ zmm6.d
            zmm5.d = zmm5.d f* zmm7.d
            zmm6 = var_17c_1
            zmm5.d = zmm5.d f+ zmm0.d
            zmm8.d = zmm8.d f* zmm2.d
            zmm0.d = var_108_1.d.d f* zmm13.d
            zmm13 = var_15c_1
            zmm8.d = zmm8.d f+ zmm3.d
            zmm3 = var_18c_1
            zmm15.d = zmm15.d f+ zmm0.d
            zmm5.d = zmm5.d f* zmm12.d
            zmm8.d = zmm8.d f* zmm11.d
            zmm15.d = zmm15.d f* zmm7.d
            zmm7 = var_168_1
            zmm15.d = zmm15.d f+ zmm9.d
            zmm9 = 0x3f800000
            zmm15.d = zmm15.d f* zmm12.d
            zmm12 = arg_10
            zmm8.d = zmm8.d f+ zmm15.d
            zmm15 = var_158_1
            var_11c_2 = zmm8.d
            zmm0.d = zmm8[0]
            zmm8.d = var_150_2.d f+ arg2[0]
            arg2 = zmm0
            float temp0_9[0x4] = _mm_shuffle_ps(arg2, arg2, 0xe1)
            var_150_3 = zmm8.d
            temp0_9[0] = zmm8.d
            zmm2 = var_188_1
            zmm8.d = var_14c_2.d f+ zmm5.d
            zmm5 = var_198_1
            var_108_2 = (_mm_shuffle_ps(temp0_9, temp0_9, 0xe1)).q
            arg2 = 0x7fffffff
            r11_2 = zmm8.d
            var_14c_3 = zmm8.d
        
        int32_t var_164_3
        
        if (zmm13.d f<= zmm10.d)
        label_1421dbc47:
            arg2 = zx.o(*(r9 + 0x28))
            int32_t rax_38 = *(r9 + 0x30)
            zmm0 = arg2
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm7 = zmm0
            zmm6 = rax_38
            zmm11 = arg2.q.d
            var_164_3 = zmm0.d
        else
            if (_mm_and_ps(zmm4, arg2).d f<= zmm10.d)
                goto label_1421dbc47
            
            if (_mm_and_ps(zmm6, arg2).d f<= zmm10.d)
                goto label_1421dbc47
            
            if (_mm_and_ps(zmm2, arg2).d f<= zmm10.d)
                goto label_1421dbc47
            
            if (_mm_and_ps(zmm5, arg2).d f<= zmm10.d)
                goto label_1421dbc47
            
            zmm2 = *(rcx_13 + 0x2c)
            zmm11 = *(r9 + 0x2c)
            arg2 = zmm3
            zmm3 = *(rcx_13 + 0x30)
            zmm14 = *(rcx_13 + 0x28)
            zmm13 = *(r9 + 0x30)
            zmm0.d = zmm9.d f/ zmm15.d
            zmm15 = *(r9 + 0x28)
            arg2[0] = arg2[0] f* zmm0.d
            float var_110_1 = arg2[0]
            arg2 = var_184_1
            arg2[0] = arg2[0] f* zmm0.d
            float var_154_1 = arg2[0]
            arg2 = zmm9
            arg2[0] = arg2[0] f/ zmm4.d
            zmm5.d = zmm12.d f* arg2[0]
            arg2[0] = arg2[0] f* zmm7.d
            int32_t var_114_2 = zmm5.d
            zmm14[0] = zmm14[0] f* zmm5.d
            zmm0.d = zmm15.d f* arg2[0]
            float var_148_1 = arg2[0]
            zmm4.d = zmm2.d f* zmm5.d
            zmm14[0] = zmm14[0] f+ zmm0.d
            zmm8.d = zmm3.d f* zmm5.d
            zmm5.d = zmm9.d f/ var_188_1
            zmm0.d = zmm11.d f* arg2[0]
            zmm4.d = zmm4.d f+ zmm0.d
            zmm0.d = zmm13.d f* arg2[0]
            arg2 = zmm9
            arg2[0] = arg2[0] f/ zmm6.d
            zmm8.d = zmm8.d f+ zmm0.d
            zmm10.d = var_190_1.d f* arg2[0]
            zmm0.d = zmm9.d f/ var_198_1
            zmm2.d = zmm2.d f* zmm10.d
            zmm12.d = var_194_1.d f* arg2[0]
            zmm9.d = var_190_1.d f* zmm0.d
            arg2 = zmm12
            zmm6.d = var_18c_1.d f* zmm5.d
            arg2[0] = arg2[0] f* var_178_1:4.d
            zmm5.d = zmm5.d f* zmm7.d
            arg2[0] = arg2[0] f+ zmm2.d
            zmm7.d = arg_10.d f* zmm0.d
            zmm0.d = zmm9.d f* zmm4.d
            arg2[0] = arg2[0] f* zmm7.d
            zmm3.d = zmm3.d f* zmm10.d
            arg2[0] = arg2[0] f+ zmm0.d
            zmm0.d = zmm9.d f* zmm8.d
            float var_164_1 = arg2[0]
            zmm2.d = arg2.d f* var_114_2
            int32_t var_164_2 = zmm2.d
            zmm2.d = zmm12.d f* rax_35
            zmm2.d = zmm2.d f+ zmm3.d
            zmm3 = var_110_1
            zmm11.d = zmm11.d f* zmm3.d
            zmm2.d = zmm2.d f* zmm7.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f* var_114_2
            int32_t var_144_1 = zmm2.d
            zmm2.d = var_154_1.d f* var_e0_1:4.d
            zmm2.d = zmm2.d f+ zmm11.d
            zmm2.d = zmm2.d f* zmm5.d
            zmm12.d = zmm12.d f* var_178_1.d
            zmm11 = var_154_1
            arg2 = zmm11
            zmm0.d = zmm6.d f* zmm4.d
            zmm11.d = zmm11.d f* var_e0_1.d
            arg2[0] = arg2[0] f* rax_32
            zmm2.d = zmm2.d f+ zmm0.d
            zmm4 = var_148_1
            zmm0.d = zmm6.d f* zmm8.d
            zmm6.d = zmm6.d f* zmm14[0]
            zmm13.d = zmm13.d f* zmm3.d
            zmm15.d = zmm15.d f* zmm3.d
            arg2[0] = arg2[0] f+ zmm13.d
            zmm9.d = zmm9.d f* zmm14[0]
            zmm13 = var_15c_1
            zmm11.d = zmm11.d f+ zmm15.d
            zmm2.d = zmm2.d f* zmm4.d
            arg2[0] = arg2[0] f* zmm5.d
            zmm11.d = zmm11.d f* zmm5.d
            arg2[0] = arg2[0] f+ zmm0.d
            zmm0.d = (*(rcx_13 + 0x28)).d f* zmm10.d
            zmm10 = 0x322bcc77
            zmm11.d = zmm11.d f+ zmm6.d
            zmm12.d = zmm12.d f+ zmm0.d
            arg2[0] = arg2[0] f* zmm4.d
            zmm11.d = zmm11.d f* zmm4.d
            zmm12.d = zmm12.d f* zmm7.d
            zmm6.d = var_144_1.d f+ arg2[0]
            zmm7.d = var_164_2.d f+ zmm2.d
            zmm12.d = zmm12.d f+ zmm9.d
            var_164_3 = zmm7.d
            zmm12.d = zmm12.d f* var_114_2
            zmm11.d = zmm11.d f+ zmm12.d
        
        int32_t var_154_2 = zmm11.d
        zmm2.d = zmm7.d f* zmm7.d
        zmm0.d = zmm11.d f* zmm11.d
        arg2 = zmm6
        arg2[0] = arg2[0] f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        int32_t var_144_2 = zmm6.d
        zmm2.d = zmm2.d f+ arg2[0]
        
        if (not(zmm2.d f<= zmm10.d))
            zmm3.d = zmm2.d
            zmm4 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0.d = zmm4.d f* zmm4.d
            arg2 = zmm3
            arg2[0] = arg2[0] f* zmm0.d
            zmm2.d = 0.5f - arg2[0]
            zmm0.d = zmm4.d f* zmm2.d
            zmm4.d = zmm4.d f+ zmm0.d
            arg2 = zmm4
            arg2[0] = arg2[0] f* zmm4.d
            zmm3.d = zmm3.d f* arg2[0]
            zmm5.d = 0.5f f- zmm3.d
            zmm0.d = zmm4.d f* zmm5.d
            zmm4.d = zmm4.d f+ zmm0.d
            zmm11.d = zmm11.d f* zmm4.d
            zmm7.d = zmm7.d f* zmm4.d
            zmm6.d = zmm6.d f* zmm4.d
            var_154_2 = zmm11.d
            var_164_3 = zmm7.d
            var_144_2 = zmm6.d
            int32_t var_148_2 = zmm4.d
        
        zmm14 = var_120_1
        int32_t var_140_2
        
        if (zmm13.d f<= zmm10.d)
        label_1421dbeae:
            zmm13 = var_168_1
            zmm12 = 0x3f800000
            zmm3 = arg_10
            var_140_2 = (*(r9 + 0x40)).d
        else
            zmm0 = _mm_and_ps(zmm14, 0x7fffffff)
            
            if (zmm0.d f<= zmm10.d)
                goto label_1421dbeae
            
            zmm2 = var_17c_1
            zmm0 = _mm_and_ps(zmm2, 0x7fffffff)
            
            if (zmm0.d f<= zmm10.d)
                goto label_1421dbeae
            
            zmm15 = var_188_1
            zmm0 = _mm_and_ps(zmm15, 0x7fffffff)
            
            if (zmm0.d f<= zmm10.d)
                goto label_1421dbeae
            
            zmm0 = _mm_and_ps(var_198_1, 0x7fffffff)
            
            if (zmm0.d f<= zmm10.d)
                goto label_1421dbeae
            
            zmm12 = 0x3f800000
            zmm3 = *(rcx_13 + 0x40)
            zmm13 = var_168_1
            arg2 = 0x3f800000
            zmm7 = zmm3
            arg2[0] = 1f f/ zmm2.d
            zmm0.d = 1f / zmm14[0]
            zmm2.d = 1f f/ var_198_1
            zmm4.d = arg_10.d f* zmm0.d
            zmm5.d = 1f f/ zmm15.d
            zmm8.d = 1f f/ var_158_1
            zmm15.d = var_190_1.d f* arg2[0]
            zmm9.d = zmm0.d f* zmm13.d
            zmm15.d = zmm15.d f* zmm3.d
            zmm3 = arg_10
            zmm0.d = zmm9.d f* *(r9 + 0x40)
            zmm7.d = zmm7.d f* zmm4.d
            zmm7.d = zmm7.d f+ zmm0.d
            zmm0.d = var_194_1.d f* arg2[0]
            arg2 = var_190_1
            arg2[0] = arg2[0] f* zmm2.d
            zmm0.d = zmm0.d f* var_f8_1
            arg2[0] = arg2[0] f* zmm7.d
            zmm15.d = zmm15.d f+ zmm0.d
            zmm0.d = zmm3.d f* zmm2.d
            zmm15.d = zmm15.d f* zmm0.d
            zmm0.d = var_184_1.d f* zmm8.d
            zmm15.d = zmm15.d f+ arg2[0]
            arg2 = var_18c_1
            arg2[0] = arg2[0] f* zmm5.d
            zmm0.d = zmm0.d f* var_140_1
            zmm2.d = arg2.d f* zmm8.d
            arg2[0] = arg2[0] f* zmm7.d
            zmm2.d = zmm2.d f* *(r9 + 0x40)
            zmm15.d = zmm15.d f* zmm4.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = zmm5.d f* zmm13.d
            zmm2.d = zmm2.d f* zmm0.d
            zmm2.d = zmm2.d f+ arg2[0]
            zmm2.d = zmm2.d f* zmm9.d
            zmm15.d = zmm15.d f+ zmm2.d
            var_140_2 = zmm15.d
        
        arg2 = var_15c_1
        
        if (arg2[0] f<= zmm10.d)
            zmm15 = *(r9 + 0x14)
            zmm4 = arg_10
        else
            zmm0 = _mm_and_ps(zmm14, 0x7fffffff)
            
            if (zmm0.d f<= zmm10.d)
                zmm15 = *(r9 + 0x14)
                zmm4 = arg_10
            else
                zmm2 = var_17c_1
                zmm0 = _mm_and_ps(zmm2, 0x7fffffff)
                
                if (zmm0.d f<= zmm10.d)
                    zmm15 = *(r9 + 0x14)
                    zmm4 = arg_10
                else
                    zmm5 = var_188_1
                    zmm0 = _mm_and_ps(zmm5, 0x7fffffff)
                    
                    if (zmm0.d f<= zmm10.d)
                        zmm15 = *(r9 + 0x14)
                        zmm4 = arg_10
                    else
                        zmm15 = var_198_1
                        zmm0 = _mm_and_ps(zmm15, 0x7fffffff)
                        
                        if (zmm0.d f<= zmm10.d)
                            zmm15 = *(r9 + 0x14)
                            zmm4 = arg_10
                        else
                            arg2 = var_190_1
                            zmm4.d = zmm12.d f/ var_158_1
                            zmm7 = *(rcx_13 + 0x14)
                            zmm9 = zmm3
                            zmm6.d = zmm12.d f/ zmm14[0]
                            zmm3.d = zmm12.d f/ zmm2.d
                            zmm9.d = zmm9.d f* zmm6.d
                            zmm2.d = zmm12.d f/ zmm5.d
                            zmm6.d = zmm6.d f* zmm13.d
                            zmm5.d = zmm12.d f/ zmm15.d
                            zmm0.d = zmm7.d f* zmm9.d
                            zmm15.d = zmm4.d f* var_18c_1
                            zmm4.d = zmm4.d f* var_184_1
                            zmm15.d = zmm15.d f* *(r9 + 0x14)
                            zmm4.d = zmm4.d f* var_f4_1
                            zmm8.d = zmm6.d f* *(r9 + 0x14)
                            zmm15.d = zmm15.d f+ zmm4.d
                            zmm4 = arg_10
                            zmm8.d = zmm8.d f+ zmm0.d
                            zmm0 = zmm2
                            zmm2.d = zmm2.d f* var_18c_1
                            zmm0.d = zmm0.d f* zmm13.d
                            zmm2.d = zmm2.d f* zmm8.d
                            zmm15.d = zmm15.d f* zmm0.d
                            zmm0.d = arg2.d f* zmm3.d
                            zmm15.d = zmm15.d f+ zmm2.d
                            arg2[0] = arg2[0] f* zmm5.d
                            zmm2.d = var_194_1.d f* zmm3.d
                            zmm0.d = zmm0.d f* zmm7.d
                            zmm2.d = zmm2.d f* var_160_1
                            arg2[0] = arg2[0] f* zmm8.d
                            zmm2.d = zmm2.d f+ zmm0.d
                            zmm15.d = zmm15.d f* zmm6.d
                            zmm0.d = zmm4.d f* zmm5.d
                            zmm2.d = zmm2.d f* zmm0.d
                            zmm2.d = zmm2.d f+ arg2[0]
                            arg2 = var_15c_1
                            zmm2.d = zmm2.d f* zmm9.d
                            zmm15.d = zmm15.d f+ zmm2.d
        
        bool cond:4_1 = arg2[0] f<= zmm10.d
        zmm9 = var_17c_1
        *arg6 = zmm15.d
        void* rcx_14 = arg1[6]
        zmm15 = var_188_1
        zmm5 = *(*arg1 + 0x38)
        zmm2.d = zmm5.d f* *(arg1[4] + 0x50)
        int32_t var_148_3 = zmm2.d
        
        if (cond:4_1)
        label_1421dc1b4:
            zmm8 = zmm2
            zmm13.d = var_180_1.d f- var_138_1
            zmm2 = var_18c_1
            var_168_1 = zmm13.d
        else
            zmm0 = _mm_and_ps(zmm14, 0x7fffffff)
            
            if (zmm0.d f<= zmm10.d)
                goto label_1421dc1b4
            
            zmm0 = _mm_and_ps(zmm9, 0x7fffffff)
            
            if (zmm0.d f<= zmm10.d)
                goto label_1421dc1b4
            
            zmm0 = _mm_and_ps(zmm15, 0x7fffffff)
            
            if (zmm0.d f<= zmm10.d)
                goto label_1421dc1b4
            
            zmm8 = var_198_1
            zmm0 = _mm_and_ps(zmm8, 0x7fffffff)
            
            if (zmm0.d f<= zmm10.d)
                goto label_1421dc1b4
            
            zmm5.d = zmm5.d f* *(rcx_14 + 0x50)
            zmm7.d = zmm12.d f/ zmm14[0]
            int32_t var_160_2 = zmm5.d
            arg2 = zmm12
            zmm6.d = zmm12.d f/ var_158_1
            arg2[0] = arg2[0] f/ zmm9.d
            zmm3.d = zmm7.d f* zmm4.d
            zmm7.d = zmm7.d f* zmm13.d
            zmm4.d = zmm12.d f/ zmm15.d
            zmm0.d = zmm3.d f* var_160_2
            zmm5.d = zmm7.d f* zmm2.d
            zmm2.d = zmm12.d f/ zmm8.d
            arg2[0] = arg2[0] f* var_194_1
            zmm8.d = arg2.d f* var_190_1
            zmm5.d = zmm5.d f+ zmm0.d
            arg2[0] = arg2[0] * var_118_1
            zmm0 = zmm2
            zmm2.d = zmm2.d f* var_190_1
            zmm8.d = zmm8.d f* var_160_2
            zmm0.d = zmm0.d f* arg_10
            zmm8.d = zmm8.d f+ arg2[0]
            zmm2.d = zmm2.d f* zmm5.d
            arg2 = zmm6
            zmm6.d = zmm6.d f* var_184_1
            zmm8.d = zmm8.d f* zmm0.d
            zmm6.d = zmm6.d f* var_13c_1
            zmm8.d = zmm8.d f+ zmm2.d
            zmm0.d = zmm4.d f* zmm13.d
            zmm2 = var_18c_1
            arg2[0] = arg2[0] f* zmm2.d
            zmm4.d = zmm4.d f* zmm2.d
            arg2[0] = arg2[0] f* var_148_3
            zmm4.d = zmm4.d f* zmm5.d
            arg2[0] = arg2[0] f+ zmm6.d
            zmm8.d = zmm8.d f* zmm3.d
            arg2[0] = arg2[0] f* zmm0.d
            arg2[0] = arg2[0] f+ zmm4.d
            arg2[0] = arg2[0] f* zmm7.d
            zmm8.d = zmm8.d f+ arg2[0]
            arg2 = var_15c_1
        
        bool cond:5_1 = arg2[0] f<= zmm10.d
        *arg7 = zmm8.d
        void* rcx_15 = arg1[6]
        void* rax_43 = arg1[4]
        
        if (not(cond:5_1))
            zmm0 = _mm_and_ps(zmm14, 0x7fffffff)
        
        if (cond:5_1 || zmm0.d f<= zmm10.d)
            zmm9 = var_198_1
            zmm2 = *(rax_43 + 0x60)
        else
            zmm0 = zmm9
            zmm9 = var_198_1
            
            if (_mm_and_ps(zmm0, 0x7fffffff).d f<= zmm10.d)
                zmm2 = *(rax_43 + 0x60)
            else if (_mm_and_ps(zmm15, 0x7fffffff).d f<= zmm10.d)
                zmm2 = *(rax_43 + 0x60)
            else if (_mm_and_ps(zmm9, 0x7fffffff).d f<= zmm10.d)
                zmm2 = *(rax_43 + 0x60)
            else
                zmm3 = *(rax_43 + 0x60)
                zmm0.d = zmm12.d f/ var_158_1
                arg2 = var_184_1
                zmm6 = zmm12
                zmm4 = *(rax_43 + 0x64)
                zmm10 = *(rcx_15 + 0x60)
                zmm11 = *(rcx_15 + 0x64)
                zmm5 = *(rax_43 + 0x68)
                zmm12 = *(rcx_15 + 0x68)
                zmm8 = *(rax_43 + 0x6c)
                arg2[0] = arg2[0] f* zmm0.d
                zmm9.d = zmm0.d f* zmm2.d
                float var_180_2 = arg2[0]
                arg2 = zmm10
                zmm6.d = zmm6.d f/ zmm14[0]
                zmm14 = *(rcx_15 + 0x6c)
                zmm2.d = arg_10.d f* zmm6.d
                zmm6.d = zmm6.d f* zmm13.d
                arg2[0] = arg2[0] f* zmm2.d
                zmm0.d = zmm3.d f* zmm6.d
                zmm13.d = zmm11.d f* zmm2.d
                arg2[0] = arg2[0] f+ zmm0.d
                zmm15.d = zmm14.d f* zmm2.d
                int32_t var_110_2 = zmm2.d
                zmm0.d = zmm4.d f* zmm6.d
                float var_138_2 = arg2[0]
                arg2 = zmm12
                arg2[0] = arg2[0] f* zmm2.d
                zmm13.d = zmm13.d f+ zmm0.d
                int32_t var_118_2 = zmm6.d
                zmm0.d = zmm5.d f* zmm6.d
                int32_t var_148_4 = zmm13.d
                arg2[0] = arg2[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm6.d
                zmm15.d = zmm15.d f+ zmm0.d
                float var_13c_2 = arg2[0]
                arg2 = 0x3f800000
                arg2[0] = 1f f/ var_17c_1
                zmm0.d = var_180_2.d f* var_d0_1.d
                zmm2.d = 1f f/ var_188_1
                var_178_1.o = zmm0
                zmm7.d = var_194_1.d f* arg2[0]
                zmm0.d = zmm9.d f* zmm3.d
                zmm6.d = var_190_1.d f* arg2[0]
                arg2 = zmm2
                arg2[0] = arg2[0] * var_18c_1
                zmm3.d = var_178_1.o.d f+ zmm0.d
                zmm2.d = zmm2.d f* var_168_1
                zmm0.d = var_138_2.d f* arg2[0]
                zmm3.d = zmm3.d f* zmm2.d
                zmm3.d = zmm3.d f+ zmm0.d
                zmm0.d = zmm9.d f* zmm4.d
                var_178_1.o = zmm3
                zmm3.d = var_180_2.d f* var_d0_1:4.d
                zmm3.d = zmm3.d f+ zmm0.d
                zmm0.d = zmm13.d f* arg2[0]
                zmm3.d = zmm3.d f* zmm2.d
                zmm3.d = zmm3.d f+ zmm0.d
                int32_t var_160_3 = zmm3.d
                zmm3 = var_180_2
                zmm13 = zmm3
                zmm3.d = zmm3.d f* var_d0_1:0xc.d
                zmm13.d = zmm13.d f* var_d0_1:8.d
                zmm0.d = zmm9.d f* zmm5.d
                zmm9.d = zmm9.d f* zmm8.d
                zmm13.d = zmm13.d f+ zmm0.d
                zmm5.d = var_f0_1:4.d.d f* zmm7.d
                zmm8.d = zmm3.d f+ zmm9.d
                zmm9 = var_198_1
                zmm0.d = var_13c_2.d f* arg2[0]
                zmm13.d = zmm13.d f* zmm2.d
                zmm8.d = zmm8.d f* zmm2.d
                zmm13.d = zmm13.d f+ zmm0.d
                zmm2.d = var_f0_1.d.d f* zmm7.d
                zmm0.d = zmm15.d f* arg2[0]
                arg2 = 0x3f800000
                zmm4.d = var_f0_1:8.d.d f* zmm7.d
                zmm8.d = zmm8.d f+ zmm0.d
                int32_t var_180_3 = zmm3.d
                zmm3.d = var_f0_1:0xc.d.d f* zmm7.d
                arg2[0] = 1f f/ zmm9.d
                zmm10.d = zmm10.d f* zmm6.d
                zmm0.d = arg_10.d f* arg2[0]
                zmm2.d = zmm2.d f+ zmm10.d
                zmm11.d = zmm11.d f* zmm6.d
                zmm10 = 0x322bcc77
                zmm12.d = zmm12.d f* zmm6.d
                zmm14[0] = zmm14[0] f* zmm6.d
                zmm5.d = zmm5.d f+ zmm11.d
                zmm4.d = zmm4.d f+ zmm12.d
                zmm2.d = zmm2.d f* zmm0.d
                zmm5.d = zmm5.d f* zmm0.d
                zmm3.d = zmm3.d f+ zmm14[0]
                zmm4.d = zmm4.d f* zmm0.d
                zmm3.d = zmm3.d f* zmm0.d
                zmm0.d = var_190_1.d f* arg2[0]
                arg2 = var_13c_2
                arg2[0] = arg2[0] f* zmm0.d
                zmm7.d = var_138_2.d f* zmm0.d
                zmm6.d = var_148_4.d f* zmm0.d
                zmm4.d = zmm4.d f+ arg2[0]
                arg2 = var_118_2
                zmm7.d = zmm7.d f+ zmm2.d
                zmm15.d = zmm15.d f* zmm0.d
                zmm5.d = zmm5.d f+ zmm6.d
                zmm0 = var_110_2
                zmm2.d = var_178_1.o.d f* arg2[0]
                zmm7.d = zmm7.d f* zmm0.d
                zmm3.d = zmm3.d f+ zmm15.d
                zmm4.d = zmm4.d f* zmm0.d
                zmm2.d = zmm2.d f+ zmm7.d
                zmm5.d = zmm5.d f* zmm0.d
                zmm3.d = zmm3.d f* zmm0.d
                _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                zmm0.d = var_160_3.d f* arg2[0]
                zmm13.d = zmm13.d f* arg2[0]
                zmm8.d = zmm8.d f* arg2[0]
                zmm0.d = zmm0.d f+ zmm5.d
                arg2 = var_15c_1
                zmm13.d = zmm13.d f+ zmm4.d
                zmm8.d = zmm8.d f+ zmm3.d
                zmm2.d = zmm0.d
                _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                zmm2.d = zmm13.d
                _mm_shuffle_ps(zmm2, zmm2, 0x27)
                zmm2.d = zmm8.d
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
        
        *arg8 = zmm2
        
        if (arg9 != 0)
            int64_t rcx_16 = arg1[4]
            int32_t* rdx_3 = sx.q(*(*arg1 + 0x94))
            int64_t rax_46 = arg1[6]
            zmm6 = *(rdx_3 + rcx_16)
            zmm4 = *(rdx_3 + rcx_16 + 4)
            zmm7 = *(rdx_3 + rcx_16 + 8)
            zmm8 = *(rdx_3 + rcx_16 + 0xc)
            
            if (arg2[0] f<= zmm10.d)
            label_1421dc898:
                var_178_1.d = zmm6.d
                var_178_1:4.d = zmm4.d
                int32_t var_170_7 = zmm7.d
                int32_t var_16c_2 = zmm8.d
            else
                zmm2 = var_120_1
                
                if (_mm_and_ps(zmm2, 0x7fffffff).d f<= zmm10.d)
                    goto label_1421dc898
                
                zmm3 = var_17c_1
                
                if (_mm_and_ps(zmm3, 0x7fffffff).d f<= zmm10.d)
                    goto label_1421dc898
                
                zmm5 = var_188_1
                
                if (_mm_and_ps(zmm5, 0x7fffffff).d f<= zmm10.d)
                    goto label_1421dc898
                
                if (_mm_and_ps(zmm9, 0x7fffffff).d f<= zmm10.d)
                    goto label_1421dc898
                
                zmm0.d = 1f f/ var_158_1
                arg2 = var_184_1
                zmm14 = var_18c_1
                arg2[0] = arg2[0] f* zmm0.d
                zmm14[0] = zmm14[0] f* zmm0.d
                float var_184_2 = arg2[0]
                arg2 = 0x3f800000
                arg2[0] = 1f f/ zmm2.d
                zmm2 = var_168_1
                zmm10.d = arg_10.d f* arg2[0]
                zmm13.d = zmm2.d f* arg2[0]
                arg2 = var_194_1
                zmm12.d = zmm10.d f* *(rdx_3 + rax_46)
                zmm11.d = zmm10.d f* *(rdx_3 + rax_46 + 4)
                zmm0.d = zmm13.d f* zmm6.d
                zmm9.d = zmm10.d f* *(rdx_3 + rax_46 + 8)
                zmm8.d = zmm10.d f* *(rdx_3 + rax_46 + 0xc)
                zmm12.d = zmm12.d f+ zmm0.d
                zmm0.d = zmm13.d f* zmm4.d
                zmm11.d = zmm11.d f+ zmm0.d
                zmm0.d = zmm13.d f* zmm7.d
                zmm7.d = zmm14.d f* zmm6.d
                zmm6.d = zmm14.d f* *(rdx_3 + rcx_16 + 4)
                zmm9.d = zmm9.d f+ zmm0.d
                zmm0.d = zmm13.d f* *(rdx_3 + rcx_16 + 0xc)
                zmm8.d = zmm8.d f+ zmm0.d
                zmm0.d = 1f f/ zmm3.d
                arg2[0] = arg2[0] f* zmm0.d
                zmm4.d = var_190_1.d f* zmm0.d
                float var_194_2 = arg2[0]
                arg2 = 0x3f800000
                arg2[0] = 1f f/ zmm5.d
                zmm14[0] = zmm14[0] f* *(rdx_3 + rcx_16 + 0xc)
                zmm5.d = zmm14.d f* *(rdx_3 + rcx_16 + 8)
                zmm3.d = var_18c_1.d f* arg2[0]
                zmm2.d = zmm2.d f* arg2[0]
                arg2 = var_184_2
                zmm0.d = arg2.d f* *(rdx_3 + rbx_1)
                zmm7.d = zmm7.d f+ zmm0.d
                zmm0.d = zmm3.d f* zmm12.d
                zmm7.d = zmm7.d f* zmm2.d
                zmm7.d = zmm7.d f+ zmm0.d
                zmm0.d = arg2.d f* *(rdx_3 + rbx_1 + 4)
                zmm6.d = zmm6.d f+ zmm0.d
                zmm0.d = zmm3.d f* zmm11.d
                zmm6.d = zmm6.d f* zmm2.d
                zmm6.d = zmm6.d f+ zmm0.d
                zmm0.d = arg2.d f* *(rdx_3 + rbx_1 + 8)
                arg2[0] = arg2[0] f* *(rdx_3 + rbx_1 + 0xc)
                zmm5.d = zmm5.d f+ zmm0.d
                zmm0.d = zmm3.d f* zmm9.d
                zmm14[0] = zmm14[0] + arg2[0]
                zmm3.d = zmm3.d f* zmm8.d
                zmm5.d = zmm5.d f* zmm2.d
                zmm14[0] = zmm14[0] f* zmm2.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm14[0] = zmm14[0] f+ zmm3.d
                zmm15.d = 1f f/ var_198_1
                arg2 = arg_10
                zmm0.d = zmm4.d f* *(rdx_3 + rax_46)
                zmm2 = var_194_2
                arg2[0] = arg2[0] f* zmm15.d
                zmm3.d = zmm2.d f* *(rdx_3 + r8)
                zmm2.d = zmm2.d f* *(rdx_3 + r8 + 4)
                zmm3.d = zmm3.d f+ zmm0.d
                arg_10 = arg2[0]
                zmm7.d = zmm7.d f* zmm13.d
                zmm0.d = zmm4.d f* *(rdx_3 + rax_46 + 4)
                zmm3.d = zmm3.d f* arg2[0]
                zmm2.d = zmm2.d f+ zmm0.d
                zmm6.d = zmm6.d f* zmm13.d
                zmm5.d = zmm5.d f* zmm13.d
                zmm0.d = zmm4.d f* *(rdx_3 + rax_46 + 8)
                zmm4.d = zmm4.d f* *(rdx_3 + rax_46 + 0xc)
                zmm2.d = zmm2.d f* arg2[0]
                arg2 = var_194_2
                arg2[0] = arg2[0] f* *(rdx_3 + r8 + 8)
                zmm14[0] = zmm14[0] f* zmm13.d
                arg2[0] = arg2[0] f+ zmm0.d
                zmm0.d = var_194_2.d f* *(rdx_3 + r8 + 0xc)
                arg2[0] = arg2[0] * arg_10
                zmm0.d = zmm0.d f+ zmm4.d
                zmm4.d = zmm0.d f* arg_10
                zmm0.d = var_190_1.d f* zmm15.d
                zmm12.d = zmm12.d f* zmm0.d
                zmm11.d = zmm11.d f* zmm0.d
                zmm9.d = zmm9.d f* zmm0.d
                zmm12.d = zmm12.d f+ zmm3.d
                zmm8.d = zmm8.d f* zmm0.d
                zmm11.d = zmm11.d f+ zmm2.d
                zmm9.d = zmm9.d f+ arg2[0]
                zmm12.d = zmm12.d f* zmm10.d
                zmm8.d = zmm8.d f+ zmm4.d
                zmm11.d = zmm11.d f* zmm10.d
                zmm9.d = zmm9.d f* zmm10.d
                zmm7.d = zmm7.d f+ zmm12.d
                zmm6.d = zmm6.d f+ zmm11.d
                zmm8.d = zmm8.d f* zmm10.d
                zmm5.d = zmm5.d f+ zmm9.d
                var_178_1.d = zmm7.d
                zmm14[0] = zmm14[0] f+ zmm8.d
                var_178_1:4.d = zmm6.d
                int32_t var_170_6 = zmm5.d
                float var_16c_1 = zmm14[0]
            
            *arg9 = var_178_1.o
        
        zmm0 = var_140_2
        zmm6 = var_11c_2
        zmm8 = var_14c_3
        arg2 = zmm6
        zmm7 = var_150_3
        zmm3.d = var_154_2.d f* zmm0.d
        zmm5.d = var_164_3.d f* zmm0.d
        zmm4.d = var_144_2.d f* zmm0.d
        arg2[0] = arg2[0] f- zmm3.d
        zmm3.d = zmm3.d f+ zmm6.d
        zmm0.d = zmm8.d f- zmm4.d
        zmm2.d = zmm7.d f- zmm5.d
        zmm5.d = zmm5.d f+ zmm7.d
        zmm4.d = zmm4.d f+ zmm8.d
        int32_t var_170_8 = zmm0.d
        zmm0 = _mm_unpacklo_ps(zmm3, zmm5.q)
        *arg4 = (_mm_unpacklo_ps(arg2, zmm2.q)).q
        arg4[1].d = var_170_8
        *arg5 = zmm0.q
        rax_11 = zx.q(zmm4.d)
        arg5[1].d = rax_11.d
        *arg3 = var_108_2
        arg3[1].d = r11_2
    else
        void* rax_17 = arg1[5]
        zmm4 = *(rax_17 + 0x40)
        zmm5.d = zmm4.d f* *(rax_17 + 0x28)
        zmm3.d = zmm4.d f* *(rax_17 + 0x2c)
        zmm4.d = zmm4.d f* *(rax_17 + 0x30)
        *arg3 = *(rdx_1 + 0x10)
        arg3[1].d = *(rdx_1 + 0x18)
        void* rax_19 = arg1[4]
        arg2 = *(rax_19 + 0x10)
        zmm0 = *(rax_19 + 0x18)
        arg2[0] = arg2[0] f- zmm5.d
        zmm0.d = zmm0.d f- zmm4.d
        zmm2.d = (*(rax_19 + 0x14)).d f- zmm3.d
        *arg4 = (_mm_unpacklo_ps(arg2, zmm2.q)).q
        arg4[1].d = zmm0.d
        void* rax_21 = arg1[4]
        zmm5.d = zmm5.d f+ *(rax_21 + 0x10)
        zmm3.d = zmm3.d f+ *(rax_21 + 0x14)
        zmm4.d = zmm4.d f+ *(rax_21 + 0x18)
        *arg5 = (_mm_unpacklo_ps(zmm5, zmm3.q)).q
        arg5[1].d = zmm4.d
        *arg6 = *(arg1[5] + 0x14)
        zmm0.d = (*(arg1[4] + 0x50)).d f* *(*arg1 + 0x38)
        *arg7 = zmm0.d
        rax_11 = arg1[4]
        *arg8 = *(rax_11 + 0x60)
        
        if (arg9 != 0)
            int32_t* rcx_11 = sx.q(*(*arg1 + 0x94)) + arg1[4]
            *arg9 = *rcx_11
            arg9[1] = rcx_11[1]
            arg9[2] = rcx_11[2]
            rax_11 = zx.q(rcx_11[3])
            arg9[3] = rax_11.d
else
    void* rax = arg1[7]
    zmm4 = *(rax + 0x40)
    zmm5.d = zmm4.d f* *(rax + 0x28)
    zmm3.d = zmm4.d f* *(rax + 0x2c)
    zmm4.d = zmm4.d f* *(rax + 0x30)
    void* rax_1 = arg1[6]
    *arg3 = *(rax_1 + 0x10)
    arg3[1].d = *(rax_1 + 0x18)
    void* rax_3 = arg1[6]
    arg2 = *(rax_3 + 0x10)
    zmm0 = *(rax_3 + 0x18)
    arg2[0] = arg2[0] f- zmm5.d
    zmm0.d = zmm0.d f- zmm4.d
    zmm2.d = (*(rax_3 + 0x14)).d f- zmm3.d
    *arg4 = (_mm_unpacklo_ps(arg2, zmm2.q)).q
    arg4[1].d = zmm0.d
    void* rax_5 = arg1[6]
    zmm5.d = zmm5.d f+ *(rax_5 + 0x10)
    zmm3.d = zmm3.d f+ *(rax_5 + 0x14)
    zmm4.d = zmm4.d f+ *(rax_5 + 0x18)
    *arg5 = (_mm_unpacklo_ps(zmm5, zmm3.q)).q
    arg5[1].d = zmm4.d
    *arg6 = *(arg1[7] + 0x14)
    zmm0.d = (*(arg1[6] + 0x50)).d f* *(*arg1 + 0x38)
    *arg7 = zmm0.d
    rax_11 = arg1[6]
    *arg8 = *(rax_11 + 0x60)
    
    if (arg9 != 0)
        int32_t* rcx_5 = sx.q(*(*arg1 + 0x94)) + arg1[6]
        *arg9 = *rcx_5
        arg9[1] = rcx_5[1]
        arg9[2] = rcx_5[2]
        int32_t rax_16 = rcx_5[3]
        arg9[3] = rax_16
        return rax_16
return rax_11
