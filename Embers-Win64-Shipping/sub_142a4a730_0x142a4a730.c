// 函数: sub_142a4a730
// 地址: 0x142a4a730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r11 = *(arg4 + 8)
int32_t r10_1

if (r11 s< 0)
    r10_1 = *(arg4 + 0xc)
else
    r10_1 = sx.d(r11) s>> 5

int32_t rcx = 0
int32_t rax_1

if (r11 s< 0)
    rax_1 = *(arg4 + 0xc)
else
    rax_1 = sx.d(r11) s>> 5

int32_t rdx = 0

if (rax_1 s< 0)
    rdx = rax_1

if (r10_1 s>= 0)
    int32_t rax_2 = rax_1 - rdx
    rcx = r10_1
    
    if (r10_1 s> rax_2)
        rcx = rax_2

void* r9

if ((r11.b & 2) == 0)
    r9 = *(arg4 + 0x18)
else
    r9 = arg4 + 0xa

return sub_142a49390(arg1, arg2, arg3 - arg2, r9, rdx, rcx)
