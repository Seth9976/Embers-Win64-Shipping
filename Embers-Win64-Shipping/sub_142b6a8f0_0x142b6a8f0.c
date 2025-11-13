// 函数: sub_142b6a8f0
// 地址: 0x142b6a8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2
int32_t r10 = arg1

if (*arg6 s<= 0)
    if (arg4 s<= 0 || (arg3.b & 3) != 0 || arg1 + 1 u> 2 || arg2 + 1 u> 3)
        *arg6 = 1
        return 0
    
    if (arg4 s>= 0x10 && *arg3 == 0x54726933)
        uint32_t r8 = zx.d(arg3[1].w)
        int32_t rcx_1 = r8 & 7
        int32_t rax_6 = r8 u>> 6 & 3
        
        if (rax_6 u<= 1 && rcx_1 u<= 2 && (r8.b & 0x38) == 0)
            if (r10 s< 0)
                r10 = rax_6
            
            if (rbx s< 0)
                rbx = rcx_1
            
            if (r10 == rax_6 && rbx == rcx_1)
                uint64_t rcx_2 = zx.q(*(arg3 + 6))
                int64_t var_38
                __builtin_memset(&var_38, 0, 0x30)
                uint64_t rdx_3 = zx.q((r8 & 0xf000) << 4) | zx.q(arg3[2].w)
                int64_t var_18
                var_18:6.w = *(arg3 + 0xa)
                int32_t rsi = ((rcx_2 << 1) + 0x10).d
                uint32_t rax_11 = zx.d(*(arg3 + 0xe)) << 9
                int64_t var_20
                var_20.d = rax_11
                int64_t var_28
                var_28.d = rcx_2.d
                var_28:4.d = rdx_3.d
                int64_t var_10
                var_10.d = (r8 & 0xf00) << 8 | zx.d(arg3[3].w)
                var_20:4.w = ((rax_11 + 0xfff) s>> 0xc).w
                var_20:6.b = r10.b
                var_20:7.b = rbx.b
                int32_t rsi_1
                
                if (rbx == 0)
                    rsi_1 = rsi + (rdx_3 << 1).d
                else if (rbx != 1)
                    rsi_1 = rsi + rdx_3.d
                else
                    rsi_1 = rsi + (rdx_3 << 2).d
                
                if (arg4 s< rsi_1)
                    *arg6 = 3
                else
                    void* result = sub_142a7dd00(0x30)
                    
                    if (result != 0)
                        *result = var_38.o
                        *(result + 0x10) = var_28.o
                        *(result + 0x20) = 0
                        *result = &arg3[4]
                        void* r8_4 = &arg3[4] + (sx.q(*(result + 0x10)) << 1)
                        int32_t rcx_4 = *(result + 0x28)
                        int32_t rax_16 = *(result + 0x14)
                        
                        if (rcx_4 s>= rax_16)
                            rcx_4 = rax_16 - 2
                        
                        uint32_t rcx_5
                        
                        if (rbx == 0)
                            *(result + 8) = r8_4
                            rcx_5 = zx.d(*(r8_4 + (sx.q(rcx_4) << 1)))
                        label_142b6aaee:
                            *(result + 0x2c) = rcx_5
                            
                            if (arg5 != 0)
                                *arg5 = rsi_1
                            
                            return result
                        
                        if (rbx == 1)
                            *(result + 8) = r8_4
                            rcx_5 = *(r8_4 + (sx.q(rcx_4) << 2))
                            goto label_142b6aaee
                        
                        if (rbx == 2)
                            *(result + 8) = r8_4
                            rcx_5 = zx.d(*(sx.q(rcx_4) + r8_4))
                            goto label_142b6aaee
                        
                        *arg6 = 3
                    else
                        *arg6 = 7
                
                return nullptr
    
    *arg6 = 3

return 0
