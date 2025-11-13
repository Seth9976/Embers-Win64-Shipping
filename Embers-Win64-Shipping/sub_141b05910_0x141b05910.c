// 函数: sub_141b05910
// 地址: 0x141b05910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* result = (*(*arg2 + 0x78))(arg2)

if (result != 0)
    int64_t r8_1 = *result
    result = (*(r8_1 + 0x150))(result, arg3, r8_1)
    int64_t* result_1 = result
    
    if (result != 0)
        uint64_t r12
        r12.b = 0
        void** const var_118 = &data_143056448
        int32_t* r11_1 = arg1 + 0x18
        int64_t r15_1 = 0
        void* var_58_1 = nullptr
        int32_t rcx_2 = 0
        int32_t var_50_1 = 0
        void* r10_1 = nullptr
        int32_t var_4c_1 = 8
        int32_t rbx_1 = r11_1[6]
        int32_t r8_2 = 0
        int32_t var_168 = 0
        int32_t var_164_1 = 1
        int32_t* var_160_1 = r11_1
        int32_t var_158_1 = 0xffffffff
        int64_t var_154_1 = 0
        
        if (rbx_1 != 0)
            int32_t* rax_3 = *(r11_1 + 0x10)
            int32_t* r9_1 = r11_1
            
            if (rax_3 != 0)
                r9_1 = rax_3
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rbx_1 - 1)
            int32_t rdx_2 = *r9_1
            
            if (rdx_2 != 0)
            label_141b05a4b:
                int32_t rax_10 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
                int32_t var_164_2 = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_2
                
                var_154_1.d = r8_2 - rax_11 + 0x1f
                
                if (r8_2 - rax_11 + 0x1f s> rbx_1)
                    var_154_1.d = rbx_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx_2)
                    r8_2 += 0x20
                    rcx_2 += 1
                    var_154_1:4.d = r8_2
                    var_168 = rcx_2
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = r9_1[rdx_3 + 1]
                    var_158_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_141b05a4b
                
                var_154_1.d = rbx_1
            
            r11_1 = arg1 + 0x18
        
        int32_t rdx_4 = *(arg1 + 0x30)
        double zmm2[0x2] = var_158_1.o
        int32_t rsi_1 = r11_1[6]
        double var_a8_1[0x2] = zmm2
        int32_t r14_1 = 0xffffffff << (rdx_4.b & 0x1f)
        int128_t var_b8_1 = var_168.o
        int32_t r8_5 = rdx_4 s>> 5
        int32_t r9_3 = rdx_4 & 0xffffffe0
        int32_t var_158_2 = r14_1
        int64_t var_d8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_154_1.d = rdx_4
        int128_t var_f8 = (arg1 + 8).o
        int128_t var_e8_1 = var_b8_1
        
        if (rdx_4 != rsi_1)
            int32_t* rax_13 = *(r11_1 + 0x10)
            
            if (rax_13 != 0)
                r11_1 = rax_13
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rsi_1 - 1)
            int32_t rdx_8 = r11_1[sx.q(r8_5)] & r14_1
            
            if (rdx_8 != 0)
            label_141b05b23:
                int32_t rax_20 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
                int32_t rdi_1
                
                if (rax_20 == 0)
                    rdi_1 = 0x20
                else
                    rdi_1 = 0x1f - temp0_4
                
                var_154_1.d = r9_3 - rdi_1 + 0x1f
                
                if (r9_3 - rdi_1 + 0x1f s> rsi_1)
                    var_154_1.d = rsi_1
            else
                while (true)
                    int64_t rcx_7 = sx.q(r8_5)
                    r9_3 += 0x20
                    r8_5 += 1
                    
                    if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = r11_1[rcx_7 + 1]
                    var_158_2 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_141b05b23
                
                var_154_1.d = rsi_1
            
            r11_1 = arg1 + 0x18
        
        uint64_t rdx_10 = var_158_2.q u>> 0x20
        uint64_t var_110_1 = rdx_10
        void var_98
        
        while (true)
            int64_t rax_22 = sx.q(var_e8_1:0xc.d)
            int64_t rcx_9 = var_f8.q
            
            if (rax_22.d == rdx_10.d && var_e8_1.q == r11_1 && rcx_9 == arg1 + 8)
                break
            
            int64_t* result_2 = result_1
            int32_t* r14_4 = rax_22 * 0x50 + *rcx_9
            int64_t var_d0
            int64_t* rax_23 = sub_141b28d80(&var_d0, r14_4, result_2)
            int16_t* rdx_12
            
            if (rax_23[1].d == 0)
                rdx_12 = &data_142d40450
            else
                rdx_12 = *rax_23
            
            int64_t var_140
            sub_140b58260(&var_140, rdx_12, 1)
            int64_t rcx_12 = var_d0
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            int64_t rbx_2 = var_140
            int64_t var_170 = rbx_2
            void* const rcx_16
            
            if (*(arg1 + 0x60) == *(arg1 + 0x8c))
            label_141b05c40:
                rcx_16 = nullptr
            else
                int32_t rax_26 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                void* r8_7 = arg1 + 0x90
                void* rcx_14 = *(r8_7 + 8)
                
                if (rcx_14 != 0)
                    r8_7 = rcx_14
                
                int32_t rax_28 = *(r8_7 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_26)) << 2))
                
                if (rax_28 == 0xffffffff)
                label_141b05c40_1:
                    rcx_16 = nullptr
                else
                    int64_t r8_8 = *(arg1 + 0x58)
                    
                    while (true)
                        int64_t rdx_16 = sx.q(rax_28) * 3
                        rcx_16 = r8_8 + (rdx_16 << 3)
                        
                        if (*(r8_8 + (rdx_16 << 3)) == rbx_2)
                            break
                        
                        rax_28 = *(rcx_16 + 0x10)
                        
                        if (rax_28 == 0xffffffff)
                            goto label_141b05c40_2
                    
                    if (rax_28 == 0xffffffff)
                    label_141b05c40_2:
                        rcx_16 = nullptr
            
            void* rax_29 = rcx_16 + 8
            
            if (rcx_16 == 0)
                rax_29 = nullptr
            
            if (rax_29 == 0)
                goto label_141b05c7b
            
            int64_t* rax_30 = sub_140d3c6e0(rax_29)
            int64_t* rdi_2 = rax_30
            
            if (rax_30 != 0)
            label_141b05cd0:
                
                if (rdi_2 != 0)
                    void* rax_34 = *(r14_4 + 0x38)
                    void* rdx_22 = &r14_4[4]
                    int32_t rbx_4 = 0
                    int32_t r8_10 = -0x80000000
                    
                    if (rax_34 != 0)
                        rdx_22 = rax_34
                    
                    void* r9_5 = rdx_22 + sx.q(r14_4[0x10]) * 0x14
                    
                    if (rdx_22 == r9_5)
                    label_141b05e0b:
                        
                        if (r14_4[0x10] == 0)
                            int64_t rbx_5 = sx.q(var_50_1)
                            int32_t rax_43 = (rbx_5 + 1).d
                            var_50_1 = rax_43
                            
                            if (rax_43 s> var_4c_1)
                                sub_140809370(&var_98, rbx_5.d)
                            
                            void* rdx_27 = &var_98
                            
                            if (var_58_1 != 0)
                                rdx_27 = var_58_1
                            
                            *(rdx_27 + (rbx_5 << 3)) = *r14_4
                        
                        if (*(r14_4 + 9) != 0)
                            char rbx_6 = r14_4[2].b
                            sub_1420ee450(rdi_2, rbx_6)
                            char rax_46 = r12.b
                            
                            if (r12.b == 0)
                                rax_46 = 2
                            
                            r12 = zx.q(rax_46)
                            
                            if (rbx_6 != 0)
                            label_141b05e6a:
                                
                                if (rdi_2[0x25] == 0)
                                    int64_t rdx_25
                                    rdx_25.b = 1
                                    (*(*rdi_2 + 0x260))(rdi_2, rdx_25)
                                    r12.b = 1
                    else
                        do
                            int32_t rax_36 = -1
                            int32_t rcx_25 = *(rdx_22 + 0xc)
                            
                            if (*(rdx_22 + 0x10) == 0)
                                rax_36 = 1
                            
                            if (rcx_25 s> r8_10)
                                rbx_4 = rax_36
                                r8_10 = rcx_25
                            else if (rcx_25 == r8_10)
                                rbx_4 += rax_36
                            
                            rdx_22 += 0x14
                        while (rdx_22 != r9_5)
                        
                        if (rbx_4 == 0)
                            goto label_141b05e0b
                        
                        void* rsi_3
                        rsi_3.b = rbx_4 s> 0
                        
                        if ((*(*rdi_2 + 0x270))(rdi_2, rdx_22) != rsi_3.b)
                            if (*(r14_4 + 9) == 0)
                                char rax_40 = (*(*rdi_2 + 0x270))(rdi_2)
                                void var_178
                                
                                if (&var_178 != &r14_4[2])
                                    r14_4[2].b = rax_40
                                    *(r14_4 + 9) = 1
                            
                            int64_t rax_41 = data_143f2c730
                            
                            if (rax_41 == 0)
                                rax_41 = sub_141a54240(&data_143f2c730, 0)
                            
                            int64_t var_108
                            int64_t* var_180_1 = &var_108
                            int32_t var_100_1 = arg2[0x5b].d
                            char r8_12 = *(arg2 + 0x2dc)
                            var_108 = arg2[0x5a]
                            sub_1405c5900(&arg2[0x1f], rax_41, &var_118, rdi_2, r8_12, var_180_1)
                            sub_1420ee450(rdi_2, rsi_3.b)
                            char rax_42 = r12.b
                            
                            if (r12.b == 0)
                                rax_42 = 2
                            
                            r12 = zx.q(rax_42)
                            
                            if (rbx_4 s> 0)
                                goto label_141b05e6a
            else
                sub_140943590(arg1 + 0x58, var_170)
                result_2 = result_1
            label_141b05c7b:
                int32_t rcx_19
                rcx_19.b = var_170:4.d == 0
                
                if ((rcx_19.b & sub_140b5b8a0(var_170.d, 0)) == 0)
                    int64_t* rax_33 = sub_141b25710(sub_140b63b70(&var_170, &var_168), result_2)
                    rdi_2 = rax_33
                    
                    if (rax_33 != 0)
                        void var_128
                        sub_140d3a3a0(&var_128, rax_33)
                        sub_140dd27d0(arg1 + 0x58, &var_170, &var_128)
                    
                    goto label_141b05cd0
            
            var_e8_1:8.d &= not.d(var_f8:0xc.d)
            sub_14059bdd0(&var_f8:8)
            r10_1 = var_58_1
            r11_1 = arg1 + 0x18
            rdx_10 = var_110_1
        
        void* rbx_7 = &var_98
        
        if (r10_1 != 0)
            rbx_7 = r10_1
        
        int64_t rdi_3 = sx.q(var_50_1) << 3
        result = rbx_7 + rdi_3
        uint64_t rdi_4 = rdi_3 u>> 3
        
        if (rbx_7 u> result)
            rdi_4 = 0
        
        if (rdi_4 != 0)
            do
                result = sub_141b2f0e0(arg1 + 8, *rbx_7)
                r15_1 += 1
                rbx_7 += 8
            while (r15_1 != rdi_4)
            
            r10_1 = var_58_1
        
        if (r12.b != 0)
            result = sub_142435600(result_1, r12.b)
            r10_1 = var_58_1
        
        if (r10_1 != 0)
            result = sub_140a74f90(r10_1)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
