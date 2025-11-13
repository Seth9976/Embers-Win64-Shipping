// 函数: sub_14105f040
// 地址: 0x14105f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
int64_t* r14 = *(arg3 + 0x2d8)
int32_t* r13 = arg3
int32_t* var_338 = arg3
HRESULT result

if (r14 != 0 || *(arg3 + 0x2f8) != r14 || *(arg3 + 0x2f0) != r14 || *(arg3 + 0x2e0) != r14
        || *(arg3 + 0x2e8) != r14)
    void* r11_1 = nullptr
    HRESULT r12_1 = 0x2
    HRESULT r15_1 = 0
    void* var_2f0_1 = nullptr
    int32_t var_2e8_1 = 0
    HRESULT var_2e4_1 = 0x2
    void var_308
    
    if (r14 != 0)
        int32_t i = 0
        
        if (r14[1].d s> 0)
            int64_t rsi_1 = 0
            
            do
                void* r10_1 = &var_308
                int32_t* rbx_2 = *r14 + rsi_1
                
                if (r11_1 != 0)
                    r10_1 = r11_1
                
                void* rdx = r10_1
                void* r8 = r10_1 + sx.q(r15_1) * 0xc
                
                if (r10_1 != r8)
                    void* rcx_1 = r10_1 + 8
                    
                    do
                        if (*rdx == *rbx_2 && *(rcx_1 - 4) == rbx_2[1].w
                                && *(rcx_1 - 2) == *(rbx_2 + 6) && *rcx_1 == rbx_2[2].w
                                && *(rcx_1 + 2) == *(rbx_2 + 0xa)
                                && *(rcx_1 + 3) == *(rbx_2 + 0xb))
                            if (((rdx - r10_1) s/ 0xc).d != 0xffffffff)
                                goto label_14105f1fc
                            
                            goto label_14105f1b5
                        
                        rdx += 0xc
                        rcx_1 += 0xc
                    while (rdx != r8)
                
            label_14105f1b5:
                
                if (r15_1 + 1 s> r12_1)
                    sub_141068880(&var_308, r15_1)
                    r11_1 = var_2f0_1
                
                void* rdx_6 = &var_308
                
                if (r11_1 != 0)
                    rdx_6 = r11_1
                
                int64_t rcx_3 = sx.q(r15_1) * 3
                *(rdx_6 + (rcx_3 << 2)) = *rbx_2
                *(rdx_6 + (rcx_3 << 2) + 8) = rbx_2[2]
                r12_1 = var_2e4_1
                r15_1 += 1
                r11_1 = var_2f0_1
            label_14105f1fc:
                i += 1
                rsi_1 += 0xc
            while (i s< r14[1].d)
            
            r13 = var_338
    
    int64_t* r14_1 = *(r13 + 0x2f8)
    
    if (r14_1 != 0)
        int32_t i_1 = 0
        
        if (r14_1[1].d s> 0)
            int64_t rsi_2 = 0
            
            do
                void* r10_2 = &var_308
                int32_t* rbx_4 = *r14_1 + rsi_2
                
                if (r11_1 != 0)
                    r10_2 = r11_1
                
                void* rdx_7 = r10_2
                void* r8_1 = r10_2 + sx.q(r15_1) * 0xc
                
                if (r10_2 != r8_1)
                    void* rcx_5 = r10_2 + 8
                    
                    do
                        if (*rdx_7 == *rbx_4 && *(rcx_5 - 4) == rbx_4[1].w
                                && *(rcx_5 - 2) == *(rbx_4 + 6) && *rcx_5 == rbx_4[2].w
                                && *(rcx_5 + 2) == *(rbx_4 + 0xa)
                                && *(rcx_5 + 3) == *(rbx_4 + 0xb))
                            if (((rdx_7 - r10_2) s/ 0xc).d != 0xffffffff)
                                goto label_14105f31c
                            
                            goto label_14105f2d5
                        
                        rdx_7 += 0xc
                        rcx_5 += 0xc
                    while (rdx_7 != r8_1)
                
            label_14105f2d5:
                
                if (r15_1 + 1 s> r12_1)
                    sub_141068880(&var_308, r15_1)
                    r11_1 = var_2f0_1
                
                void* rdx_13 = &var_308
                
                if (r11_1 != 0)
                    rdx_13 = r11_1
                
                int64_t rcx_7 = sx.q(r15_1) * 3
                *(rdx_13 + (rcx_7 << 2)) = *rbx_4
                *(rdx_13 + (rcx_7 << 2) + 8) = rbx_4[2]
                r12_1 = var_2e4_1
                r15_1 += 1
                r11_1 = var_2f0_1
            label_14105f31c:
                i_1 += 1
                rsi_2 += 0xc
            while (i_1 s< r14_1[1].d)
            
            r13 = var_338
    
    int64_t* r14_2 = *(r13 + 0x2e8)
    
    if (r14_2 != 0)
        int32_t i_2 = 0
        
        if (r14_2[1].d s> 0)
            int64_t rsi_3 = 0
            
            do
                void* r10_3 = &var_308
                int32_t* rbx_6 = *r14_2 + rsi_3
                
                if (r11_1 != 0)
                    r10_3 = r11_1
                
                void* rdx_14 = r10_3
                void* r8_2 = r10_3 + sx.q(r15_1) * 0xc
                
                if (r10_3 != r8_2)
                    void* rcx_9 = r10_3 + 8
                    
                    do
                        if (*rdx_14 == *rbx_6 && *(rcx_9 - 4) == rbx_6[1].w
                                && *(rcx_9 - 2) == *(rbx_6 + 6) && *rcx_9 == rbx_6[2].w
                                && *(rcx_9 + 2) == *(rbx_6 + 0xa)
                                && *(rcx_9 + 3) == *(rbx_6 + 0xb))
                            if (((rdx_14 - r10_3) s/ 0xc).d != 0xffffffff)
                                goto label_14105f43c
                            
                            goto label_14105f3f5
                        
                        rdx_14 += 0xc
                        rcx_9 += 0xc
                    while (rdx_14 != r8_2)
                
            label_14105f3f5:
                
                if (r15_1 + 1 s> r12_1)
                    sub_141068880(&var_308, r15_1)
                    r11_1 = var_2f0_1
                
                void* rdx_20 = &var_308
                
                if (r11_1 != 0)
                    rdx_20 = r11_1
                
                int64_t rcx_11 = sx.q(r15_1) * 3
                *(rdx_20 + (rcx_11 << 2)) = *rbx_6
                *(rdx_20 + (rcx_11 << 2) + 8) = rbx_6[2]
                r12_1 = var_2e4_1
                r15_1 += 1
                r11_1 = var_2f0_1
            label_14105f43c:
                i_2 += 1
                rsi_3 += 0xc
            while (i_2 s< r14_2[1].d)
            
            r13 = var_338
    
    int64_t* r14_3 = *(r13 + 0x2e0)
    
    if (r14_3 != 0)
        int32_t i_3 = 0
        
        if (r14_3[1].d s> 0)
            int64_t rsi_4 = 0
            
            do
                void* r10_4 = &var_308
                int32_t* rbx_8 = *r14_3 + rsi_4
                
                if (r11_1 != 0)
                    r10_4 = r11_1
                
                void* rdx_21 = r10_4
                void* r8_3 = r10_4 + sx.q(r15_1) * 0xc
                
                if (r10_4 != r8_3)
                    void* rcx_13 = r10_4 + 8
                    
                    do
                        if (*rdx_21 == *rbx_8 && *(rcx_13 - 4) == rbx_8[1].w
                                && *(rcx_13 - 2) == *(rbx_8 + 6) && *rcx_13 == rbx_8[2].w
                                && *(rcx_13 + 2) == *(rbx_8 + 0xa)
                                && *(rcx_13 + 3) == *(rbx_8 + 0xb))
                            if (((rdx_21 - r10_4) s/ 0xc).d != 0xffffffff)
                                goto label_14105f55c
                            
                            goto label_14105f515
                        
                        rdx_21 += 0xc
                        rcx_13 += 0xc
                    while (rdx_21 != r8_3)
                
            label_14105f515:
                
                if (r15_1 + 1 s> r12_1)
                    sub_141068880(&var_308, r15_1)
                    r11_1 = var_2f0_1
                
                void* rdx_27 = &var_308
                
                if (r11_1 != 0)
                    rdx_27 = r11_1
                
                int64_t rcx_15 = sx.q(r15_1) * 3
                *(rdx_27 + (rcx_15 << 2)) = *rbx_8
                *(rdx_27 + (rcx_15 << 2) + 8) = rbx_8[2]
                r12_1 = var_2e4_1
                r15_1 += 1
                r11_1 = var_2f0_1
            label_14105f55c:
                i_3 += 1
                rsi_4 += 0xc
            while (i_3 s< r14_3[1].d)
            
            r13 = var_338
    
    int64_t* r14_4 = *(r13 + 0x2f0)
    
    if (r14_4 != 0)
        int32_t i_4 = 0
        
        if (r14_4[1].d s> 0)
            int64_t rsi_5 = 0
            
            do
                void* r10_5 = &var_308
                int32_t* rbx_10 = *r14_4 + rsi_5
                
                if (r11_1 != 0)
                    r10_5 = r11_1
                
                void* rdx_28 = r10_5
                void* r8_4 = r10_5 + sx.q(r15_1) * 0xc
                
                if (r10_5 != r8_4)
                    void* rcx_17 = r10_5 + 8
                    
                    do
                        if (*rdx_28 == *rbx_10 && *(rcx_17 - 4) == rbx_10[1].w
                                && *(rcx_17 - 2) == *(rbx_10 + 6) && *rcx_17 == rbx_10[2].w
                                && *(rcx_17 + 2) == *(rbx_10 + 0xa)
                                && *(rcx_17 + 3) == *(rbx_10 + 0xb))
                            if (((rdx_28 - r10_5) s/ 0xc).d != 0xffffffff)
                                goto label_14105f67c
                            
                            goto label_14105f635
                        
                        rdx_28 += 0xc
                        rcx_17 += 0xc
                    while (rdx_28 != r8_4)
                
            label_14105f635:
                
                if (r15_1 + 1 s> r12_1)
                    sub_141068880(&var_308, r15_1)
                    r11_1 = var_2f0_1
                
                void* rdx_34 = &var_308
                
                if (r11_1 != 0)
                    rdx_34 = r11_1
                
                int64_t rcx_19 = sx.q(r15_1) * 3
                *(rdx_34 + (rcx_19 << 2)) = *rbx_10
                *(rdx_34 + (rcx_19 << 2) + 8) = rbx_10[2]
                r12_1 = var_2e4_1
                r15_1 += 1
                r11_1 = var_2f0_1
            label_14105f67c:
                i_4 += 1
                rsi_5 += 0xc
            while (i_4 s< r14_4[1].d)
            
            r13 = var_338
    
    result = 0
    void* rcx_24
    
    if (r15_1 s> 0)
        void* rbx_11 = &var_308
        
        if (r11_1 != 0)
            rbx_11 = r11_1
        
        do
            int32_t rcx_20 = *rbx_11
            
            if (rcx_20 != 0x10de)
                if (rcx_20 == 0x1002)
                    result = sub_14105fa10(arg1, arg2, r13, 0)
                label_14105f79d:
                    rcx_24 = var_2f0_1
                    
                    if (rcx_24 == 0)
                        goto label_14105f776
                    
                    goto label_14105f757
            else if (*(rbx_11 + 0xa) == 4)
                void var_2d8
                sub_141062a60(&r13[2], &var_2d8)
                uint32_t var_314_1 = zx.d(*(rbx_11 + 6))
                int32_t var_320
                var_338 = &var_320
                int32_t var_31c_1 = 5
                var_320 = 0x10008
                int32_t var_318_1 = 0x10014
                int32_t var_310_1 = 0
                result = sub_142c48990(*(arg2 + 0x18), &var_2d8, 1, &var_338, arg1)
                goto label_14105f79d
            
            result += 1
            rbx_11 += 0xc
        while (result s< r15_1)
    
    if (r11_1 != 0)
        rcx_24 = r11_1
    label_14105f757:
        result = sub_140a74f90(rcx_24)
else
    result = sub_14105fa10(arg1, arg2, arg3, 1)

label_14105f776:
__security_check_cookie(rax_1 ^ &var_368)
return result
