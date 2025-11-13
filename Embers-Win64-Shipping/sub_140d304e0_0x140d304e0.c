// 函数: sub_140d304e0
// 地址: 0x140d304e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r11 = *arg1
uint64_t r10 = sx.q(arg1[1].d)
int16_t* r8 = r11
int16_t* result = &r11[r10]

if (r11 != result)
    while (*r8 != 0x27)
        r8 = &r8[1]
        
        if (r8 == result)
            return result
    
    int32_t r8_2 = ((r8 - r11) s>> 1).d
    
    if (r8_2 != 0xffffffff)
        if (result == r11)
        label_140d30540:
            result = 0xffffffff
        else
            while (true)
                result -= 2
                
                if (*result == 0x27)
                    result = (result - r11) s>> 1
                    break
                
                if (result == r11)
                    goto label_140d30540
        
        if (result.d s> r8_2)
            int32_t rbx_1 = (r10 - 1).d
            int32_t rdx = 0x7fffffff
            int64_t rcx_1 = sx.q(result.d - r8_2 - 1) + sx.q(r8_2 + 1)
            int32_t rax_3 = (r10 - 1).d
            
            if (rcx_1 s<= 0x7fffffff)
                rdx = rcx_1.d
            
            int32_t temp0_1 = r10.d
            
            if (temp0_1 == 0)
                rax_3 = -1
            
            if (temp0_1 == 0)
                rbx_1 = -1
            
            if (r10.d == 0)
                rax_3 = 0
            
            int32_t r9_1
            
            if (rdx s>= 0)
                r9_1 = rax_3
                
                if (rdx s< rax_3)
                    r9_1 = rdx
            else
                r9_1 = 0
            
            if (r10.d == 0)
                rbx_1 = 0
            
            int32_t rbx_2 = rbx_1 - r9_1
            result = zx.q(rax_3 - r9_1)
            
            if (rax_3 - r9_1 s>= 0)
                if (result.d s< rbx_2)
                    rbx_2 = result.d
                
                if (rbx_2 != 0)
                    int32_t rax_6 = r10.d - rbx_2
                    result = zx.q(rax_6 - r9_1)
                    
                    if (rax_6 != r9_1)
                        result = memmove(&r11[sx.q(r9_1)], &r11[sx.q(rbx_2 + r9_1)], result.d * 2)
                        r10 = zx.q(arg1[1].d)
                    
                    r10 = zx.q(r10.d - rbx_2)
                    arg1[1].d = r10.d
            
            int32_t rbx_3 = (r10 - 1).d
            
            if (r10.d == 0)
                rbx_3 = 0
            
            if (r8_2 + 1 s>= 0)
                if (r8_2 + 1 s< rbx_3)
                    rbx_3 = r8_2 + 1
                
                if (rbx_3 != 0)
                    int32_t rax_9 = r10.d
                    result = zx.q(rax_9 - rbx_3)
                    
                    if (rax_9 != rbx_3)
                        int64_t rcx_4 = *arg1
                        result = memmove(rcx_4, rcx_4 + (sx.q(rbx_3) << 1), result.d * 2)
                        r10 = zx.q(arg1[1].d)
                    
                    arg1[1].d = r10.d - rbx_3
        else if (arg2 != 0)
            int16_t* r9_2 = &data_142d40450
            
            if (r10.d != 0)
                r9_2 = r11
            
            sub_140af98a0("Unknown", 0xcd1, Bad path name: %s, missing ' or an incorrect format", 
                r9_2)
            return sub_140afbb40() __tailcall

return result
