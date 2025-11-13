// 函数: sub_141136540
// 地址: 0x141136540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg3 + 8)
int32_t i = 0
int64_t* rdi = arg8
rdi[1].d = 0

if (*(rdi + 0xc) s<= 0xffffffff)
    sub_1405a52a0(rdi, 0)

int64_t* rcx_1 = *(arg4 + 8)
char var_4d8
char var_4d7
int32_t var_4a0
int32_t var_498
int64_t var_490
int32_t var_480
int32_t var_458
char arg_20
(*(*rcx_1 + 0x88))(rcx_1, &var_458, &var_498, &var_480, &var_490, &var_4d7, &var_4d8, &var_4a0, 
    rdi, &arg_20)
void* result

if (arg_20 == 0)
    int32_t var_47c
    int32_t var_478
    
    if (var_480 s>= 0 && var_47c s>= 0 && var_478 s>= 0)
        int32_t rcx_2 = rdi[1].d
        
        if (rcx_2 s> 0)
            void* rdx_1 = *(arg4 + 8)
            char arg_18 = *(rdx_1 + 0x32)
            
            if (rcx_2 s> 1 || not(data_1439b5bdc[0] f<= *(rdx_1 + 0xd8)))
                uint32_t var_428[0x4] = data_142f22470
                int32_t var_4ac_1 = 0
                uint128_t zmm6
                uint128_t var_48_1 = zmm6
                int32_t var_4a8_1 = 0
                uint32_t zmm7[0x4]
                uint32_t zmm8[0x4]
                float zmm9[0x4]
                float zmm10[0x4]
                uint32_t zmm11[0x4]
                float zmm12[0x4]
                float zmm13[0x4]
                uint32_t zmm14[0x4]
                uint32_t zmm15[0x4]
                
                if (arg7 != 0)
                    int128_t* rax_1 = sub_141124020(r14 + 0x1900, arg4)
                    result = sub_141124020(r14 + 0x1970, arg4)
                    
                    if (rax_1 != 0)
                        int64_t* r8_1 = *(arg3 + 0xa0)
                        var_428 = *rax_1
                        int32_t var_388_1 = (*result).d
                        zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                            sub_1414cad80(arg2, arg3, r8_1, arg4, *rdi, &var_428)
                        bool cond:0_1 = var_428[2] == 0
                        int32_t rax_3 = _mm_bsrli_si128(zmm6, 8).d
                        
                        if (cond:0_1)
                            rax_3 = 0
                        
                        var_4a8_1 = rax_3
                        var_4ac_1 = var_388_1
                
                char rdx_7 = arg1
                
                if (rdx_7 != 0)
                    int32_t rdx_5 = rdi[1].d
                    void* rbx_1 = arg4 + 0x88
                    int32_t r14_2 = 0
                    *(rbx_1 + 0x10) = 0
                    
                    if (*(rbx_1 + 0x14) != rdx_5)
                        sub_1410b3a30(rbx_1, rdx_5)
                        r14_2 = *(arg4 + 0x98)
                    
                    int64_t r13_1 = sx.q(rdi[1].d)
                    int32_t rax_4 = r14_2 + r13_1.d
                    *(rbx_1 + 0x10) = rax_4
                    
                    if (rax_4 s> *(rbx_1 + 0x14))
                        sub_1405e3f00(rbx_1, r14_2)
                    
                    void* rax_5 = *(rbx_1 + 8)
                    
                    if (rax_5 != 0)
                        rbx_1 = rax_5
                    
                    memset(rbx_1 + (sx.q(r14_2) << 2), 0, r13_1 << 2)
                    rdx_7 = arg1
                
                if (rdi[1].d s> 0)
                    int64_t r14_3 = 0
                    uint32_t var_58_1[0x4] = zmm7
                    uint32_t var_68_1[0x4] = zmm8
                    float var_78_1[0x4] = zmm9
                    zmm9 = 0x322bcc77
                    float var_88_1[0x4] = zmm10
                    zmm10 = 0x3f000000
                    uint32_t var_98_1[0x4] = zmm11
                    zmm11 = 0x7fffffff
                    float var_b8_1[0x4] = zmm13
                    zmm13 = zx.o(0)
                    uint32_t var_d8_1[0x4] = zmm15
                    float var_a8_1[0x4] = zmm12
                    uint32_t var_c8_1[0x4] = zmm14
                    
                    do
                        result = *rdi
                        int128_t* rcx_11 = r14_3 << 6
                        uint32_t zmm2[0x4] = *(rcx_11 + result + 0x10)
                        uint32_t zmm1[0x4] = *(rcx_11 + result)
                        zmm15 = *(rcx_11 + result + 0x20)
                        uint32_t zmm0[0x4] = *(rcx_11 + result + 0x30)
                        uint32_t zmm4_1[0x4] = zmm15
                        uint32_t var_3f8_1[0x4] = zmm0
                        int96_t var_1c8_1 = zmm0[0].12
                        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        zmm7 = zmm0
                        uint32_t var_178_1[0x4] = zmm0
                        zmm7[0] = zmm7[0] f* zmm0[0]
                        zmm2[0] = zmm2[0] f* zmm2[0]
                        uint32_t zmm3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                        zmm7[0] = zmm7[0] f+ zmm2[0]
                        uint32_t var_408_1[0x4] = zmm2
                        uint32_t var_438_1[0x4] = zmm1
                        zmm3[0] = zmm3[0] f* zmm3[0]
                        zmm2 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                        zmm8 = zmm2
                        uint32_t var_1a8_1[0x4] = zmm3
                        zmm7[0] = zmm7[0] f+ zmm3[0]
                        zmm8[0] = zmm8[0] f* zmm2[0]
                        uint32_t var_4c8_1 = zmm4_1[0]
                        zmm4_1[0] = zmm4_1[0] f* zmm4_1[0]
                        zmm3 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                        zmm8[0] = zmm8[0] f+ zmm4_1[0]
                        uint32_t var_2c8_1[0x4] = zmm2
                        uint32_t var_2d8_1[0x4] = zmm3
                        zmm3[0] = zmm3[0] f* zmm3[0]
                        zmm8[0] = zmm8[0] f+ zmm3[0]
                        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        uint32_t var_188_1[0x4] = zmm0
                        zmm6.d = zmm0.d f* zmm0[0]
                        zmm0 = zmm1
                        zmm0[0] = zmm0[0] f* zmm1[0]
                        zmm1 = _mm_max_ss(zmm8[0], zmm7[0])
                        zmm6.d = zmm6.d f+ zmm0[0]
                        zmm0 = temp0_4
                        zmm0[0] = zmm0[0] f* temp0_4[0]
                        zmm6.d = zmm6.d f+ zmm0[0]
                        
                        if (not(_mm_max_ss(zmm1[0], zmm6.d)[0] f<= zmm13[0]))
                            int32_t var_4b8_1
                            
                            if (rdx_7 == 0)
                                void* rcx_14 = arg4 + 0x88
                                void* rax_7 = *(rcx_14 + 8)
                                
                                if (rax_7 != 0)
                                    rcx_14 = rax_7
                                
                                var_4b8_1 = *(rcx_14 + (r14_3 << 2))
                            else
                                int32_t rcx_13 = arg5 + arg9[1].d
                                *(r14 + 0x18b0) += 1
                                var_4b8_1 = rcx_13
                            
                            int64_t rdi_1 = sx.q(arg9[1].d)
                            int32_t rax_9 = (rdi_1 + 1).d
                            arg9[1].d = rax_9
                            
                            if (rax_9 s> *(arg9 + 0xc))
                                sub_1405a4cf0(arg9)
                                zmm2 = var_2c8_1
                                zmm3 = var_2d8_1
                                zmm4_1 = var_4c8_1
                            
                            *(*arg9 + (rdi_1 << 2)) = var_4b8_1
                            float zmm5_1[0x4]
                            
                            if (var_4d8 != 0)
                                if (zmm6.d f<= zmm9[0])
                                    zmm0 = zmm13
                                else
                                    zmm0 = _mm_sqrt_ss(0, zmm6.d)
                                
                                if (zmm7[0] f<= zmm9[0])
                                    zmm5_1 = zmm13
                                else
                                    zmm5_1 = _mm_sqrt_ss(zx.o(0)[0], zmm7[0])
                                
                                if (zmm8[0] f<= zmm9[0])
                                    zmm1 = zmm13
                                else
                                    zmm1 = _mm_sqrt_ss(0, zmm8[0])
                                
                                zmm1[0] f- zmm13[0]
                                bool cond:1_1 = zmm1[0] f>= zmm13[0]
                                bool cond:2_1 = zmm1[0] f> zmm13[0]
                                uint32_t temp0_13[0x4] = _mm_and_ps(zmm0, zmm11)
                                zmm5_1 = _mm_and_ps(zmm5_1, zmm11)
                                zmm6 = _mm_and_ps(zmm1, zmm11)
                                zmm0 = _mm_min_ss(temp0_13[0], zmm5_1[0])
                                
                                if (not(cond:2_1))
                                    if (cond:1_1)
                                        zmm0 = zmm13
                                    else
                                        zmm0 ^= data_142d3f780
                                
                                zmm0[0] = zmm0[0] f/ zmm6.d
                                zmm2[0] = zmm2[0] f* zmm0[0]
                                zmm3[0] = zmm3[0] f* zmm0[0]
                                zmm4_1[0] = zmm4_1[0] f* zmm0[0]
                                var_2c8_1 = zmm2
                                var_2d8_1 = zmm3
                                var_4c8_1 = zmm4_1[0]
                                zmm15[0] = zmm4_1[0]
                                zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xe1)
                                zmm15[0] = zmm2[0]
                                zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xc6)
                                zmm15[0] = zmm3[0]
                                zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                                uint32_t var_1d8_2[0x4] = zmm15
                            
                            zmm0 = var_458
                            int32_t var_44c
                            zmm2 = var_44c
                            zmm5_1 = zmm0
                            int32_t var_450
                            zmm3 = var_450
                            zmm5_1[0] = zmm5_1[0] f+ zmm2[0]
                            int32_t var_454
                            zmm1 = var_454
                            zmm2[0] = zmm2[0] f- zmm0[0]
                            int32_t var_444
                            zmm9 = var_444
                            zmm7 = zmm3
                            int32_t var_448
                            zmm6 = var_448
                            zmm7[0] = zmm7[0] f+ zmm9[0]
                            zmm12 = data_142d4cc00
                            zmm9[0] = zmm9[0] f- zmm3[0]
                            zmm11 = data_142d4cc20
                            zmm4_1 = zmm1
                            zmm13 = data_142d4cc30
                            zmm4_1[0] = zmm4_1[0] f+ zmm6.d
                            zmm2[0] = zmm2[0] f* zmm10[0]
                            zmm6.d = zmm6.d f- zmm1[0]
                            int64_t var_36c_1 = 0
                            int64_t var_374_1 = 0
                            uint32_t var_378[0x4]
                            var_378[0] = zmm2[0]
                            zmm4_1[0] = zmm4_1[0] f* zmm10[0]
                            int32_t var_2dc_1 = 0x3f800000
                            uint32_t var_378_1[0x4] = var_378
                            zmm14 = _mm_shuffle_ps(var_378, var_378, 0x55)
                            zmm0 = _mm_shuffle_ps(var_378, var_378, 0)
                            zmm1 = _mm_shuffle_ps(var_378, var_378, 0xaa)
                            zmm3 = _mm_shuffle_ps(var_378, var_378, 0xff)
                            zmm0 = _mm_mul_ps(zmm0, zmm12)
                            int64_t var_360_1 = 0
                            zmm2 = var_36c_1:4.o
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                            zmm1 = _mm_mul_ps(zmm1, zmm13)
                            int64_t var_358_1 = 0
                            zmm14 = _mm_mul_ps(zmm14, zmm11)
                            int32_t var_34c_1 = 0
                            zmm5_1[0] = zmm5_1[0] * zmm10[0]
                            zmm7[0] = zmm7[0] f* zmm10[0]
                            zmm14 = _mm_add_ps(zmm14, zmm0)
                            zmm6.d = zmm6.d f* zmm10[0]
                            uint32_t var_2e8[0x4]
                            var_2e8[0] = zmm5_1[0]
                            zmm9[0] = zmm9[0] * zmm10[0]
                            zmm10 = data_142d3f660
                            zmm2[0] = zmm6.d
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                            zmm14 = _mm_add_ps(zmm14, zmm1)
                            var_36c_1:4.o = zmm2
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            zmm8 = _mm_shuffle_ps(var_2e8, var_2e8, 0xe1)
                            zmm8[0] = zmm4_1[0]
                            zmm0 = _mm_mul_ps(zmm0, zmm12)
                            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xc6)
                            zmm8[0] = zmm7[0]
                            zmm1 = _mm_mul_ps(zmm1, zmm13)
                            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                            var_2e8 = zmm8
                            zmm14 = _mm_add_ps(zmm14, _mm_mul_ps(zmm3, zmm8))
                            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
                            zmm3 = _mm_add_ps(
                                _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm3, zmm11), zmm0), zmm1), zmm2)
                            zmm2 = var_358_1.o
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                            zmm2[0] = zmm9[0]
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                            var_358_1.o = zmm2
                            zmm6 = var_408_1
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            zmm4_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm0 = _mm_mul_ps(zmm0, zmm12)
                            zmm1 = _mm_mul_ps(zmm1, zmm13)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
                            zmm7 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                            float temp0_57[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                            zmm4_1 = _mm_mul_ps(zmm4_1, zmm11)
                            float temp0_59[0x4] = _mm_mul_ps(temp0_57, zmm11)
                            zmm7 = _mm_mul_ps(zmm7, zmm6)
                            zmm4_1 = _mm_add_ps(zmm4_1, zmm0)
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm12)
                            zmm4_1 = _mm_add_ps(zmm4_1, zmm1)
                            zmm1 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                            float temp0_66[0x4] = _mm_add_ps(temp0_59, zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm13)
                            float temp0_68[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
                            zmm4_1 = _mm_add_ps(zmm4_1, zmm2)
                            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm14, zmm14, 0), var_438_1)
                            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                            float temp0_73[0x4] = _mm_add_ps(temp0_66, zmm1)
                            zmm2 = _mm_mul_ps(zmm2, zmm6)
                            zmm7 = _mm_add_ps(zmm7, zmm0)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xaa), zmm15)
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                            float temp0_79[0x4] = _mm_mul_ps(temp0_68, zmm8)
                            zmm7 = _mm_add_ps(zmm7, zmm1)
                            zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xff)
                            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                            float temp0_84[0x4] = _mm_add_ps(temp0_73, temp0_79)
                            zmm3 = _mm_mul_ps(zmm3, var_3f8_1)
                            zmm1 = _mm_mul_ps(zmm1, zmm15)
                            zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(zmm14, var_3f8_1))
                            uint32_t var_198_1[0x4] = zmm7
                            zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, var_438_1))
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), var_438_1)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm15)
                            zmm2 = _mm_add_ps(zmm2, zmm3)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm6)
                            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                            int96_t var_3d8_1 = zmm2[0].12
                            zmm4_1 = _mm_mul_ps(zmm4_1, var_3f8_1)
                            zmm3 = _mm_add_ps(zmm3, zmm0)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0x55), zmm6)
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0), var_438_1)
                            int96_t var_3c8_1 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm4_1)[0].12
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            zmm4_1 = zx.o(0)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xaa), zmm15)
                            float temp0_112[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xff), var_3f8_1)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm7[0] = zmm7[0] f* zmm7[0]
                            int96_t var_3b8_1 = _mm_add_ps(zmm2, temp0_112)[0].12
                            zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                            zmm0 = zmm2
                            uint32_t var_168_1[0x4] = zmm2
                            zmm0[0] = zmm0[0] f* zmm2[0]
                            zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                            var_378 = zmm2
                            zmm7[0] = zmm7[0] f+ zmm0[0]
                            zmm2[0] = zmm2[0] f* zmm2[0]
                            zmm7[0] = zmm7[0] f+ zmm2[0]
                            
                            if (not(zmm7[0] f<= 9.99999994e-09f))
                                zmm4_1 = _mm_sqrt_ss(0, zmm7[0])
                            
                            zmm0 = var_3d8_1.d
                            zmm1 = var_3d8_1:4.d
                            zmm2 = zmm0
                            zmm2[0] = zmm2[0] f* zmm0[0]
                            zmm1[0] = zmm1[0] f* zmm1[0]
                            zmm2[0] = zmm2[0] f+ zmm1[0]
                            zmm0 = var_3d8_1:8.d
                            zmm0[0] = zmm0[0] f* zmm0[0]
                            zmm2[0] = zmm2[0] f+ zmm0[0]
                            
                            if (zmm2[0] f<= 9.99999994e-09f)
                                zmm2 = zx.o(0)
                            else
                                zmm2 = _mm_sqrt_ss(zmm2[0], zmm2[0])
                            
                            zmm0 = var_3c8_1.d
                            zmm1 = var_3c8_1:4.d
                            zmm3 = zmm0
                            zmm3[0] = zmm3[0] f* zmm0[0]
                            zmm1[0] = zmm1[0] f* zmm1[0]
                            zmm3[0] = zmm3[0] f+ zmm1[0]
                            zmm0 = var_3c8_1:8.d
                            zmm1 = zmm0
                            zmm1[0] = zmm1[0] f* zmm0[0]
                            zmm0 = zx.o(0)
                            zmm3[0] = zmm3[0] f+ zmm1[0]
                            
                            if (not(zmm3[0] f<= 9.99999994e-09f))
                                zmm0 = _mm_sqrt_ss(0, zmm3[0])
                            
                            int64_t rdi_2 = sx.q(arg10[1].d)
                            zmm0[0] = zmm0[0] f* zmm0[0]
                            int32_t rax_11 = (rdi_2 + 1).d
                            zmm2[0] = zmm2[0] f* zmm2[0]
                            arg10[1].d = rax_11
                            zmm4_1[0] = zmm4_1[0] f* zmm4_1[0]
                            uint32_t var_468_1 = var_3b8_1.d[0]
                            zmm2[0] = zmm2[0] f+ zmm4_1[0]
                            uint32_t var_464_1 = var_3b8_1:4.d[0]
                            uint32_t var_460_1 = var_3b8_1:8.d[0]
                            zmm2[0] = zmm2[0] f+ zmm0[0]
                            uint32_t var_45c_1 = _mm_sqrt_ss(0, zmm2[0])[0]
                            
                            if (rax_11 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            zmm9 = data_142d4cc00
                            zmm8 = data_142d4cc20
                            zmm10 = data_142d4cc30
                            *(*arg10 + rdi_2 * 0x10) = var_468_1.o
                            zmm4_1 = var_44c
                            zmm3 = var_448
                            zmm0 = zmm4_1
                            zmm7 = var_458
                            zmm12 = zmm3
                            zmm2 = var_444
                            zmm0[0] = zmm0[0] f- zmm7[0]
                            zmm5_1 = var_454
                            zmm7[0] = zmm7[0] f+ zmm4_1[0]
                            zmm6 = var_450
                            zmm12[0] = zmm12[0] - zmm5_1[0]
                            zmm4_1 = data_142d3f660
                            zmm5_1[0] = zmm5_1[0] f+ zmm3[0]
                            zmm1 = zmm2
                            int64_t var_30c_1 = 0
                            zmm1[0] = zmm1[0] f- zmm6.d
                            uint32_t var_4a4_1 = zmm0[0]
                            zmm0[0] = zmm0[0] f* 0.5f
                            zmm6.d = zmm6.d f+ zmm2[0]
                            int64_t var_314_1 = 0
                            uint32_t var_318[0x4]
                            zmm2 = var_318
                            zmm7[0] = zmm7[0] f* 0.5f
                            int32_t var_11c_1 = 0x3f800000
                            zmm6.d = zmm6.d f* 0.5f
                            int64_t var_300_1 = 0
                            uint32_t var_128[0x4]
                            var_128[0] = zmm7[0]
                            zmm5_1[0] = zmm5_1[0] * 0.5f
                            int64_t var_2f8_1 = 0
                            uint32_t var_4d0_1 = zmm1[0]
                            zmm1[0] = zmm1[0] f* 0.5f
                            int32_t var_2ec_1 = 0
                            zmm3 = _mm_shuffle_ps(var_128, var_128, 0xe1)
                            float var_4b0_1 = zmm12[0]
                            zmm3[0] = zmm5_1[0]
                            zmm12[0] = zmm12[0] * 0.5f
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                            zmm3[0] = zmm6.d
                            float temp0_123[0x4] = _mm_max_ss(zmm12[0], zmm0[0])
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                            var_128 = zmm3
                            float temp0_125[0x4] = _mm_max_ss(temp0_123[0], zmm1[0])
                            zmm2[0] = temp0_125[0]
                            var_318 = zmm2
                            zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
                            zmm0 = _mm_mul_ps(zmm0, zmm9)
                            zmm11 = _mm_mul_ps(zmm11, zmm8)
                            zmm1 = _mm_mul_ps(zmm1, zmm10)
                            zmm11 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm11, zmm0), zmm1), zmm2)
                            zmm2 = var_30c_1:4.o
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                            zmm2[0] = temp0_125[0]
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                            var_30c_1:4.o = zmm2
                            zmm7 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                            zmm7 = _mm_mul_ps(zmm7, zmm8)
                            zmm0 = _mm_mul_ps(zmm0, zmm9)
                            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            zmm7 = _mm_add_ps(zmm7, zmm0)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
                            zmm1 = _mm_mul_ps(zmm1, zmm10)
                            zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm8)
                            zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2)
                            zmm2 = var_2f8_1.o
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                            zmm2[0] = temp0_125[0]
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                            var_2f8_1.o = zmm2
                            float temp0_154[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            zmm0 = _mm_mul_ps(zmm0, zmm9)
                            zmm1 = _mm_mul_ps(zmm1, zmm10)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
                            float temp0_162[0x4] = _mm_add_ps(_mm_mul_ps(temp0_154, zmm8), zmm0)
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm9)
                            float temp0_165[0x4] = _mm_add_ps(temp0_162, zmm1)
                            zmm1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                            zmm6 = _mm_add_ps(zmm6, zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm10)
                            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                            float temp0_170[0x4] = _mm_add_ps(temp0_165, zmm2)
                            zmm0 = _mm_shuffle_ps(zmm11, zmm11, 0)
                            zmm4_1 = _mm_mul_ps(zmm4_1, zmm3)
                            zmm6 = _mm_add_ps(zmm6, zmm1)
                            zmm2 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
                            zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
                            zmm2 = _mm_mul_ps(zmm2, var_408_1)
                            zmm0 = _mm_mul_ps(zmm0, var_438_1)
                            zmm6 = _mm_add_ps(zmm6, zmm4_1)
                            zmm1 = _mm_mul_ps(zmm1, zmm15)
                            zmm4_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            zmm4_1 = _mm_mul_ps(zmm4_1, var_408_1)
                            zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), var_438_1)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm11 = _mm_mul_ps(zmm11, var_3f8_1)
                            zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                            zmm4_1 = _mm_add_ps(zmm4_1, zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm15)
                            zmm2 = _mm_add_ps(zmm2, zmm11)
                            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xff), var_3f8_1)
                            zmm4_1 = _mm_add_ps(zmm4_1, zmm1)
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_170, temp0_170, 0), var_438_1)
                            uint32_t var_3f8_2[0x4] = zmm2
                            uint32_t var_118[0x4] = zmm2
                            zmm2 = _mm_shuffle_ps(temp0_170, temp0_170, 0x55)
                            zmm4_1 = _mm_add_ps(zmm4_1, zmm7)
                            zmm2 = _mm_mul_ps(zmm2, var_408_1)
                            zmm1 = _mm_shuffle_ps(temp0_170, temp0_170, 0xaa)
                            uint32_t var_408_2[0x4] = zmm4_1
                            uint32_t var_108_1[0x4] = zmm4_1
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            int64_t rax_13 = var_490
                            zmm9 = zx.o(0)
                            zmm11 = var_4a4_1
                            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
                            zmm1 = _mm_mul_ps(zmm1, zmm15)
                            zmm0 = _mm_mul_ps(zmm0, var_438_1)
                            float temp0_205[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xff)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            float temp0_207[0x4] = _mm_mul_ps(temp0_205, var_3f8_1)
                            zmm11[0] = zmm11[0] f* 0.5f
                            zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                            zmm2 = _mm_add_ps(zmm2, temp0_207)
                            zmm1 = _mm_mul_ps(zmm1, zmm15)
                            zmm15 = var_4b0_1
                            zmm15[0] = zmm15[0] f* 0.5f
                            uint32_t var_388_2[0x4] = zmm2
                            uint32_t var_f8_1[0x4] = zmm2
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0x55), var_408_1)
                            zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), var_3f8_1)
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            zmm0 = 0x3f800000
                            zmm11[0] = zmm11[0] f/ temp0_125[0]
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = zx.o(0)
                            zmm1[0] = float.s(rax_13.d)
                            zmm2 = _mm_add_ps(zmm2, zmm6)
                            int32_t var_488
                            zmm6.d = float.s(var_488)
                            zmm0[0] = 1f f/ zmm1[0]
                            uint32_t var_e8_1[0x4] = zmm2
                            zmm2 = 0x3f800000
                            var_438_1[0] = zmm0[0]
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(var_490:4.d)
                            zmm9[0] = float.s((rax_13 u>> 0x20).d)
                            zmm7 = *arg6
                            zmm9[0] = zmm9[0] f* arg6[1]
                            zmm2[0] = 1f f/ zmm0[0]
                            zmm7[0] = zmm7[0] f* zmm1[0]
                            zmm0 = 0x3f800000
                            zmm0[0] = 1f f/ zmm6.d
                            zmm6.d = zmm6.d f* arg6[2]
                            uint32_t var_4d4_1 = zmm0[0]
                            zmm0 = var_4d0_1
                            uint32_t var_4b4_1 = zmm2[0]
                            zmm2 = zmm4_1
                            zmm0[0] = zmm0[0] f* 0.5f
                            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                            zmm0[0] = zmm0[0] f/ temp0_125[0]
                            zmm1[0] = zmm1[0] f* zmm1[0]
                            uint32_t var_4d0_2 = zmm0[0]
                            zmm0 = zmm2
                            zmm0[0] = zmm0[0] f* zmm2[0]
                            zmm2 = _mm_shuffle_ps(var_388_2, var_388_2, 0x55)
                            zmm4_1[0] = zmm4_1[0] f* zmm4_1[0]
                            zmm2[0] = zmm2[0] f* zmm2[0]
                            zmm4_1[0] = zmm4_1[0] f+ zmm0[0]
                            var_388_2[0] = var_388_2[0] f* var_388_2[0]
                            zmm15[0] = zmm15[0] f/ temp0_125[0]
                            zmm4_1[0] = zmm4_1[0] f+ zmm1[0]
                            zmm2[0] = zmm2[0] f+ var_388_2[0]
                            zmm1 = _mm_shuffle_ps(var_388_2, var_388_2, 0xaa)
                            zmm1[0] = zmm1[0] f* zmm1[0]
                            zmm2[0] = zmm2[0] f+ zmm1[0]
                            zmm4_1 = _mm_max_ss(zmm4_1[0], zmm2[0])
                            var_3f8_2[0] = var_3f8_2[0] f* var_3f8_2[0]
                            zmm3 = _mm_shuffle_ps(var_3f8_2, var_3f8_2, 0x55)
                            zmm3[0] = zmm3[0] f* zmm3[0]
                            zmm1 = _mm_shuffle_ps(var_3f8_2, var_3f8_2, 0xaa)
                            zmm1[0] = zmm1[0] f* zmm1[0]
                            zmm3[0] = zmm3[0] f+ var_3f8_2[0]
                            zmm3[0] = zmm3[0] f+ zmm1[0]
                            uint32_t var_4b0_2 =
                                _mm_sqrt_ss(0, _mm_max_ss(zmm4_1[0], zmm3[0])[0])[0]
                            uint32_t var_158[0x3][0x4]
                            uint32_t (* rax_16)[0x4]
                            rax_16, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm13, zmm14, zmm15 =
                                sub_140631b10(&var_118, &var_158)
                            int64_t rdi_3 = sx.q(arg10[1].d)
                            uint32_t var_2b8_1 = (*rax_16)[0]
                            uint32_t var_2b4_1 = rax_16[1][0][0]
                            uint32_t var_2b0_1 = rax_16[2][0][0]
                            uint32_t var_2ac_1 = rax_16[3][0][0]
                            uint32_t var_2a8_1 = (*rax_16)[1][0]
                            uint32_t var_2a4_1 = (*rax_16)[5][0]
                            uint32_t var_2a0_1 = (*rax_16)[9][0]
                            uint32_t var_29c_1 = (*rax_16)[0xd][0]
                            uint32_t var_298_1 = (*rax_16)[2][0]
                            uint32_t var_294_1 = (*rax_16)[6][0]
                            int32_t rax_17 = (rdi_3 + 1).d
                            uint32_t var_290_1 = (*rax_16)[0xa][0]
                            uint32_t var_28c_1 = (*rax_16)[0xe][0]
                            arg10[1].d = rax_17
                            
                            if (rax_17 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_3 * 0x10) = var_2b8_1.o
                            int64_t rdi_4 = sx.q(arg10[1].d)
                            int32_t rax_19 = (rdi_4 + 1).d
                            arg10[1].d = rax_19
                            
                            if (rax_19 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_4 * 0x10) = var_2a8_1.o
                            int64_t rdi_5 = sx.q(arg10[1].d)
                            int32_t rax_21 = (rdi_5 + 1).d
                            arg10[1].d = rax_21
                            
                            if (rax_21 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_5 * 0x10) = var_298_1.o
                            
                            if (arg_18 != 2)
                                zmm3 = zx.o(0)
                            else
                                zmm3 = 0x3f800000
                            
                            int64_t rdi_6 = sx.q(arg10[1].d)
                            zmm12 = var_4d0_2
                            zmm11[0] = zmm11[0] f- var_438_1[0]
                            zmm15[0] = zmm15[0] f- var_4b4_1
                            int32_t rax_23 = (rdi_6 + 1).d
                            uint32_t var_39c_1 = zmm3[0]
                            zmm0 = zmm12
                            arg10[1].d = rax_23
                            zmm0[0] = zmm0[0] f- var_4d4_1
                            uint32_t var_3a8_1 = zmm11[0]
                            uint32_t var_3a4_1 = zmm15[0]
                            uint32_t var_3a0_1 = zmm0[0]
                            
                            if (rax_23 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_6 * 0x10) = var_3a8_1.o
                            int64_t rax_25 = var_490
                            int64_t rdi_7 = sx.q(arg10[1].d)
                            zmm0 = _mm_cvtepi32_ps(zx.o(var_488))
                            bool cond:4_1 = var_4d7 != 0
                            zmm2 = _mm_cvtepi32_ps(zx.o(rax_25.d))
                            int32_t rax_27 = 1
                            zmm2[0] = zmm2[0] f* *arg6
                            zmm1 = _mm_cvtepi32_ps(zx.o((rax_25 u>> 0x20).d))
                            zmm2[0] = zmm2[0] f* zmm10[0]
                            zmm2[0] = zmm2[0] f/ zmm11[0]
                            zmm11 = arg6[1]
                            zmm1[0] = zmm1[0] f* zmm11[0]
                            uint32_t var_398_1 = zmm2[0]
                            zmm1[0] = zmm1[0] f* zmm10[0]
                            zmm1[0] = zmm1[0] f/ zmm15[0]
                            zmm15 = arg6[2]
                            zmm0[0] = zmm0[0] f* zmm15[0]
                            
                            if (cond:4_1)
                                rax_27 = -1
                            
                            uint32_t var_394_1 = zmm1[0]
                            zmm0[0] = zmm0[0] f* zmm10[0]
                            zmm0[0] = zmm0[0] f/ zmm12[0]
                            uint32_t var_390_1 = zmm0[0]
                            int32_t rax_28 = (rdi_7 + 1).d
                            zmm0 = _mm_cvtepi32_ps(zx.o(rax_27))
                            arg10[1].d = rax_28
                            zmm0[0] = zmm0[0] f* var_4b0_2
                            uint32_t var_38c_1 = zmm0[0]
                            
                            if (rax_28 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            int64_t rax_29 = *arg10
                            zmm6.d = zmm6.d f* zmm10[0]
                            zmm7[0] = zmm7[0] f* zmm10[0]
                            *(rax_29 + rdi_7 * 0x10) = var_398_1.o
                            int64_t rax_30 = var_480.q
                            int64_t rdi_8 = sx.q(arg10[1].d)
                            zmm0 = _mm_cvtepi32_ps(zx.o(var_478))
                            int32_t rax_32 = (rdi_8 + 1).d
                            zmm1 = _mm_cvtepi32_ps(zx.o((rax_30 u>> 0x20).d))
                            arg10[1].d = rax_32
                            zmm2 = _mm_cvtepi32_ps(zx.o(rax_30.d))
                            zmm0[0] = zmm0[0] f* zmm15[0]
                            zmm2[0] = zmm2[0] f* *arg6
                            zmm0[0] = zmm0[0] f+ zmm6.d
                            zmm1[0] = zmm1[0] f* zmm11[0]
                            zmm2[0] = zmm2[0] f+ zmm7[0]
                            zmm9[0] = zmm9[0] * zmm10[0]
                            uint32_t var_330_1 = zmm0[0]
                            zmm1[0] = zmm1[0] f+ zmm9[0]
                            uint32_t var_338_1 = zmm2[0]
                            uint32_t var_32c_1 = var_4a0[0]
                            uint32_t var_334_1 = zmm1[0]
                            
                            if (rax_32 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_8 * 0x10) = var_338_1.o
                            int64_t rcx_40 = sx.q(*(arg4 + 0x110)) * 5
                            int64_t rax_36 = *(r14 + 0xde8)
                            zmm7 = *(rax_36 + (rcx_40 << 3) + 0x1c)
                            int32_t rdx_18 = arg10[1].d
                            zmm6.d = _mm_max_ss((*(rax_36 + (rcx_40 << 3) + 0x24)).d, zmm13[0]).d
                                f* data_143a30378:8.d
                            int32_t rax_37 = rdx_18 + 1
                            arg10[1].d = rax_37
                            
                            if (rax_37 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                                rax_37 = arg10[1].d
                            
                            int32_t var_494
                            zmm0 = var_494
                            zmm0[0] = zmm0[0] f- var_498
                            int64_t rax_38 = *arg10
                            int64_t rcx_43 = sx.q(rax_37) * 2
                            zmm6.d = zmm6.d f* zmm6.d
                            *(rax_38 + (rcx_43 << 3) - 0x10) = zmm0[0]
                            *(rax_38 + (rcx_43 << 3) - 0xc) = var_498[0]
                            *(rax_38 + (rcx_43 << 3) - 8) = zmm7[0]
                            *(rax_38 + (rcx_43 << 3) - 4) = zmm6.d
                            int64_t rdi_9 = sx.q(arg10[1].d)
                            int32_t rax_39 = (rdi_9 + 1).d
                            arg10[1].d = rax_39
                            
                            if (rax_39 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_9 * 0x10) = var_3f8_2
                            int64_t rdi_10 = sx.q(arg10[1].d)
                            int32_t rax_41 = (rdi_10 + 1).d
                            arg10[1].d = rax_41
                            
                            if (rax_41 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_10 * 0x10) = var_408_2
                            int64_t rdi_11 = sx.q(arg10[1].d)
                            int32_t rax_43 = (rdi_11 + 1).d
                            arg10[1].d = rax_43
                            
                            if (rax_43 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            uint32_t var_268_1 = var_188_1[0]
                            *(*arg10 + rdi_11 * 0x10) = var_388_2
                            int64_t rdi_12 = sx.q(arg10[1].d)
                            uint32_t var_270_1 = var_4c8_1[0]
                            uint32_t var_26c_1 = var_1c8_1.d[0]
                            int32_t rax_45 = (rdi_12 + 1).d
                            uint32_t var_260_1 = var_2c8_1[0]
                            uint32_t var_25c_1 = var_1c8_1:4.d[0]
                            uint32_t var_264_1 = var_178_1[0]
                            uint32_t var_250_1 = var_2d8_1[0]
                            uint32_t var_258_1 = temp0_4[0]
                            uint32_t var_24c_1 = var_1c8_1:8.d[0]
                            uint32_t var_278_1 = zmm14[0]
                            uint32_t var_274_1 = zmm8[0]
                            uint32_t var_254_1 = var_1a8_1[0]
                            arg10[1].d = rax_45
                            
                            if (rax_45 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_12 * 0x10) = var_278_1.o
                            int64_t rdi_13 = sx.q(arg10[1].d)
                            int32_t rax_47 = (rdi_13 + 1).d
                            arg10[1].d = rax_47
                            
                            if (rax_47 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_13 * 0x10) = var_268_1.o
                            int64_t rdi_14 = sx.q(arg10[1].d)
                            int32_t rax_49 = (rdi_14 + 1).d
                            arg10[1].d = rax_49
                            
                            if (rax_49 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_14 * 0x10) = var_258_1.o
                            int64_t rdi_15 = sx.q(arg10[1].d)
                            zmm0 = zx.o(var_428[1])
                            zmm1 = _mm_cvtepi32_ps(zx.o(var_428[0]))
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            uint32_t var_328_1 = zmm1[0]
                            zmm1 = zx.o(var_428[2])
                            uint32_t var_324_1 = zmm0[0]
                            int32_t rax_54 = (rdi_15 + 1).d
                            zmm0 = _mm_cvtepi32_ps(zx.o(i * var_4a8_1 + var_4ac_1))
                            arg10[1].d = rax_54
                            zmm1 = _mm_cvtepi32_ps(zmm1)
                            uint32_t var_31c_1 = zmm0[0]
                            uint32_t var_320_1 = zmm1[0]
                            
                            if (rax_54 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            uint32_t var_238_1 = var_198_1[0]
                            *(*arg10 + rdi_15 * 0x10) = var_328_1.o
                            int64_t rdi_16 = sx.q(arg10[1].d)
                            uint32_t var_230_1 = var_3c8_1.d[0]
                            uint32_t var_22c_1 = var_3b8_1.d[0]
                            int32_t rax_56 = (rdi_16 + 1).d
                            uint32_t var_224_1 = var_3d8_1:4.d[0]
                            uint32_t var_220_1 = var_3c8_1:4.d[0]
                            uint32_t var_21c_1 = var_3b8_1:4.d[0]
                            uint32_t var_214_1 = var_3d8_1:8.d[0]
                            uint32_t var_210_1 = var_3c8_1:8.d[0]
                            uint32_t var_228_1 = var_168_1[0]
                            uint32_t var_20c_1 = var_3b8_1:8.d[0]
                            uint32_t var_234_1 = var_3d8_1.d[0]
                            uint32_t var_218_1 = var_378[0]
                            arg10[1].d = rax_56
                            
                            if (rax_56 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_16 * 0x10) = var_238_1.o
                            int64_t rdi_17 = sx.q(arg10[1].d)
                            int32_t rax_58 = (rdi_17 + 1).d
                            arg10[1].d = rax_58
                            
                            if (rax_58 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_17 * 0x10) = var_228_1.o
                            int64_t rdi_18 = sx.q(arg10[1].d)
                            int32_t rax_60 = (rdi_18 + 1).d
                            arg10[1].d = rax_60
                            
                            if (rax_60 s> *(arg10 + 0xc))
                                sub_1405a4f90(arg10)
                            
                            *(*arg10 + rdi_18 * 0x10) = var_218_1.o
                            
                            if (arg1 == 0)
                                void* rcx_79 = arg4 + 0x88
                                void* rax_66 = *(rcx_79 + 8)
                                
                                if (rax_66 != 0)
                                    rcx_79 = rax_66
                                
                                int32_t rax_67 = *(rcx_79 + (r14_3 << 2))
                                
                                if (rax_67 s< 0)
                                    zmm6 = var_468_1.o
                                else
                                    void* const rdi_19 = 0x1a8
                                    var_438_1[0].q = *(r14 + 0x18d8)
                                    
                                    if (arg_18 == 2)
                                        rdi_19 = 0x1b8
                                    
                                    void* rdi_20 = rdi_19 + r14 + 0x18b0
                                    int32_t rcx_80 = *(rdi_20 + 8)
                                    *(rdi_20 + 8) = rcx_80 + 1
                                    
                                    if (rcx_80 + 1 s> *(rdi_20 + 0xc))
                                        sub_1405a4f90(rdi_20)
                                    
                                    zmm6 = var_468_1.o
                                    uint128_t* rdx_32 = sx.q(rax_67) << 5
                                    *(*rdi_20 + sx.q(rcx_80) * 0x10) = *(var_438_1[0].q + rdx_32)
                                    *(rdx_32 + *(r14 + 0x18d8)) = zmm6
                            else
                                int32_t rcx_74 = *(r14 + 0x18e0)
                                var_36c_1 = arg4
                                var_360_1.d = i
                                *(r14 + 0x18e0) = rcx_74 + 1
                                
                                if (rcx_74 + 1 s> *(r14 + 0x18e4))
                                    sub_1405c4e40(r14 + 0x18d8)
                                
                                int64_t rax_63 = *(r14 + 0x18d8)
                                zmm6 = var_468_1.o
                                uint128_t* rcx_77 = sx.q(rcx_74) << 5
                                *(rcx_77 + rax_63) = zmm6
                                *(rcx_77 + rax_63 + 0x10) = var_36c_1:4.o
                                void* rcx_78 = arg4 + 0x88
                                void* rax_64 = *(rcx_78 + 8)
                                
                                if (rax_64 != 0)
                                    rcx_78 = rax_64
                                
                                *(rcx_78 + (r14_3 << 2)) = var_4b8_1
                            
                            void* const rdi_21 = 0x1a8
                            
                            if (arg_18 == 2)
                                rdi_21 = 0x1b8
                            
                            void** rdi_22 = rdi_21 + r14 + 0x18b0
                            int32_t rcx_84 = rdi_22[1].d
                            rdi_22[1].d = rcx_84 + 1
                            
                            if (rcx_84 + 1 s> *(rdi_22 + 0xc))
                                sub_1405a4f90(rdi_22)
                            
                            zmm9 = 0x322bcc77
                            zmm11 = 0x7fffffff
                            rdi = arg8
                            rdx_7 = arg1
                            *(*rdi_22 + sx.q(rcx_84) * 0x10) = zmm6
                        else if (rdx_7 != 0)
                            void* result_1 = arg4 + 0x88
                            result = *(result_1 + 8)
                            
                            if (result != 0)
                                result_1 = result
                            
                            *(result_1 + (r14_3 << 2)) = 0xffffffff
                        
                        i += 1
                        r14_3 += 1
                    while (i s< rdi[1].d)
    
    result.b = 1
else
    result.b = 0

return result
