// 函数: sub_141d2fd80
// 地址: 0x141d2fd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_10 = 0
int64_t* result = *(arg2 + 0x358)

if (*(result + 0x19) != 0)
    arg3[4] = 0
    
    if (arg3[5] s<= 0xffffffff)
        sub_1405a5310(&arg3[2], 0)
    
    *arg3 = *(arg2 + 0x6c)
    result = *(arg2 + 0x348) + 0x580
    int64_t* result_1 = result
    
    if (result[1].d s> 0)
        int64_t* r14_1 = nullptr
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        int128_t zmm9
        int128_t var_78_1 = zmm9
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        uint128_t zmm11
        uint128_t var_98_1 = zmm11
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        int32_t var_1d0_1 = 0
        bool cond:0_1
        
        do
            int64_t rsi_1 = *result
            int64_t* rbx_1 = nullptr
            int64_t* rax_2 = *(r14_1 + rsi_1)
            
            if (*(rax_2 + 0xc) u>= 2)
                rbx_1 = rax_2
            
            int64_t* result_2
            
            if (rbx_1 == 0)
                result_2 = result_1
            else if (_finite(_mm_cvtps_pd((*(r14_1 + rsi_1 + 0x10))[0].q)[0].q) == 0)
                result_2 = result_1
            else if (_finite(_mm_cvtps_pd((*(r14_1 + rsi_1 + 0x14))[0].q)[0].q) == 0)
                result_2 = result_1
            else if (_finite(_mm_cvtps_pd((*(r14_1 + rsi_1 + 0x18))[0].q)[0].q) == 0)
                result_2 = result_1
            else
                int64_t rsi_2 = sx.q(rbx_1[1].d) * 3
                int64_t r15_1 = *(*rbx_1 + 0x1b8)
                
                if (_finite(_mm_cvtps_pd((*(r15_1 + (rsi_2 << 2)))[0].q)[0].q) == 0)
                    result_2 = result_1
                else if (_finite(_mm_cvtps_pd((*(r15_1 + (rsi_2 << 2) + 4))[0].q)[0].q) == 0)
                    result_2 = result_1
                else if (_finite(_mm_cvtps_pd((*(r15_1 + (rsi_2 << 2) + 8))[0].q)[0].q) == 0)
                    result_2 = result_1
                else
                    int64_t rsi_3 = sx.q(rbx_1[1].d) * 3
                    int64_t r15_2 = *(*rbx_1 + 0x1d0)
                    
                    if (_finite(_mm_cvtps_pd((*(r15_2 + (rsi_3 << 2)))[0].q)[0].q) == 0)
                        result_2 = result_1
                    else if (_finite(_mm_cvtps_pd((*(r15_2 + (rsi_3 << 2) + 4))[0].q)[0].q) == 0)
                        result_2 = result_1
                    else
                        result_2 = result_1
                        
                        if (_finite(_mm_cvtps_pd((*(r15_2 + (rsi_3 << 2) + 8))[0].q)[0].q) != 0)
                            void* rdx = *rbx_1
                            int64_t r8 = sx.q(rbx_1[1].d)
                            float zmm0[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
                            zmm7 = zmm0
                            int64_t var_160_1 = zmm0.q
                            int32_t var_140_1 = 0
                            int64_t rcx_1 = r8 * 3
                            arg_10 = 0
                            int32_t var_158_1 = 0
                            zmm0 = _mm_unpacklo_ps(zx.o(0), 0)
                            int32_t var_134_1 = 0
                            zmm8 = zmm0
                            int32_t arg_20 = 0
                            int32_t var_14c_1 = 0
                            int64_t rax_16 = *result_2
                            int64_t var_154_1 = zmm0.q
                            zmm11 = zx.o(*(r14_1 + rax_16 + 0x10))
                            int32_t rax_17 = *(r14_1 + rax_16 + 0x18)
                            int64_t rax_18 = *(rdx + 0x1b8)
                            zmm10 = zx.o(*(rax_18 + (rcx_1 << 2)))
                            int32_t rax_19 = *(rax_18 + (rcx_1 << 2) + 8)
                            int64_t rax_20 = *(rdx + 0x1d0)
                            uint64_t var_17c_1 = zmm10.q
                            zmm12 = zx.o(*(rax_20 + (rcx_1 << 2)))
                            int32_t rax_21 = *(rax_20 + (rcx_1 << 2) + 8)
                            zmm9 = *(*(rdx + 0x2c0) + (r8 << 2))
                            int64_t rsi_4 = *(*(rdx + 0xc8) + (r8 << 3))
                            int64_t rax_24 = sub_141d3c0f0(arg2, rsi_4)
                            int64_t var_120
                            int64_t* rax_26
                            
                            if (rax_24 != 0)
                                rdi |= 1
                                rax_26 = sub_1413d1420(sub_141d3c0f0(arg2, rsi_4), &var_120)
                            
                            int64_t var_1a8_1
                            int64_t var_130
                            
                            if (rax_24 == 0 || rax_26[1].d == 0)
                                var_1a8_1 = 0
                            else
                                rdi |= 2
                                var_1a8_1 = **sub_1413d1420(
                                    sub_141d3c0f0(arg2, 
                                        *(*(*rbx_1 + 0xc8) + (sx.q(rbx_1[1].d) << 3))), 
                                    &var_130)
                            
                            if ((rdi.b & 2) != 0)
                                int64_t rcx_9 = var_130
                                rdi &= 0xfffffffd
                                
                                if (rcx_9 != 0)
                                    sub_140a74f90(rcx_9)
                            
                            if ((rdi.b & 1) != 0)
                                int64_t rcx_10 = var_120
                                rdi &= 0xfffffffe
                                
                                if (rcx_10 != 0)
                                    sub_140a74f90(rcx_10)
                            
                            int64_t* rcx_12 = *(*(*rbx_1 + 0x80) + (sx.q(rbx_1[1].d) << 3))
                            
                            if (*(rcx_12 + 0xc) != 0)
                                void var_c0
                                int64_t* rax_33 = (*(*rcx_12 + 0x28))(rcx_12, &var_c0)
                                int32_t rcx_13 = rax_33[1].d
                                zmm7 = zx.o(*rax_33)
                                zmm8 = zx.o(*(rax_33 + 0xc))
                                int32_t rax_34 = *(rax_33 + 0x14)
                                var_160_1 = zmm7.q
                                var_154_1 = zmm8.q
                                arg_20 = rax_34
                                var_14c_1 = rax_34
                                arg_10 = rcx_13
                                var_158_1 = rcx_13
                            
                            char* rcx_14 = *(*(arg2 + 0x358) + 8)
                            
                            if (*rcx_14 == 0)
                            label_141d301b1:
                                int64_t rsi_5 = sx.q(arg3[4])
                                int64_t var_100_1 = (zx.o(0)).q
                                int32_t rax_36 = (rsi_5 + 1).d
                                int32_t var_1ac_1 = 0
                                int128_t var_f0
                                __builtin_memset(&var_f0, 0, 0x14)
                                int32_t var_1b8_1 = 0
                                arg3[4] = rax_36
                                
                                if (rax_36 s> arg3[5])
                                    sub_1405c5060(&arg3[2])
                                
                                int64_t rcx_16 = *(arg3 + 8)
                                int64_t rdx_11 = rsi_5 * 0xa
                                *(rcx_16 + (rdx_11 << 3) + 0x10) = var_100_1
                                int64_t var_f4
                                *(rcx_16 + (rdx_11 << 3) + 0x1c) = var_f4
                                zmm0 = zx.o(var_f0:8.q)
                                int32_t var_f8
                                *(rcx_16 + (rdx_11 << 3) + 0x18) = var_f8
                                int32_t rax_38 = var_f0:4.d
                                *(rcx_16 + (rdx_11 << 3) + 0x28) = zmm0.q
                                *(rcx_16 + (rdx_11 << 3) + 0x24) = rax_38
                                int32_t var_e0
                                *(rcx_16 + (rdx_11 << 3) + 0x30) = var_e0
                                *(rcx_16 + (rdx_11 << 3)) = 0
                                *(rcx_16 + (rdx_11 << 3) + 8) = 0
                                *(rcx_16 + (rdx_11 << 3) + 0x34) = 0
                                *(rcx_16 + (rdx_11 << 3) + 0x38) = 0
                                *(rcx_16 + (rdx_11 << 3) + 0x40) = 0
                                *(rcx_16 + (rdx_11 << 3) + 0x44) = 0
                                *(rcx_16 + (rdx_11 << 3) + 0x4c) = 0
                                int64_t rax_40 = *(arg3 + 8)
                                *(rax_40 + (rdx_11 << 3) + 8) = var_1a8_1
                                *(rax_40 + (rdx_11 << 3) + 0x10) = zmm11.q
                                *(rax_40 + (rdx_11 << 3) + 0x18) = rax_17
                                *(rax_40 + (rdx_11 << 3) + 0x1c) = zmm10.q
                                *(rax_40 + (rdx_11 << 3) + 0x24) = rax_19
                                *(rax_40 + (rdx_11 << 3) + 0x28) = zmm12.q
                                *(rax_40 + (rdx_11 << 3) + 0x30) = rax_21
                                *(rax_40 + (rdx_11 << 3) + 0x34) = zmm9.d
                                *(rax_40 + (rdx_11 << 3)) = rbx_1
                                *(rax_40 + (rdx_11 << 3) + 0x38) = zmm7.q
                                *(rax_40 + (rdx_11 << 3) + 0x40) = arg_10
                                *(rax_40 + (rdx_11 << 3) + 0x44) = zmm8.q
                                *(rax_40 + (rdx_11 << 3) + 0x4c) = arg_20
                            else
                                zmm0 = *(rcx_14 + 8)
                                int128_t zmm1 = *(rcx_14 + 4)
                                float zmm3 = zmm0[0] * zmm0[0]
                                
                                if (zmm1.d f<= 0f || not(zmm9.d f< zmm1.d))
                                    if (zmm0[0] <= 0f)
                                    label_141d30178:
                                        zmm3 = *(rcx_14 + 0xc)
                                        
                                        if (zmm3 <= 0f)
                                            goto label_141d301b1
                                        
                                        zmm0 = var_154_1:4.d
                                        zmm0[0] = zmm0[0] f- var_160_1:4.d
                                        zmm1.d = var_14c_1.d f- var_158_1
                                        
                                        if (not((var_154_1.d f- var_160_1.d) * zmm0[0] f* zmm1.d
                                                < zmm3))
                                            goto label_141d301b1
                                    else
                                        float zmm2 = var_17c_1:4.d
                                        zmm0 = var_17c_1.d
                                        zmm1 = rax_19
                                        zmm0[0] = zmm0[0] * zmm0[0]
                                        zmm1.d = zmm1.d f* zmm1.d
                                        
                                        if (not(zmm2 * zmm2 + zmm0[0] f+ zmm1.d < zmm3))
                                            goto label_141d30178
            
            r14_1 = &r14_1[0xa]
            cond:0_1 = var_1d0_1 + 1 s< result_2[1].d
            var_1d0_1 += 1
            result = result_1
        while (cond:0_1)

return result
