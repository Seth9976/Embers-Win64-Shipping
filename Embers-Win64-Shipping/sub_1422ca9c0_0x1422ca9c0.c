// 函数: sub_1422ca9c0
// 地址: 0x1422ca9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = arg3
int64_t* rdx_15

while (true)
    int64_t* rax_1 = *arg2
    int64_t* rax_3 = *r10
    uint32_t r12_1 = zx.d(*(**rax_1 + (sx.q(rax_1[1].d) << 1)))
    int64_t* result = *rax_3
    uint32_t rbx_1 = zx.d(*(*result + (sx.q(rax_3[1].d) << 1)))
    
    if (r12_1 != 0)
        if (rbx_1 == 0)
            rdx_15 = arg2
            break
        
        int64_t* r14_1 = nullptr
        int64_t* r15_1 = nullptr
        int32_t rcx_6
        int64_t rbx_2
        int32_t r11_1
        
        if (r12_1 u< rbx_1)
            result = sub_1422cb580(arg2)
            
            if (result.b != 0)
                rbx_2 = sx.q(arg5[1].d)
                int32_t rax_4 = (rbx_2 + 1).d
                arg5[1].d = rax_4
                
                if (rax_4 s> *(arg5 + 0xc))
                    sub_140594770(arg5)
                
                r10 = arg3
            label_1422caafc:
                r14_1 = arg2
                *(*arg5 + (rbx_2 << 1)) = r12_1.w
                r11_1 = arg2[6].d
                rcx_6 = arg2[7].d
            label_1422cab21:
                void* r12_4 = (sx.q(r11_1) << 5) + *(arg1 + 0x38)
                
                if (*(r12_4 + 0x1c) != 0)
                    continue
                else
                    int64_t* r10_2 = sx.q(rcx_6) + sx.q(*(r12_4 + 0xc)) + arg4
                    int64_t rbx_3 = *r10_2
                    uint32_t var_fc
                    int32_t var_f8
                    
                    if (r14_1 != 0)
                        void* rcx_10 = *r14_1
                        int64_t rdx_5 = sx.q(*(rcx_10 + 8))
                        *(rcx_10 + 8) = (rdx_5 + 1).d
                        int64_t* r8 = *r14_1
                        var_fc = zx.d(*(**r8 + (rdx_5 << 1)))
                        var_f8 = r8[1].d
                    
                    uint32_t var_104
                    int32_t var_100
                    
                    if (r15_1 != 0)
                        void* rcx_12 = *r15_1
                        int64_t rdx_6 = sx.q(*(rcx_12 + 8))
                        *(rcx_12 + 8) = (rdx_6 + 1).d
                        int64_t* r8_1 = *r15_1
                        var_104 = zx.d(*(**r8_1 + (rdx_6 << 1)))
                        var_100 = r8_1[1].d
                    
                    int32_t rcx_14 = arg5[1].d
                    arg5[1].d = rcx_14 + 1
                    
                    if (rcx_14 + 1 s> *(arg5 + 0xc))
                        sub_140594770(arg5)
                    
                    int64_t* rax_21
                    
                    if (r14_1 == 0)
                        rax_21 = r15_1[2]
                    else
                        rax_21 = r14_1[2]
                    
                    void* r9 = *(*rax_21 + zx.q(*(r12_4 + 0x14)) * 0x10 - 8)
                    int64_t var_e8
                    int64_t rax_29
                    int64_t rcx_17
                    
                    if (r14_1 != 0)
                        int64_t rax_30 = *r14_1
                        
                        if (r15_1 == 0)
                            rcx_17 = arg1
                            var_e8 = rax_30
                            int64_t var_e0_2 = rcx_17 + 0x38
                            int32_t var_d0_2 = *(r9 + 8)
                            uint32_t var_cc_2 = zx.d(*(r12_4 + 0xa))
                            int32_t var_c8_2 = r10_2[1].d
                            int32_t var_c0_2 = zx.d(*(r12_4 + 8)) - 1
                            rax_29 = r14_1[8]
                            goto label_1422cac6d
                        
                        int32_t rdx_11 = r10_2[1].d
                        uint32_t r8_3 = zx.d(*(r12_4 + 0xa))
                        uint32_t rcx_18 = zx.d(*(r12_4 + 8))
                        int64_t var_88 = rax_30
                        void* var_78_1 = r9
                        int64_t var_80_1 = arg1 + 0x38
                        int32_t var_70_1 = *(r9 + 8)
                        int64_t var_48_1 = r14_1[8]
                        var_e8 = *r15_1
                        int64_t var_e0_3 = arg1 + 0x38
                        uint32_t var_6c_1 = r8_3
                        int32_t var_68_1 = rdx_11
                        int32_t var_60_1 = rcx_18 - 1
                        void* var_d8_2 = r9
                        int32_t var_64_1 = r11_1 + 1
                        int32_t var_40_1 = 0xffffffff
                        int32_t var_d0_3 = *(r9 + 8)
                        uint32_t var_cc_3 = r8_3
                        int32_t var_c8_3 = rdx_11
                        int32_t var_c0_3 = rcx_18 - 1
                        int64_t var_a8_2 = r15_1[8]
                        int32_t var_c4_2 = r11_1 + 1
                        int32_t var_a0_2 = 0xffffffff
                        sub_1422ca9c0(arg1, &var_88, &var_e8, rbx_3, arg5)
                    else
                        rcx_17 = arg1
                        var_e8 = *r15_1
                        int64_t var_e0_1 = rcx_17 + 0x38
                        int32_t var_d0_1 = *(r9 + 8)
                        uint32_t var_cc_1 = zx.d(*(r12_4 + 0xa))
                        int32_t var_c8_1 = r10_2[1].d
                        int32_t var_c0_1 = zx.d(*(r12_4 + 8)) - 1
                        rax_29 = r15_1[8]
                    label_1422cac6d:
                        void* var_d8_1 = r9
                        int32_t var_c4_1 = r11_1 + 1
                        int64_t var_a8_1 = rax_29
                        int32_t var_a0_1 = 0xffffffff
                        sub_1422cc4a0(rcx_17, &var_e8, rbx_3, arg5)
                    int64_t rax_45 = sx.q(rcx_14)
                    *(*arg5 + (rax_45 << 1)) = arg5[1].w - rax_45.w - 1
                    int64_t rbx_4 = sx.q(arg5[1].d)
                    int32_t rax_47 = (rbx_4 + 1).d
                    arg5[1].d = rax_47
                    
                    if (rax_47 s> *(arg5 + 0xc))
                        sub_140594770(arg5)
                    
                    *(*arg5 + (rbx_4 << 1)) = 0
                    
                    if (r15_1 != 0)
                        *(*r15_1 + 8) = var_100 + var_104
                        void* rax_50 = *r15_1
                        *(rax_50 + 8) += 1
                    
                    r10 = arg3
                    
                    if (r14_1 == 0)
                        continue
                    else
                        *(*r14_1 + 8) = var_f8 + var_fc
                        void* rax_52 = *r14_1
                        *(rax_52 + 8) += 1
                        continue
        else if (r12_1 u<= rbx_1)
            result = sub_1422cb580(arg2)
            
            if (result.b != 0)
                result = sub_1422cb580(arg3)
                
                if (result.b != 0)
                    rbx_2 = sx.q(arg5[1].d)
                    int32_t rax_7 = (rbx_2 + 1).d
                    arg5[1].d = rax_7
                    
                    if (rax_7 s> *(arg5 + 0xc))
                        sub_140594770(arg5)
                    
                    r10 = arg3
                    r15_1 = r10
                    goto label_1422caafc
        else
            result = sub_1422cb580(r10)
            
            if (result.b != 0)
                int64_t r15_2 = sx.q(arg5[1].d)
                int32_t rax_5 = (r15_2 + 1).d
                arg5[1].d = rax_5
                
                if (rax_5 s> *(arg5 + 0xc))
                    sub_140594770(arg5)
                
                r10 = arg3
                *(*arg5 + (r15_2 << 1)) = rbx_1.w
                r15_1 = r10
                r11_1 = r10[6].d
                rcx_6 = r10[7].d
                goto label_1422cab21
    else if (rbx_1 != 0)
        rdx_15 = r10
        break
    
    return result

return sub_1422cc4a0(arg1, rdx_15, arg4, arg5)
