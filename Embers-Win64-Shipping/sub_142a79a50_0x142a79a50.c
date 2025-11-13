// 函数: sub_142a79a50
// 地址: 0x142a79a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142aea860(arg1) == sx.q(*(arg1 + 0x1c)))
    int64_t rax_1
    rax_1.b = 0
    return rax_1

void* rax_2 = *(arg1 + 0x48)
int16_t rdx_1 = *(rax_2 + 8)
int32_t rcx_1

if (rdx_1 s< 0)
    rcx_1 = *(rax_2 + 0xc)
else
    rcx_1 = sx.d(rdx_1) s>> 5

void* rax_3

if ((rdx_1.b & 0x11) != 0)
    rax_3 = nullptr
else if ((rdx_1.b & 2) == 0)
    rax_3 = *(rax_2 + 0x18)
else
    rax_3 = rax_2 + 0xa

*(arg1 + 0x30) = rax_3
*(arg1 + 0x10) = sx.q(rcx_1)
int64_t rax_4
rax_4.b = 1
*(arg1 + 0x2c) = rcx_1
*(arg1 + 0x1c) = rcx_1
return rax_4
