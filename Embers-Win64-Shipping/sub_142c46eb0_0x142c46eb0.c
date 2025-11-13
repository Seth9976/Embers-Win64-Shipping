// 函数: sub_142c46eb0
// 地址: 0x142c46eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if (arg2 == 0)
    result = arg6
    
    if (result != 0 && arg7 != arg2 && *result != arg2.d)
        *result = 0
    
    goto label_142c47012

char* rax = sub_1405e25d0(arg2)
void* rbx_1 = nullptr
char* r15 = nullptr

if (*rax != 0x78 || rax[1] != 0x2d)
    char i = rax[1]
    char* rax_1 = &rax[1]
    
    if (i == 0)
        rbx_1 = rax_1
    else
        do
            if (rax_1[-1] == 0x2d && rax_1[1] == 0x2d)
                if (i == 0x78)
                    r15 = rax_1
                    
                    if (rbx_1 != 0)
                        goto label_142c46f8f
                    
                    rbx_1 = &rax_1[-1]
                    goto label_142c46f6b
                
                if (rbx_1 == 0)
                    rbx_1 = &rax_1[-1]
            
            i = rax_1[1]
            rax_1 = &rax_1[1]
        while (i != 0)
        
    label_142c46f6b:
        
        if (rbx_1 == 0)
            rbx_1 = rax_1
else
    r15 = rax

label_142c46f8f:
char rax_2 = sub_142c46cc0(r15, arg3, arg4, "-hbsc", sub_142c45760)
result = sub_142c46cc0(r15, arg6, arg7, "-hbot", sub_142c45770)

if (result.b != 0 && arg6 != 0 && arg7 != 0 && *arg6 != 0)
    result = sub_142c46a40(rax, rbx_1, arg6, arg7, arg5)

if (rax_2 != 0)
label_142c47012:
    
    if (arg3 != 0 && arg4 != 0 && *arg3 != 0)
        return sub_142c45780(arg1, arg3, arg4)

return result
