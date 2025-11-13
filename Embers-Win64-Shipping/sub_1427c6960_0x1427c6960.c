// 函数: sub_1427c6960
// 地址: 0x1427c6960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u>= 4)
    uint32_t r9_2 = (zx.d(arg1[2]) << 0x10) + (zx.d(arg1[1]) << 8)
    uint32_t rax_3 = zx.d(*arg1)
    *arg5 = r9_2 + rax_3
    int32_t rcx_5
    
    if (r9_2 != neg.d(rax_3))
        rcx_5 = 4
    label_1427c69ec:
        uint32_t r8 = zx.d(arg1[3])
        *arg6 = r8
        uint64_t rdi_1 = zx.q(*arg5)
        
        if (rdi_1.d + rcx_5 u<= arg2)
            if (r8 != 0xd)
                if (arg3 == 0)
                    *arg4 = &arg1[zx.q(rcx_5)]
                    return 0
                
                *arg4 = nullptr
                *arg5 = 0
                *arg6 = 0
                return 1
            
            void* rdx = nullptr
            void* r11_1 = &arg1[zx.q(rcx_5)]
            *arg5 = 0
            int32_t rcx_6 = 0
            int32_t rbx_1 = 0
            uint32_t r9_4 = 0
            
            while (true)
                rdx += zx.q(rcx_6 + r9_4)
                
                if (rdx u>= rdi_1)
                    return 1
                
                int32_t r8_2 = rdi_1.d - rdx.d
                
                if (r8_2 u< 4)
                    return 3
                
                uint32_t rcx_10 =
                    (zx.d(*(rdx + r11_1 + 2)) << 0x10) + (zx.d(*(rdx + r11_1 + 1)) << 8)
                uint32_t rax_13 = zx.d(*(rdx + r11_1))
                *arg5 = rcx_10 + rax_13
                
                if (rcx_10 != neg.d(rax_13))
                    rcx_6 = 4
                else
                    if (r8_2 u< 8)
                        return 3
                    
                    uint32_t rcx_16 = (zx.d(*(rdx + r11_1 + 7)) << 0x18)
                        + (zx.d(*(rdx + r11_1 + 6)) << 0x10) + (zx.d(*(rdx + r11_1 + 5)) << 8)
                        + zx.d(*(rdx + r11_1 + 4))
                    *arg5 = rcx_16
                    rcx_6 = 8
                
                *arg6 = zx.d(*(rdx + r11_1 + 3))
                r9_4 = *arg5
                
                if (r9_4 + rcx_6 u> r8_2)
                    return 3
                
                rbx_1 += 1
                
                if (rbx_1 u> arg3)
                    *arg4 = zx.q(rcx_6) + rdx + r11_1
                    return 0
    else if (arg2 u>= 8)
        *arg5 =
            (zx.d(arg1[7]) << 0x18) + (zx.d(arg1[6]) << 0x10) + (zx.d(arg1[5]) << 8) + zx.d(arg1[4])
        rcx_5 = 8
        goto label_1427c69ec

return 3
