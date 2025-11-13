// 函数: sub_142a2cb30
// 地址: 0x142a2cb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = **(arg1 + 0x35a8)
void* rsi = *(*(arg2 + 0x408) + 8) + (sx.q(arg3 * *(arg2 + 0x5d4)) + sx.q(arg4)) * 0xc

if (*(arg2 + 0x5a8) == 0 || *(arg2 + 0x5b8) != 0)
    return sub_142a2b9f0(arg2 + 0x270, arg1 + 0x3400, arg3, arg4, arg1 + 0x10, arg5, arg6)

int64_t j_2 = sx.q(arg5)
int64_t result = sub_142a2b370(arg2, arg1 + 0x3400, arg3, arg4, arg1 + 0x10, j_2.d, arg6)

if (arg6 s> 0)
    uint64_t i_1 = zx.q(arg6)
    uint64_t i
    
    do
        if (j_2 s> 0)
            void* rax_5 = rsi
            int64_t j_1 = j_2
            int64_t j
            
            do
                *(rax_5 + 8) = *(rdi + 8)
                rax_5 += 0xc
                *(rax_5 - 0xc) = *(rdi + 0xc)
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        result = sx.q(*(arg2 + 0x5d4))
        rsi += result * 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
