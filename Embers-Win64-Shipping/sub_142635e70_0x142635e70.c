// 函数: sub_142635e70
// 地址: 0x142635e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = *arg1
int32_t rsi = 0
int32_t var_64 = r14
int32_t rcx = arg1[1]
int32_t r9 = arg2 * 2
int32_t var_5c = r9
int32_t var_58 = rcx
int32_t var_68 = 0

if (rcx s<= 0)
    return arg4

do
    int32_t r15_1 = 0
    
    if (r14 s> 0)
        int32_t rax_2 = rsi * r14
        int32_t var_60_1 = rax_2
        
        do
            int32_t rdx = *(*(arg1 + 0x40) + (sx.q(rax_2 + r15_1) << 2))
            int32_t rax_6 = rdx & 0xffffff
            uint64_t rdi_1 = zx.q(rax_6)
            uint64_t rax_7 = zx.q((rdx u>> 0x18) + rax_6)
            uint64_t var_48_1 = rax_7
            
            if (rdi_1 u< rax_7)
                int64_t rcx_2 = arg4
                uint64_t r12_2 = rdi_1 * 0xc
                
                do
                    uint32_t rdx_14 = zx.d(*(arg3 + (rdi_1 << 1)))
                    uint32_t r8 = rdx_14
                    
                    if (rdx_14 s> r9)
                        int64_t rbp_1 = *(arg1 + 0x48)
                        uint32_t r10_1 = rdx_14 * 2
                        int32_t r9_1 = *(r12_2 + rbp_1 + 4)
                        uint32_t r11_1 = zx.d(r9_1.b)
                        uint32_t rax_15
                        
                        if (r11_1 == 0xff)
                            rax_15 = rdx_14 + r10_1
                        else
                            int64_t r14_1 = *(arg1 + 0x40)
                            uint64_t rcx_7 = zx.q((*(r14_1 + (sx.q(var_60_1 + r15_1 - 1) << 2))
                                & 0xffffff) + r11_1)
                            uint32_t r11_3 = zx.d(*(arg3 + (rcx_7 << 1))) + rdx_14
                            uint32_t rdx_4 = zx.d(*(rbp_1 + rcx_7 * 0xc + 5))
                            
                            if (rdx_4 == 0xff)
                                r14 = var_64
                                rsi = var_68
                                rax_15 = r11_3 + r8
                            else
                                rsi = var_68
                                r14 = var_64
                                rax_15 = r11_3 + zx.d(*(arg3 + (zx.q((
                                    *(r14_1 + (sx.q((var_68 + 1) * var_64 + r15_1 - 1) << 2))
                                    & 0xffffff) + rdx_4) << 1)))
                        
                        uint32_t r11_4 = zx.d((r9_1 u>> 8).b)
                        uint32_t rax_21
                        
                        if (r11_4 == 0xff)
                            rax_21 = rax_15 + r10_1
                        else
                            int32_t rsi_3 = (rsi + 1) * r14
                            int64_t r14_2 = *(arg1 + 0x40)
                            uint64_t rcx_18 =
                                zx.q((*(r14_2 + (sx.q(rsi_3 + r15_1) << 2)) & 0xffffff) + r11_4)
                            uint32_t r11_6 = zx.d(*(arg3 + (rcx_18 << 1))) + rax_15
                            uint32_t rdx_6 = zx.d((*(rbp_1 + rcx_18 * 0xc + 6)).b)
                            
                            if (rdx_6 == 0xff)
                                rax_21 = r11_6 + r8
                            else
                                rax_21 = r11_6 + zx.d(*(arg3 + (zx.q((
                                    *(r14_2 + (sx.q(r15_1 + rsi_3) << 2) + 4) & 0xffffff) + rdx_6)
                                    << 1)))
                        
                        uint32_t r11_7 = zx.d((r9_1 u>> 0x10).b)
                        uint32_t rax_28
                        
                        if (r11_7 == 0xff)
                            rax_28 = rax_21 + r10_1
                        else
                            int64_t r14_3 = *(arg1 + 0x40)
                            uint64_t rcx_29 = zx.q((*(r14_3 + (sx.q(var_60_1 + r15_1 + 1) << 2))
                                & 0xffffff) + r11_7)
                            uint32_t r11_9 = zx.d(*(arg3 + (rcx_29 << 1))) + rax_21
                            uint32_t rdx_8 = zx.d(*(rbp_1 + rcx_29 * 0xc + 7))
                            
                            if (rdx_8 == 0xff)
                                rax_28 = r11_9 + r8
                            else
                                rax_28 = r11_9 + zx.d(*(arg3 + (zx.q((
                                    *(r14_3 + (sx.q((var_68 - 1) * var_64 + r15_1 + 1) << 2))
                                    & 0xffffff) + rdx_8) << 1)))
                        
                        rsi = var_68
                        r14 = var_64
                        uint32_t r9_2 = r9_1 u>> 0x18
                        uint32_t rax_34
                        
                        if (r9_2 == 0xff)
                            rax_34 = rax_28 + r10_1
                        else
                            int64_t r11_10 = *(arg1 + 0x40)
                            int32_t r10_3 = (rsi - 1) * r14
                            uint64_t rcx_38 =
                                zx.q((*(r11_10 + (sx.q(r10_3 + r15_1) << 2)) & 0xffffff) + r9_2)
                            uint32_t rdx_11 = zx.d((*(rbp_1 + rcx_38 * 0xc + 4)).b)
                            
                            if (rdx_11 != 0xff)
                                r8 = zx.d(*(arg3 + (zx.q((*(r11_10 + (sx.q(r10_3 + r15_1) << 2) - 4)
                                    & 0xffffff) + rdx_11) << 1)))
                            
                            rax_34 = zx.d(*(arg3 + (rcx_38 << 1))) + rax_28 + r8
                        
                        r9 = var_5c
                        rcx_2 = arg4
                        rdx_14 = (rax_34 + 5) s/ 9
                        rax_7 = var_48_1
                    
                    *(rcx_2 + (rdi_1 << 1)) = rdx_14.w
                    r12_2 += 0xc
                    rdi_1 += 1
                while (rdi_1 s< rax_7)
            
            rax_2 = var_60_1
            r15_1 += 1
        while (r15_1 s< r14)
        
        rcx = var_58
    
    rsi += 1
    var_68 = rsi
while (rsi s< rcx)

return arg4
