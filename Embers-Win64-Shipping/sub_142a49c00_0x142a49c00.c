// 函数: sub_142a49c00
// 地址: 0x142a49c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0

if (arg2 s>= 0)
    int16_t rax_1 = *(arg1 + 8)
    int32_t r9_1
    
    if (rax_1 s< 0)
        r9_1 = *(arg1 + 0xc)
    else
        r9_1 = sx.d(rax_1) s>> 5
    
    if (arg2 s> r9_1)
        if (rax_1 s< 0)
            arg2 = *(arg1 + 0xc)
        else
            arg2 = sx.d(rax_1) s>> 5
else
    arg2 = 0

if (arg3 s>= 0)
    int16_t rax_2 = *(arg1 + 8)
    int32_t r9_3
    
    if (rax_2 s< 0)
        r9_3 = *(arg1 + 0xc)
    else
        r9_3 = sx.d(rax_2) s>> 5
    
    if (arg3 s> r9_3)
        if (rax_2 s< 0)
            arg3 = *(arg1 + 0xc)
        else
            arg3 = sx.d(rax_2) s>> 5
else
    arg3 = 0

int16_t rax_3 = *(arg4 + 8)
int32_t r8_1 = arg3 - arg2
int32_t r11_1

if (rax_3 s< 0)
    r11_1 = *(arg4 + 0xc)
else
    r11_1 = sx.d(rax_3) s>> 5

int16_t r9_4 = *(arg1 + 8)
int32_t rax_5

if (r9_4 s< 0)
    rax_5 = *(arg1 + 0xc)
else
    rax_5 = sx.d(r9_4) s>> 5

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> rax_5)
    arg2 = rax_5

if (r8_1 s>= 0)
    int32_t rax_6 = rax_5 - arg2
    r10 = r8_1
    
    if (r8_1 s> rax_6)
        r10 = rax_6

void* r9_5 = arg1 + 0xa

if ((r9_4.b & 2) == 0)
    r9_5 = *(arg1 + 0x18)

return sub_142a49390(arg4, 0, r11_1, r9_5, arg2, r10)
