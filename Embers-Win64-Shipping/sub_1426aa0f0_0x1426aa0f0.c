// 函数: sub_1426aa0f0
// 地址: 0x1426aa0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
void* rax_1 = (*(*arg1 + 0x150))()

if (rax_1 != 0)
    int64_t* r12_1 = *(rax_1 + 0x120)
    
    if (r12_1 != 0)
        void* rax_2 = sub_14269bba0()
        void* rdx = r12_1[2]
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            void* rdi_1
            
            if (((arg2[4].d u>> 2).b & 1) == 0)
                rdi_1 = r12_1[6]
            else
                rsi = *r12_1 + 0x2b0
                void var_188
                int64_t rax_8 = (*(arg1[0x44] + 0x18))(&arg1[0x44], &var_188)
                rdi_1 = (*rsi)(r12_1, (*(arg1[0x44] + 0x10))(&arg1[0x44]), rax_8, &data_143dbb1f8)
                rsi.b = 0
            
            if (rdi_1 != 0)
                int32_t var_280_1 = arg2[2].d
                uint8_t rax_14 = (arg2[4].d u>> 1).b
                uint64_t var_288 = arg2[1]
                float var_1e8[0x4]
                
                if ((rax_14 & 1) != 0)
                    void* rbx_2 = *arg2
                    void* rax_16
                    
                    if (rbx_2 != 0)
                        rax_16 = sub_140d21950(rbx_2, sub_142548ca0())
                    
                    int32_t rax_22
                    uint128_t zmm0_1
                    float zmm1[0x4]
                    
                    if (rbx_2 == 0 || rax_16 == 0)
                        void* const rax_23
                        
                        if ((arg2[4].b & 2) == 0)
                            rax_23 = nullptr
                        else
                            rax_23 = *arg2
                        
                        void* rcx_8 = *(rax_23 + 0x130)
                        int32_t* rax_24
                        
                        if (rcx_8 == 0)
                            int32_t var_270_2 = data_143dbb200
                            uint64_t var_278
                            rax_24 = &var_278
                            var_278 = data_143dbb1f8.q
                        else
                            zmm1 = *(rcx_8 + 0x1d0)
                            float var_258
                            rax_24 = &var_258
                            var_258 = zmm1[0]
                            zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                            float var_168_1[0x4] = zmm1
                            float var_250_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                            int32_t var_254_1 = zmm0_1.d
                        
                        zmm0_1 = zx.o(*rax_24)
                        rax_22 = rax_24[2]
                    else
                        int32_t var_268
                        (*(*rax_16 + 0x28))(rax_16, &var_268, arg1)
                        void* const rax_18
                        
                        if ((arg2[4].b & 2) == 0)
                            rax_18 = nullptr
                        else
                            rax_18 = *arg2
                        
                        void* rcx_6 = *(rax_18 + 0x130)
                        int128_t* rax_19
                        
                        if (rcx_6 == 0)
                            uint128_t var_1b8
                            rax_19 = &var_1b8
                            var_1b8 = data_142d3f660
                        else
                            uint128_t var_1c8
                            rax_19 = &var_1c8
                            var_1c8 = *(rcx_6 + 0x1c0)
                        
                        float zmm12[0x4] = *rax_19
                        void var_17c
                        float (* rax_21)[0x4] = (*(*rax_16 + 0x18))(rax_16, &var_17c)
                        zmm12[0] = zmm12[0] * 2f
                        int32_t var_23c_1 = 0x3f800000
                        int32_t var_1fc_1 = 0x3f800000
                        int32_t var_22c_1 = 0
                        float temp0_1[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                        float temp0_2[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                        temp0_1[0] = temp0_1[0] * 2f
                        int32_t var_21c_1 = 0
                        arg4 = temp0_2[0] * 2f
                        int32_t var_20c_1 = 0
                        float temp0_3[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                        zmm12[0] = zmm12[0] * zmm12[0]
                        int64_t var_1f8_1 = 0
                        temp0_2[0] = temp0_2[0] * arg4
                        int32_t var_1f0_1 = 0
                        temp0_1[0] = temp0_1[0] * temp0_1[0]
                        temp0_3[0] = temp0_3[0] * zmm12[0]
                        temp0_3[0] = temp0_3[0] * temp0_1[0]
                        zmm0_1.d = temp0_1.d f+ temp0_2[0]
                        zmm12[0] = zmm12[0] * arg4
                        temp0_2[0] = temp0_2[0] + zmm12[0]
                        zmm12[0] = zmm12[0] * temp0_1[0]
                        temp0_1[0] = temp0_1[0] + zmm12[0]
                        temp0_3[0] = temp0_3[0] * arg4
                        arg4 = (*rax_21)[2]
                        int128_t zmm14
                        zmm14.d = 1f f- zmm0_1.d
                        float zmm13[0x4] = zmm12
                        zmm0_1 = zmm12[0]
                        zmm13[0] = zmm13[0] - temp0_3[0]
                        zmm0_1.d = zmm0_1.d f- temp0_3[0]
                        temp0_2[0] = temp0_2[0] * temp0_1[0]
                        temp0_3[0] = temp0_3[0] + zmm12[0]
                        float zmm4_1[0x4] = (*rax_21)[1]
                        temp0_3[0] = temp0_3[0] + zmm12[0]
                        float zmm7[0x4] = *rax_21
                        float arg_8 = zmm0_1.d
                        zmm0_1 = var_268
                        var_1e8 = temp0_3
                        zmm12 = 0x3f800000
                        int128_t zmm11
                        zmm11.d = 1f - temp0_2[0]
                        float var_248[0x4]
                        var_248[0] = zmm0_1.d
                        zmm12[0] = 1f - temp0_1[0]
                        float temp0_4[0x4] = _mm_shuffle_ps(var_248, var_248, 0xe1)
                        temp0_2[0] = temp0_2[0] - temp0_3[0]
                        int32_t var_264
                        temp0_4[0] = var_264[0]
                        temp0_3[0] = temp0_3[0] + temp0_2[0]
                        float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
                        zmm0_1.d = zmm7[0]
                        int32_t var_260
                        temp0_5[0] = var_260[0]
                        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
                        float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
                        float var_248_1[0x4] = temp0_7
                        float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xff)
                        zmm0_1.d = zmm4_1[0]
                        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
                        zmm0_1.d = arg4
                        float temp0_10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xaa)
                        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                        float temp0_12[0x4] = _mm_mul_ps(temp0_8, zmm0_1)
                        uint128_t var_208_1 = zmm0_1
                        zmm0_1.d = temp0_3[0]
                        float temp0_13[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x55)
                        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
                        zmm0_1.d = temp0_2[0]
                        float temp0_15[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0)
                        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
                        zmm0_1.d = zmm11.d
                        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                        float temp0_18[0x4] = _mm_mul_ps(temp0_10, zmm0_1)
                        uint128_t var_218_1 = zmm0_1
                        zmm0_1.d = zmm13[0]
                        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
                        float temp0_20[0x4] = _mm_add_ps(temp0_12, temp0_18)
                        zmm1 = var_1e8
                        zmm0_1.d = zmm12[0]
                        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
                        zmm0_1.d = temp0_3[0]
                        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                        float temp0_23[0x4] = _mm_mul_ps(temp0_13, zmm0_1)
                        uint128_t var_228_1 = zmm0_1
                        zmm0_1.d = zmm14.d
                        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
                        zmm0_1.d = zmm1[0]
                        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
                        zmm0_1.d = arg_8[0]
                        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                        uint128_t var_238_1 = zmm0_1
                        arg5 = _mm_add_ps(temp0_23, _mm_mul_ps(temp0_15, zmm0_1))
                        float temp0_29[0x4] = _mm_add_ps(temp0_20, arg5)
                        var_1f8_1.o = temp0_29
                        rax_22 = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa).d
                        zmm0_1 =
                            _mm_unpacklo_ps(temp0_29, _mm_shuffle_ps(temp0_29, temp0_29, 0x55)[0].q)
                    int32_t var_280_2 = rax_22
                    var_288 = zmm0_1.q
                
                uint128_t var_1d8
                sub_14265ad90(&var_1d8, rdi_1, arg1, arg2[3])
                uint128_t zmm1_1 = var_1d8
                uint128_t var_198 = zmm1_1
                void* rax_26 = _mm_bsrli_si128(zmm1_1, 8).q
                int128_t var_1a8 = zx.o(0)
                
                if (rax_26 != 0)
                    *(rax_26 + 8) += 1
                
                void var_158
                sub_1426a7d20(arg3, 
                    sub_1426425b0(&var_158, &arg1[0x44], rdi_1, 
                        (*(arg1[0x44] + 0x18))(&arg1[0x44], &var_1e8, arg5, arg4), &var_288, 
                        &var_198, &var_1a8, 0x7f7fffff))
                sub_142645530(&var_158)
                arg3[7].d ^= (arg2[4].d u>> 3 ^ arg3[7].d) & 1
                int64_t* rcx_14 = arg1[0x5b]
                
                if (rcx_14 != 0)
                    (*(*rcx_14 + 0x4a0))(rcx_14, arg3, arg5, arg4)
                
                int64_t* rbx_4 = var_1d8:8.q
                rsi.b = 1
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        int64_t rdx_11 = *rbx_4
                        (*rdx_11)(rbx_4, rdx_11)
                        int32_t rdi_2 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rdi_2 == 1)
                            int64_t r8_5 = *rbx_4
                            (*(r8_5 + 8))(rbx_4, zx.q(rdi_2), r8_5)

return zx.q(rsi.b)
