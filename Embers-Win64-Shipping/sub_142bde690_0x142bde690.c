// 函数: sub_142bde690
// 地址: 0x142bde690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[1]
int32_t rbp_1 = neg.d(result)
int32_t rbx_2 = (arg3 - 1 + result) & rbp_1
int32_t rdi_1 = rbp_1 & arg4
int32_t r10 = rbx_2

if (rbx_2 s<= rdi_1)
label_142bde7e9:
    int32_t r10_4 = r10 s>> (*arg1).b
    
    if (r10_4 s>= 0 && r10_4 u< arg1[0x24])
        result = arg1[0x26] * r10_4
        char* rdx_6 = (sx.q(arg2) s>> 3) - sx.q(result) + *(arg1 + 0x50)
        *rdx_6 |= (0x80 s>> (arg2.b & 7)).b
else
    result += rdi_1
    uint32_t r10_1 = zx.d(*(arg5 + 0x18))
    int32_t r8_1 = r10_1 & 7
    
    if (rbx_2 == result)
        if (r8_1 == 0)
        label_142bde780:
            r10 = rdi_1
        label_142bde786:
            
            if (r10 s>= 0)
                result = r10 s>> (*arg1).b
                
                if (result u>= arg1[0x24])
                    r10 = rdi_1
            else
                r10 = rbx_2
            
            if (r10 == rbx_2)
                rbx_2 = rdi_1
            
            int32_t rbx_3 = rbx_2 s>> (*arg1).b
            
            if (rbx_3 s< 0 || rbx_3 u>= arg1[0x24])
                goto label_142bde7e9
            
            result = arg1[0x26] * rbx_3
            
            if ((*((sx.q(arg2) s>> 3) - sx.q(result) + *(arg1 + 0x50)) & (0x80 s>> (arg2.b & 7)).b)
                    == 0)
                goto label_142bde7e9
        else if (r8_1 == 1)
        label_142bde716:
            
            if (*(arg5 + 0x28) != arg6 || *(arg5 + 0x1c) s> 0)
            label_142bde73b:
                
                if (*(arg6 + 0x28) != arg5)
                label_142bde763:
                    
                    if (r8_1 == 1)
                        goto label_142bde780
                    
                    goto label_142bde76f
                
                result = sx.d(arg2)
                
                if (*(arg5 + 0x20) != result)
                    goto label_142bde763
                
                if ((r10_1.b & 0x20) != 0)
                    result = arg4 - arg3
                    
                    if (result s>= arg1[2])
                        goto label_142bde763
            else if ((r10_1.b & 0x10) != 0)
                result = arg4 - arg3
                
                if (result s>= arg1[2])
                    goto label_142bde73b
        else
            if (r8_1 == 4)
            label_142bde76f:
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(arg4 - 1 + arg3)
                result = (temp3_1 - temp2_1) s>> 1
                r10 = (result + arg1[2]) & rbp_1
                goto label_142bde786
            
            if (r8_1 == 5)
                goto label_142bde716

return result
