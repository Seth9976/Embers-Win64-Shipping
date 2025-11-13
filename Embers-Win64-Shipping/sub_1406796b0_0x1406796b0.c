// 函数: sub_1406796b0
// 地址: 0x1406796b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xb0)

if (rcx == 0)
    *(arg1 + 0xb0) = sub_140666d50(sub_140cde0b0())
else
    sub_140679620(rcx)

bool cond:1 = *(arg1 + 0xc4) == 0
*(arg1 + 0xc0) = 0

if (not(cond:1))
    sub_1405c5510(arg1 + 0xb8, 0)

bool cond:0 = *(arg1 + 0xe4) == 0
*(arg1 + 0xe0) = 0

if (not(cond:0))
    sub_1405947f0(arg1 + 0xd8, 0)

return sub_1406797b0(arg1) __tailcall
