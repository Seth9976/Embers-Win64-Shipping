// 函数: sub_142bdbe40
// 地址: 0x142bdbe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg2 + 8 + sx.q(arg3) * 0xcc
int64_t result_1 = result
int32_t rcx = *(result + 0xc4)

if ((arg1[4].b & 8) == 0)
    int32_t rbx_1 = *(result + 0xc8) + sub_142b93e80(*arg1, rcx)
    result = sub_142b93e80(arg1[1], rcx)
    int32_t r10_1 = arg3
    int32_t rcx_3 = 0
    int32_t var_58_1 = 0
    int32_t rsi_1 = result.d
    int32_t var_54_1
    
    if (r10_1 == 0)
        if (*(arg4 + 0xcc) == 0)
        label_142bdc00b:
            arg1[4] |= 8
            arg1[2] = rbx_1
            arg1[3] = rsi_1
            return result
        
        if (*(arg4 + 0xce) != 0)
            var_54_1 = 1
        else
            var_54_1 = 0
    else if (r10_1 != 1)
        var_54_1 = 0
    else
        if (*(arg4 + 0xcd) == 0)
            goto label_142bdc00b
        
        if (*(arg4 + 0xcf) == 0)
            var_54_1 = 0
        else
            var_54_1 = 1
    
    arg1[3] = rsi_1
    int32_t rdx_2 = 0
    void* var_48 = nullptr
    int32_t r9 = 0
    int32_t var_50_1 = 0
    int32_t var_40_1 = 0
    
    if (r10_1 == 1)
        int32_t r8 = *arg1
        result = sub_142bda910(arg2 + 0x1a0, arg1[1] + r8, r8, &var_48)
        rdx_2 = var_48:4.d
        rcx_3 = var_48.d
        r9 = var_40_1
        r10_1 = arg3
        var_50_1 = rdx_2
        var_58_1 = rcx_3
    
    int32_t rbp_1 = 0x40
    
    if (rcx_3 == 1)
        result = zx.q(rdx_2 - rsi_1)
        arg1[2] = result.d
    else if (rcx_3 == 2)
        arg1[2] = r9
    else if (rcx_3 == 3)
        arg1[2] = r9
        result = zx.q(rdx_2 - r9)
        arg1[3] = result.d
    else
        void* rcx_6 = *(arg1 + 0x18)
        var_48 = rcx_6
        
        if (rcx_6 != 0)
            if ((*(rcx_6 + 0x10) & 8) == 0)
                sub_142bdbe40(rcx_6, arg2, zx.q(r10_1), arg4, var_58_1, var_50_1)
                rcx_6 = var_48
            
            rbx_1 = (*(rcx_6 + 0xc) s>> 1) + *(rcx_6 + 8) - (rsi_1 s>> 1)
                + sub_142b93e80((arg1[1] s>> 1) + *arg1 - ((*(rcx_6 + 4) s>> 1) + *rcx_6), rcx)
        
        arg1[2] = rbx_1
        arg1[3] = rsi_1
        
        if (*(arg4 + 0xd0) != 0)
            if (rsi_1 s> 0x40)
                int32_t rdx_10 = *(result_1 + 8)
                int32_t rcx_15 = rsi_1 - rdx_10
                int32_t rax_18 = neg.d(rcx_15)
                
                if (rcx_15 s>= 0)
                    rax_18 = rcx_15
                
                if (rax_18 s< 0x28)
                    rsi_1 = rdx_10
                
                if (rax_18 s>= 0x28 || rdx_10 s>= 0x30)
                    if (rsi_1 s< 0xc0)
                        goto label_142bdc0a8
                    
                    rsi_1 = (rsi_1 + 0x20) & 0xffffffc0
                else
                    rsi_1 = 0x30
                label_142bdc0a8:
                    int32_t rsi_3 = rsi_1 & 0xffffffc0
                    int32_t rax_20 = rsi_1 & 0x3f
                    
                    if (rax_20 u< 0xa)
                        rsi_1 = rsi_3 + rax_20
                    else if (rax_20 u>= 0x20)
                        if (rax_20 u< 0x36)
                            rax_20 = 0x36
                        
                        rsi_1 = rsi_3 + rax_20
                    else
                        rsi_1 = rsi_3 + 0xa
            else if (rsi_1 s< 0x20)
                if (rsi_1 s> 0)
                    int32_t r8_5 = rsi_1 + rbx_1
                    int32_t rdx_9 = ((rbx_1 + 0x20) & 0xffffffc0) - rbx_1
                    int32_t rax_13 = ((r8_5 + 0x20) & 0xffffffc0) - rsi_1 - rbx_1
                    int32_t rcx_13 = neg.d(rax_13)
                    
                    if (rax_13 s>= 0)
                        rcx_13 = rax_13
                    
                    int32_t rax_15 = neg.d(rdx_9)
                    
                    if (rdx_9 s>= 0)
                        rax_15 = rdx_9
                    
                    if (rax_15 s> rcx_13)
                        rbx_1 = r8_5
                
                rbx_1 = (rbx_1 + 0x20) & 0xffffffc0
            else
                int32_t rbx_6 = rbx_1 + (rsi_1 s>> 1)
                rsi_1 = 0x40
                rbx_1 = rbx_6 & 0xffffffc0
        
        arg1[3] = rsi_1
        int32_t r9_5 = ((rbx_1 + 0x20) & 0xffffffc0) - rbx_1
        int32_t r8_10 = ((rbx_1 + 0x20 + rsi_1) & 0xffffffc0) - rsi_1 - rbx_1
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r8_10)
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r9_5)
        rcx_3 = var_58_1
        
        if ((temp6_1 ^ temp5_1) - temp5_1 s<= (temp4_1 ^ temp3_1) - temp3_1)
            r8_10 = r9_5
        
        result = zx.q(rbx_1 + r8_10)
        arg1[2] = result.d
    
    if (var_54_1 != 0)
        result = zx.q(arg1[3])
        int32_t rdx_13 = arg1[2]
        
        if (result.d s>= 0x40)
            rbp_1 = (result + 0x20).d & 0xffffffc0
        
        if (rcx_3 == 1)
            result = zx.q(var_50_1 - rbp_1)
            arg1[2] = result.d
            arg1[3] = rbp_1
        else if (rcx_3 == 2)
            arg1[3] = rbp_1
        else if (rcx_3 != 3)
            arg1[3] = rbp_1
            int32_t rcx_22 = rbp_1 s>> 1
            
            if ((rbp_1.b & 0x40) == 0)
                result = zx.q(((rdx_13 + 0x20 + rcx_22) & 0xffffffc0) - rcx_22)
            else
                result = zx.q(((rcx_22 + rdx_13) & 0xffffffc0) + 0x20 - rcx_22)
            
            arg1[2] = result.d
            arg1[3] = rbp_1
    
    arg1[4] |= 8

return result
