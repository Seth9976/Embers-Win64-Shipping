// 函数: sub_142b7a4b0
// 地址: 0x142b7a4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(sub_142b7a1f0(arg1, arg2))
int64_t rsi
rsi.b = 1
uint64_t result = sub_142b79aa0(arg1, arg2)

while (*arg2 s<= 0)
    if (result.d s>= 0)
        int32_t rdx_4 = result.d & 0xf
        
        if (rbp s< 0xf)
            if (rsi.b == 0)
                if (rdx_4 s< rbp.d)
                    if (*arg2 s> 0)
                        break
                    
                    result = "reset-before strength followed by a stronger relation"
                label_142b7a5e3:
                    *arg2 = 3
                    bool cond:0_1 = arg1[5] == 0
                    arg1[6] = result
                    
                    if (not(cond:0_1))
                        return sub_142b7c7c0(arg1)
                    
                    break
                    break
                    break
            else if (rdx_4 != rbp.d)
                if (*arg2 s> 0)
                    break
                
                result = "reset-before strength differs from its first relation"
                goto label_142b7a5e3
        
        int32_t r8_4 = (result.d s>> 8) + arg1[9].d
        
        if ((result.b & 0x10) != 0)
            result = sub_142b7bca0(arg1, rdx_4, r8_4, arg2)
        else
            result = sub_142b79c90(arg1, rdx_4, r8_4, arg2)
        
        if (*arg2 s> 0)
            break
        
        rsi.b = 0
    else
        result = arg1[2]
        int16_t rcx_1 = *(result + 8)
        int32_t rcx_3
        
        if (rcx_1 s< 0)
            rcx_3 = *(result + 0xc)
        else
            rcx_3 = sx.d(rcx_1) s>> 5
        
        int64_t rdx_1 = sx.q(arg1[9].d)
        
        if (rdx_1.d s>= rcx_3)
        label_142b7a5c4:
            
            if (rsi.b == 0)
                break
            
            if (*arg2 s> 0)
                break
            
            result = "reset not followed by a relation"
            goto label_142b7a5e3
        
        int16_t r8_1 = *(result + 8)
        int32_t rcx_5
        
        if (r8_1 s< 0)
            rcx_5 = *(result + 0xc)
        else
            rcx_5 = sx.d(r8_1) s>> 5
        
        if (rdx_1.d u>= rcx_5)
            goto label_142b7a5c4
        
        int64_t rcx_6 = result + 0xa
        
        if ((r8_1.b & 2) == 0)
            rcx_6 = *(result + 0x18)
        
        if (*(rcx_6 + (rdx_1 << 1)) != 0x23)
            goto label_142b7a5c4
        
        arg1[9].d = sub_142b7c930(arg1, rdx_1.d + 1)
    
    result = sub_142b79aa0(arg1, arg2)

return result
