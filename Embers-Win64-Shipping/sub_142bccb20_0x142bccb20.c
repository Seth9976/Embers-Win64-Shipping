// 函数: sub_142bccb20
// 地址: 0x142bccb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg2[0x13]
int32_t result = sub_142bccf60(arg1, arg2, arg4)
int32_t result_1 = result

if (result == 0)
    int16_t rsi_1 = 0
    *arg2 = 1
    
    if (arg3 s< 0)
        return result
    
    int32_t result_2 = sub_142bcc510(arg1, arg2)
    result_1 = result_2
    
    if (result_2 == 0)
        int32_t rdx_1 = *(arg2 + 0x13c)
        int32_t rcx_1 = 0
        int32_t rbp
        
        if (rdx_1 != 0)
            while (true)
                if (*(arg2[0x28] + zx.q(rcx_1) * 0x10) == 0x100)
                    rbp.b = 1
                    break
                
                rcx_1 += 1
                
                if (rcx_1 u>= rdx_1)
                    goto label_142bccbb5
            
            goto label_142bccbcf
        
    label_142bccbb5:
        rbp.b = 0
        int64_t r15
        int32_t result_3 = sub_142bcbb00(arg1, arg2, 2, arg2.b, arg1.b, r15.b)
        result_1 = result_3
        
        if (result_3 == 0)
        label_142bccbcf:
            int32_t result_4 = sub_142bcc2d0(arg1, arg2)
            result_1 = result_4
            
            if (result_4 == 0)
                int32_t result_5 = sub_142bcbcc0(arg1, arg2)
                result_1 = result_5
                
                if (result_5 == 0)
                    int32_t result_6 = sub_142bcbf10(arg1, arg2)
                    result_1 = result_6
                    
                    if (result_6 == 0)
                        int32_t result_7
                        
                        if (rbp.b != 0)
                            result_7 = sub_142bcbb00(arg1, arg2, 0x100, arg2.b, arg1.b, r15.b)
                            result_1 = result_7
                        
                        if (rbp.b == 0 || result_7 == 0)
                            arg2[1].d |= 0x12
                            
                            if (*(arg2 + 0x14b) != 0)
                                arg2[1].d |= 4
                            
                            int32_t result_8 = sub_142bcc8b0(arg2)
                            result_1 = result_8
                            
                            if (result_8 == 0)
                                void* rax_2 = sub_142bcba50(arg2, "FAMILY_NAME")
                                
                                if (rax_2 == 0 || *(rax_2 + 8) == 0)
                                    arg2[3] = 0
                                label_142bccca8:
                                    arg2[2].d = arg2[0x35].d
                                    arg2[5].d = 1
                                    int64_t* rax_5 = sub_142b99a90(r14, 0x10, 0, 1, 0, &result_1)
                                    arg2[6] = rax_5
                                    
                                    if (result_1 == 0)
                                        int64_t arg_8 = r15
                                        *rax_5 = 0
                                        int16_t rbp_1 = 0
                                        rax_5[1] = 0
                                        int32_t rdx_8 = arg2[0x2a].d
                                        int32_t rax_6 = *(arg2 + 0x154)
                                        int32_t rdx_9 = rdx_8 + rax_6
                                        
                                        if (rdx_8 + rax_6 s< 0)
                                            rdx_9 = neg.d(rdx_9)
                                        
                                        if (rdx_9 s<= 0x7fff)
                                            int16_t rax_7 = arg2[0x2a].w
                                            int32_t rax_8 = sx.d(rax_7 + *(arg2 + 0x154))
                                            
                                            if (rax_7 + *(arg2 + 0x154) s< 0)
                                                rax_8 = neg.d(rax_8)
                                            
                                            *rax_5 = rax_8.w
                                        else
                                            *rax_5 = 0x7fff
                                        
                                        void* rax_9 = sub_142bcba50(arg2, "AVERAGE_WIDTH")
                                        
                                        if (rax_9 == 0)
                                            *(rax_5 + 2) = sub_142b93dd0(sx.d(*rax_5), 2, 3).w
                                        else
                                            int32_t rcx_12 = *(rax_9 + 0x10)
                                            int32_t rax_10 = rcx_12
                                            
                                            if (rcx_12 s< 0)
                                                rax_10 = neg.d(rax_10)
                                            
                                            if (rax_10 s<= 0x4fff1)
                                                int16_t rdx_12 = ((rcx_12 + 5) s/ 0xa).w
                                                uint32_t rax_13 = sx.d(rdx_12)
                                                
                                                if (rdx_12 s< 0)
                                                    rax_13 = neg.d(rax_13)
                                                
                                                *(rax_5 + 2) = rax_13.w
                                            else
                                                *(rax_5 + 2) = 0x7fff
                                        
                                        void* rax_14 = sub_142bcba50(arg2, "POINT_SIZE")
                                        
                                        if (rax_14 != 0)
                                            int32_t rcx_16 = *(rax_14 + 0x10)
                                            int32_t rax_15 = rcx_16
                                            
                                            if (rcx_16 s< 0)
                                                rax_15 = neg.d(rax_15)
                                            
                                            if (rax_15 s<= 0x504c2)
                                                if (rcx_16 s< 0)
                                                    rcx_16 = neg.d(rcx_16)
                                                
                                                *(rax_5 + 4) =
                                                    sub_142b93dd0(rcx_16, 0x70800, 0x11a4e)
                                            else
                                                *(rax_5 + 4) = 0x7fff
                                        
                                        void* rax_17 = sub_142bcba50(arg2, "PIXEL_SIZE")
                                        
                                        if (rax_17 != 0)
                                            int32_t rcx_18 = *(rax_17 + 0x10)
                                            
                                            if (rcx_18 s< 0)
                                                rcx_18 = neg.d(rcx_18)
                                            
                                            if (rcx_18 s<= 0x7fff)
                                                int16_t rax_18 = *(rax_17 + 0x10)
                                                int32_t rax_19 = sx.d(rax_18)
                                                
                                                if (rax_18 s< 0)
                                                    rax_19 = neg.d(rax_19)
                                                
                                                *(rax_5 + 0xc) = rax_19 << 6
                                            else
                                                *(rax_5 + 0xc) = 0x1fffc0
                                        
                                        void* rax_21 = sub_142bcba50(arg2, "RESOLUTION_X")
                                        
                                        if (rax_21 != 0)
                                            int32_t rcx_20 = *(rax_21 + 0x10)
                                            
                                            if (rcx_20 s< 0)
                                                rcx_20 = neg.d(rcx_20)
                                            
                                            if (rcx_20 s<= 0x7fff)
                                                int16_t rax_22 = *(rax_21 + 0x10)
                                                
                                                if (rax_22 s< 0)
                                                    rax_22 = neg.w(rax_22)
                                                
                                                rsi_1 = rax_22
                                            else
                                                rsi_1 = 0x7fff
                                        
                                        void* rax_23 = sub_142bcba50(arg2, "RESOLUTION_Y")
                                        
                                        if (rax_23 != 0)
                                            int32_t rcx_22 = *(rax_23 + 0x10)
                                            
                                            if (rcx_22 s< 0)
                                                rcx_22 = neg.d(rcx_22)
                                            
                                            if (rcx_22 s<= 0x7fff)
                                                int16_t rax_24 = *(rax_23 + 0x10)
                                                
                                                if (rax_24 s< 0)
                                                    rax_24 = neg.w(rax_24)
                                                
                                                rbp_1 = rax_24
                                            else
                                                rbp_1 = 0x7fff
                                        
                                        if (*(rax_5 + 0xc) == 0)
                                            int32_t rcx_23 = *(rax_5 + 4)
                                            *(rax_5 + 0xc) = rcx_23
                                            
                                            if (rbp_1 != 0)
                                                *(rax_5 + 0xc) =
                                                    sub_142b93dd0(rcx_23, sx.d(rbp_1), 0x48)
                                        
                                        uint32_t rax_26
                                        
                                        if (rsi_1 == 0 || rbp_1 == 0)
                                            rax_26 = *(rax_5 + 0xc)
                                        else
                                            rax_26 = sub_142b93dd0(*(rax_5 + 0xc), sx.d(rsi_1), 
                                                sx.d(rbp_1))
                                        
                                        rax_5[1].d = rax_26
                                        void* rax_27 = sub_142bcba50(arg2, "CHARSET_REGISTRY")
                                        void* rax_28 = sub_142bcba50(arg2, "CHARSET_ENCODING")
                                        
                                        if (rax_27 == 0 || *(rax_27 + 8) == 0 || rax_28 == 0
                                                || *(rax_28 + 8) == 0)
                                            goto label_142bccf32
                                        
                                        int64_t rax_29 =
                                            sub_142b99bb0(r14, *(rax_28 + 0x10), &result_1)
                                        bool cond:3_1 = result_1 != 0
                                        arg2[0x25] = rax_29
                                        
                                        if (not(cond:3_1))
                                            arg2[0x26] =
                                                sub_142b99bb0(r14, *(rax_27 + 0x10), &result_1)
                                        label_142bccf32:
                                            result = result_1
                                            
                                            if (result == 0)
                                                return result
                                else
                                    arg2[3] = sub_142b99bb0(r14, *(rax_2 + 0x10), &result_1)
                                    
                                    if (result_1 == 0)
                                        goto label_142bccca8

return 3
