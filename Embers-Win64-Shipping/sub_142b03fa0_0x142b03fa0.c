// 函数: sub_142b03fa0
// 地址: 0x142b03fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 8)
char* rsi = *(arg1 + 0x10)
int16_t* rdi = *(arg1 + 0x20)
int64_t r12 = *(arg1 + 0x18)
void* r15 = *(result + 0x10)
char* arg_18 = rsi

if (*(r15 + 0x68) != 0)
    goto label_142b0400c

uint32_t rdx
uint32_t rbx_1

if (*(result + 0x40) != 1)
label_142b04088:
    
    while (true)
        if (rsi u>= r12)
            goto label_142b0438f
        
        rdx = 0xffff
        
        if (rdi u>= *(arg1 + 0x28))
            *arg2 = 0xf
            goto label_142b0438f
        
        rbx_1 = zx.d(*rsi)
        rsi = &rsi[1]
        
        if (rbx_1 == 0xa || rbx_1 == 0xd)
            result = 0
            *(r15 + 0x5c) = 0
            *(r15 + 0x60) = 0
        label_142b0413b:
            *(r15 + 0x70) = 0
            
            if (*(r15 + 0x60) != 0)
                if (rsi u>= r12)
                    *(*(arg1 + 8) + 0x41) = rbx_1.b
                    result = *(arg1 + 8)
                    *(result + 0x40) = 1
                    *(arg1 + 0x20) = rdi
                    *(arg1 + 0x10) = rsi
                    return result
                
            label_142b04154:
                char result_1 = *rsi
                result = zx.q(rbx_1 - 0x21)
                int32_t r8_2
                r8_2.b = result_1 - 0x21 u<= 0x5d
                
                if (result.b u<= 0x5d && result_1 - 0x21 u<= 0x5d)
                    rsi = &rsi[1]
                    int64_t rcx_3 = sx.q(*(sx.q(*(r15 + 0x60)) + r15 + 0x5c))
                    char arg_8
                    void* rax_7
                    int32_t r8_3
                    char result_2
                    
                    if (rcx_3.d s< 0x20)
                        rax_7 = *(r15 + (rcx_3 << 3))
                        r8_3 = 2
                        arg_8 = rbx_1.b
                        result_2 = result_1
                    else
                        rax_7 = *(r15 + 0x18)
                        rcx_3.b += 0x60
                        arg_8 = rcx_3.b
                        r8_3 = 3
                        result_2 = rbx_1.b
                        char result_3 = result_1
                    result = sub_142afc870(rax_7, &arg_8, r8_3, 0)
                    rdx = result.d
                    rbx_1 = rbx_1 << 8 | zx.d(result_1)
                else if (r8_2 == 0)
                    if (result_1 u< 0x20)
                        result = zx.q(1 << result_1)
                    
                    if (result_1 u>= 0x20 || (result.d & 0x800c000) == 0)
                        result = zx.q(result_1)
                        rsi = &rsi[1]
                        rbx_1 = (rbx_1 | 0x100) << 8 | result.d
                
                if (*(r15 + 0x60) s>= 2)
                    result = zx.q(*(r15 + 0x61))
                    *(r15 + 0x60) = result.b
                
                goto label_142b0421b
            
            if (rbx_1 u<= 0x7f)
                rdx = rbx_1
            label_142b0421b:
                
                if (rdx u< 0xfffe)
                    int64_t r8_4 = *(arg1 + 0x30)
                    
                    if (r8_4 != 0)
                        int32_t rax_8
                        rax_8.b = rbx_1 u> 0xff
                        result = (rdi - *(arg1 + 0x20)) s>> 1
                        *(r8_4 + (result << 2)) = rsi.d - (rax_8 + 1) - *(arg1 + 0x10)
                    
                    *rdi = rdx.w
                    rdi = &rdi[1]
                    continue
                else if (rdx u> 0xffff)
                    result.w = ((rdx - 0x10000) u>> 0xa).w - 0x2800
                    *rdi = result.w
                    int64_t r8_5 = *(arg1 + 0x30)
                    
                    if (r8_5 != 0)
                        int32_t rax_13
                        rax_13.b = rbx_1 u> 0xff
                        result = (rdi - *(arg1 + 0x20)) s>> 1
                        *(r8_5 + (result << 2)) = rsi.d - (rax_13 + 1) - *(arg1 + 0x10)
                    
                    rdi = &rdi[1]
                    int32_t rdx_3
                    
                    if (rdi u>= *(arg1 + 0x28))
                        void* rcx_16 = *(arg1 + 8)
                        rdx_3.w = (rdx - 0x10000).w & 0x3ff
                        rdx_3.w -= 0x2400
                        *(rcx_16 + (sx.q(*(rcx_16 + 0x5d)) << 1) + 0x90) = rdx_3.w
                        result = *(arg1 + 8)
                        *(result + 0x5d) += 1
                        continue
                    else
                        rdx_3.w = (rdx - 0x10000).w & 0x3ff
                        rdx_3.w -= 0x2400
                        *rdi = rdx_3.w
                        int64_t rdx_4 = *(arg1 + 0x30)
                        
                        if (rdx_4 != 0)
                            int32_t rax_17
                            rax_17.b = rbx_1 u> 0xff
                            result = (rdi - *(arg1 + 0x20)) s>> 1
                            *(rdx_4 + (result << 2)) = rsi.d - (rax_17 + 1) - *(arg1 + 0x10)
                        
                        rdi = &rdi[1]
                        continue
        else
            result = zx.q(rbx_1 - 0xe)
            
            if (rbx_1 != 0xe)
                int32_t temp3_1 = result.d
                result = zx.q(result.d - 1)
                
                if (temp3_1 == 1)
                    *(r15 + 0x60) = 0
                    
                    if (*(r15 + 0x70) == 0)
                        continue
                    
                    *(r15 + 0x70) = 0
                    *arg2 = 0x12
                    *(*(arg1 + 8) + 0x11c) = 2
                    *(*(arg1 + 8) + 0x41) = 0xf
                    result = *(arg1 + 8)
                    *(result + 0x40) = 1
                    *(arg1 + 0x20) = rdi
                    *(arg1 + 0x10) = rsi
                    return result
                else if (result.d == 0xc)
                    rsi -= 1
                    arg_18 = rsi
                label_142b0400c:
                    void* rcx = *(arg1 + 8)
                    char rbx_2 = rsi.b
                    char r14_1 = *(rcx + 0x40)
                    result = sub_142b04a80(rcx, &arg_18, r12, 3, arg2)
                    rsi = arg_18
                    
                    if (*(r15 + 0x68) != 0)
                    label_142b0407a:
                        
                        if (*arg2 s<= 0)
                            continue
                    else if (*arg2 s<= 0)
                        if (*(r15 + 0x70) != 0)
                            *arg2 = 0x12
                            *(*(arg1 + 8) + 0x11c) = 2
                            result = *(arg1 + 8)
                            *(result + 0x40) = rsi.b - rbx_2 + r14_1
                        
                        goto label_142b0407a
                    
                    *(arg1 + 0x20) = rdi
                    *(arg1 + 0x10) = rsi
                    *(r15 + 0x70) = 0
                    break
                
                goto label_142b0413b
            
            if (*(r15 + 0x5d) == 0)
                *(r15 + 0x70) = 0
            else
                *(r15 + 0x60) = 1
                *(r15 + 0x70) = 1
                continue
        
        void* rcx_17 = *(arg1 + 8)
        
        if (rbx_1 u<= 0xff)
            *(rcx_17 + 0x41) = rbx_1.b
            *(rcx_17 + 0x40) = 1
        else
            *(rcx_17 + 0x42) = rbx_1.b
            *(rcx_17 + 0x41) = (rbx_1 u>> 8).b
            *(rcx_17 + 0x40) = 2
        
        result = 0xc
        
        if (rdx == 0xfffe)
            result = 0xa
        
        *arg2 = result.d
        *(arg1 + 0x20) = rdi
        *(arg1 + 0x10) = rsi
        break
else
    if (rsi u< r12)
        if (rdi u>= *(arg1 + 0x28))
            goto label_142b04088
        
        rbx_1 = zx.d(*(result + 0x41))
        rdx = 0xffff
        *(result + 0x40) = 0
        goto label_142b04154
    
label_142b0438f:
    *(arg1 + 0x20) = rdi
    *(arg1 + 0x10) = rsi
return result
