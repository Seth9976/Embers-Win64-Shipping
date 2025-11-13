// 函数: sub_142b5f280
// 地址: 0x142b5f280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r11 = *(arg4 + 8)
int32_t r10_1

if (r11 s< 0)
    r10_1 = *(arg4 + 0xc)
else
    r10_1 = sx.d(r11) s>> 5

int32_t rcx = 0

if ((*(arg4 + 8) & 1) != 0)
    return not.b(*(arg1 + 8)) & 1

int32_t rax_2

if (r11 s< 0)
    rax_2 = *(arg4 + 0xc)
else
    rax_2 = sx.d(r11) s>> 5

int32_t rdx = 0

if (rax_2 s< 0)
    rdx = rax_2

if (r10_1 s>= 0)
    int32_t rax_3 = rax_2 - rdx
    rcx = r10_1
    
    if (r10_1 s> rax_3)
        rcx = rax_3

void* r9

if ((r11.b & 2) == 0)
    r9 = *(arg4 + 0x18)
else
    r9 = arg4 + 0xa

return sub_142a48fb0(arg1, arg2, arg3, r9, rdx, rcx)
