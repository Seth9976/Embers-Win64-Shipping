// 函数: sub_1427023b0
// 地址: 0x1427023b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3c6e0(&arg1[0x27])
int64_t* rdi = arg1[0x21]

if (rdi != 0)
    rdi[1].d += 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

uint32_t result

if (arg1[0x37].b == 0)
    result.b = 0
else
    void* rcx_3 = arg1[0x20]
    
    if (rcx_3 == 0)
        result.b = 0
    else
        result = *(rcx_3 + 0x98)
        
        if ((result.b & 2) == 0 || *(rcx_3 + 0x30) s<= 1 || (result.b & 1) == 0)
            result.b = 0
        else
            float zmm2[0x4]
            uint128_t zmm3
            
            if (test_bit(result, 0xa))
                void* rax_3 = sub_140d3c6e0(rcx_3 + 0x40)
                
                if (rax_3 != 0)
                    int64_t* rax_4 = sub_1427009c0(arg1[0x20])
                    int32_t rax_9
                    uint128_t zmm1
                    uint128_t zmm0
                    
                    if (rax_4 == 0)
                        void* rax_10 = *(rax_3 + 0x130)
                        int32_t* rax_11
                        
                        if (rax_10 == 0)
                            int32_t var_104_1 = data_143dbb200
                            uint64_t var_10c
                            rax_11 = &var_10c
                            var_10c = data_143dbb1f8.q
                        else
                            zmm1 = *(rax_10 + 0x1d0)
                            int32_t var_178
                            rax_11 = &var_178
                            var_178 = zmm1.d
                            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                            int32_t var_170_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                            int32_t var_174_1 = zmm0.d
                        
                        zmm1 = zx.o(*rax_11)
                        rax_9 = rax_11[2]
                    else
                        int64_t r10_1 = *rax_4
                        int64_t rdx_2 = arg1[0x14]
                        int32_t var_110_1 = *(arg1 + 0x194)
                        uint64_t var_118 = *(arg1 + 0x18c)
                        int32_t var_188
                        void arg_10
                        void arg_18
                        (*(r10_1 + 0x38))(rax_4, rdx_2, &var_118, &var_188, &arg_18, &arg_10)
                        void* rax_5 = *(rax_3 + 0x130)
                        uint128_t var_f8
                        int128_t* rax_6
                        
                        if (rax_5 == 0)
                            rax_6 = &var_f8
                            var_f8 = data_142d3f660
                        else
                            uint128_t var_d8
                            rax_6 = &var_d8
                            var_d8 = *(rax_5 + 0x1c0)
                        
                        uint128_t zmm12 = *rax_6
                        void var_c8
                        uint128_t* rax_8 = (*(*rax_4 + 0x18))(rax_4, &var_c8)
                        uint128_t zmm4_1 = zmm12
                        zmm1.d = zmm12.d f* 2f
                        uint128_t zmm8 = zmm12
                        int32_t var_15c_1 = 0x3f800000
                        uint128_t zmm7 = zmm12
                        int32_t var_11c_1 = 0x3f800000
                        int32_t var_14c_1 = 0
                        uint128_t zmm6 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                        uint128_t zmm9 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                        zmm2 = zmm6
                        zmm2[0] = zmm2[0] * 2f
                        int32_t var_13c_1 = 0
                        zmm3.d = zmm9.d f* 2f
                        int32_t var_12c_1 = 0
                        zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                        zmm8.d = zmm8.d f* zmm1.d
                        int64_t var_e8_1 = 0
                        uint128_t zmm5_1
                        zmm5_1.d = zmm9.d f* zmm3.d
                        int32_t var_e0_1 = 0
                        zmm6.d = zmm6.d f* zmm2[0]
                        uint128_t zmm15
                        zmm15.d = zmm12.d f* zmm1.d
                        zmm1 = zmm12
                        zmm12.d = zmm12.d f* zmm2[0]
                        zmm0.d = zmm6.d f+ zmm5_1.d
                        zmm4_1.d = zmm4_1.d f* zmm3.d
                        zmm5_1.d = zmm5_1.d f+ zmm8.d
                        zmm7.d = zmm7.d f* zmm2[0]
                        zmm6.d = zmm6.d f+ zmm8.d
                        zmm1.d = zmm1.d f* zmm3.d
                        zmm3 = *(rax_8 + 8)
                        int128_t zmm14
                        zmm14.d = 1f f- zmm0.d
                        uint128_t zmm13
                        zmm13.d = zmm4_1.d f- zmm12.d
                        zmm0.d = zmm7.d.d f- zmm1.d
                        zmm9.d = zmm9.d f* zmm2[0]
                        zmm12.d = zmm12.d f+ zmm4_1.d
                        zmm4_1 = *(rax_8 + 4)
                        uint128_t zmm10
                        zmm10.d = zmm1.d f+ zmm7.d
                        zmm7 = *rax_8
                        int32_t arg_8 = zmm0.d
                        zmm0 = var_188
                        var_f8 = zmm12
                        int128_t zmm11
                        zmm11.d = 1f f- zmm5_1.d
                        zmm5_1.d = zmm0.d
                        zmm12.d = 1f f- zmm6.d
                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
                        zmm6.d = zmm9.d f- zmm15.d
                        int32_t var_184
                        zmm5_1.d = var_184.d
                        zmm15.d = zmm15.d f+ zmm9.d
                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc6)
                        zmm0.d = zmm7.d
                        int32_t var_180
                        zmm5_1.d = var_180[0]
                        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                        zmm0.d = zmm4_1.d
                        zmm8 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                        _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                        zmm0.d = zmm3.d
                        zmm1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
                        zmm8 = _mm_mul_ps(zmm8, _mm_shuffle_ps(zmm0, zmm0, 0xc9))
                        zmm0.d = zmm10.d
                        zmm2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                        zmm0.d = zmm6.d
                        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                        _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                        zmm0.d = zmm11.d
                        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0xc9))
                        zmm0.d = zmm13.d
                        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                        zmm0.d = zmm12.d
                        zmm8 = _mm_add_ps(zmm8, zmm1)
                        zmm1 = var_f8
                        _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                        zmm0.d = zmm15.d
                        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm0, zmm0, 0xc9))
                        zmm0.d = zmm14.d
                        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                        zmm0.d = zmm1.d
                        _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                        zmm0.d = arg_8.d
                        zmm8 = _mm_add_ps(zmm8, 
                            _mm_add_ps(zmm2, _mm_mul_ps(zmm5_1, _mm_shuffle_ps(zmm0, zmm0, 0xc9))))
                        zmm1.d = zmm8.d
                        rax_9 = _mm_shuffle_ps(zmm8, zmm8, 0xaa).d
                        _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                        zmm0.d = _mm_shuffle_ps(zmm8, zmm8, 0x55)[0]
                        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                    *(arg1 + 0x1a4) = zmm1.q
                    *(arg1 + 0x1ac) = rax_9
            
            zmm3 = data_143b580a8.d
            zmm2 = *(arg1 + 0x1a4)
            
            if (not((zmm3 ^ 0x80000000).d f>= zmm2[0]) && not(zmm2[0] f>= zmm3.d))
                zmm3 = data_143b580a8:4.d
                zmm2 = arg1[0x35].d
                
                if (not((zmm3 ^ 0x80000000).d f>= zmm2[0]) && not(zmm2[0] f>= zmm3.d))
                    zmm3 = data_143b580b0
                    zmm2 = *(arg1 + 0x1ac)
                    
                    if (not((zmm3 ^ 0x80000000).d f>= zmm2[0]) && not(zmm2[0] f>= zmm3.d))
                        *(arg1 + 0x1b4) = sub_1426f9ae0(arg1, arg1[0x20], arg1 + 0x1a4)
            
            (*(*arg1 + 0x450))(arg1)
            void* rax_15 = arg1[0x15]
            
            if (rax_15 == 0)
                rax_15 = sub_141ee69e0(arg1)
            
            void* rdi_2 = *(rax_15 + 0x188)
            void* rdi_3
            
            if (rdi_2 == 0)
                rdi_3 = *(rax_15 + 0x300)
            else
                rdi_3 = *(rdi_2 + 0xc0)
            
            if (sub_1423dce10(rdi_3, &arg1[0x46]) != 0)
                sub_1423e60e0(rdi_3, arg1[0x46])
            
            arg1[0x46] = 0
            (*(*arg1 + 0x4f0))(arg1)
            result.b = arg1[0x37].b - 1
            
            if ((result.b & 0xfd) == 0)
                arg1[0x37].b = 3
                int32_t rax_19 = (*(*arg1 + 0x508))(arg1, arg1[0x20])
                int64_t r8_3 = *arg1
                (*(r8_3 + 0x4c8))(arg1, zx.q(rax_19), r8_3)
            
            result.b = 1

return result
