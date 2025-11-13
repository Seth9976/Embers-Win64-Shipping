// 函数: sub_140ebfa30
// 地址: 0x140ebfa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t* rax = sub_140d3c6e0(arg1 + 0x38)

if (rax != 0)
    int64_t r9_1 = *rax
    
    if ((*(r9_1 + 0x260))(rax, arg4, arg5, r9_1) != 0)
        int32_t r9_2 = -1
        int32_t rdx = rbx.d
        
        if (rbx.d s>= 0)
            int64_t r10_1 = *(arg1 + 0x50)
            int64_t r8 = rbx
            int64_t* rcx_4 = (rbx << 4) + r10_1
            int64_t temp0_1
            
            do
                if (*(*rcx_4 + 0x88) == 3)
                    if (rdx s<= 0)
                        r9_2 = rdx
                    else
                        int64_t rcx_5 = sx.q(rdx)
                        void* r8_1 = *((rcx_5 << 4) + r10_1 - 0x10)
                        char rax_5 = *(r8_1 + 0x88)
                        
                        if (rax_5 == 5 || rax_5 == 8)
                            r9_2 = rdx - 1
                            
                            if (*(*(r10_1 + rcx_5 * 0x10) + 0x80) != *(r8_1 + 0x80))
                                r9_2 = rdx
                        else
                            r9_2 = rdx
                    
                    break
                
                rdx -= 1
                rcx_4 -= 0x10
                temp0_1 = r8
                r8 -= 1
            while (temp0_1 - 1 s>= 0)
        
        int32_t rdx_1 = (rbx + 1).d
        *arg3 = *(arg1 + 0x58)
        int64_t rax_8 = sx.q(*(arg1 + 0x58))
        
        if (rdx_1 s< rax_8.d)
            int64_t r11_1 = *(arg1 + 0x50)
            int64_t r8_2 = sx.q(rdx_1)
            int64_t* rcx_10 = (r8_2 << 4) + r11_1
            
            while (*(*rcx_10 + 0x88) != 3)
                rdx_1 += 1
                r8_2 += 1
                rcx_10 = &rcx_10[2]
                
                if (r8_2 s>= rax_8)
                    return zx.q(r9_2)
            
            if (rdx_1 s> 0)
                int64_t rcx_11 = sx.q(rdx_1)
                void* r8_3 = *((rcx_11 << 4) + r11_1 - 0x10)
                char rax_13 = *(r8_3 + 0x88)
                
                if ((rax_13 == 5 || rax_13 == 8)
                        && *(*(r11_1 + rcx_11 * 0x10) + 0x80) == *(r8_3 + 0x80))
                    *arg3 = rdx_1 - 1
                    return zx.q(r9_2)
            
            *arg3 = rdx_1
        
        return zx.q(r9_2)

return 0xffffffff
