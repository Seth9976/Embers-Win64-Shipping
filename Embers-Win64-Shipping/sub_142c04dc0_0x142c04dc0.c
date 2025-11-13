// 函数: sub_142c04dc0
// 地址: 0x142c04dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 2).b != 0 && sub_142bfb250(arg1, arg2, 0, arg3).b != 0)
    result = zx.d(*arg1)
    
    if (zx.w(result.b) * 0x100 != neg.w(zx.w(result.w:1.b)))
        int128_t* const r11_1 = &data_14369a5d0
        uint32_t rcx_3 = zx.d(arg1[1])
        int128_t* const r9_2 = &data_14369a5d0
        uint32_t rdi_2 = zx.d(*arg1) << 8
        uint32_t rdi_3 = rdi_2 + rcx_3
        
        if (rdi_2 != neg.d(rcx_3))
            r9_2 = &arg1[2]
        
        if (zx.w(*r9_2) * 0x100 == neg.w(zx.w(*(r9_2 + 1))))
            int32_t rcx_5 = 1
            
            if ((zx.d(result.b) << 8) + zx.d(result.w:1.b) u<= 1)
            label_142c04f1c:
                uint64_t rdx_9 = zx.q(zx.d(result.w:1.b) - 1 + (zx.d(result.b) << 8))
                
                if (rdx_9.d u< rdi_3)
                    r11_1 = &arg1[2 + (rdx_9 << 1) + zx.q(rdx_9.d)]
                
                if (sub_142bf7510(arg2, r11_1 + 3, 2).b == 0)
                    result.b = 0
                else
                    void* rax = sub_142c06360(arg1)
                    
                    if ((zx.d(*rax) << 8) + zx.d(*(rax + 1)) != arg2[0xc])
                        result.b = 0
                    else
                        result.b = 1
            else
                while (true)
                    uint64_t rdx_4 = zx.q(rcx_5 - 1)
                    int128_t* const rsi_1
                    
                    if (rdx_4.d u< rdi_3)
                        rsi_1 = &arg1[2 + (rdx_4 << 1) + zx.q(rdx_4.d)]
                    else
                        rsi_1 = &data_14369a5d0
                    
                    void* r9_3
                    
                    if (rcx_5 u< rdi_3)
                        r9_3 = &arg1[2 + zx.q(rcx_5) * 3]
                    else
                        r9_3 = &data_14369a5d0
                    
                    if (zx.w(*rsi_1) * 0x100 + zx.w(*(rsi_1 + 1))
                            u>= zx.w(*r9_3) * 0x100 + zx.w(*(r9_3 + 1)))
                        break
                    
                    rcx_5 += 1
                    
                    if (rcx_5 u>= (zx.d(result.b) << 8) + zx.d(result.w:1.b))
                        goto label_142c04f1c
                
                result.b = 0
            
            return result

result.b = 0
return result
