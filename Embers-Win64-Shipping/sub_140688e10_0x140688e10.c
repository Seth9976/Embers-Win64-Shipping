// 函数: sub_140688e10
// 地址: 0x140688e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg3
char* r12_1
bool cond:0_1

if (not(test_bit(arg6, 8)))
    if (test_bit(arg6, 0xb))
        r12_1 = arg1
        
        if (arg1 == arg2)
            goto label_140688e8c
        
        while (true)
            cond:0_1 = rbx == arg4
            
            if (rbx == arg4)
                break
            
            char rdi_1 = *rbx
            char rax_3 = sub_1406b15f0(arg5, *r12_1)
            r12_1 = &r12_1[1]
            rbx = &rbx[1]
            
            if (rax_3 != sub_1406b15f0(arg5, rdi_1))
                return arg1
            
            if (r12_1 == arg2)
                if (rbx == arg4)
                    return r12_1
                
                return arg1
        
        goto label_140688e8f
    
    char* rdx_2 = arg1
    bool cond:1_1
    
    if (arg1 == arg2)
    label_140688f0f:
        cond:1_1 = rbx == arg4
    else
        while (true)
            cond:1_1 = rbx == arg4
            
            if (rbx == arg4)
                break
            
            char rcx_4 = *rdx_2
            rdx_2 = &rdx_2[1]
            char rax_5 = *rbx
            rbx = &rbx[1]
            
            if (rcx_4 != rax_5)
                return arg1
            
            if (rdx_2 == arg2)
                goto label_140688f0f
    
    if (cond:1_1)
        return rdx_2
else
    r12_1 = arg1
    
    if (arg1 != arg2)
        while (true)
            cond:0_1 = rbx == arg4
            
            if (rbx == arg4)
                break
            
            char rax_1 = std::ctype<char>::tolower(arg5[1])
            r12_1 = &r12_1[1]
            rbx = &rbx[1]
            
            if (rax_1 != std::ctype<char>::tolower(arg5[1]))
                return arg1
            
            if (r12_1 == arg2)
                goto label_140688e8c
        
        goto label_140688e8f
    
label_140688e8c:
    cond:0_1 = rbx == arg4
label_140688e8f:
    
    if (cond:0_1)
        return r12_1
return arg1
