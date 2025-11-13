// 函数: sub_141a5adc0
// 地址: 0x141a5adc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = *arg1
uint32_t result

if (r11 == 2)
label_141a5adfa:
    char r9_2 = *arg2
    
    if (r9_2 == 2)
    label_141a5ae40:
        
        if (arg1[8] == 2 || r9_2 == 2)
            result.b = 1
        else
            result.b = 0
        
        int64_t rdi
        
        if (r11 == 2 || arg2[8] == 2)
            rdi.b = 1
        else
            rdi.b = 0
        
        uint64_t rbx
        rbx.b = 1
        char r10_2 = 1
        
        if (result.b == 0)
            int32_t rax = *(arg2 + 4)
            int32_t rcx = *(arg1 + 0xc)
            rbx.b = rcx s> rax
            rax.b = rcx s>= rax
            
            if (arg1[8] != 1 || r9_2 != 1)
                rcx.b = 0
            else
                rcx = 1
            
            rbx = zx.q(rbx.b)
            
            if (rcx.b != 0)
                rbx = zx.q(rax.b)
        
        if (rdi.b == 0)
            uint32_t rcx_1 = *(arg1 + 4)
            int32_t rax_1 = *(arg2 + 0xc)
            char* r8
            r8.b = rcx_1 s< rax_1
            rax_1.b = rcx_1 s<= rax_1
            
            if (r11 != 1 || arg2[8] != r11)
                rcx_1.b = 0
            else
                rcx_1 = zx.d(r11)
            
            r10_2 = r8.b
            
            if (rcx_1.b != 0)
                r10_2 = rax_1.b
        
        if (rbx.b != 0 && r10_2 != 0)
            result.b = 1
            return result
    else
        result = zx.d(arg2[8])
        
        if (result.b == 2)
            goto label_141a5ae40
        
        int32_t r10_1 = *(arg2 + 0xc)
        int32_t temp1_1 = *(arg2 + 4)
        
        if (temp1_1 s<= r10_1)
            if (temp1_1 != r10_1)
                goto label_141a5ae40
            
            if (r9_2 != 0 && result.b != 0)
                goto label_141a5ae40
else
    result = zx.d(arg1[8])
    
    if (result.b == 2)
        goto label_141a5adfa
    
    int32_t r9_1 = *(arg1 + 0xc)
    int32_t temp0_1 = *(arg1 + 4)
    
    if (temp0_1 s<= r9_1)
        if (temp0_1 != r9_1)
            goto label_141a5adfa
        
        if (r11 != 0 && result.b != 0)
            goto label_141a5adfa

result.b = 0
return result
