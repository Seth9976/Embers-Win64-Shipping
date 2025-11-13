// 函数: sub_142a4a8a0
// 地址: 0x142a4a8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 1) != 0)
    *(arg1 + 8) = 2

int32_t r11 = 0

if (arg3 s>= 0)
    int16_t rax_1 = *(arg2 + 8)
    int32_t rcx_1
    
    if (rax_1 s< 0)
        rcx_1 = *(arg2 + 0xc)
    else
        rcx_1 = sx.d(rax_1) s>> 5
    
    if (arg3 s> rcx_1)
        if (rax_1 s< 0)
            arg3 = *(arg2 + 0xc)
        else
            arg3 = sx.d(rax_1) s>> 5
else
    arg3 = 0

int16_t r9 = *(arg2 + 8)
int32_t rax_3

if (r9 s< 0)
    rax_3 = *(arg2 + 0xc)
else
    rax_3 = sx.d(r9) s>> 5

int16_t rcx_2 = *(arg1 + 8)
int32_t rbx_1

if (rcx_2 s< 0)
    rbx_1 = *(arg1 + 0xc)
else
    rbx_1 = sx.d(rcx_2) s>> 5

int32_t rax_4 = rax_3 - arg3
int32_t rcx_4

if (r9 s< 0)
    rcx_4 = *(arg2 + 0xc)
else
    rcx_4 = sx.d(r9) s>> 5

if (arg3 s< 0)
    arg3 = 0
else if (arg3 s> rcx_4)
    arg3 = rcx_4

if (rax_4 s>= 0)
    int32_t rcx_5 = rcx_4 - arg3
    r11 = rax_4
    
    if (rax_4 s> rcx_5)
        r11 = rcx_5

void* r9_1 = arg2 + 0xa

if ((r9.b & 2) == 0)
    r9_1 = *(arg2 + 0x18)

return sub_142a49390(arg1, 0, rbx_1, r9_1, arg3, r11)
