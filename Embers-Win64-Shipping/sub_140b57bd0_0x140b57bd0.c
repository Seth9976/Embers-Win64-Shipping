// 函数: sub_140b57bd0
// 地址: 0x140b57bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*arg2)
int64_t r10 = 0
int32_t i_2 = 0
int16_t* r8_1 = arg1 - 2 + (r11 << 1)

if (r8_1 u>= arg1)
    while (*r8_1 - 0x30 u<= 9)
        i_2 += 1
        r8_1 -= 2
        
        if (r8_1 u< arg1)
            break

int64_t i_1 = sx.q(i_2)
void* rdx = arg1 + ((r11 - i_1) << 1)

if (i_2 != 0 && i_2 s< r11.d && *(rdx - 2) == 0x5f && i_2 s<= 0xa && (i_2 == 1 || *rdx != 0x30))
    if (i_2 s> 0)
        int64_t i
        
        do
            uint64_t rax_2 = zx.q(*rdx)
            rdx += 2
            r10 = rax_2 + ((r10 * 5 - 0x18) << 1)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (i_2 s<= 0 || r10 s< 0x7fffffff)
        *arg2 = r11.d - i_2 - 1
        return zx.q((r10 + 1).d)

return 0
