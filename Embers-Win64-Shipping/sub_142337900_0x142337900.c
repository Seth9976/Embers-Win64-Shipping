// 函数: sub_142337900
// 地址: 0x142337900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 8) += 0x128
int64_t* rcx = *(arg1 + 0x110)

if (rcx != 0)
    (*(*rcx + 8))(rcx)

int64_t result = sx.q(*(arg1 + 0x10c))
int32_t i = 0
*(arg2 + 0x28) += result * 0xb0
void* r11 = *(arg2 + 0x28)

if (*(arg1 + 0x108) s> 0)
    int64_t r9_1 = 0
    
    do
        result = *(arg1 + 0x100)
        void* rcx_2 = 0x50
        
        if (*(result + r9_1 + 0x20) != 0)
            rcx_2 =
                zx.q(*(*(**(result + r9_1 + 0x58) + (sx.q(*(result + r9_1 + 0x54)) << 3)) + 0xec))
                * 0x18 + 0x50
        
        void* r8_2 = r11 + rcx_2
        i += 1
        *(arg2 + 0x28) = r8_2
        int64_t rdx_4 = sx.q(*(result + r9_1 + 0x9c)) + sx.q(*(result + r9_1 + 0x8c))
            + sx.q(*(result + r9_1 + 0x6c))
        r9_1 += 0xb0
        r11 = r8_2 + (rdx_4 << 3)
        *(arg2 + 0x28) = r11
    while (i s< *(arg1 + 0x108))

return result
