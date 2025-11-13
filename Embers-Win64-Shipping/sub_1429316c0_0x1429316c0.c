// 函数: sub_1429316c0
// 地址: 0x1429316c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rsi = arg2[2]
*arg3 = *arg2
int32_t result = sub_142898d50(rsi, arg3)

if (result == 0)
    return result

void* rax_1 = sub_1428a8a90(*(arg1 + 0x10), arg3)

if (rax_1 != 0)
    sub_142898870(rsi, rax_1)
    sub_1428a6780(*(rax_1 + 8))
    sub_1428a6780(*(rax_1 + 0x10))
    sub_1428a6780(rax_1)

return 1
