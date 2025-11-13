// 函数: sub_142a58a40
// 地址: 0x142a58a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg3 + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg3 + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

int16_t rcx = *(arg2 + 8)
int32_t rcx_2

if (rcx s< 0)
    rcx_2 = *(arg2 + 0xc)
else
    rcx_2 = sx.d(rcx) s>> 5

int16_t r8 = *(arg1 + 8)
int32_t r8_2

if (r8 s< 0)
    r8_2 = *(arg1 + 0xc)
else
    r8_2 = sx.d(r8) s>> 5

return sub_142a49d10(arg1, 0, r8_2, arg2, 0, rcx_2, arg3, 0, rax_2)
