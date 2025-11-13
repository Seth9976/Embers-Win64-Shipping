// 函数: sub_142b78f00
// 地址: 0x142b78f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result_1 = arg3
char* result = arg3
int32_t rdi = 0

if (arg2 != 0)
    int16_t rax_9 = sub_142b79030(&result_1, arg4)
    result = result_1
    *(arg1 + 0x1ec) = zx.d(rax_9)
label_142b79009:
    
    if (*arg4 s<= 0)
        *(arg1 + 0x234) = 1
else
    if (*arg4 s<= 0)
        int64_t i = 0
        int16_t* r11_1 = arg1 + 0x1f0
        
        while (i s< 0x20)
            char rcx = *result
            
            if (rcx == 0)
                break
            
            if (rcx == 0x5f)
                break
            
            int16_t rdx = 0
            int32_t j = 0
            
            while (j s< 4)
                int16_t rax_3
                
                if (rcx - 0x30 u> 9)
                    if (rcx - 0x61 u<= 5)
                        rax_3 = sx.w(rcx) - 0x57
                        goto label_142b78f93
                    
                    if (rcx - 0x41 u<= 5)
                        rax_3 = sx.w(rcx) - 0x37
                        goto label_142b78f93
                    
                    rdx = 0
                else
                    rax_3 = sx.w(rcx) - 0x30
                label_142b78f93:
                    rcx = result[1]
                    result = &result[1]
                    j += 1
                    rdx = rdx << 4 | rax_3
                    
                    if (rcx != 0)
                        continue
                    else if (j s>= 4)
                        break
                *arg4 = 1
                break
            
            *r11_1 = rdx
            rdi += 1
            r11_1 = &r11_1[1]
            i += 1
            
            if (*arg4 s> 0)
                break
    
    *(arg1 + 0x230) = rdi
    
    if (rdi != 0x20)
        goto label_142b79009
    
    char rax_8 = *result
    
    if (rax_8 == 0 || rax_8 == 0x5f)
        goto label_142b79009
    
    *arg4 = 0xf

return result
