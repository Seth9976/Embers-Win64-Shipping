// 函数: sub_142a4a980
// 地址: 0x142a4a980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg3

if ((*(arg1 + 8) & 1) != 0)
    *(arg1 + 8) = 2

int16_t rax = *(arg1 + 8)
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg1 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

int16_t r9 = *(arg2 + 8)
int32_t rax_2

if (r9 s< 0)
    rax_2 = *(arg2 + 0xc)
else
    rax_2 = sx.d(r9) s>> 5

int32_t r11 = 0

if (r10 s< 0)
    r10 = 0
else if (r10 s> rax_2)
    r10 = rax_2

if (arg4 s>= 0)
    int32_t rax_3 = rax_2 - r10
    r11 = arg4
    
    if (arg4 s> rax_3)
        r11 = rax_3

void* r9_1 = arg2 + 0xa

if ((r9.b & 2) == 0)
    r9_1 = *(arg2 + 0x18)

return sub_142a49390(arg1, 0, r8_1, r9_1, r10, r11)
