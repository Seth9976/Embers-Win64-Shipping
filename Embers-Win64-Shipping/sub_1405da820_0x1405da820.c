// 函数: sub_1405da820
// 地址: 0x1405da820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = *arg1
uint32_t result

if (r11 == 2)
label_1405da85a:
    char r9_2 = *arg2
    
    if (r9_2 == 2)
    label_1405da8a0:
        
        if (arg1[0x10] == 2 || r9_2 == 2)
            result.b = 1
        else
            result.b = 0
        
        int64_t rdi
        
        if (r11 == 2 || arg2[0x10] == 2)
            rdi.b = 1
        else
            rdi.b = 0
        
        uint64_t rbx
        rbx.b = 1
        char r10_2 = 1
        
        if (result.b == 0)
            int64_t rax = *(arg2 + 8)
            int64_t rcx = *(arg1 + 0x18)
            rbx.b = rcx s> rax
            rax.b = rcx s>= rax
            
            if (arg1[0x10] != 1 || r9_2 != 1)
                rcx.b = 0
            else
                rcx = 1
            
            rbx = zx.q(rbx.b)
            
            if (rcx.b != 0)
                rbx = zx.q(rax.b)
        
        if (rdi.b == 0)
            uint64_t rcx_1 = *(arg1 + 8)
            int64_t rax_1 = *(arg2 + 0x18)
            char* r8
            r8.b = rcx_1 s< rax_1
            rax_1.b = rcx_1 s<= rax_1
            
            if (r11 != 1 || arg2[0x10] != r11)
                rcx_1.b = 0
            else
                rcx_1 = zx.q(r11)
            
            r10_2 = r8.b
            
            if (rcx_1.b != 0)
                r10_2 = rax_1.b
        
        if (rbx.b != 0 && r10_2 != 0)
            result.b = 1
            return result
    else
        result = zx.d(arg2[0x10])
        
        if (result.b == 2)
            goto label_1405da8a0
        
        int64_t r10_1 = *(arg2 + 0x18)
        int64_t temp1_1 = *(arg2 + 8)
        
        if (temp1_1 s<= r10_1)
            if (temp1_1 != r10_1)
                goto label_1405da8a0
            
            if (r9_2 != 0 && result.b != 0)
                goto label_1405da8a0
else
    result = zx.d(arg1[0x10])
    
    if (result.b == 2)
        goto label_1405da85a
    
    int64_t r9_1 = *(arg1 + 0x18)
    int64_t temp0_1 = *(arg1 + 8)
    
    if (temp0_1 s<= r9_1)
        if (temp0_1 != r9_1)
            goto label_1405da85a
        
        if (r11 != 0 && result.b != 0)
            goto label_1405da85a

result.b = 0
return result
