// 函数: sub_142bbc570
// 地址: 0x142bbc570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x3e8)

if (*(rdi + 0x24) == 2)
    void* rax_2 = sub_142b99bf0(sub_142b922e0(*(*(arg1 + 0x90) + 8), "sfnt"), "glyph-dict", 0)
    
    if (rax_2 != 0)
        int64_t rax_3 = *(rax_2 + 8)
        
        if (rax_3 != 0)
            jump(rax_3)
    
    return 0

uint64_t result = sub_142b99bf0(*(arg1 + 0x90), "postscript-cmaps", 1)

if (result == 0)
    return result

uint64_t rbx_1 = 0

if (*(rdi + 0x20) u> 0)
    do
        int16_t rdx_1 = *(*(rdi + 0x4d8) + (rbx_1 << 1))
        int64_t rax_9
        
        if (rdx_1 u<= 0x186)
            rax_9 = (*(result + 0x28))(zx.q(rdx_1), rdx_1)
        label_142bbc666:
            
            if (rax_9 != 0)
                char* rcx_6 = arg2
                uint32_t i
                uint32_t r8_1
                
                do
                    r8_1 = zx.d(*rcx_6)
                    i = zx.d(*(rcx_6 + rax_9 - arg2))
                    
                    if (r8_1 != i)
                        break
                    
                    rcx_6 = &rcx_6[1]
                while (i != 0)
                
                if (r8_1 - i == 0)
                    return zx.q(rbx_1.d)
        else if (zx.d(rdx_1) - 0x187 u< *(rdi + 0x5c0))
            rax_9 = *(*(rdi + 0x5c8) + (zx.q(zx.d(rdx_1) - 0x187) << 3))
            goto label_142bbc666
        rbx_1 = zx.q(rbx_1.d + 1)
    while (rbx_1.d u< *(rdi + 0x20))

return 0
