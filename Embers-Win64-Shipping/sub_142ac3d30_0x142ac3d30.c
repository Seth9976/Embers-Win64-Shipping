// 函数: sub_142ac3d30
// 地址: 0x142ac3d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10_1 = zx.q(arg2) & 0xfffffff

if (arg4 != 0)
    char* r11_1 = *arg4
    
    if (r11_1 != 0)
        uint32_t rdx = arg2 u>> 0x1c
        
        if (rdx == 2)
            if (r10_1.d != 0)
                int64_t rax_10 = *(arg1 + 8)
                uint64_t rsi_3 = zx.q(*(rax_10 + (r10_1 << 2)))
                int64_t rdi_3 = rax_10 + (r10_1 << 2)
                int32_t rax_11 = sub_142ac2a80(arg1, rdi_3 + 2, rsi_3.d, r11_1, arg4)
                *arg3 = rax_11
                
                if (rax_11 s>= 0)
                    return zx.q(*(rdi_3
                        + (((zx.q(not.d(rsi_3.d)) & 1) + (sx.q(rax_11) << 1) + rsi_3) << 1) + 2))
        else if (rdx == 4)
            if (r10_1.d != 0)
                int64_t rax_6 = *(arg1 + 8)
                int32_t rsi_2 = *(rax_6 + (r10_1 << 2))
                int64_t rdi_2 = rax_6 + (r10_1 << 2)
                int32_t rax_7 = sub_142ac29b0(arg1, rdi_2 + 4, rsi_2, r11_1, arg4)
                *arg3 = rax_7
                
                if (rax_7 s>= 0)
                    return zx.q(*(rdi_2 + (sx.q(rax_7 + rsi_2) << 2) + 4))
        else if (rdx == 5)
            int64_t rax_1 = *(arg1 + 0x10)
            uint32_t rsi_1 = zx.d(*(rax_1 + (r10_1 << 1)))
            int64_t rdi_1 = rax_1 + (r10_1 << 1)
            int32_t rax_2 = sub_142ac2a80(arg1, rdi_1 + 2, rsi_1, r11_1, arg4)
            *arg3 = rax_2
            
            if (rax_2 s>= 0)
                int32_t rdx_4 = *(arg1 + 0x34)
                uint32_t rax_4 = zx.d(*(rdi_1 + (sx.q(rax_2 + rsi_1) << 1) + 2))
                
                if (rax_4 s>= rdx_4)
                    rax_4 += *(arg1 + 0x30) - rdx_4
                
                return zx.q(rax_4) | 0x60000000

return 0xffffffff
