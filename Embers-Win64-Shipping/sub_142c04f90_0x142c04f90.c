// 函数: sub_142c04f90
// 地址: 0x142c04f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 4).b != 0 && sub_142bfb320(arg1, arg2, 0, arg3).b != 0)
    result = *arg1
    
    if ((zx.d(result:1.b) << 0x10) + (zx.d(result:2.b) << 8) + (zx.d(result.b) << 0x18)
            != neg.d(zx.d(result:3.b)))
        int128_t* const r8 = &data_14369a5d0
        uint32_t r11_4 = (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(result.b) << 0x18)
        uint32_t rcx_11 = zx.d(arg1[3])
        uint32_t r11_5 = r11_4 + rcx_11
        
        if (r11_4 != neg.d(rcx_11))
            r8 = &arg1[4]
        
        uint32_t rdx_10 = (zx.d(*(r8 + 1)) << 0x10) + (zx.d(*(r8 + 2)) << 8) + (zx.d(*r8) << 0x18)
        uint32_t rcx_16 = zx.d(*(r8 + 3))
        
        if (rdx_10 == neg.d(rcx_16))
            int32_t r9_2 = rdx_10 + rcx_16 + 1
            
            if ((zx.d(result:1.b) << 0x10) + (zx.d(result.b) << 0x18) + (zx.d(result:2.b) << 8)
                + zx.d(result:3.b) u<= r9_2)
            label_142c0515c:
                
                if (sub_142bf7510(arg2, sub_142c063b0(arg1), 4).b == 0)
                    result.b = 0
                else
                    void* rax_1 = sub_142c063b0(arg1)
                    
                    if ((zx.d(*(rax_1 + 1)) << 0x10) + (zx.d(*(rax_1 + 2)) << 8)
                            + (zx.d(*rax_1) << 0x18) + zx.d(*(rax_1 + 3)) != arg2[0xc])
                        result.b = 0
                    else
                        result.b = 1
            else
                while (true)
                    uint64_t rcx_24 = zx.q(r9_2 - 1)
                    int128_t* const r10_1
                    
                    if (rcx_24.d u< r11_5)
                        r10_1 = &arg1[(rcx_24 + ((rcx_24 + 1) << 1)) << 1]
                    else
                        r10_1 = &data_14369a5d0
                    
                    void* rdx_17
                    
                    if (r9_2 u< r11_5)
                        uint64_t rcx_25 = zx.q(r9_2)
                        rdx_17 = &arg1[(rcx_25 + ((rcx_25 + 1) << 1)) << 1]
                    else
                        rdx_17 = &data_14369a5d0
                    
                    if ((zx.d(*(r10_1 + 1)) << 0x10) + (zx.d(*(r10_1 + 2)) << 8)
                            + (zx.d(*r10_1) << 0x18) + zx.d(*(r10_1 + 3)) u>= (zx.d(*(rdx_17 + 1)) << 0x10)
                            + (zx.d(*(rdx_17 + 2)) << 8) + (zx.d(*rdx_17) << 0x18)
                            + zx.d(*(rdx_17 + 3)))
                        break
                    
                    r9_2 += 1
                    
                    if (r9_2 u>= (zx.d((result u>> 0x10).b) << 8) + zx.d(result:3.b)
                            + (zx.d(result:1.b) << 0x10) + (zx.d(result.b) << 0x18))
                        goto label_142c0515c
                
                result.b = 0
            
            return result

result.b = 0
return result
