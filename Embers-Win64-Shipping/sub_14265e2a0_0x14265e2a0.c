// 函数: sub_14265e2a0
// 地址: 0x14265e2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2.d
uint128_t zmm8 = arg2
uint64_t result = sub_140d3c6e0(arg1 + 0x9c)
uint64_t result_2 = result

if (result != 0)
    int64_t rax = sub_1426a09e0()
    void* rcx_1 = *(result + 0x10)
    result = rax + 0x30
    int64_t rdx_1 = sx.q(*(result + 8))
    
    if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == result)
        result = zx.q(*(arg1 + 0x30))
        
        if (result.d != 0 && result.d s<= 0x64)
            uint128_t zmm6
            uint128_t var_58_1 = zmm6
            
            if ((*(arg1 + 0x140) & 1) == 0)
                sub_142656820(arg1)
                result = zx.q(*(arg1 + 0x30))
            
            int128_t* rsi_1 = *(arg1 + 0x28)
            char arg_8 = 0
            int32_t rdx_2 = (result + 2).d
            uint128_t zmm14
            zmm14.d = zmm8.d f* zmm8.d
            int32_t rbx_1 = 0
            uint128_t* var_248
            __builtin_memset(&var_248, 0, 0x18)
            int32_t i = 0
            uint128_t* rdi_1 = nullptr
            
            if (rdx_2 s> 0)
                sub_1426678d0(&var_248, rdx_2)
                int32_t var_240
                rbx_1 = var_240
                rdi_1 = var_248
            
            uint128_t zmm0_1 = zx.o(data_143dbb1f8.q)
            int32_t i_5 = rbx_1 + 1
            int32_t rax_1 = data_143dbb200
            zmm6 = *rsi_1
            int32_t var_1b8_1 = rax_1
            uint128_t zmm7 = rsi_1[1]
            int32_t var_1ac_1 = rax_1
            uint64_t var_1c0_1 = zmm0_1.q
            uint64_t var_1b4_1 = zmm0_1.q
            int32_t var_23c
            
            if (i_5 s> var_23c)
                sub_1426676e0(&var_248)
                rdi_1 = var_248
            
            int32_t rdx_4 = 1
            void* rsi_2 = &rsi_1[2]
            int128_t* rcx_7 = sx.q(rbx_1) * 0x38
            int32_t arg_20 = 1
            int32_t arg_18 = 1
            *(rcx_7 + rdi_1) = zmm6
            *(rcx_7 + rdi_1 + 0x10) = zmm7
            *(rcx_7 + rdi_1 + 0x20) = var_1c0_1.o
            *(rcx_7 + rdi_1 + 0x30) = var_1b4_1
            int32_t rcx_8 = *(arg1 + 0x30)
            result = zx.q(rcx_8 - 1)
            
            if (result.d s> 1)
                void* result_8 = nullptr
                zmm6 = zx.o(0)
                uint128_t zmm9
                uint128_t var_88_1 = zmm9
                uint128_t zmm10
                uint128_t var_98_1 = zmm10
                uint128_t zmm11
                uint128_t var_a8_1 = zmm11
                void* result_5 = nullptr
                void* result_6 = rsi_2 + 0x20
                uint128_t zmm12
                uint128_t var_b8_1 = zmm12
                uint128_t zmm13
                uint128_t var_c8_1 = zmm13
                void* result_1 = result_6
                int64_t var_220
                uint64_t var_1a0
                int64_t var_180
                int32_t var_178
                uint128_t zmm2
                uint128_t zmm3
                uint128_t zmm4_1
                uint128_t zmm5_1
                
                while (i s< *(arg1 + 0x138))
                    uint64_t var_1c0_3
                    uint64_t var_1b4_3
                    int128_t* rcx_12
                    
                    if ((*(rsi_2 + 0x18) & 4) == 0)
                        void* result_9 = result_8
                        uint128_t* rbx_5 = (sx.q(i) << 5) + *(arg1 + 0x130)
                        int32_t i_3
                        int32_t var_234_1
                        
                        do
                            zmm0_1, zmm6 = sub_140addc20(rsi_2, rbx_5, rbx_5 + 0xc)
                            
                            if (zmm0_1.d f<= 9.99999905e-09f)
                                zmm0_1.d = (*(rbx_5 + 4)).d f- *(rsi_2 + 4)
                                arg2.d = (*(rbx_5 + 8)).d f- *(rsi_2 + 8)
                                zmm7.d = (*rbx_5).d f- *rsi_2
                                zmm5_1.d = rbx_5[1].d.d f- *(rsi_2 + 4)
                                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                                arg2.d = arg2.d f* arg2.d
                                zmm7.d = zmm7.d f* zmm7.d
                                zmm5_1.d = zmm5_1.d f* zmm5_1.d
                                zmm7.d = zmm7.d f+ zmm0_1.d
                                zmm0_1.d = (*(rbx_5 + 0x14)).d f- *(rsi_2 + 8)
                                zmm7.d = zmm7.d f+ arg2.d
                                arg2.d = (*(rbx_5 + 0xc)).d f- *rsi_2
                                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                                arg2.d = arg2.d f* arg2.d
                                zmm5_1.d = zmm5_1.d f+ arg2.d
                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                
                                if (not(zmm7.d f<= zmm14.d) && not(zmm5_1.d f<= zmm14.d))
                                    i = i_3 + 1
                                    result_5 += 1
                                    i_3 = i
                                    goto label_14265e6b9
                                
                                arg_8 = 1
                                int32_t rax_4
                                rax_4.b = zmm5_1.d f<= zmm7.d
                                int32_t* rdx_12 = (result_9 << 5) + *(arg1 + 0x130)
                                uint64_t rcx_16 = zx.q(rax_4)
                                arg2.d = rdx_12[3].d f- *rdx_12
                                uint64_t r8_2 = rcx_16 * 3
                                zmm2.d = rdx_12[4].d f- rdx_12[1]
                                zmm0_1.d = rdx_12[5].d f- rdx_12[2]
                                zmm11 = zx.o(*(rdx_12 + (r8_2 << 2)))
                                zmm2.d = zmm2.d f* zmm2.d
                                zmm13 = rdx_12[r8_2 + 2]
                                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                                arg2.d = arg2.d f* arg2.d
                                uint64_t rcx_17 = (zx.q((rcx_16 - 1).d) & 1) * 3
                                var_1a0 = zmm11.q
                                zmm12 = var_1a0:4.d
                                zmm2.d = zmm2.d f+ arg2.d
                                var_178 = rdx_12[rcx_17 + 2]
                                uint128_t var_210_1 = *(rsi_2 + 0x10)
                                zmm2.d = zmm2.d f+ zmm0_1.d
                                var_220.o = *rsi_2
                                zmm0_1 = zx.o(*(rdx_12 + (rcx_17 << 2)))
                                zmm10 = _mm_sqrt_ss(zx.o(0).d, zmm2.d)
                                var_180 = zmm0_1.q
                                zmm10.d = zmm10.d f* 0.5f
                                zmm9.d = zmm0_1.d f- zmm11.d
                                zmm7.d = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55).d f- zmm12.d
                                zmm10 = _mm_min_ss(zmm10.d, zmm8.d)
                                zmm8.d = var_178.d f- zmm13.d
                                zmm2.d = zmm9.d f* zmm9.d
                                zmm0_1.d = zmm7.d f* zmm7.d
                                arg2.d = zmm8.d f* zmm8.d
                                zmm2.d = zmm2.d f+ zmm0_1.d
                                zmm2.d = zmm2.d f+ arg2.d
                                
                                if (not(zmm2.d f== 1f))
                                    if (zmm2.d f>= 9.99999994e-09f)
                                        zmm3.d = zmm2.d
                                        zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                                        zmm3.d = zmm3.d f* 0.5f
                                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                        arg2.d = zmm3.d f* zmm0_1.d
                                        zmm2.d = 0.5f f- arg2.d
                                        zmm0_1.d = zmm5_1.d f* zmm2.d
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        arg2.d = zmm5_1.d f* zmm5_1.d
                                        zmm3.d = zmm3.d f* arg2.d
                                        zmm4_1.d = 0.5f f- zmm3.d
                                        zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        result_5.d = zmm5_1.d
                                        zmm9.d = zmm9.d f* zmm5_1.d
                                        zmm7.d = zmm7.d f* zmm5_1.d
                                        zmm8.d = zmm8.d f* zmm5_1.d
                                    else
                                        zmm9 = data_143dbb1f8
                                        zmm7 = data_143dbb1fc
                                        zmm8 = data_143dbb200
                                
                                zmm7.d = zmm7.d f* zmm10.d
                                int64_t i_8 = sx.q(i_5)
                                zmm9.d = zmm9.d f* zmm10.d
                                zmm7.d = zmm7.d f+ zmm12.d
                                zmm8.d = zmm8.d f* zmm10.d
                                i_5 = (i_8 + 1).d
                                zmm9.d = zmm9.d f+ zmm11.d
                                var_1c0_3 = zmm11.q
                                var_1b4_3 = *(rdx_12 + (rcx_17 << 2))
                                zmm8.d = zmm8.d f+ zmm13.d
                                arg2 = _mm_unpacklo_ps(zmm9, zmm7.q)
                                int64_t var_218
                                var_218.d = zmm8.d
                                var_210_1.q = *(rdx_12 + 0x18)
                                zmm7.q = arg2.q
                                int32_t var_1b8_5 = rdx_12[r8_2 + 2]
                                zmm8 = var_210_1
                                int32_t var_1ac_5 = rdx_12[rcx_17 + 2]
                                var_220.o = zmm7
                                
                                if (i_5 s> var_23c)
                                    sub_1426676e0(&var_248)
                                    rdi_1 = var_248
                                
                                rdx_4 = arg_18
                                result_8 = result_9 + 1
                                result_6 = result_1
                                rcx_12 = i_8 * 0x38
                                i += 1
                                result_5 = result_8
                                var_234_1 += 1
                                i_3 = i
                                goto label_14265e9d5
                            
                            rbx_5 = &rbx_5[2]
                            i += 1
                            result_9 += 1
                        while (i s< *(arg1 + 0x138))
                        
                        i = i_3
                    label_14265e6b9:
                        
                        if (var_234_1 != 0)
                            var_234_1 = 0
                        else
                            zmm7 = *rsi_2
                            int64_t i_7 = sx.q(i_5)
                            zmm8 = *(rsi_2 + 0x10)
                            int32_t var_168_1 = 0
                            i_5 = (i_7 + 1).d
                            uint64_t var_1c0_4 = (_mm_unpacklo_ps(zmm6, zmm6.q)).q
                            int32_t var_188_1 = 0
                            int32_t var_1b8_4 = 0
                            uint64_t var_1b4_4 = (_mm_unpacklo_ps(zmm6, zmm6.q)).q
                            int32_t var_1ac_4 = 0
                            
                            if (i_5 s> var_23c)
                                sub_1426676e0(&var_248)
                                rdi_1 = var_248
                            
                            uint128_t* rcx_15 = i_7 * 0x38
                            *(rcx_15 + rdi_1) = zmm7
                            *(rcx_15 + rdi_1 + 0x10) = zmm8
                            *(rcx_15 + rdi_1 + 0x20) = var_1c0_4.o
                            *(rcx_15 + rdi_1 + 0x30) = var_1b4_4
                        
                        rsi_2 += 0x20
                        rdx_4 = arg_18 + 1
                        result_8 = result_5
                        result_6 = result_1 + 0x20
                        result_1 = result_6
                        arg_18 = rdx_4
                    else
                        zmm7 = *rsi_2
                        int32_t rbx_2 = i_5 + 1
                        int32_t var_120_1 = 0
                        zmm8 = *(rsi_2 + 0x10)
                        int32_t var_130_1 = 0
                        uint64_t var_1c0_2 = (_mm_unpacklo_ps(zmm6, zmm6.q)).q
                        int32_t var_1b8_2 = 0
                        uint64_t var_1b4_2 = (_mm_unpacklo_ps(zmm6, zmm6.q)).q
                        int32_t var_1ac_2 = 0
                        
                        if (rbx_2 s> var_23c)
                            sub_1426676e0(&var_248)
                            rdx_4 = arg_18
                            rdi_1 = var_248
                        
                        int64_t i_6 = sx.q(i_5)
                        i_5 = rbx_2 + 1
                        int128_t* rcx_10 = i_6 * 0x38
                        int32_t var_140_1 = 0
                        int32_t var_150_1 = 0
                        int32_t var_1b8_3 = 0
                        *(rcx_10 + rdi_1) = zmm7
                        int32_t var_1ac_3 = 0
                        *(rcx_10 + rdi_1 + 0x10) = zmm8
                        *(rcx_10 + rdi_1 + 0x20) = var_1c0_2.o
                        *(rcx_10 + rdi_1 + 0x30) = var_1b4_2
                        zmm7 = *result_6
                        zmm8 = *(result_6 + 0x10)
                        var_1c0_3 = (_mm_unpacklo_ps(zmm6, zmm6.q)).q
                        var_1b4_3 = (_mm_unpacklo_ps(zmm6, zmm6.q)).q
                        
                        if (i_5 s> var_23c)
                            sub_1426676e0(&var_248)
                            rdx_4 = arg_18
                            rdi_1 = var_248
                        
                        result_8 = result_5
                        rdx_4 += 2
                        rsi_2 += 0x40
                        rcx_12 = sx.q(rbx_2) * 0x38
                        result_6 += 0x40
                        arg_18 = rdx_4
                        result_1 = result_6
                    label_14265e9d5:
                        *(rcx_12 + rdi_1) = zmm7
                        *(rcx_12 + rdi_1 + 0x10) = zmm8
                        *(rcx_12 + rdi_1 + 0x20) = var_1c0_3.o
                        *(rcx_12 + rdi_1 + 0x30) = var_1b4_3
                    rcx_8 = *(arg1 + 0x30)
                    zmm8 = arg_10
                    result = zx.q(rcx_8 - 1)
                    
                    if (rdx_4 s>= result.d)
                        break
                
                if (arg_8 != 0)
                    if (i_5 s< 3 || (*(result_2 + 0x474) & 0x40) == 0)
                        int64_t rax_45 = *(arg1 + 0x28)
                        int64_t rcx_50 = sx.q(*(arg1 + 0x30)) << 5
                        zmm6 = *(rcx_50 + rax_45 - 0x20)
                        zmm7 = *(rcx_50 + rax_45 - 0x10)
                        *(arg1 + 0x30) = 0
                        
                        if (*(arg1 + 0x34) s<= 0xffffffff)
                            sub_1405a51b0(arg1 + 0x28, 0)
                        
                        if (i_5 s> 0)
                            uint128_t* rbx_18 = rdi_1
                            uint64_t i_4 = zx.q(i_5)
                            uint64_t i_1
                            
                            do
                                int64_t rsi_4 = sx.q(*(arg1 + 0x30))
                                int32_t rax_46 = (rsi_4 + 1).d
                                *(arg1 + 0x30) = rax_46
                                
                                if (rax_46 s> *(arg1 + 0x34))
                                    sub_1405c4e40(arg1 + 0x28)
                                
                                int64_t rax_47 = *(arg1 + 0x28)
                                int64_t rcx_54 = rsi_4 << 5
                                *(rcx_54 + rax_47) = *rbx_18
                                arg2 = rbx_18[1]
                                rbx_18 += 0x38
                                *(rcx_54 + rax_47 + 0x10) = arg2
                                i_1 = i_4
                                i_4 -= 1
                            while (i_1 != 1)
                        
                        int64_t rbx_19 = sx.q(*(arg1 + 0x30))
                        int32_t rax_48 = (rbx_19 + 1).d
                        *(arg1 + 0x30) = rax_48
                        
                        if (rax_48 s> *(arg1 + 0x34))
                            sub_1405c4e40(arg1 + 0x28)
                        
                        result = *(arg1 + 0x28)
                        int64_t rdx_37 = rbx_19 << 5
                        *(rdx_37 + result) = zmm6
                        *(rdx_37 + result + 0x10) = zmm7
                    else
                        int64_t r12_2 = 0
                        int32_t rsi_3 = 0
                        var_220 = 0
                        int64_t var_218_1 = 0
                        
                        if (i_5 + 2 s> 0)
                            sub_1405a51b0(&var_220, i_5 + 2)
                            rcx_8 = *(arg1 + 0x30)
                            rsi_3 = var_218_1.d
                            r12_2 = var_220
                        
                        int64_t rax_14 = *(arg1 + 0x28)
                        zmm0_1 = zx.o(data_143dbb1f8.q)
                        int64_t rcx_21 = sx.q(rcx_8) << 5
                        uint64_t var_1c0_5 = zmm0_1.q
                        uint64_t var_1b4_5 = zmm0_1.q
                        zmm6 = *(rcx_21 + rax_14 - 0x20)
                        zmm7 = *(rcx_21 + rax_14 - 0x10)
                        int32_t rax_15 = data_143dbb200
                        int32_t var_1b8_6 = rax_15
                        int32_t var_1ac_6 = rax_15
                        int32_t var_240_6 = i_5 + 1
                        
                        if (i_5 + 1 s> var_23c)
                            sub_1426676e0(&var_248)
                            rdi_1 = var_248
                        
                        int32_t r9_1 = 1
                        int32_t r15_1 = var_240_6
                        uint128_t* rcx_23 = sx.q(i_5) * 0x38
                        result = 0xc8
                        int32_t rdx_16 = 0
                        int32_t var_234_2 = 0xc8
                        int32_t r14_2 = 0
                        arg_18 = 0
                        *(rcx_23 + rdi_1) = zmm6
                        *(rcx_23 + rdi_1 + 0x10) = zmm7
                        *(rcx_23 + rdi_1 + 0x20) = var_1c0_5.o
                        *(rcx_23 + rdi_1 + 0x30) = var_1b4_5
                        
                        while (true)
                            zmm2 = 0x7f7fffff
                            int32_t r8_3 = r14_2
                            bool cond:6_1
                            
                            if (r14_2 == r9_1 || result.d == 0)
                                int32_t rbx_16 = var_218_1:4.d
                                cond:6_1 = rbx_16 == 0
                                
                                if (rbx_16 s>= 0)
                                    break
                                
                                var_218_1.d = 0
                            label_14265f5c0:
                                
                                if (cond:6_1)
                                    break
                                
                                result = sub_1405a51b0(&var_220, 0)
                                rsi_3 = var_218_1.d
                                r12_2 = var_220
                            else
                                arg_8 = 1
                                int32_t rax_19 = *(sx.q(rdx_16) * 0x38 + rdi_1 + 0x18)
                                result_5.d = rax_19
                                uint128_t* rbx_6 = sx.q(r14_2) * 0x38
                                uint32_t rcx_26 = rax_19 u>> 8
                                result_2.d = rcx_26
                                result = zx.q(*(rbx_6 + rdi_1 + 0x18))
                                uint32_t rdx_18 = result.d u>> 8
                                result_1.d = rdx_18
                                
                                if ((result.b & 4) != 0)
                                    if (r14_2 s< 0 || r14_2 s>= r15_1)
                                        result.b = 0
                                    else
                                        result.b = 1
                                    
                                    if (result.b != 0 && *(rbx_6 + rdi_1 + 0x10) != 0)
                                        int64_t r15_2 = sx.q(rsi_3)
                                        rsi_3 = (r15_2 + 1).d
                                        var_218_1.d = rsi_3
                                        
                                        if (rsi_3 s> var_218_1:4.d)
                                            sub_1405c4e40(&var_220)
                                            rsi_3 = var_218_1.d
                                            r8_3 = r14_2
                                            r12_2 = var_220
                                        
                                        r15_1 = var_240_6
                                        result = r15_2 << 5
                                        *(result + r12_2) = *(rbx_6 + rdi_1)
                                        *(result + r12_2 + 0x10) = *(rbx_6 + rdi_1 + 0x10)
                                    
                                    int32_t temp2_1 = r14_2
                                    r14_2 += 1
                                    
                                    if (temp2_1 + 1 s< 0 || r14_2 s>= r15_1)
                                        result.b = 0
                                    else
                                        result.b = 1
                                    
                                    if (result.b != 0)
                                        uint128_t* r15_3 = (sx.q(r8_3) + 1) * 0x38
                                        
                                        if (*(r15_3 + rdi_1 + 0x10) != 0)
                                            int64_t rbx_7 = sx.q(rsi_3)
                                            rsi_3 = (rbx_7 + 1).d
                                            var_218_1.d = rsi_3
                                            
                                            if (rsi_3 s> var_218_1:4.d)
                                                sub_1405c4e40(&var_220)
                                                rsi_3 = var_218_1.d
                                                r12_2 = var_220
                                            
                                            result = rbx_7 << 5
                                            *(result + r12_2) = *(r15_3 + rdi_1)
                                            *(result + r12_2 + 0x10) = *(r15_3 + rdi_1 + 0x10)
                                    
                                    zmm2 = 0x7f7fffff
                                    r9_1 = r14_2 + 1
                                    r15_1 = var_240_6
                                    rcx_26 = result_2.d
                                    rdx_18 = result_1.d
                                    arg_20 = r9_1
                                    arg_18 = r14_2
                                    arg_8 = 0
                                
                                result.b = 0
                                
                                if ((result_5.b & 4) == 0 && rdx_18.b == rcx_26.b)
                                    int32_t rax_24 = data_143dbb200
                                    zmm6 = zmm2
                                    zmm0_1 = zx.o(data_143dbb1f8.q)
                                    zmm7 = zmm2
                                    int32_t var_1d8_1 = rax_24
                                    int32_t i_2 = 0
                                    int32_t var_168_2 = rax_24
                                    void* rcx_29 = sx.q(r14_2) * 0x38
                                    uint64_t var_1e0_1 = zmm0_1.q
                                    uint64_t var_170 = zmm0_1.q
                                    int64_t var_1d0_1 = 0
                                    int64_t var_1c8_1 = 0
                                    result_5 = nullptr
                                    int32_t rax_26 = *(rcx_29 + rdi_1 + 8)
                                    void* rcx_30 = sx.q(r9_1) * 0x38
                                    uint64_t var_200 = *(rcx_29 + rdi_1)
                                    bool cond:3_1 = *(arg1 + 0x138) s<= 0
                                    int32_t rax_28 = *(rcx_30 + rdi_1 + 8)
                                    result = 0
                                    result_1 = nullptr
                                    uint64_t var_1f0 = *(rcx_30 + rdi_1)
                                    
                                    if (not(cond:3_1))
                                        do
                                            void* result_4 = (sx.q(i_2) << 5) + *(arg1 + 0x130)
                                            
                                            if (not(zmm6.d f<= 9.99999905e-09f))
                                                zmm0_1, zmm6 = sub_140addc20(&var_200, result_4, 
                                                    result_4 + 0xc)
                                                result = result_1
                                                
                                                if (not(zmm0_1.d f>= zmm6.d))
                                                    zmm6 = zmm0_1
                                                    result_5 = result_4
                                            
                                            if (not(zmm7.d f<= 9.99999905e-09f))
                                                zmm0_1, zmm6 = sub_140addc20(&var_1f0, result_4, 
                                                    result_4 + 0xc)
                                                
                                                if (zmm0_1.d f>= zmm7.d)
                                                    result = result_1
                                                else
                                                    zmm7 = zmm0_1
                                                    result_1 = result_4
                                                    result = result_4
                                            
                                            i_2 += 1
                                        while (i_2 s< *(arg1 + 0x138))
                                    
                                    if (cond:3_1 || result_5 == 0 || result == 0)
                                        arg2 = data_143dbb1f8
                                        zmm2 = data_143dbb1fc
                                        zmm3 = data_143dbb200
                                    label_14265f2b8:
                                        var_1e0_1.d = arg2.d
                                        int32_t var_1d8_2 = zmm3.d
                                        var_1e0_1:4.d = zmm2.d
                                        
                                        if (_mm_and_ps(arg2, 0x7fffffff).d f> 9.99999975e-05f)
                                            result.b = 0
                                        else if (_mm_and_ps(zmm2, 0x7fffffff).d f> 9.99999975e-05f)
                                            result.b = 0
                                        else if (_mm_and_ps(zmm3, 0x7fffffff).d f> 9.99999975e-05f)
                                            result.b = 0
                                        else
                                            result.b = 1
                                        
                                        if (result.b != 0)
                                            result = zx.q(var_218_1:4.d)
                                            int32_t temp4_1 = result.d
                                            cond:6_1 = temp4_1 == 0
                                            
                                            if (temp4_1 s>= 0)
                                                break
                                            
                                            var_218_1.d = 0
                                            goto label_14265f5c0
                                        
                                        int64_t rcx_37 = sx.q(arg_18)
                                        
                                        if (r14_2 == rcx_37.d)
                                            int32_t rdx_25 = r14_2 + 1
                                            arg_18 = rdx_25
                                            var_1c8_1.d = *(rcx_37 * 0x38 + rdi_1 + 0x18)
                                            int32_t r15_5 = var_240_6
                                            int32_t rax_37 = var_240_6 + 1
                                            var_240_6 = rax_37
                                            
                                            if (rax_37 s> var_23c)
                                                sub_1426676e0(&var_248)
                                                rdx_25 = arg_18
                                                rdi_1 = var_248
                                            
                                            uint128_t* rbx_11 = sx.q(rdx_25) * 0x38 + rdi_1
                                            memmove(rbx_11 + 0x38, rbx_11, (r15_5 - rdx_25) * 0x38)
                                            result.b = 0
                                            *rbx_11 = var_1e0_1.o
                                            rbx_11[1] = var_1d0_1.o
                                            rbx_11[2] = var_1c0_5.o
                                            rbx_11[3].q = var_1b4_5
                                        
                                        goto label_14265f380
                                    
                                    void* result_7 = result_5 + 0x20
                                    
                                    if (zmm6.d f> 9.99999905e-09f)
                                        result_7 = result_5
                                    
                                    int32_t var_1f8_3
                                    int32_t var_1e8_2
                                    
                                    if (result_7 != result)
                                        zmm12 = var_200.d
                                        zmm13 = var_200:4.d
                                        zmm9 = var_1f0.d
                                        zmm10 = var_1f0:4.d
                                        zmm6.d = zmm12.d f- zmm9.d
                                        zmm14 = rax_26
                                        zmm7.d = zmm13.d f- zmm10.d
                                        zmm11 = rax_28
                                        zmm8.d = zmm14.d f- zmm11.d
                                        zmm2.d = zmm6.d f* zmm6.d
                                        zmm0_1.d = zmm7.d f* zmm7.d
                                        arg2.d = zmm8.d f* zmm8.d
                                        zmm2.d = zmm2.d f+ zmm0_1.d
                                        zmm2.d = zmm2.d f+ arg2.d
                                        
                                        if (not(zmm2.d f== 1f))
                                            if (zmm2.d f>= 9.99999994e-09f)
                                                zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                                zmm3.d = zmm2.d f* 0.5f
                                                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                                arg2.d = zmm3.d f* zmm0_1.d
                                                zmm2.d = 0.5f f- arg2.d
                                                zmm0_1.d = zmm5_1.d f* zmm2.d
                                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                arg2.d = zmm5_1.d f* zmm5_1.d
                                                zmm3.d = zmm3.d f* arg2.d
                                                zmm4_1.d = 0.5f f- zmm3.d
                                                zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                result_5.d = zmm5_1.d
                                                zmm0_1.d = zmm5_1.d f* zmm6.d
                                                arg2.d = zmm5_1.d f* zmm7.d
                                                zmm5_1.d = zmm5_1.d f* zmm8.d
                                                zmm6 = zmm0_1
                                                zmm7 = arg2
                                                zmm8 = zmm5_1
                                            else
                                                zmm6 = data_143dbb1f8
                                                zmm7 = data_143dbb1fc
                                                zmm8 = data_143dbb200
                                        
                                        zmm0_1 = arg_10
                                        zmm6.d = zmm6.d f* zmm0_1.d
                                        zmm7.d = zmm7.d f* zmm0_1.d
                                        zmm8.d = zmm8.d f* zmm0_1.d
                                        zmm2.d = zmm6.d f+ zmm12.d
                                        arg2.d = zmm7.d f+ zmm13.d
                                        zmm9.d = zmm9.d f- zmm6.d
                                        zmm0_1.d = zmm8.d f+ zmm14.d
                                        zmm10.d = zmm10.d f- zmm7.d
                                        var_200.d = zmm2.d
                                        zmm11.d = zmm11.d f- zmm8.d
                                        var_200:4.d = arg2.d
                                        var_1f0.d = zmm9.d
                                        var_1f8_3 = zmm0_1.d
                                        var_1f0:4.d = zmm10.d
                                        var_1e8_2 = zmm11.d
                                    
                                    if (result_7 != result && result_7 u<= result)
                                        while (true)
                                            int32_t var_188_2 = *(result_7 + 8)
                                            int32_t var_198_2 = *(result_7 + 0x14)
                                            uint64_t var_190 = *result_7
                                            var_1a0 = *(result_7 + 0xc)
                                            
                                            if (sub_140adffb0(&var_190, &var_1a0, &var_200, 
                                                    &var_1f0, &var_170).b == 0)
                                                zmm2 = *(result_7 + 0x14)
                                                zmm3 = *(result_7 + 4)
                                                zmm5_1 = *(result_7 + 0xc)
                                                zmm8 = *(result_7 + 0x10)
                                                zmm7 = zmm5_1
                                                zmm4_1 = *(result_7 + 8)
                                                zmm11.d = zmm3.d f- zmm8.d
                                                zmm14 = *result_7
                                                zmm8.d = zmm8.d f- zmm3.d
                                                result_2.d = zmm2.d
                                                zmm10.d = zmm14.d f- zmm5_1.d
                                                result_5.d = zmm3.d
                                                zmm5_1 = data_143dbb200
                                                zmm7.d = zmm7.d f- zmm14.d
                                                result_1.d = zmm4_1.d
                                                zmm12.d = zmm4_1.d f- zmm2.d
                                                zmm0_1.d = zmm11.d f* zmm11.d
                                                zmm9.d = zmm2.d f- zmm4_1.d
                                                zmm6.d = zmm10.d f* zmm10.d
                                                zmm2.d = zmm7.d f* zmm7.d
                                                zmm6.d = zmm6.d f+ zmm0_1.d
                                                arg2.d = zmm12.d f* zmm12.d
                                                zmm6.d = zmm6.d f+ arg2.d
                                                arg2.d = zmm9.d f* zmm9.d
                                                zmm0_1.d = _mm_sqrt_ss(0, zmm6.d).d f* 0.5f
                                                zmm0_1.q = _mm_cvtps_pd(__minss_xmmss_memss(
                                                    zmm0_1.d, arg_10).q).q f* 0.10000000000000001
                                                uint128_t temp0_16 = _mm_cvtpd_ps(zmm0_1)
                                                zmm0_1.d = zmm8.d f* zmm8.d
                                                zmm2.d = zmm2.d f+ zmm0_1.d
                                                zmm2.d = zmm2.d f+ arg2.d
                                                
                                                if (not(zmm2.d f== 1f))
                                                    if (zmm2.d f>= 9.99999994e-09f)
                                                        zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                                        zmm3.d = zmm2.d f* 0.5f
                                                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                                        arg2.d = zmm3.d f* zmm0_1.d
                                                        zmm2.d = 0.5f f- arg2.d
                                                        zmm0_1.d = zmm5_1.d f* zmm2.d
                                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                        arg2.d = zmm5_1.d f* zmm5_1.d
                                                        zmm3.d = zmm3.d f* arg2.d
                                                        zmm4_1.d = 0.5f f- zmm3.d
                                                        zmm3 = result_5.d
                                                        zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                                        zmm4_1 = result_1.d
                                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                        zmm0_1 = zmm5_1
                                                        arg2 = zmm5_1
                                                        zmm5_1.d = zmm5_1.d f* zmm9.d
                                                        zmm0_1.d = zmm0_1.d f* zmm7.d
                                                        arg2.d = arg2.d f* zmm8.d
                                                        zmm9 = zmm5_1
                                                        zmm5_1 = data_143dbb200
                                                        zmm7 = zmm0_1
                                                        zmm8 = arg2
                                                    else
                                                        zmm7 = data_143dbb1f8
                                                        zmm9 = zmm5_1
                                                        zmm8 = data_143dbb1fc
                                                
                                                zmm0_1.d = temp0_16.d f* zmm7.d
                                                arg2.d = temp0_16.d f* zmm8.d
                                                zmm14.d = zmm14.d f+ zmm0_1.d
                                                zmm2.d = temp0_16.d f* zmm9.d
                                                zmm3.d = zmm3.d f+ arg2.d
                                                zmm4_1.d = zmm4_1.d f+ zmm2.d
                                                zmm0_1 = _mm_unpacklo_ps(zmm14, zmm3.q)
                                                zmm7 = zmm0_1
                                                var_190 = zmm0_1.q
                                                int32_t var_108_1 = zmm4_1.d
                                                int32_t var_188_3 = var_108_1
                                                
                                                if (not(zmm6.d f== 1f))
                                                    if (zmm6.d f>= 9.99999994e-09f)
                                                        zmm5_1 = _mm_rsqrt_ss(zmm6.d, zmm6.d)
                                                        zmm3.d = zmm6.d f* 0.5f
                                                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                                        arg2.d = zmm3.d f* zmm0_1.d
                                                        zmm2.d = 0.5f f- arg2.d
                                                        zmm0_1.d = zmm5_1.d f* zmm2.d
                                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                        arg2.d = zmm5_1.d f* zmm5_1.d
                                                        zmm3.d = zmm3.d f* arg2.d
                                                        zmm4_1.d = 0.5f f- zmm3.d
                                                        zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                        result_5.d = zmm5_1.d
                                                        zmm0_1.d = zmm5_1.d f* zmm10.d
                                                        arg2.d = zmm5_1.d f* zmm11.d
                                                        zmm10 = zmm0_1
                                                        zmm5_1.d = zmm5_1.d f* zmm12.d
                                                        zmm11 = arg2
                                                    else
                                                        zmm10 = data_143dbb1f8
                                                        zmm11 = data_143dbb1fc
                                                    
                                                    zmm12 = zmm5_1
                                                
                                                int32_t var_150_2 = var_108_1
                                                zmm0_1.d = temp0_16.d f* zmm10.d
                                                uint64_t var_158 = zmm7.q
                                                arg2.d = temp0_16.d f* zmm11.d
                                                zmm0_1.d = zmm0_1.d f+ *(result_7 + 0xc)
                                                zmm13.d = temp0_16.d f* zmm12.d
                                                arg2.d = arg2.d f+ *(result_7 + 0x10)
                                                zmm2.d = result_2.d.d f+ zmm13.d
                                                zmm0_1 = _mm_unpacklo_ps(zmm0_1, arg2.q)
                                                var_1a0 = zmm0_1.q
                                                uint64_t var_148 = zmm0_1.q
                                                int32_t var_fc_1 = zmm2.d
                                                int32_t var_198_3 = var_fc_1
                                                int32_t var_140_2 = var_fc_1
                                                int32_t var_130_2 = var_1e8_2
                                                int32_t var_120_2 = var_1f8_3
                                                uint64_t var_138 = var_1f0
                                                uint64_t var_128 = var_200
                                                int64_t var_f8[0x2]
                                                sub_140adfb00(&var_128, &var_138, &var_148, 
                                                    &var_158, &var_f8, &var_180)
                                                arg2 = var_180.d
                                                zmm2 = var_180:4.d
                                                zmm3 = var_178
                                                var_1c0_5 = *result_7
                                                int32_t var_1b8_7 = *(result_7 + 8)
                                                var_1b4_5 = *(result_7 + 0xc)
                                                int32_t var_1ac_7 = *(result_7 + 0x14)
                                                break
                                            
                                            result_7 += 0x20
                                            
                                            if (result_7 u> result_1)
                                                result.b = 1
                                                goto label_14265f380
                                        
                                        goto label_14265f2b8
                                    
                                    result.b = 1
                                label_14265f380:
                                    r15_1 = var_240_6
                                
                                if (arg_8 == 0)
                                    rdx_16 = arg_18
                                    r9_1 = arg_20
                                else if (result.b == 0)
                                    if (r14_2 s< 0 || r14_2 s>= r15_1)
                                        result.b = 0
                                    else
                                        result.b = 1
                                    
                                    if (result.b != 0)
                                        uint128_t* r14_4 = sx.q(r14_2) * 0x38
                                        
                                        if (*(r14_4 + rdi_1 + 0x10) != 0)
                                            int64_t rbx_13 = sx.q(rsi_3)
                                            rsi_3 = (rbx_13 + 1).d
                                            var_218_1.d = rsi_3
                                            
                                            if (rsi_3 s> var_218_1:4.d)
                                                sub_1405c4e40(&var_220)
                                                rsi_3 = var_218_1.d
                                                r12_2 = var_220
                                            
                                            result = rbx_13 << 5
                                            *(result + r12_2) = *(r14_4 + rdi_1)
                                            *(result + r12_2 + 0x10) = *(r14_4 + rdi_1 + 0x10)
                                    
                                    rdx_16 = arg_18
                                    r14_2 = rdx_16
                                    r9_1 = rdx_16 + 1
                                    arg_20 = r9_1
                                else
                                    if (r14_2 s< 0 || r14_2 s>= r15_1)
                                        result.b = 0
                                    else
                                        result.b = 1
                                    
                                    if (result.b != 0)
                                        uint128_t* r14_3 = sx.q(r14_2) * 0x38
                                        
                                        if (*(r14_3 + rdi_1 + 0x10) != 0)
                                            int64_t rbx_12 = sx.q(rsi_3)
                                            rsi_3 = (rbx_12 + 1).d
                                            var_218_1.d = rsi_3
                                            
                                            if (rsi_3 s> var_218_1:4.d)
                                                sub_1405c4e40(&var_220)
                                                rsi_3 = var_218_1.d
                                                r12_2 = var_220
                                            
                                            result = rbx_12 << 5
                                            *(result + r12_2) = *(r14_3 + rdi_1)
                                            *(result + r12_2 + 0x10) = *(r14_3 + rdi_1 + 0x10)
                                    
                                    rdx_16 = arg_20
                                    r14_2 = arg_20
                                    arg_18 = rdx_16
                                    r9_1 = arg_20 + 1
                                    arg_20 = r9_1
                                
                                int32_t result_3 = r15_1 - 1
                                
                                if (r9_1 s> result_3)
                                    if (r14_2 s< 0 || r14_2 s>= r15_1)
                                        result.b = 0
                                    else
                                        result.b = 1
                                    
                                    if (result.b != 0)
                                        uint128_t* r14_5 = sx.q(r14_2) * 0x38
                                        
                                        if (*(r14_5 + rdi_1 + 0x10) != 0)
                                            int64_t rbx_14 = sx.q(rsi_3)
                                            rsi_3 = (rbx_14 + 1).d
                                            var_218_1.d = rsi_3
                                            
                                            if (rsi_3 s> var_218_1:4.d)
                                                sub_1405c4e40(&var_220)
                                                rsi_3 = var_218_1.d
                                                result_3 = r15_1 - 1
                                                r12_2 = var_220
                                            
                                            result = rbx_14 << 5
                                            *(result + r12_2) = *(r14_5 + rdi_1)
                                            *(result + r12_2 + 0x10) = *(r14_5 + rdi_1 + 0x10)
                                    
                                    if (result_3 s< 0 || result_3 s>= r15_1)
                                        result.b = 0
                                    else
                                        result.b = 1
                                    
                                    if (result.b != 0)
                                        result = sx.q(result_3)
                                        uint128_t* r14_6 = result * 0x38
                                        
                                        if (*(r14_6 + rdi_1 + 0x10) != 0)
                                            int64_t rbx_15 = sx.q(rsi_3)
                                            rsi_3 = (rbx_15 + 1).d
                                            var_218_1.d = rsi_3
                                            
                                            if (rsi_3 s> var_218_1:4.d)
                                                sub_1405c4e40(&var_220)
                                                rsi_3 = var_218_1.d
                                                r12_2 = var_220
                                            
                                            result = rbx_15 << 5
                                            *(result + r12_2) = *(r14_6 + rdi_1)
                                            *(result + r12_2 + 0x10) = *(r14_6 + rdi_1 + 0x10)
                                else
                                    result = zx.q(var_234_2 - 1)
                                    bool cond:4_1 = var_234_2 - 1 s< 0
                                    var_234_2 = result.d
                                    
                                    if (not(cond:4_1))
                                        continue
                            
                            if (rsi_3 == 0)
                                break
                            
                            result = &var_220
                            
                            if (arg1 + 0x28 != &var_220)
                                int32_t r8_9 = *(arg1 + 0x34)
                                *(arg1 + 0x30) = rsi_3
                                sub_14083a1f0(arg1 + 0x28, rsi_3, r8_9)
                                result = memcpy(*(arg1 + 0x28), r12_2, rsi_3 << 5)
                            
                            break
                        
                        if (r12_2 != 0)
                            result = sub_140a74f90(r12_2)
            
            if (rdi_1 != 0)
                return sub_140a74f90(rdi_1)

return result
