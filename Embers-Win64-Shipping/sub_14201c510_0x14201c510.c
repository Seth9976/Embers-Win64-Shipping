// 函数: sub_14201c510
// 地址: 0x14201c510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x150))()
uint64_t result_1 = result

if ((*(arg2 + 0x22a) & 0x40) == 0)
    result = sub_1424b2a30(arg1, arg3)
    
    if (result.b == 0 && (*(result_1 + 0x11d) & 0x20) == 0)
        result = (*(*arg2 + 0x6b0))(arg2)
        
        if (result != 0)
            int64_t* rcx_2 = arg1[0x50]
            int64_t r8 = *rcx_2
            (*(r8 + 0x678))(rcx_2, result, r8)
            sub_141dd8f90(result, 0)
            int64_t rdx_2 = *result
            (*(rdx_2 + 0x390))(result, rdx_2)
            int64_t* rcx_5 = *(result + 0x258)
            char rax_3
            
            if (rcx_5 != 0)
                rax_3 = (*(*rcx_5 + 0x28))(rcx_5)
            
            char r8_1
            
            if (rcx_5 == 0 || rax_3 == 0)
                r8_1 = 0
            else
                r8_1 = 1
            
            int32_t rcx_6 = *(result + 0x248)
            int64_t rdi = 0
            int32_t i = 0
            char arg_8 = r8_1
            int32_t arg_10 = rcx_6
            
            if (arg1[0x5e].d s> 0)
                int64_t rbp_1 = 0
                int32_t r15_1 = 1
                
                do
                    int64_t* r9_1 = arg1[0x5d]
                    int64_t* rsi_1 = *(r9_1 + rbp_1)
                    void* const rax_8
                    
                    if (rsi_1 != 0)
                        int32_t rax_4 = *(rsi_1 + 0xc)
                        
                        if (rax_4 s>= data_143e1d9b4)
                            rax_8 = nullptr
                        else
                            uint32_t rdx_3 = zx.d(rax_4.w)
                            
                            if (rax_4 s< 0)
                                rax_4 += 0xffff
                                rdx_3 -= 0x10000
                            
                            rax_8 =
                                *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
                            rcx_6 = arg_10
                    
                    int32_t rcx_12
                    void* rcx_14
                    void* rdx_7
                    int64_t r8_3
                    
                    if (rsi_1 == 0 || ((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
                        rcx_12 = arg1[0x5e].d
                        int32_t rax_19 = rcx_12 - i
                        
                        if (rax_19 == 1)
                            goto label_14201c738
                        
                        r8_3 = sx.q(rax_19 - 1)
                        rdx_7 = &r9_1[sx.q(r15_1)]
                        rcx_14 = &r9_1[sx.q(i)]
                    label_14201c729:
                        memmove(rcx_14, rdx_7, (r8_3 << 3).d)
                        rcx_12 = arg1[0x5e].d
                    label_14201c738:
                        arg1[0x5e].d = rcx_12 - 1
                        sub_1405c53d0(&arg1[0x5d])
                        i -= 1
                        r15_1 -= 1
                        rbp_1 -= 8
                        rcx_6 = arg_10
                        r8_1 = arg_8
                    else if (r8_1 != 0)
                        if (sub_14094dfb0(&rsi_1[0x4a], result + 0x250) != 0)
                        label_14201c6df:
                            sub_141dbe590(rsi_1, 0, 1)
                            rcx_12 = arg1[0x5e].d
                            int32_t rax_14 = rcx_12 - i
                            
                            if (rax_14 == 1)
                                goto label_14201c738
                            
                            int64_t rcx_13 = arg1[0x5d]
                            r8_3 = sx.q(rax_14 - 1)
                            rdx_7 = rcx_13 + (sx.q(r15_1) << 3)
                            rcx_14 = rcx_13 + (sx.q(i) << 3)
                            goto label_14201c729
                        
                        rcx_6 = arg_10
                        r8_1 = arg_8
                    else if (rcx_6 s> 1)
                        int16_t* rdx_5
                        
                        if (*(result + 0x248) == 0)
                            rdx_5 = &data_142d40450
                        else
                            rdx_5 = *(result + 0x240)
                        
                        int16_t* const rcx_9
                        
                        if (rsi_1[0x49].d == 0)
                            rcx_9 = &data_142d40450
                        else
                            rcx_9 = rsi_1[0x48]
                        
                        if (sub_140a54510(rcx_9, rdx_5) == 0)
                            goto label_14201c6df
                        
                        rcx_6 = arg_10
                        r8_1 = arg_8
                    i += 1
                    r15_1 += 1
                    rbp_1 += 8
                while (i s< arg1[0x5e].d)
            
            int64_t rsi_2 = sx.q(arg1[0x5e].d)
            int32_t rax_24 = (rsi_2 + 1).d
            arg1[0x5e].d = rax_24
            
            if (rax_24 s> *(arg1 + 0x2f4))
                sub_1405a4d70(&arg1[0x5d])
            
            *(arg1[0x5d] + (rsi_2 << 3)) = result
            int32_t rsi_3 = arg1[0x5e].d
            result = zx.q(*(arg1 + 0x2fc))
            
            if (rsi_3 s> result.d)
                int32_t rsi_4 = rsi_3 - result.d
                int64_t rbp_2 = sx.q(rsi_4)
                bool cond:1_1 = rsi_4 == 0
                
                if (rsi_4 s> 0)
                    do
                        result = arg1[0x5d]
                        int64_t* rcx_17 = *(result + (rdi << 3))
                        
                        if (rcx_17 != 0)
                            result = sub_141dbe590(rcx_17, 0, 1)
                        
                        rdi += 1
                    while (rdi s< rbp_2)
                    
                    cond:1_1 = rsi_4 == 0
                
                if (not(cond:1_1))
                    int32_t rax_26 = arg1[0x5e].d
                    
                    if (rax_26 != rsi_4)
                        int64_t rcx_18 = arg1[0x5d]
                        memmove(rcx_18, rcx_18 + (rbp_2 << 3), (rax_26 - rsi_4) << 3)
                        rax_26 = arg1[0x5e].d
                    
                    arg1[0x5e].d = rax_26 - rsi_4
                    return sub_1405c53d0(&arg1[0x5d])

return result
