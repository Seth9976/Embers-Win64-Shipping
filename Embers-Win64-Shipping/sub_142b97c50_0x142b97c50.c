// 函数: sub_142b97c50
// 地址: 0x142b97c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t r10 = *arg1
int32_t rdx = 0
int64_t var_50 = r10

if (arg7 != 0xffffffff)
    rdx = arg7

if (rdx != 0)
    return 1

int64_t rsi = 0
int32_t r13 = 0
int64_t r15 = sx.q(arg4)
int32_t rbp_1

if (arg4 s> 0)
    while (true)
        int64_t rax_2 = arg2[4]
        rbp_1 = 0
        int32_t rdi_1 = *(arg3 + (rsi << 2))
        
        if (rax_2 != 0)
            if (rax_2(arg2, zx.q(rdi_1), 0, 0) == 0)
                *(arg2 + 0xc) = rdi_1
            else
                rbp_1 = 0x55
        else if (rdi_1 u<= arg2[1].d)
            *(arg2 + 0xc) = rdi_1
        else
            rbp_1 = 0x55
        
        if (rbp_1 != 0)
            return zx.q(rbp_1)
        
        uint64_t rcx_1 = zx.q(*(arg2 + 0xc))
        uint32_t r8 = 0
        
        if ((rcx_1 + 3).d u< arg2[1].d)
            int64_t rax_5 = arg2[4]
            int32_t* rcx_3
            
            if (rax_5 == 0)
                rcx_3 = rcx_1 + *arg2
                
                if (rcx_1 == neg.q(*arg2))
                    goto label_142b97d79
                
                goto label_142b97d76
            
            if (rax_5(arg2, zx.q(rcx_1.d), &arg7, zx.q(rbp_1 + 4)) == 4)
                rcx_3 = &arg7
            label_142b97d76:
                r8 = ((zx.d(*rcx_3) << 8 | zx.d(*(rcx_3 + 1))) << 8 | zx.d(*(rcx_3 + 2))) << 8
                    | zx.d(*(rcx_3 + 3))
            label_142b97d79:
                *(arg2 + 0xc) += 4
                
                if (r8 u> 0xffffff || 0xffffff - r8 u< r13 + 6)
                    return 9
                
                rsi += 1
                r13 = r13 + 6 + r8
                
                if (rsi s>= r15)
                    break
                
                arg3 = arg_18
                continue
        
        return 0x55
    
    r10 = var_50

int32_t rsi_3 = r13 + 2
int32_t var_5c_1 = rsi_3

if (rsi_3 u>= 6)
    rbp_1 = 0
    void** r14_1 = nullptr
    int32_t rdi_2 = 6
    
    if (rsi_3 s> 0)
        void** rax_11 = (*(r10 + 8))(r10, zx.q(rsi_3))
        r14_1 = rax_11
        
        if (rax_11 != 0)
            arg5 = memset(rax_11, 0, sx.q(rsi_3))
        else
            rbp_1 = 0x40
    else if (rsi_3 s< 0)
        rbp_1 = 6
    
    if (rbp_1 == 0)
        *(r14_1 + 4) = rbp_1.w
        rbp_1 = 1
        uint32_t var_64_1 = 1
        char* r11_1 = 2
        *r14_1 = 0x180
        uint32_t r12_1 = 0
        int32_t var_68_1 = 2
        int64_t rax_12 = 0
        int64_t var_58_1 = 0
        
        if (r15 s> 0)
            while (true)
                uint64_t rsi_1 = zx.q(*(arg_18 + (rax_12 << 2)))
                int64_t rax_13 = arg2[4]
                
                if (rax_13 != 0)
                    if (rax_13(arg2, zx.q(rsi_1.d), 0, 0) != 0)
                        goto label_142b98112
                else if (rsi_1.d u> arg2[1].d)
                    goto label_142b98112
                
                *(arg2 + 0xc) = rsi_1.d
                uint32_t r15_1 = 0
                
                if ((rsi_1 + 3).d u>= arg2[1].d)
                    goto label_142b98112
                
                int64_t rax_16 = arg2[4]
                void* rcx_10
                
                if (rax_16 == 0)
                    rcx_10 = rsi_1 + *arg2
                    
                    if (rsi_1 != neg.q(*arg2))
                        r15_1 = ((zx.d(*rcx_10) << 8 | zx.d(*(rcx_10 + 1))) << 8
                            | zx.d(*(rcx_10 + 2))) << 8 | zx.d(*(rcx_10 + 3))
                else
                    void var_60
                    
                    if (rax_16(arg2, zx.q(rsi_1.d), &var_60, 4) != 4)
                        goto label_142b98112
                    
                    rcx_10 = &var_60
                    r15_1 =
                        ((zx.d(*rcx_10) << 8 | zx.d(*(rcx_10 + 1))) << 8 | zx.d(*(rcx_10 + 2))) << 8
                        | zx.d(*(rcx_10 + 3))
                *(arg2 + 0xc) += 4
                uint64_t rcx_12 = zx.q(*(arg2 + 0xc))
                
                if (r15_1 u> 0x7fffffff)
                    goto label_142b98112
                
                int32_t rsi_2 = 0
                uint32_t r8_11
                
                if ((rcx_12 + 1).d u>= arg2[1].d)
                    rsi_2 = 0x55
                    r8_11 = 0
                else
                    int64_t rax_22 = arg2[4]
                    int32_t* rax_24
                    
                    if (rax_22 == 0)
                        r8_11 = 0
                        rax_24 = rcx_12 + *arg2
                        
                        if (rcx_12 == neg.q(*arg2))
                            *(arg2 + 0xc) += 2
                        else
                            r8_11 = zx.d(*rax_24) << 8 | zx.d(*(rax_24 + 1))
                            *(arg2 + 0xc) += 2
                    else if (rax_22(arg2, zx.q(rcx_12.d), &arg7, 2) != 2)
                        rsi_2 = 0x55
                        r8_11 = 0
                    else
                        rax_24 = &arg7
                        r8_11 = zx.d(*rax_24) << 8 | zx.d(*(rax_24 + 1))
                        *(arg2 + 0xc) += 2
                
                if (rsi_2 != 0)
                    goto label_142b98112
                
                uint32_t r8_14 = r8_11 u>> 8
                
                if (r8_14 != 0)
                    uint32_t r9_1 = r15_1 - 2
                    
                    if (r15_1 u<= 2)
                        r9_1 = 0
                    
                    if (r8_14 != var_64_1)
                        r11_1 = zx.q(var_68_1)
                        rsi_3 = r13 + 2
                        uint8_t* r10_1 = zx.q((&r11_1[3]).d)
                        
                        if (r10_1.d u> rsi_3)
                            goto label_142b98112
                        
                        *(r11_1 + r14_1) = r12_1.b
                        *(zx.q((&r11_1[1]).d) + r14_1) = (r12_1 u>> 8).b
                        *(zx.q((&r11_1[2]).d) + r14_1) = (r12_1 u>> 0x10).b
                        *(r10_1 + r14_1) = (r12_1 u>> 0x18).b
                        
                        if (r8_14 == 5)
                            break
                        
                        if (rdi_2 + 6 u> rsi_3)
                            goto label_142b98112
                        
                        char* rdi_3 = zx.q(rdi_2 + 1)
                        var_64_1 = r8_14
                        r12_1 = r9_1
                        *(zx.q(rdi_2) + r14_1) = 0x80
                        *(rdi_3 + r14_1) = r8_14.b
                        uint64_t rdi_4 = zx.q(rdi_3.d + 1)
                        var_68_1 = rdi_4.d
                        *(rdi_4 + r14_1) = 0
                        uint64_t rdi_5 = zx.q(rdi_4.d + 1)
                        *(rdi_5 + r14_1) = 0
                        uint64_t rdi_6 = zx.q(rdi_5.d + 1)
                        *(rdi_6 + r14_1) = 0
                        uint64_t rdi_7 = zx.q(rdi_6.d + 1)
                        *(rdi_7 + r14_1) = 0
                        rdi_2 = rdi_7.d + 1
                    else
                        r12_1 += r9_1
                    
                    if (rdi_2 u> r13)
                        goto label_142b98112
                    
                    int32_t rsi_4 = r9_1 + rdi_2
                    
                    if (rsi_4 u> r13)
                        goto label_142b98112
                    
                    int32_t rax_31
                    rax_31, arg5 =
                        sub_142b969a0(arg2, *(arg2 + 0xc), zx.q(rdi_2) + r14_1, r9_1, arg5)
                    
                    if (rax_31 != 0)
                        goto label_142b98112
                    
                    rdi_2 = rsi_4
                
                rax_12 = var_58_1 + 1
                var_58_1 = rax_12
                
                if (rax_12 s>= r15)
                    rsi_3 = var_5c_1
                    r11_1 = zx.q(var_68_1)
                    break
        
        if (rdi_2 + 2 u<= rsi_3)
            uint64_t r8_17 = zx.q((&r11_1[3]).d)
            uint64_t rdi_8 = zx.q(rdi_2 + 1)
            *(zx.q(rdi_2) + r14_1) = 0x80
            *(rdi_8 + r14_1) = 3
            
            if (r8_17.d u<= rsi_3)
                *(zx.q(r11_1.d) + r14_1) = r12_1.b
                *(zx.q((&r11_1[1]).d) + r14_1) = (r12_1 u>> 8).b
                *(zx.q((&r11_1[2]).d) + r14_1) = (r12_1 u>> 0x10).b
                *(r8_17 + r14_1) = (r12_1 u>> 0x18).b
                return sub_142b9b180(arg1, r14_1, (rdi_8 + 1).d, 0, arg6, "type1", arg8)
        
    label_142b98112:
        (*(var_50 + 0x10))(var_50, r14_1)
else
    rbp_1 = 0xa

return zx.q(rbp_1)
