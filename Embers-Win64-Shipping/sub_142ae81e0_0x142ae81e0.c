// 函数: sub_142ae81e0
// 地址: 0x142ae81e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = arg6
int64_t rbx = arg3

if (*r10 s<= 0)
    if (arg5 s>= 0 && (arg4 != 0 || arg5 s<= arg4.d))
        int64_t rax = sx.q(*(arg1 + 0x78))
        
        if (arg2 s< 0)
            arg2 = 0
        else if (arg2 s> rax)
            arg2 = rax
        
        if (rbx s< 0)
            rbx = 0
        else if (rbx s> rax)
            rbx = rax
        
        if (arg2.d s> rbx.d)
            *r10 = 8
            return 0
        
        int64_t r11 = *(arg1 + 0x10)
        int64_t rax_2 = sx.q(arg2.d)
        int64_t rdi = *(arg1 + 0x48)
        
        if (rax_2 s< r11)
            int32_t i = 0
            char* rcx = rax_2 + rdi
            
            do
                char rax_3 = *rcx
                
                if (rax_3 s>= 0)
                    break
                
                if (rax_3 + 0x3e u<= 0x32)
                    break
                
                if (&rcx[neg.q(rdi)] == 0)
                    break
                
                arg2 = zx.q(arg2.d - 1)
                rcx -= 1
                i += 1
            while (i s< 3)
        
        int64_t rax_5 = sx.q(rbx.d)
        
        if (rax_5 s< r11)
            int32_t i_1 = 0
            char* rcx_1 = rax_5 + rdi
            
            do
                char rax_6 = *rcx_1
                
                if (rax_6 s>= 0)
                    break
                
                if (rax_6 + 0x3e u<= 0x32)
                    break
                
                if (&rcx_1[neg.q(rdi)] == 0)
                    break
                
                rbx = zx.q(rbx.d - 1)
                rcx_1 -= 1
                i_1 += 1
            while (i_1 s< 3)
        
        arg6.d = 0
        sub_142aeaf50(arg4, arg5, &arg6, sx.q(arg2.d) + rdi, rbx.d - arg2.d, r10)
        sub_142ae99d0(arg1, sx.q(rbx.d), 1)
        return zx.q(arg6.d)
    
    *r10 = 1

return 0
