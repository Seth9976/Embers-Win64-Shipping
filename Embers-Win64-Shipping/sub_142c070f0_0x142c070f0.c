// 函数: sub_142c070f0
// 地址: 0x142c070f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x10)
int32_t r10 = 0
int32_t r9_1 = r9 - 1
int64_t r11 = *(arg1 + 0x18)

if (r9 - 1 s>= 0)
    do
        uint64_t rax_2 = zx.q((r9_1 + r10) u>> 1)
        uint64_t rcx = zx.q(rax_2.d)
        int32_t rdx = *(r11 + rax_2 * 0x24)
        int32_t rax_4
        
        if (arg3 u>= rdx)
            rax_4.b = arg3 u> rdx
        
        if (arg3 u< rdx || rax_4 s< 0)
            r9_1 = (rcx - 1).d
        else
            if (rax_4 s<= 0)
                int64_t rdx_1 = r11 + rcx * 0x24
                
                if (rdx_1 != 0)
                    return zx.q(*(rdx_1 + (zx.q(arg2) << 2) + 4))
                
                break
            
            r10 = (rcx + 1).d
    while (r10 s<= r9_1)

return 0xffff
