// 函数: sub_14040bce0
// 地址: 0x14040bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg2
int32_t rdx = 0

if (rax != 0)
    rdx.b = rax s< 0
    int32_t rdx_1 = neg.d(rdx)
    int32_t r11_2 = (rdx_1 + rax) ^ rdx_1
    int32_t rdx_2 = arg3
    int32_t r9 = 1
    uint32_t r8_2 = ((0x7fe0 - arg3) * (0x4000 - arg4)) u>> 0xf
    
    if (r8_2 == 0)
    label_14040bd65:
        int32_t r11_3 = r11_2 - r9
        uint64_t rcx_4 = zx.q(((0x8000 - rdx_1 - rdx_2) s>> 1) - 1)
        
        if (r11_3 s< rcx_4.d)
            rcx_4 = zx.q(r11_3)
        
        rdx = rdx_2 + rdx_1 + 1 + (rcx_4 << 1).d
        arg3 = 0x8000 - rdx
        
        if (arg3 u> 1)
            arg3 = 1
        
        *arg2 = (rcx_4.d + r9 + rdx_1) ^ rdx_1
    else
        while (r9 s< r11_2)
            uint32_t r8_3 = r8_2 * 2
            r9 += 1
            rdx_2 = rdx_2 + 2 + r8_3
            r8_2 = (r8_3 * arg4) u>> 0xf
            
            if (r8_2 == 0)
                break
        
        if (r8_2 == 0)
            goto label_14040bd65
        
        arg3 = r8_2 + 1
        rdx = rdx_2 + (not.d(rdx_1) & arg3)

return sub_1403fe780(arg1, rdx, arg3 + rdx, 0xf) __tailcall
