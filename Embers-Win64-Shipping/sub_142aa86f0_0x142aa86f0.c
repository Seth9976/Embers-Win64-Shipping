// 函数: sub_142aa86f0
// 地址: 0x142aa86f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *arg4
int64_t rsi = sx.q(arg2)
int32_t r10 = r11
int32_t rbx = *arg5
uint64_t result

if (r11 s> rbx)
label_142aa876f:
    result = 0xffffffff
    *arg4 = 0xffffffff
    *arg5 = 0xffffffff
else
    while (true)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx + r10)
        int64_t r8 = sx.q((temp1_1 - temp0_1) s>> 1)
        int64_t rcx = r8 * 3
        
        if (rsi.d s< *(arg1 + (rcx << 3) + 0x10))
            int16_t rdx_1 = *(*(arg1 + (rcx << 3) + 8) + (rsi << 1))
            
            if (arg3 u<= rdx_1)
                if (arg3 u>= rdx_1)
                    int32_t r10_1 = r8.d
                    
                    if (r11 s< r8.d)
                        do
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(r10_1 + r11)
                            int64_t r9 = sx.q((temp3_1 - temp2_1) s>> 1)
                            int64_t rdx_3 = r9 * 3
                            
                            if (rsi.d s>= *(arg1 + (rdx_3 << 3) + 0x10))
                                r11 = (r9 + 1).d
                            else if (*(rsi * 2 + *(arg1 + (rdx_3 << 3) + 8)) u>= arg3)
                                r10_1 = r9.d
                            else
                                r11 = (r9 + 1).d
                        while (r11 s< r10_1)
                    
                    *arg4 = r11
                    int32_t i = *arg5
                    
                    while (r8.d s< i)
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(i + r8.d)
                        int64_t r9_1 = sx.q((temp5_1 - temp4_1) s>> 1)
                        int64_t rdx_5 = r9_1 * 3
                        
                        if (*(arg1 + (rdx_5 << 3) + 0x10) s< rsi.d
                                || *(rsi * 2 + *(arg1 + (rdx_5 << 3) + 8)) u<= arg3)
                            r8 = zx.q((r9_1 + 1).d)
                        else
                            i = r9_1.d
                    
                    if (*(*(arg1 + sx.q(i) * 0x18 + 8) + (rsi << 1)) u<= arg3)
                        *arg5 = i
                    else
                        *arg5 = i - 1
                    
                    int64_t r8_1 = sx.q(*arg4)
                    result = 0xffffffff
                    
                    if (*(arg1 + r8_1 * 0x18 + 0x10) == (rsi + 1).d)
                        return zx.q(r8_1.d)
                    
                    break
                
                rbx = (r8 - 1).d
            else
                r10 = (r8 + 1).d
        else
            r10 = (r8 + 1).d
        
        if (r10 s> rbx)
            goto label_142aa876f

return result
