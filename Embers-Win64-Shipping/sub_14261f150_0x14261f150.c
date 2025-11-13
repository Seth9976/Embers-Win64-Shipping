// 函数: sub_14261f150
// 地址: 0x14261f150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r10 = arg7
int32_t result = arg2
char r11 = arg4
int32_t rdx = arg1
int32_t r8 = 0
char* var_40 = r10
int32_t var_58 = 0

if (result s> 0)
    do
        int32_t rbp_1 = 0
        
        if (rdx s> 0)
            int32_t rax_1 = rdx * r8
            int64_t rcx_1 = sx.q(rax_1) << 2
            int64_t var_38_1 = rcx_1
            
            do
                uint32_t rdi_1 = 0xffff
                int32_t rcx_2 = *(rcx_1 + *(arg5 + 0x40))
                int32_t rax_4 = rcx_2 & 0xffffff
                uint64_t r13_1 = zx.q(rax_4)
                char* r9_1 = zx.q((rcx_2 u>> 0x18) + rax_4) - 1
                
                if (r9_1 s>= r13_1)
                    int64_t r14_2 = r9_1 * 0xc
                    
                    do
                        char* rbx_1 = *(arg5 + 0x58)
                        int16_t* rcx_5 = *(arg5 + 0x48) + r14_2
                        
                        if (*(rbx_1 + r9_1) == 0)
                            r9_1[arg6] = 0
                        else if (zx.d(rcx_5[4].b) s>= arg3)
                            int32_t r10_1 = *(rcx_5 + 4)
                            int32_t rax_7 = 0
                            rdi_1 = zx.d(*rcx_5)
                            uint32_t r11_1 = zx.d(r10_1.b)
                            
                            if (r11_1 != 0xff)
                                rdx = arg1
                                r8 = var_58
                                
                                if (rbx_1[zx.q((*(*(arg5 + 0x40) + (sx.q(rax_1 + rbp_1) << 2) - 4)
                                        & 0xffffff) + r11_1)] != 0)
                                    rax_7 = 1
                            
                            uint32_t r11_2 = zx.d((r10_1 u>> 8).b)
                            
                            if (r11_2 != 0xff && rbx_1[zx.q((
                                    *(*(arg5 + 0x40) + (sx.q((r8 + 1) * rdx + rbp_1) << 2))
                                    & 0xffffff) + r11_2)] != 0)
                                rax_7 += 1
                            
                            uint32_t r11_3 = zx.d((r10_1 u>> 0x10).b)
                            
                            if (r11_3 != 0xff && *(zx.q((
                                    *(*(arg5 + 0x40) + (sx.q(rax_1 + rbp_1) << 2) + 4) & 0xffffff) + r11_3)
                                    + rbx_1) != 0)
                                rax_7 += 1
                            
                            uint32_t r10_2 = r10_1 u>> 0x18
                            
                            if (r10_2 != 0xff && *(zx.q((
                                    *(*(arg5 + 0x40) + (sx.q((var_58 - 1) * arg1 + rbp_1) << 2))
                                    & 0xffffff) + r10_2) + rbx_1) != 0)
                                rax_7 += 1
                            
                            rdx = arg1
                            r8 = var_58
                            r10 = var_40
                            r11 = arg4
                            
                            if (rax_7 != 4)
                                r9_1[arg6] = 0
                        else
                            r9_1[arg6] = 0
                            
                            if (zx.d(*rcx_5) s>= rdi_1)
                                *(r10 + r9_1) = 0xff
                            else
                                *(r10 + r9_1) = r11
                                uint32_t rdi_2 = zx.d(*rcx_5)
                                rdi_1 = rdi_2 - arg3
                                
                                if (rdi_2 - arg3 s< 0)
                                    rdi_1 = 0
                        
                        r9_1 -= 1
                        r14_2 -= 0xc
                    while (r9_1 s>= r13_1)
                
                rbp_1 += 1
                rcx_1 = var_38_1 + 4
                var_38_1 = rcx_1
            while (rbp_1 s< rdx)
            
            result = arg2
        
        r8 += 1
        var_58 = r8
    while (r8 s< result)

return result
