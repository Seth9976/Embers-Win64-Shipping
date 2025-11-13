// 函数: sub_1428f2520
// 地址: 0x1428f2520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t* r14 = nullptr

if (*(arg1 + 0xf0) == 0)
    int64_t* rax_1 = sub_1428a6730(0x20)
    
    if (rax_1 == 0)
        sub_1428a5670((rax_1 + 0x22).d, 0xaa, 0x41, "crypto\x509v3\pcy_cache.c", 0x5e)
        return 0
    
    *rax_1 = 0
    rax_1[2].d = 0xffffffff
    rax_1[1] = 0
    *(rax_1 + 0x14) = 0xffffffff
    rax_1[3].d = 0xffffffff
    *(arg1 + 0xf0) = rax_1
    int32_t arg_8
    int64_t* rax_3 = sub_1428ac7d0(arg1, 0x191, &arg_8, nullptr)
    
    if (rax_3 != 0)
        int32_t* rdx_2 = *rax_3
        
        if (rdx_2 != 0 || rax_3[1] != 0)
            if (sub_1428f2900(rax_1 + 0x14, rdx_2) == 0)
                goto label_1428f2873
            
            if (sub_1428f2900(&rax_1[3], rax_3[1]) == 0)
                goto label_1428f2873
            
            goto label_1428f2648
        
    label_1428f2873:
        *(arg1 + 0xd0) |= 0x800
        sub_14292fec0(rax_3)
        sub_1428c3460(r14)
    else
        if (arg_8 != 0xffffffff)
            goto label_1428f2873
        
    label_1428f2648:
        int32_t* rax_6 = sub_1428ac7d0(arg1, 0x59, &arg_8, nullptr)
        
        if (rax_6 != 0)
            int32_t rax_7 = arg_8
            int64_t* rdi_2 = *(arg1 + 0xf0)
            int32_t r15_1 = 0
            int32_t rax_8 = sub_142898c70(rax_6)
            
            if (rax_8 s<= 0)
            label_1428f275d:
                sub_14292b4d0(nullptr)
            else
                void* rax_9 = sub_142898b60(sub_1428f2940)
                rdi_2[1] = rax_9
                int32_t var_58_1
                
                if (rax_9 != 0)
                    int32_t rsi_2 = 0
                    int64_t* rbx_2
                    
                    if (rax_8 s> 0)
                        do
                            int64_t* rax_11 =
                                sub_14292b530(sub_142898ea0(rax_6, rsi_2), nullptr, rax_7)
                            rbx_2 = rax_11
                            
                            if (rax_11 == 0)
                                var_58_1 = 0x2d
                                goto label_1428f26cd
                            
                            if (sub_1428a96d0(rax_11[1]) != 0x2ea)
                                if (sub_1428989f0(rdi_2[1], rbx_2) s>= 0)
                                label_1428f27d2:
                                    *(arg1 + 0xd0) |= 0x800
                                    r15_1 = -1
                                    goto label_1428f275d_1
                                
                                if (sub_142898d50(rdi_2[1], rbx_2) == 0)
                                    sub_1428a5670(0x22, 0xa9, 0x41, "crypto\x509v3\pcy_cache.c", 
                                        0x3d)
                                    goto label_1428f275d_1
                            else
                                if (*rdi_2 != 0)
                                    goto label_1428f27d2
                                
                                *rdi_2 = rbx_2
                            
                            rsi_2 += 1
                        while (rsi_2 s< rax_8)
                    
                    r15_1 = 1
                    rbx_2 = nullptr
                label_1428f275d_1:
                    sub_14292b4d0(rbx_2)
                else
                    var_58_1 = 0x26
                label_1428f26cd:
                    sub_1428a5670(0x22, 0xa9, 0x41, "crypto\x509v3\pcy_cache.c", var_58_1)
            
            sub_142898cb0(rax_6, sub_14292f4c0)
            
            if (r15_1 s<= 0)
                sub_142898cb0(rdi_2[1], sub_14292b4d0)
                rdi_2[1] = 0
            
            arg_8 = r15_1
            
            if (r15_1 s<= 0)
                return zx.q(r15_1)
            
            int32_t* rax_16 = sub_1428ac7d0(arg1, 0x2eb, &arg_8, nullptr)
            
            if (rax_16 != 0)
                int32_t rax_17 = sub_14292fee0(arg1, rax_16)
                arg_8 = rax_17
                
                if (rax_17 s<= 0)
                    goto label_1428f2873
            else if (arg_8 != 0xffffffff)
                goto label_1428f2873
            
            int32_t* rax_18 = sub_1428ac7d0(arg1, 0x2ec, &arg_8, nullptr)
            r14 = rax_18
            
            if (rax_18 != 0)
                if (sub_1428f2900(&rax_1[2], rax_18) == 0)
                    goto label_1428f2873
                
                sub_14292fec0(rax_3)
                sub_1428c3460(r14)
            else
                if (arg_8 != 0xffffffff)
                    goto label_1428f2873
                
                sub_14292fec0(rax_3)
                sub_1428c3460(r14)
        else if (arg_8 != 0xffffffff)
            goto label_1428f2873

return 1
