// 函数: sub_142afdbb0
// 地址: 0x142afdbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *(arg1 + 8)
int16_t* rdi = *(arg1 + 0x10)
int64_t rbp = *(arg1 + 0x18)
char* r9 = *(arg1 + 0x20)
int64_t rsi = *(arg1 + 0x28)
uint64_t result = zx.q(*(r11 + 0x54))
int64_t r12 = *(r11 + 0x30)

if (result.d != 0 && r9 u< rsi)
    *(r11 + 0x54) = 0
    goto label_142afdc6b

while (rdi u< rbp)
    if (r9 u< rsi)
        result = zx.q(*rdi)
        rdi = &rdi[1]
        int32_t rcx
        
        if (result.d s< 0x80)
        label_142afdc02:
            *r9 = result.b
            r9 = &r9[1]
            continue
        else
            rcx = result.d
            
            if (result.d s< 0x800)
                result.b &= 0x3f
                result.b |= 0x80
                *r9 = (rcx s>> 6).b | 0xc0
                r9 = &r9[1]
                
                if (r9 u< rsi)
                    goto label_142afdc02
                
                *(r11 + 0x68) = result.b
                *(r11 + 0x5b) = 1
                *arg2 = 0xf
                continue
        
        if ((rcx & 0xfffff800) != 0xd800 || r12 == &data_1436646f0)
            goto label_142afdca6
        
    label_142afdc6b:
        
        if (rdi u>= rbp)
            *(r11 + 0x54) = result.d
        else
            uint32_t rdx
            
            if (not(test_bit(result.d, 0xa)))
                rdx = zx.d(*rdi)
            
            if (test_bit(result.d, 0xa) || (rdx & 0xfffffc00) != 0xdc00)
                *(r11 + 0x54) = result.d
                *arg2 = 0xc
            else
                result = zx.q(((result.d - 0xd7f7) << 0xa) + rdx)
                rdi = &rdi[1]
            label_142afdca6:
                void arg_8
                void* r10_1 = &arg_8
                int32_t rcx_7 = result.d
                
                if (rsi - r9 s>= 4)
                    r10_1 = r9
                
                int32_t rbx_1
                
                if (result.d s> 0xffff)
                    rbx_1 = 3
                    *r10_1 = (rcx_7 s>> 0x12).b | 0xf0
                    *(r10_1 + 1) = ((result.d s>> 0xc).b & 0x3f) | 0x80
                else
                    rbx_1 = 2
                    *r10_1 = (rcx_7 s>> 0xc).b | 0xe0
                
                char r8_2 = (result.d s>> 6).b
                result.b &= 0x3f
                result.b |= 0x80
                *(zx.q(rbx_1 - 1) + r10_1) = (r8_2 & 0x3f) | 0x80
                uint64_t rcx_13 = zx.q(rbx_1)
                *(rcx_13 + r10_1) = result.b
                
                if (r10_1 != r9)
                    int64_t rdx_1 = 1
                    result = &arg_8 + rcx_13
                    void* r8_5 = result - r10_1 + 1
                    
                    if (r10_1 u> result)
                        r8_5 = nullptr
                    
                    if (1 u> r8_5)
                        continue
                    else
                    label_142afdd47:
                        result = zx.q(*r10_1)
                        
                        if (r9 u>= rsi)
                            *(sx.q(*(r11 + 0x5b)) + r11 + 0x68) = result.b
                            *(r11 + 0x5b) += 1
                            *arg2 = 0xf
                        else
                            *r9 = result.b
                            r9 = &r9[1]
                        
                        r10_1 += 1
                        rdx_1 += 1
                        
                        if (rdx_1 u<= r8_5)
                            goto label_142afdd47
                        
                        continue
                else
                    r9 = &r9[zx.q(rbx_1 + 1)]
                    continue
    
    if (rdi u< rbp && r9 u>= rsi && *arg2 s<= 0)
        *arg2 = 0xf
    
label_142afddb4:
    *(arg1 + 0x20) = r9
    *(arg1 + 0x10) = rdi
    return result

goto label_142afddb4
