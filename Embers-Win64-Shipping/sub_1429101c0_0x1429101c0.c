// 函数: sub_1429101c0
// 地址: 0x1429101c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r12 = 0
void** r14 = nullptr

if (sub_14289a2c0(arg1, arg4, 0x80) != 0)
    int64_t* rcx
    char const* const rdx_1
    
    if (arg2 != 0)
        rcx = arg1
        
        if (arg3 == 0)
            rdx_1 = "No PSS parameter restrictions\n"
            goto label_1429102b1
        
        if (sub_14289a750(rcx, "PSS parameter restrictions:") s<= 0)
            return 0
    else if (arg3 == 0)
        rdx_1 = "(INVALID PSS PARAMETERS)\n"
        rcx = arg1
    label_1429102b1:
        
        if (sub_14289a750(rcx, rdx_1) s> 0)
            return 1
        
        return 0
    
    if (sub_14289a750(arg1, &data_14370209c) s> 0)
        int32_t rbp_1 = arg4 + 2
        
        if (arg2 == 0)
            rbp_1 = arg4
        
        if (sub_14289a2c0(arg1, rbp_1, 0x80) != 0 && sub_14289a750(arg1, "Hash Algorithm: ") s> 0)
            void** rdx_3 = *arg3
            int32_t rax_5
            
            if (rdx_3 == 0)
                rax_5 = sub_14289a750(arg1, "sha1 (default)")
            else
                rax_5 = sub_1428cdc60(arg1, *rdx_3)
            
            if (rax_5 s> 0 && sub_14289a750(arg1, &data_14370209c) s> 0
                    && sub_14289a2c0(arg1, rbp_1, 0x80) != 0
                    && sub_14289a750(arg1, "Mask Algorithm: ") s> 0)
                int64_t* rdx_6 = arg3[1]
                int64_t* rcx_8 = arg1
                int32_t rax_14
                char const* const rdx_9
                
                if (rdx_6 == 0)
                    rdx_9 = "mgf1 with sha1 (default)"
                label_142910386:
                    rax_14 = sub_14289a750(rcx_8, rdx_9)
                label_14291038b:
                    
                    if (rax_14 s> 0)
                        sub_14289a750(arg1, &data_14370209c)
                        
                        if (sub_14289a2c0(arg1, rbp_1, 0x80) != 0)
                            char* const r8 = &data_1437020ab
                            
                            if (arg2 != 0)
                                r8 = "Minimum"
                            
                            if (sub_1428b6f70(arg1, "%s Salt Length: 0x", r8) s> 0)
                                int32_t* rdx_11 = arg3[2]
                                int32_t rax_17
                                
                                if (rdx_11 == 0)
                                    rax_17 = sub_14289a750(arg1, "14 (default)")
                                else
                                    rax_17 = sub_14294a0c0(arg1, rdx_11)
                                
                                if (rax_17 s> 0)
                                    sub_14289a750(arg1, &data_14370209c)
                                    
                                    if (sub_14289a2c0(arg1, rbp_1, 0x80) != 0
                                            && sub_14289a750(arg1, "Trailer Field: 0x") s> 0)
                                        int32_t* rdx_13 = arg3[3]
                                        int32_t rax_20
                                        
                                        if (rdx_13 == 0)
                                            rax_20 = sub_14289a750(arg1, "BC (default)")
                                        else
                                            rax_20 = sub_14294a0c0(arg1, rdx_13)
                                        
                                        if (rax_20 s> 0)
                                            sub_14289a750(arg1, &data_14370209c)
                                            r12 = 1
                else if (sub_1428cdc60(rcx_8, *rdx_6) s> 0 && sub_14289a750(arg1, " with ") s> 0)
                    void** rax_13 = sub_14290ff70(arg3[1])
                    r14 = rax_13
                    rcx_8 = arg1
                    
                    if (rax_13 == 0)
                        rdx_9 = "INVALID"
                        goto label_142910386
                    
                    rax_14 = sub_1428cdc60(rcx_8, *rax_13)
                    goto label_14291038b

sub_1428daf30(r14)
return zx.q(r12)
