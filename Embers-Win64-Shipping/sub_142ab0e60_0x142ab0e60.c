// 函数: sub_142ab0e60
// 地址: 0x142ab0e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg2 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

int32_t r10_1

if (rax s< 0)
    r10_1 = *(arg2 + 0xc)
else
    r10_1 = sx.d(rax) s>> 5

int32_t r11 = 0

if ((*(arg2 + 8) & 1) != 0)
    return (not.b(*(arg1 + 8)) & 1) == 0

int32_t rcx_1

if (rax s< 0)
    rcx_1 = *(arg2 + 0xc)
else
    rcx_1 = sx.d(rax) s>> 5

int32_t rbx = 0

if (rcx_1 s< 0)
    rbx = rcx_1

if (r8_1 s>= 0)
    int32_t rcx_2 = rcx_1 - rbx
    r11 = r8_1
    
    if (r8_1 s> rcx_2)
        r11 = rcx_2

void* r9 = arg2 + 0xa

if ((rax.b & 2) == 0)
    r9 = *(arg2 + 0x18)

return sub_142a48fb0(arg1, 0, r10_1, r9, rbx, r11) == 0
