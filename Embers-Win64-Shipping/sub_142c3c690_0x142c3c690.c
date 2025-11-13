// 函数: sub_142c3c690
// 地址: 0x142c3c690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg1 + 0x10)
int32_t r9 = 0
int32_t r8 = r8_1 - 1
int64_t r11 = *(arg1 + 0x18)

if (r8_1 - 1 s>= 0)
    do
        uint64_t rax_2 = zx.q((r8 + r9) u>> 1)
        uint64_t rcx = zx.q(rax_2.d)
        int32_t rdx = *(r11 + rax_2 * 0x24)
        int32_t rax_4
        
        if (arg2 u>= rdx)
            rax_4.b = arg2 u> rdx
        
        if (arg2 u< rdx || rax_4 s< 0)
            r8 = (rcx - 1).d
        else
            if (rax_4 s<= 0)
                void* rax_6 = r11 + rcx * 0x24
                
                if (rax_6 != 0)
                    return zx.q(*(rax_6 + 0x1c))
                
                break
            
            r9 = (rcx + 1).d
    while (r9 s<= r8)

return 0
