// 函数: sub_14261eee0
// 地址: 0x14261eee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg6
int32_t r11 = arg3
int64_t r14 = arg7
int32_t result = arg2
int32_t r8 = 0
int32_t var_50 = arg4
int64_t var_38 = rbx
int64_t var_30 = r14
int32_t var_58 = 0

if (arg2 s> 0)
    do
        int32_t rbp_1 = 0
        
        if (arg1 s> 0)
            int32_t rax_1 = arg1 * r8
            int64_t rcx_1 = sx.q(rax_1) << 2
            int64_t var_40_1 = rcx_1
            
            do
                int32_t rcx_2 = *(rcx_1 + *(arg5 + 0x40))
                uint64_t rax_4 = zx.q(rcx_2) & 0xffffff
                uint64_t i = zx.q(rax_4.d + (rcx_2 u>> 0x18))
                
                if (zx.q(rax_4.d) u< i)
                    uint64_t rsi_2 = rax_4 * 0xc
                    char* r10_1 = rax_4 + rbx
                    int64_t r14_2 = neg.q(rbx)
                    
                    do
                        int64_t rbx_1 = *(arg5 + 0x58)
                        
                        if (*(r14_2 + rbx_1 + r10_1) == 0)
                            *r10_1 = 0
                        else
                            int64_t rcx_4 = *(arg5 + 0x48)
                            
                            if (zx.d(*(rcx_4 + rsi_2 + 8)) s>= r11)
                                int32_t r9 = *(rcx_4 + rsi_2 + 4)
                                int32_t rax_7 = 0
                                uint32_t r11_1 = zx.d(r9.b)
                                
                                if (r11_1 != 0xff)
                                    r8 = var_58
                                    
                                    if (*(zx.q((*(*(arg5 + 0x40) + (sx.q(rax_1 + rbp_1) << 2) - 4)
                                            & 0xffffff) + r11_1) + rbx_1) != 0)
                                        rax_7 = 1
                                
                                uint32_t r11_2 = zx.d((r9 u>> 8).b)
                                
                                if (r11_2 != 0xff && *(zx.q((
                                        *(*(arg5 + 0x40) + (sx.q((r8 + 1) * arg1 + rbp_1) << 2))
                                        & 0xffffff) + r11_2) + rbx_1) != 0)
                                    rax_7 += 1
                                
                                uint32_t r11_3 = zx.d((r9 u>> 0x10).b)
                                
                                if (r11_3 != 0xff && *(zx.q((
                                        *(*(arg5 + 0x40) + (sx.q(rax_1 + rbp_1) << 2) + 4)
                                        & 0xffffff) + r11_3) + rbx_1) != 0)
                                    rax_7 += 1
                                
                                uint32_t r9_1 = r9 u>> 0x18
                                
                                if (r9_1 != 0xff && *(zx.q((
                                        *(*(arg5 + 0x40) + (sx.q((var_58 - 1) * arg1 + rbp_1) << 2))
                                        & 0xffffff) + r9_1) + rbx_1) != 0)
                                    rax_7 += 1
                                
                                if (rax_7 != 4)
                                    *r10_1 = 0
                            else
                                *r10_1 = 0
                                *(r14 - rbx + r10_1) = arg4.b
                        
                        r8 = var_58
                        r10_1 = &r10_1[1]
                        arg4 = var_50
                        rsi_2 += 0xc
                        r11 = arg3
                    while (&r10_1[r14_2] s< i)
                    
                    rbx = var_38
                    r14 = var_30
                
                rbp_1 += 1
                rcx_1 = var_40_1 + 4
                var_40_1 = rcx_1
            while (rbp_1 s< arg1)
            
            result = arg2
        
        r8 += 1
        var_58 = r8
    while (r8 s< result)

return result
