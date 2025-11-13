// 函数: sub_142b624d0
// 地址: 0x142b624d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x2e8)
int32_t rax_1

if (rcx != 0)
    rax_1 = sub_1405f8990(rcx)

if ((rcx != 0 && rax_1 != 0) || *(arg1 + 0x288) == 0)
    sub_142a4ab40(arg2)
    return arg2

int16_t rax_3 = *(arg1 + 0x240)
int32_t r9_1

if (rax_3 s< 0)
    r9_1 = *(arg1 + 0x244)
else
    r9_1 = sx.d(rax_3) s>> 5

return sub_142a48d00(arg2, arg1 + 0x238, 0, r9_1) __tailcall
