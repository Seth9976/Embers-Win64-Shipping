// 函数: sub_142bdf210
// 地址: 0x142bdf210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1])
int32_t rbp_1 = neg.d(result.d)
int32_t r11_2 = (arg3 - 1 + result.d) & rbp_1
int32_t rbx_1 = rbp_1 & arg4
int32_t r9 = r11_2

if (r11_2 s<= rbx_1)
label_142bdf36c:
    int32_t r9_4 = r9 s>> (*arg1).b
    
    if (r9_4 s>= 0)
        result = zx.q(arg1[0x12].w)
        
        if (r9_4 s< result.d)
            result = *(arg1 + 0x50)
            int64_t rdx_7 = sx.q(sx.d((r9_4 s>> 3).w) + arg1[0x38])
            *(rdx_7 + result) |= (0x80 s>> (r9_4.b & 7)).b
else
    result = zx.q(result.d + rbx_1)
    uint32_t r9_1 = zx.d(*(arg5 + 0x18))
    int32_t r8_1 = r9_1 & 7
    
    if (r11_2 == result.d)
        if (r8_1 == 0)
        label_142bdf300:
            r9 = rbx_1
        label_142bdf306:
            
            if (r9 s>= 0)
                result = zx.q(arg1[0x12].w)
                
                if (r9 s>> (*arg1).b s>= result.d)
                    r9 = rbx_1
            else
                r9 = r11_2
            
            if (r9 == r11_2)
                r11_2 = rbx_1
            
            int32_t r11_3 = r11_2 s>> (*arg1).b
            
            if (r11_3 s< 0)
                goto label_142bdf36c
            
            result = zx.q(arg1[0x12].w)
            
            if (r11_3 s>= result.d)
                goto label_142bdf36c
            
            result = zx.q(0x80 s>> (r11_3.b & 7))
            
            if ((result.b & *(sx.q(sx.d((r11_3 s>> 3).w) + arg1[0x38]) + *(arg1 + 0x50))) == 0)
                goto label_142bdf36c
        else if (r8_1 == 1)
        label_142bdf299:
            
            if (*(arg5 + 0x28) != arg6 || *(arg5 + 0x1c) s> 0)
            label_142bdf2bd:
                
                if (*(arg6 + 0x28) != arg5)
                label_142bdf2e4:
                    
                    if (r8_1 == 1)
                        goto label_142bdf300
                    
                    goto label_142bdf2ef
                
                result = zx.q(sx.d(arg2))
                
                if (*(arg5 + 0x20) != result.d)
                    goto label_142bdf2e4
                
                if ((r9_1.b & 0x20) != 0)
                    result = zx.q(arg4 - arg3)
                    
                    if (result.d s>= arg1[2])
                        goto label_142bdf2e4
            else if ((r9_1.b & 0x10) != 0)
                result = zx.q(arg4 - arg3)
                
                if (result.d s>= arg1[2])
                    goto label_142bdf2bd
        else
            if (r8_1 == 4)
            label_142bdf2ef:
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(arg4 - 1 + arg3)
                result = zx.q((temp3_1 - temp2_1) s>> 1)
                r9 = (result.d + arg1[2]) & rbp_1
                goto label_142bdf306
            
            if (r8_1 == 5)
                goto label_142bdf299

return result
