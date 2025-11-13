// 函数: sub_14213b110
// 地址: 0x14213b110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
int128_t var_38 = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
float zmm9[0x4]
float var_58[0x4] = zmm9
(*(*arg1 + 0x1d8))(arg1, &data_1439a9478)

if ((arg1[5].b & 1) == 0)
    sub_14213a8c0(arg1, arg2 + 8, arg3)
else
    int32_t rax_1
    rax_1, arg3 = sub_140b4e7c0(arg1, &data_1439a9478)
    
    if (rax_1 s< 0x17)
        void* var_c0 = nullptr
        int32_t var_b8_1 = 0
        void** const var_c8_1 = &data_1432dbc88
        char var_b0_1 = 0
        sub_14213e620(&var_c0, arg1, 0, arg3)
        *(arg2 + 0x10) = 0
        int32_t rcx_2 = var_b8_1
        
        if (rcx_2 s> *(arg2 + 0x14))
            sub_1405a52a0(arg2 + 8, rcx_2)
            rcx_2 = var_b8_1
        
        char r8_1 = var_c0.b
        void* rdx_2 = var_c0
        void* rbx_1
        
        if ((r8_1 & 1) == 0)
            rbx_1 = rdx_2
        else
            rbx_1 = &var_c0 + (rdx_2 s>> 1)
        
        void var_5f
        
        if ((r8_1 & 1) != 0)
            rdx_2 = &var_5f + (rdx_2 s>> 1) - 0x61
        void* i = rdx_2 + sx.q(rcx_2) * 0x24
        
        if (rbx_1 != i)
            zmm8 = data_143280740
            zmm9 = data_142d3f7e0
            void* rbx_2 = rbx_1 + 0x20
            
            do
                int64_t r14_1 = sx.q(*(arg2 + 0x10))
                uint64_t var_a8_1 = *(rbx_2 - 0x20)
                int32_t var_a0_1 = *(rbx_2 - 0x18)
                float temp0_5[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_cvtepi32_ps(_mm_unpacklo_epi16(
                            _mm_unpacklo_epi8(zx.o(*(rbx_2 - 0x14)), 0), 0)), 
                        zmm8), 
                    zmm9)
                arg3.o = temp0_5
                int32_t var_d0 = _mm_shuffle_ps(temp0_5, temp0_5, 0xaa).d
                arg3.o = _mm_shuffle_ps(arg3.o, temp0_5, 0x55)
                uint128_t zmm0_1 = _mm_unpacklo_ps(temp0_5, arg3.q)
                arg3.o = zx.o(*(rbx_2 - 0x10))
                arg3.o = _mm_unpacklo_epi8(arg3.o, 0)
                arg3.o = _mm_unpacklo_epi16(arg3.o, 0)
                float temp0_11[0x4] = _mm_cvtepi32_ps(arg3.o)
                int32_t var_94_1 = var_d0
                int32_t rax_7 = (r14_1 + 1).d
                uint64_t var_9c_1 = zmm0_1.q
                zmm0_1 = *(rbx_2 - 0xc)
                *(arg2 + 0x10) = rax_7
                float temp0_13[0x4] = _mm_add_ps(_mm_mul_ps(temp0_11, zmm8), zmm9)
                
                if (rax_7 s> *(arg2 + 0x14))
                    sub_1405c4fe0(arg2 + 8)
                
                int64_t rax_8 = *(arg2 + 8)
                rbx_2 += 0x24
                arg3.o = var_9c_1:4.o
                int64_t rcx_7 = r14_1 << 6
                *(rcx_7 + rax_8) = var_a8_1.o
                *(rcx_7 + rax_8 + 0x10) = arg3.o
                *(rcx_7 + rax_8 + 0x20) = temp0_13
                *(rcx_7 + rax_8 + 0x30) = zmm0_1
            while (rbx_2 - 0x20 != i)
        
        sub_140a1d5c0(&var_c0)
    else if ((arg1[5].b & 1) == 0)
        sub_14213a8c0(arg1, arg2 + 8, arg3)
    else
        int32_t rax_10
        rax_10, arg3 = sub_140b4e7c0(arg1, &data_1439a9478)
        
        if (rax_10 s>= 0x1a)
            sub_14213a8c0(arg1, arg2 + 8, arg3)
        else
            void* var_d8 = nullptr
            float var_d0_1 = 0f
            sub_14213e830(&var_d8, arg1, 0, arg3)
            int64_t r14_2 = sx.q(var_d0_1)
            *(arg2 + 0x10) = 0
            
            if (r14_2.d s> *(arg2 + 0x14))
                sub_1405a52a0(arg2 + 8, r14_2.d)
            
            void* r15_1 = var_d8
            void* i_1 = r15_1 + r14_2 * 0x24
            
            if (r15_1 != i_1)
                zmm8 = data_143280740
                void* rbx_3 = r15_1 + 0x20
                zmm9 = data_142d3f7e0
                
                do
                    int64_t r14_3 = sx.q(*(arg2 + 0x10))
                    int64_t var_a8_2 = *(rbx_3 - 0x20)
                    int32_t var_a0_2 = *(rbx_3 - 0x18)
                    float temp0_18[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_cvtepi32_ps(_mm_unpacklo_epi16(
                                _mm_unpacklo_epi8(zx.o(*(rbx_3 - 0x14)), 0), 0)), 
                            zmm8), 
                        zmm9)
                    arg3.o = temp0_18
                    var_d0_1 = _mm_shuffle_ps(temp0_18, temp0_18, 0xaa)[0]
                    arg3.o = _mm_shuffle_ps(arg3.o, temp0_18, 0x55)
                    float temp0_21[0x4] = _mm_unpacklo_ps(temp0_18, arg3.q)
                    arg3.o = zx.o(*(rbx_3 - 0x10))
                    arg3.o = _mm_unpacklo_epi8(arg3.o, 0)
                    arg3.o = _mm_unpacklo_epi16(arg3.o, 0)
                    float temp0_24[0x4] = _mm_cvtepi32_ps(arg3.o)
                    float var_94_2 = var_d0_1
                    int32_t rax_13 = (r14_3 + 1).d
                    int64_t var_9c_2 = temp0_21.q
                    float zmm0_2[0x4] = *(rbx_3 - 0xc)
                    *(arg2 + 0x10) = rax_13
                    float temp0_26[0x4] = _mm_add_ps(_mm_mul_ps(temp0_24, zmm8), zmm9)
                    
                    if (rax_13 s> *(arg2 + 0x14))
                        sub_1405c4fe0(arg2 + 8)
                    
                    int64_t rax_14 = *(arg2 + 8)
                    rbx_3 += 0x24
                    arg3.o = var_9c_2:4.o
                    float (* rdx_9)[0x4] = r14_3 << 6
                    *(rdx_9 + rax_14) = var_a8_2.o
                    *(rdx_9 + rax_14 + 0x10) = arg3.o
                    *(rdx_9 + rax_14 + 0x20) = temp0_26
                    *(rdx_9 + rax_14 + 0x30) = zmm0_2
                while (rbx_3 - 0x20 != i_1)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)

return arg1
