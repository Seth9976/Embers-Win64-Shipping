// 函数: sub_142a7ce50
// 地址: 0x142a7ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = arg6
int64_t rdi = arg3
void* rbx = arg2

if (*r14 s<= 0)
    if (arg4 s>= 1)
        int512_t zmm0 = sub_142a7c840(arg1, arg2, arg5)
        int64_t r15 = 0
        int64_t var_f8 = 0
        
        if (*(arg1 + 0x78) == 0)
            return 0
        
        uint64_t rdx = zx.q(arg4 - 1)
        int64_t r13_1 = 0
        int32_t var_58_1 = rdx.d
        int64_t r12_1 = 0
        int64_t rax_3 = sx.q(*(*(*(arg1 + 8) + 0x88) + 8))
        int32_t var_108
        int64_t var_e8
        int64_t rax_27
        int64_t rax_28
        void* rcx_21
        int64_t rdx_13
        void* rbx_7
        void** rdi_8
        int64_t r8_13
        void** r15_4
        int64_t r15_5
        
        if (rdx.d s<= 0)
        label_142a7d295:
            r8_13 = *(arg1 + 0x78)
            r13_1 = sx.q(rdx.d)
            
            if (r8_13 s> r15)
                int64_t rcx_20
                
                if (*(rbx + 0x20) == 0)
                    rcx_20 = *(arg1 + 0x30)
                
                if (*(rbx + 0x20) != 0 || rcx_20 != *(rbx + 0x10) || rcx_20 != sx.q(*(rbx + 0x1c)))
                    arg6.d = 0
                    r15_5 = sx.q(sub_142aea690(rbx, r15, r8_13, 0, 0, &arg6, var_f8))
                    int32_t rdi_9 = (r15_5 + 1).d
                    void* rax_39 = sub_142a7dd00(sx.q(rdi_9) * 2)
                    rbx_7 = rax_39
                    
                    if (rax_39 != 0)
                        sub_142aea690(arg2, var_f8, *(arg1 + 0x78), rbx_7, rdi_9, r14)
                        rdi_8 = arg3 + (r13_1 << 3)
                    label_142a7d52f:
                        void* rcx_38 = *rdi_8
                        
                        if (rcx_38 == 0)
                            int32_t var_dc_4 = 0x90
                            int64_t var_d8_3
                            __builtin_memset(&var_d8_3, 0, 0x80)
                            int32_t var_e0_4 = 0
                            var_e8 = 0x345ad82c
                            int64_t r8_21
                            int512_t zmm1_1
                            r8_21, zmm1_1 = sub_142aeaaf0(&var_e8, rbx_7, r15_5, r14)
                            int32_t var_108_2
                            var_108_2.q = r14
                            r8_21.b = 1
                            *rdi_8 = sub_142aea410(0, &var_e8, r8_21, 0, zmm1_1, var_108_2)
                            sub_142aea470(&var_e8)
                        else
                            int64_t rax_40 = sub_142aea860(rcx_38)
                            sub_142aeaca0(*rdi_8, nullptr, rax_40, rbx_7, r15_5.d, r14, var_f8)
                        
                        sub_142a7dcd0(rbx_7)
                    else
                    label_142a7d4fd:
                        *r14 = 7
                else
                    rcx_21 = *(rdi + (r13_1 << 3))
                    r15_4 = rdi + (r13_1 << 3)
                    rdx_13 = var_f8
                    rax_27 = *(rbx + 0x30)
                    
                    if (rcx_21 == 0)
                    label_142a7d3d3:
                        int64_t var_d8_2
                        __builtin_memset(&var_d8_2, 0, 0x80)
                        int32_t var_e0_3 = 0
                        int32_t var_dc_3 = 0x90
                        var_e8 = 0x345ad82c
                        int64_t r8_15
                        int512_t zmm1
                        r8_15, zmm1 =
                            sub_142aeaaf0(&var_e8, rax_27 + (rdx_13 << 1), r8_13 - rdx_13, r14)
                        var_108.q = r14
                        r8_15.b = 1
                        *r15_4 = sub_142aea410(0, &var_e8, r8_15, 0, zmm1, var_108)
                        sub_142aea470(&var_e8)
                    else
                        rax_28 = sub_142aea860(rcx_21)
                        sub_142aeaca0(*r15_4, nullptr, rax_28, rax_27 + (rdx_13 << 1), 
                            r8_13.d - rdx_13.d, r14, var_f8)
        else
            int32_t rdi_5
            
            while (true)
                if (*(arg1 + 0x13c) s<= 0)
                    arg6.d = 0
                    
                    if (sub_142a79bd0(arg1, &arg6, zmm0) != 0)
                        int64_t rcx_2
                        
                        if (*(rbx + 0x20) == 0)
                            rcx_2 = *(arg1 + 0x30)
                        
                        int64_t rbx_2
                        
                        if (*(rbx + 0x20) != 0 || rcx_2 != *(rbx + 0x10)
                                || rcx_2 != sx.q(*(rbx + 0x1c)))
                            arg6.d = 0
                            int64_t rdi_3 =
                                sx.q(sub_142aea690(rbx, r15, *(arg1 + 0x88), 0, 0, &arg6, var_f8))
                            int32_t r15_1 = (rdi_3 + 1).d
                            void* rax_11 = sub_142a7dd00(sx.q(r15_1) * 2)
                            
                            if (rax_11 == 0)
                                goto label_142a7d4fd
                            
                            sub_142aea690(arg2, var_f8, *(arg1 + 0x88), rax_11, r15_1, r14)
                            void* rcx_11 = *(arg3 + (r12_1 << 3))
                            
                            if (rcx_11 == 0)
                                var_e8 = 0x345ad82c
                                int32_t var_e0_2 = 0
                                int64_t var_d8_1
                                __builtin_memset(&var_d8_1, 0, 0x80)
                                int32_t var_dc_2 = 0x90
                                int64_t r8_8
                                r8_8, arg5 = sub_142aeaaf0(&var_e8, rax_11, rdi_3, r14)
                                var_108.q = r14
                                r8_8.b = 1
                                *(arg3 + (r12_1 << 3)) =
                                    sub_142aea410(0, &var_e8, r8_8, 0, arg5, var_108)
                                sub_142aea470(&var_e8)
                            else
                                int64_t rax_12 = sub_142aea860(rcx_11)
                                sub_142aeaca0(*(arg3 + (r12_1 << 3)), nullptr, rax_12, rax_11, 
                                    rdi_3.d, r14)
                            
                            zmm0 = sub_142a7dcd0(rax_11)
                            rbx_2 = arg3
                        else
                            void* rcx_3 = *(rdi + (r12_1 << 3))
                            
                            if (rcx_3 == 0)
                                int64_t r8_1 = *(arg1 + 0x88)
                                var_e8 = 0x345ad82c
                                int32_t var_e0_1 = 0
                                int64_t var_d8
                                __builtin_memset(&var_d8, 0, 0x80)
                                int32_t var_dc_1 = 0x90
                                int64_t r8_3
                                r8_3, arg5 = sub_142aeaaf0(&var_e8, *(rbx + 0x30) + (r15 << 1), 
                                    r8_1 - r15, r14)
                                var_108.q = r14
                                r8_3.b = 1
                                rbx_2 = arg3
                                *(rbx_2 + (r12_1 << 3)) =
                                    sub_142aea410(0, &var_e8, r8_3, 0, arg5, var_108)
                                zmm0 = sub_142aea470(&var_e8)
                            else
                                int32_t rdi_2 = *(arg1 + 0x88) - r15.d
                                int64_t rbx_1 = *(rbx + 0x30) + (r15 << 1)
                                int64_t rax_7 = sub_142aea860(rcx_3)
                                rbx_2 = arg3
                                zmm0 = sub_142aeaca0(*(rbx_2 + (r12_1 << 3)), nullptr, rax_7, 
                                    rbx_1, rdi_2, r14, var_f8)
                        
                        int32_t rdi_4 = 1
                        int64_t r15_3 = 1
                        var_f8 = *(arg1 + 0x90)
                        
                        if (1 s<= rax_3)
                            int32_t i = arg4 - 2
                            int32_t* rdx_9 = nullptr
                            arg6.d = i
                            int32_t* var_50_1 = nullptr
                            
                            while (r13_1.d s< i)
                                r13_1 = zx.q(r13_1.d + 1)
                                r12_1 += 1
                                int64_t rbx_4
                                
                                if (*r14 s> 0)
                                    rbx_4 = -1
                                else if (*(arg1 + 0x82) != 0)
                                    void* rcx_16
                                    
                                    if (rdi_4 s>= 0)
                                        rcx_16 = *(*(arg1 + 8) + 0x88)
                                    
                                    if (rdi_4 s< 0 || rdi_4 s> *(rcx_16 + 8))
                                        *r14 = 8
                                        rbx_4 = -1
                                    else if (rdi_4 != 0)
                                        int32_t rax_17
                                        
                                        if (r15_3 - 1 s>= 0)
                                            rax_17 = *(rcx_16 + 8)
                                        
                                        int32_t rax_21
                                        
                                        if (r15_3 - 1 s< 0 || rax_17 s<= 0
                                                || rax_17 - rdi_4 + 1 s<= 0)
                                            rax_21 = 0
                                        else
                                            rax_21 = *(rdx_9 + *(rcx_16 + 0x18))
                                        
                                        rbx_4 = *(*(arg1 + 0xb8) + (sx.q(rax_21 + 1) << 3) + 0x10)
                                    else
                                        rbx_4 = *(arg1 + 0x90)
                                else
                                    *r14 = 0x10302
                                    rbx_4 = -1
                                
                                int64_t rax_24 = sub_142a7d670(arg1, rdi_4, r14)
                                rbx_2 = arg3
                                var_108.q = r14
                                int32_t* rax_25
                                rax_25, zmm0 = sub_142a7d7f0(*(arg1 + 0x20), 
                                    *(rbx_2 + (r12_1 << 3)), rax_24, rbx_4, var_108)
                                rdi_4 += 1
                                rdx_9 = &var_50_1[1]
                                *(rbx_2 + (r12_1 << 3)) = rax_25
                                i = arg6.d
                                r15_3 += 1
                                var_50_1 = rdx_9
                                
                                if (r15_3 s> rax_3)
                                    break
                        
                        r15 = var_f8
                        
                        if (r15 == *(arg1 + 0x78))
                            int32_t rax_29 = (r13_1 + 1).d
                            
                            if (rax_29 s< arg4)
                                r13_1 = sx.q(rax_29)
                                int32_t* rcx_23 = *(rbx_2 + (r13_1 << 3))
                                int32_t** rbx_6 = rbx_2 + (r13_1 << 3)
                                
                                if (rcx_23 != 0)
                                    int64_t rax_31 = sub_142aea860(rcx_23)
                                    sub_142aeaca0(*rbx_6, nullptr, rax_31, &data_143640d38, 0, r14, 
                                        var_f8)
                                else
                                    *rbx_6 = sub_142aeaaf0(rcx_23, nullptr, 0, r14)
                            
                            goto label_142a7d5ec
                        
                        if (*r14 s> 0)
                            return zx.q((r13_1 + 1).d)
                        
                        rdx = sx.q(var_58_1)
                        r13_1 = zx.q(r13_1.d + 1)
                        rbx = arg2
                        r12_1 += 1
                        rdi = arg3
                        
                        if (r12_1 s>= rdx)
                            goto label_142a7d295
                        
                        continue
                
                if (*(rbx + 0x20) == 0)
                    int64_t rcx_25 = *(arg1 + 0x30)
                    
                    if (rcx_25 == *(rbx + 0x10) && rcx_25 == sx.q(*(rbx + 0x1c)))
                        rdx_13 = var_f8
                        int64_t rax_33 = sx.q(r13_1.d)
                        rcx_21 = *(rdi + (rax_33 << 3))
                        r15_4 = rdi + (rax_33 << 3)
                        rax_27 = *(rbx + 0x30)
                        
                        if (rcx_21 == 0)
                            r8_13 = *(arg1 + 0x78)
                            goto label_142a7d3d3
                        
                        rdi_5 = *(arg1 + 0x78)
                        break
                
                arg6.d = 0
                r15_5 = sx.q(sub_142aea690(rbx, r15, *(arg1 + 0x78), 0, 0, &arg6, var_f8))
                int32_t rdi_7 = (r15_5 + 1).d
                void* rax_36 = sub_142a7dd00(sx.q(rdi_7) * 2)
                rbx_7 = rax_36
                
                if (rax_36 == 0)
                    goto label_142a7d4fd
                
                sub_142aea690(arg2, var_f8, *(arg1 + 0x78), rax_36, rdi_7, r14)
                rdi_8 = arg3 + (sx.q(r13_1.d) << 3)
                goto label_142a7d52f
            
            rax_28 = sub_142aea860(rcx_21)
            sub_142aeaca0(*r15_4, nullptr, rax_28, rax_27 + (rdx_13 << 1), rdi_5 - rdx_13.d, r14, 
                var_f8)
    label_142a7d5ec:
        return zx.q((r13_1 + 1).d)
    
    *r14 = 1

return 0
