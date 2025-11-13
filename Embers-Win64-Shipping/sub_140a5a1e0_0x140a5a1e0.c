// 函数: sub_140a5a1e0
// 地址: 0x140a5a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u<= 0x7ff0 && arg4 u<= 0x10)
    uint32_t dwTlsIndex = data_143db71b8
    
    if (dwTlsIndex != 0)
        int64_t rax_1 = TlsGetValue(dwTlsIndex)
        
        if (rax_1 != 0 && (arg2 == 0 || arg2.w != 0))
            uint64_t rbp_1 = 0
            uint64_t r14_1 = 0
            
            if (arg2 == 0)
            label_140a5a2d5:
                int64_t* rsi_1
                
                if (arg3 == 0)
                    rsi_1 = nullptr
                label_140a5a346:
                    
                    if (arg2 == 0)
                        return rsi_1
                    
                    uint64_t** rdx_3 = (zx.q(r14_1.d) << 5) + rax_1
                    int32_t rax_10 = rdx_3[1].d
                    
                    if (rax_10 u< 0x40 && rax_10 * rbp_1.d u< 0x10000)
                        goto label_140a5a37f
                    
                    if (rdx_3[2] == 0)
                        *(rdx_3 + 0x10) = *rdx_3
                        *rdx_3 = nullptr
                        rdx_3[1].d = 0
                    label_140a5a37f:
                        *arg2 = *rdx_3
                        arg2[1] = 0
                        rdx_3[1].d += 1
                        *rdx_3 = arg2
                    
                    return rsi_1
                
                int64_t* rcx_6 = (zx.q(*(((arg3 + 0xf) u>> 4) + &data_143db71d0)) << 5) + rax_1
                rsi_1 = *rcx_6
                
                if (rsi_1 != 0)
                label_140a5a31b:
                    rcx_6[1].d -= 1
                    *rcx_6 = *rsi_1
                    
                    if (arg2 == 0)
                        return rsi_1
                    
                    uint64_t r8 = zx.q(rbp_1.d)
                    
                    if (arg3 u<= r8)
                        r8 = arg3
                    
                    memcpy(rsi_1, arg2, r8.d)
                    goto label_140a5a346
                
                if (rcx_6[2] != 0)
                    *rcx_6 = *(rcx_6 + 0x10)
                    rcx_6[2] = 0
                    rcx_6[3].d = 0
                    rsi_1 = *rcx_6
                    
                    if (rsi_1 != 0)
                        goto label_140a5a31b
            else
                int16_t* rax_3 = arg2 & 0xffffffffffff0000
                rbp_1 = zx.q(*rax_3)
                r14_1 = zx.q(rax_3[1].b)
                
                if (*(rax_3 + 3) == 0xe3)
                    if (arg3 != 0 && arg3 u<= rbp_1 &&
                            (r14_1.d == 0 || arg3 u> zx.q((&data_143db7150)[zx.q(0x2d - r14_1.d)])))
                        return arg2
                    
                    uint64_t rax_6 = r14_1 << 5
                    
                    if (*(rax_6 + rax_1 + 0x10) == 0)
                        goto label_140a5a2d5
                    
                    int32_t rcx_2 = *(rax_6 + rax_1 + 8)
                    
                    if (rcx_2 u< 0x40 && rcx_2 * rbp_1.d u< 0x10000)
                        goto label_140a5a2d5

return sub_140a5a520(arg1, arg2, arg3, arg4)
