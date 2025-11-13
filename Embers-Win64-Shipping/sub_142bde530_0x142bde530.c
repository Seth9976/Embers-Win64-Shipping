// 函数: sub_142bde530
// 地址: 0x142bde530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rsi = *(arg1 + 0x68)
void* rdx = *(arg1 + 0x78)
uint64_t result

if (rsi u<= 1 || rdx == 0)
    *(arg1 + 0x78) = 0
label_142bde665:
    result.b = 0
else
    while (true)
        if (rsi u<= 1)
            *(rdx + 8) = 0
        else
            *(rdx + 8) = *(rdx + 0x10) + (sx.q(*(rdx + 0x1c)) << 2)
        
        int32_t i
        int32_t r10_2
        
        if ((*(rdx + 0x18) & 8) == 0)
            r10_2 = *(rdx + 0x20)
            int32_t rax_1 = *(rdx + 0x1c)
            i = r10_2 - rax_1 + 1
            *(rdx + 0x20) = i
            *(rdx + 0x10) += sx.q(rax_1 - 1) << 2
        else
            i = *(rdx + 0x20)
            r10_2 = i - 1 + *(rdx + 0x1c)
        
        int64_t rcx_4 = sx.q(*(arg1 + 0x3c))
        int64_t r9_2 = *(arg1 + 0x20) - (rcx_4 << 2)
        int32_t rax_3 = (rcx_4 - 1).d
        int64_t rcx_5 = sx.q(rax_3)
        
        if (rax_3 s< 0)
        label_142bde611:
            *(arg1 + 0x28) -= 4
            
            if (*(arg1 + 0x28) u<= *(arg1 + 0x30))
                *(arg1 + 0x38) = 0x62
            else
                *(arg1 + 0x3c) += 1
                *(*(arg1 + 0x20) - (sx.q(*(arg1 + 0x3c)) << 2)) = i
            label_142bde63c:
                
                if (sub_142bde8b0(arg1, r10_2 + 1).b == 0)
                    rdx = *(rdx + 8)
                    int16_t temp1_1 = rsi
                    rsi -= 1
                    
                    if (temp1_1 == 1)
                        goto label_142bde665
                    
                    continue
            
            result.b = 1
            break
        
        while (i s< *(r9_2 + (rcx_5 << 2)))
            rax_3 -= 1
            int64_t temp0_1 = rcx_5
            rcx_5 -= 1
            
            if (temp0_1 - 1 s< 0)
                break
        
        if (rax_3 s< 0)
            goto label_142bde611
        
        int64_t rcx_6 = sx.q(rax_3)
        int32_t* rdx_3 = r9_2 + (rcx_6 << 2)
        
        if (i s<= *(r9_2 + (rcx_6 << 2)))
            goto label_142bde63c
        
        int32_t temp2_1
        
        do
            temp2_1 = rax_3
            rax_3 -= 1
            int32_t i_1 = *rdx_3
            *rdx_3 = i
            rdx_3 = &rdx_3[-1]
            i = i_1
        while (temp2_1 - 1 s>= 0)
        goto label_142bde611

return result
