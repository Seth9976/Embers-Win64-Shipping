// 函数: sub_142bedef0
// 地址: 0x142bedef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t r14 = *(arg1 + 0x88)
void* rdx = *(arg1 + 0x78)
arg_20 = 0
int64_t* rax = sub_142b993e0(arg2, rdx)

if (rax == 0)
    int64_t* rax_9 = sub_142b993e0(arg2, arg1 + 0xa0)
    int64_t* rsi_1 = rax_9
    
    if (rax_9 != 0)
        goto label_142bee01d
    
    int32_t rax_10 = sub_142bf0400(arg2, (rax_9 + 1).d, arg1)
    arg_20 = rax_10
    
    if (rax_10 == 0)
        rsi_1 = sub_142b993e0(arg2, arg1 + 0xa0)
    label_142bee01d:
        int32_t r8_2 = *(arg1 + 0x58)
        
        if (*(arg1 + 0x5c) != r8_2)
            goto label_142bee088
        
        int64_t var_38_1
        int32_t r9
        
        if (r8_2 != 0)
            r9 = r8_2 + 1
            var_38_1 = *(arg1 + 0x60)
        else
            var_38_1 = 0
            r9 = r8_2 + 1
        
        *(arg1 + 0x60) = sub_142b99a90(r14, 0x18, r8_2, r9, var_38_1, &arg_20)
        
        if (arg_20 == 0)
            uint64_t rcx_12 = zx.q(*(arg1 + 0x58)) * 3
            int64_t rax_15 = *(arg1 + 0x60)
            *(rax_15 + (rcx_12 << 3)) = 0
            *(rax_15 + (rcx_12 << 3) + 8) = 0
            *(rax_15 + (rcx_12 << 3) + 0x10) = 0
            *(arg1 + 0x58) += 1
        label_142bee088:
            int64_t rax_16 = *rsi_1
            int64_t* rdx_7
            
            if (rax_16 u< 0x53)
                rdx_7 = &(&data_143698ce0)[rax_16 * 3]
            else
                rdx_7 = *(arg1 + 0x90) + (rax_16 - 0x53) * 0x18
            
            int64_t* rsi_2 = *(arg1 + 0x60) + zx.q(*(arg1 + 0x5c)) * 0x18
            *rsi_2 = *rdx_7
            rsi_2[1].d = rdx_7[1].d
            *(rsi_2 + 0xc) = *(rdx_7 + 0xc)
            int32_t rcx_15 = rdx_7[1].d
            
            if (rcx_15 != 1)
                if (rcx_15 == 2)
                    rsi_2[2].d = sub_142bee2c0(arg3)
                else if (rcx_15 == 3)
                    rsi_2[2].d = sub_142bee450(arg3)
                
                goto label_142bee140
            
            rsi_2[2] = 0
            
            if (arg3 == 0 || *arg3 == 0)
            label_142bee140:
                int32_t rax_28 = strncmp(arg2, "COMMENT", 7)
                char rax_29
                
                if (rax_28 == 0)
                    rax_29 = arg2[7]
                
                int32_t rax_31
                
                if (rax_28 != 0 || rax_29 u> 0x20 || not(test_bit(0x100002601, sx.q(rax_29))))
                    rax_31 = j_sub_142b9a810(*rsi_2, zx.q(*(arg1 + 0x5c)), *(arg1 + 0x78), r14)
                    arg_20 = rax_31
                
                if ((rax_28 == 0 && rax_29 u<= 0x20 && test_bit(0x100002601, sx.q(rax_29)))
                        || rax_31 == 0)
                    *(arg1 + 0x5c) += 1
                    int32_t rax_32 = strncmp(arg2, "DEFAULT_CHAR", 0xc)
                    char rax_33
                    
                    if (rax_32 == 0)
                        rax_33 = arg2[0xc]
                    
                    if (rax_32 != 0 || rax_33 u> 0x20 || not(test_bit(0x100002601, sx.q(rax_33))))
                        int32_t rax_36 = strncmp(arg2, "FONT_ASCENT", 0xb)
                        char rax_37
                        
                        if (rax_36 == 0)
                            rax_37 = arg2[0xb]
                        
                        if (rax_36 != 0 || rax_37 u> 0x20
                                || not(test_bit(0x100002601, sx.q(rax_37))))
                            int32_t rax_40 = strncmp(arg2, "FONT_DESCENT", 0xc)
                            char rax_41
                            
                            if (rax_40 == 0)
                                rax_41 = arg2[0xc]
                            
                            if (rax_40 != 0 || rax_41 u> 0x20
                                    || not(test_bit(0x100002601, sx.q(rax_41))))
                                if (strncmp(arg2, "SPACING", 7) == 0)
                                    char rax_45 = arg2[7]
                                    
                                    if (rax_45 u<= 0x20 && test_bit(0x100002601, sx.q(rax_45)))
                                        char* rax_47 = rsi_2[2]
                                        
                                        if (rax_47 != 0)
                                            char rcx_27 = *rax_47
                                            
                                            if (((rcx_27 - 0x50) & 0xdf) == 0)
                                                *(arg1 + 0x20) = 8
                                            else if (((rcx_27 - 0x4d) & 0xdf) == 0)
                                                *(arg1 + 0x20) = 0x10
                                            else if (((rcx_27 - 0x43) & 0xdf) == 0)
                                                *(arg1 + 0x20) = 0x20
                                        else
                                            arg_20 = 3
                            else
                                *(arg1 + 0x30) = rsi_2[2].d
                        else
                            *(arg1 + 0x2c) = rsi_2[2].d
                    else
                        *(arg1 + 0x28) = rsi_2[2].d
            else
                rsi_2[2] = sub_142b99bb0(r14, arg3, &arg_20)
                
                if (arg_20 == 0)
                    goto label_142bee140
else
    int64_t rdx_1 = *rax * 3
    int64_t rax_2 = *(arg1 + 0x60)
    int32_t rcx_1 = *(rax_2 + (rdx_1 << 3) + 8)
    void* rbx_1 = rax_2 + (rdx_1 << 3)
    
    if (rcx_1 == 1)
        sub_142b99980(r14, *(rbx_1 + 0x10))
        *(rbx_1 + 0x10) = 0
        
        if (arg3 != 0 && *arg3 != 0)
            *(rbx_1 + 0x10) = sub_142b99bb0(r14, arg3, &arg_20)
    else
        if (rcx_1 == 2)
            *(rbx_1 + 0x10) = sub_142bee2c0(arg3)
            return zx.q(arg_20)
        
        if (rcx_1 == 3)
            *(rbx_1 + 0x10) = sub_142bee450(arg3)

return zx.q(arg_20)
