// 函数: sub_142c3c890
// 地址: 0x142c3c890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int64_t r11 = *(arg1 + 0x18)
int32_t r8 = *(arg1 + 0x10) - 1
uint64_t result

if (r8 s>= 0)
    do
        uint64_t rax_1 = zx.q((r8 + r9) u>> 1)
        uint64_t rcx = zx.q(rax_1.d)
        int32_t rdx = *(r11 + rax_1 * 0x24)
        int32_t temp0_1
        
        if (arg2 u>= rdx)
            result.b = arg2 u> rdx
            temp0_1 = result.d
        
        if (arg2 u< rdx || temp0_1 s< 0)
            r8 = (rcx - 1).d
        else
            if (temp0_1 s<= 0)
                result = r11 + rcx * 0x24
                
                if (result != 0)
                    return zx.q(*(result + 0x20)) & 1
                
                break
            
            r9 = (rcx + 1).d
    while (r9 s<= r8)

result.b = 0
return result
