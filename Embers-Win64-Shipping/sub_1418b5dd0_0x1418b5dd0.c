// 函数: sub_1418b5dd0
// 地址: 0x1418b5dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2[1].d)
int64_t arg_10
int64_t arg_18

if (result.d != 0)
    int64_t* i = *arg2
    
    for (void* r14_3 = &i[result * 2]; i != r14_3; i = &i[2])
        int16_t* rdx_11
        
        if (i[1].d == 0)
            rdx_11 = &data_142d40450
        else
            rdx_11 = *i
        
        sub_140b58260(&arg_10, rdx_11, 1)
        int64_t rax_11 = arg_10
        int32_t r10_6 = sub_140b5ead0(rax_11.d) + rax_11:4.d
        
        if (*(arg1 + 0x118) == *(arg1 + 0x144))
        label_1418b604e:
            sub_1418ae9e0(arg1 + 0x110, r10_6, &arg_10)
        else
            void* rcx_13 = *(arg1 + 0x150)
            void* r8_13 = arg1 + 0x148
            
            if (rcx_13 != 0)
                r8_13 = rcx_13
            
            int32_t rax_15 = *(r8_13 + (((sx.q(*(arg1 + 0x158)) - 1) & sx.q(r10_6)) << 2))
            
            if (rax_15 == 0xffffffff)
            label_1418b604e_1:
                sub_1418ae9e0(arg1 + 0x110, r10_6, &arg_10)
            else
                int64_t* r8_16
                
                while (true)
                    r8_16 = (sx.q(rax_15) << 5) + *(arg1 + 0x110)
                    
                    if (*r8_16 == arg_10)
                        break
                    
                    rax_15 = r8_16[3].d
                    
                    if (rax_15 == 0xffffffff)
                        goto label_1418b604e_2
                
                if (rax_15 == 0xffffffff || r8_16 == 0)
                label_1418b604e_2:
                    sub_1418ae9e0(arg1 + 0x110, r10_6, &arg_10)
        
        int16_t* rdx_16
        
        if (i[1].d == 0)
            rdx_16 = &data_142d40450
        else
            rdx_16 = *i
        
        sub_140b58260(&arg_18, rdx_16, 1)
        int64_t rax_16 = arg_18
        int32_t r10_8 = sub_140b5ead0(rax_16.d) + rax_16:4.d
        
        if (*(arg1 + 0x1b8) == *(arg1 + 0x1e4))
        label_1418b60ee:
            result = sub_1418ae8c0(arg1 + 0x1b0, r10_8, &arg_18)
        else
            void* rcx_18 = *(arg1 + 0x1f0)
            void* r8_18 = arg1 + 0x1e8
            
            if (rcx_18 != 0)
                r8_18 = rcx_18
            
            result = zx.q(*(r8_18 + (((sx.q(*(arg1 + 0x1f8)) - 1) & sx.q(r10_8)) << 2)))
            
            if (result.d == 0xffffffff)
            label_1418b60ee_1:
                result = sub_1418ae8c0(arg1 + 0x1b0, r10_8, &arg_18)
            else
                int64_t* r8_21
                
                while (true)
                    r8_21 = (sx.q(result.d) << 5) + *(arg1 + 0x1b0)
                    
                    if (*r8_21 == arg_18)
                        break
                    
                    result = zx.q(r8_21[3].d)
                    
                    if (result.d == 0xffffffff)
                        goto label_1418b60ee_2
                
                if (result.d == 0xffffffff || r8_21 == 0)
                label_1418b60ee_2:
                    result = sub_1418ae8c0(arg1 + 0x1b0, r10_8, &arg_18)
else
    int16_t* const r15_1 = &data_142d40450
    int16_t* const rdx = &data_142d40450
    
    if (data_143efaf28 != result.d)
        rdx = data_143efaf20
    
    sub_140b58260(&arg_10, rdx, (result + 1).d)
    int64_t rax = arg_10
    arg_18 = rax
    int32_t r10_2 = sub_140b5ead0(rax.d) + arg_18:4.d
    
    if (*(arg1 + 0x118) == *(arg1 + 0x144))
    label_1418b5e9e:
        sub_1418ae9e0(arg1 + 0x110, r10_2, &arg_10)
    else
        void* rcx_2 = *(arg1 + 0x150)
        void* r8_2 = arg1 + 0x148
        
        if (rcx_2 != 0)
            r8_2 = rcx_2
        
        int32_t rax_4 = *(r8_2 + (((sx.q(*(arg1 + 0x158)) - 1) & sx.q(r10_2)) << 2))
        
        if (rax_4 == 0xffffffff)
        label_1418b5e9e_1:
            sub_1418ae9e0(arg1 + 0x110, r10_2, &arg_10)
        else
            int64_t* r8_5
            
            while (true)
                r8_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x110)
                
                if (*r8_5 == arg_10)
                    break
                
                rax_4 = r8_5[3].d
                
                if (rax_4 == 0xffffffff)
                    goto label_1418b5e9e_2
            
            if (rax_4 == 0xffffffff || r8_5 == 0)
            label_1418b5e9e_2:
                sub_1418ae9e0(arg1 + 0x110, r10_2, &arg_10)
    
    if (data_143efaf28 != 0)
        r15_1 = data_143efaf20
    
    sub_140b58260(&arg_10, r15_1, 1)
    int64_t rax_5 = arg_10
    arg_18 = rax_5
    int32_t r10_4 = sub_140b5ead0(rax_5.d) + arg_18:4.d
    
    if (*(arg1 + 0x1b8) == *(arg1 + 0x1e4))
        return sub_1418ae8c0(arg1 + 0x1b0, r10_4, &arg_10)
    
    void* rcx_7 = *(arg1 + 0x1f0)
    void* r8_7 = arg1 + 0x1e8
    
    if (rcx_7 != 0)
        r8_7 = rcx_7
    
    result = zx.q(*(r8_7 + (((sx.q(*(arg1 + 0x1f8)) - 1) & sx.q(r10_4)) << 2)))
    
    if (result.d == 0xffffffff)
        return sub_1418ae8c0(arg1 + 0x1b0, r10_4, &arg_10)
    
    int64_t* r8_10
    
    while (true)
        r8_10 = (sx.q(result.d) << 5) + *(arg1 + 0x1b0)
        
        if (*r8_10 == arg_10)
            break
        
        result = zx.q(r8_10[3].d)
        
        if (result.d == 0xffffffff)
            return sub_1418ae8c0(arg1 + 0x1b0, r10_4, &arg_10)
    
    if (result.d == 0xffffffff || r8_10 == 0)
        return sub_1418ae8c0(arg1 + 0x1b0, r10_4, &arg_10)
return result
