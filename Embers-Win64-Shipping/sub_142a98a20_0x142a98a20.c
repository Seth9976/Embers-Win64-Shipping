// 函数: sub_142a98a20
// 地址: 0x142a98a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r9 = *(arg2 + 8)
int32_t r8_1

if (r9 s< 0)
    r8_1 = *(arg2 + 0xc)
else
    r8_1 = sx.d(r9) s>> 5

int16_t rax = *(arg1 + 8)
int32_t r10_1

if (rax s< 0)
    r10_1 = *(arg1 + 0xc)
else
    r10_1 = sx.d(rax) s>> 5

int32_t rbx = 0

if ((*(arg2 + 8) & 1) != 0)
    return not.b(*(arg1 + 8)) & 1

int32_t rax_3

if (r9 s< 0)
    rax_3 = *(arg2 + 0xc)
else
    rax_3 = sx.d(r9) s>> 5

int32_t r11 = 0

if (rax_3 s< 0)
    r11 = rax_3

if (r8_1 s>= 0)
    int32_t rax_4 = rax_3 - r11
    rbx = r8_1
    
    if (r8_1 s> rax_4)
        rbx = rax_4

void* r9_1 = arg2 + 0xa

if ((r9.b & 2) == 0)
    r9_1 = *(arg2 + 0x18)

return sub_142a48fb0(arg1, 0, r10_1, r9_1, r11, rbx)
