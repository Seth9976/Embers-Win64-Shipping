// 函数: sub_142c46cc0
// 地址: 0x142c46cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax

if (arg1 != 0 && arg2 != 0 && arg3 != 0 && *arg2 != 0)
    rax = strstr(arg1, arg4)
    
    if (rax != 0)
        int64_t rax_1 = -1
        
        do
            rax_1 += 1
        while (arg4[rax_1] != 0)
        
        void* rdi_2 = &rax[rax_1]
        int32_t rbx_1 = 0
        char arg_8
        char* rsi_1 = &arg_8 - rdi_2
        int64_t r14_2 = neg.q(rdi_2)
        
        do
            uint32_t rcx = zx.d(*rdi_2)
            
            if (rcx.b - 0x61 u> 0x19 && rcx.b - 0x41 u> 0x19 && (rcx - 0x30).b u> 9)
                break
            
            *(rsi_1 + rdi_2) = arg8()
            rbx_1 += 1
            rdi_2 += 1
        while (r14_2 + rdi_2 s< 4)
        
        if (rbx_1 != 0)
            if (rbx_1 s< 4)
                __builtin_memset(&(&arg_8)[sx.q(rbx_1)], 0x20, sx.q(4 - rbx_1))
            
            int32_t rdx_6 = ((zx.d(arg5) | sx.d(arg_8) << 8) << 8 | zx.d(arg6)) << 8 | zx.d(arg7)
            *arg3 = rdx_6
            
            if ((rdx_6 & 0xdfdfdfdf) == 0x44464c54)
                *arg3 = rdx_6 ^ 0x20202020
            
            *arg2 = 1
            int32_t rax_13
            rax_13.b = 0
            return rax_13

rax.b = 1
return rax
