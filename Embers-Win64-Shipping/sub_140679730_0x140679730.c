// 函数: sub_140679730
// 地址: 0x140679730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xb0)
void*** result

if (rcx == 0)
    result = sub_140666d50(sub_140cde0b0())
    *(arg1 + 0xb0) = result
else
    result = sub_140679620(rcx)

bool cond:1 = *(arg1 + 0xc4) == 0
*(arg1 + 0xc0) = 0

if (not(cond:1))
    result = sub_1405c5510(arg1 + 0xb8, 0)

bool cond:0 = *(arg1 + 0xe4) == 0
*(arg1 + 0xe0) = 0

if (cond:0)
    return result

return sub_1405947f0(arg1 + 0xd8, 0) __tailcall
