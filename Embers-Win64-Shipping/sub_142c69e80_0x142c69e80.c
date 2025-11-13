// 函数: sub_142c69e80
// 地址: 0x142c69e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg1[3] u<= 0)
    return 

do
    int64_t* rax = arg1[1]
    
    if (rax != 0)
        if (arg1[3] == 0)
            break
        
        int64_t rcx = rax[2]
        
        if (rax != *arg1)
            *(rax[1] + 0x10) = rcx
            void* rdx_1 = rax[2]
            int64_t rcx_2 = rax[1]
            
            if (rdx_1 != 0)
                *(rdx_1 + 8) = rcx_2
            else
                arg1[1] = rcx_2
        else
            *arg1 = rcx
            
            if (rcx != 0)
                *(rax[2] + 8) = 0
            else
                arg1[1] = 0
        
        int64_t rdx_2 = *rax
        __builtin_memset(rax, 0, 0x18)
        arg1[3] -= 1
        rax = arg1[2]
        
        if (rax != 0)
            rax(arg2, rdx_2)
while (arg1[3] u> 0)
