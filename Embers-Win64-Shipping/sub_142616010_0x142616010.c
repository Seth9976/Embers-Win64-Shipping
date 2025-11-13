// 函数: sub_142616010
// 地址: 0x142616010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s> *arg1 || arg3 == 0)
    int64_t result
    result.b = 0
    return result

void* rdx_1 = sx.q(arg2) * 0x328 + *(arg1 + 8)
*(rdx_1 + 0x318) = arg3
*(rdx_1 + 0x30c) = *arg4
*(rdx_1 + 0x310) = arg4[1]
*(rdx_1 + 0x314) = arg4[2]
char rax_4 = 3
bool cond:0 = *(rdx_1 + 0x318) == 0
*(rdx_1 + 0x320) = 0

if (cond:0)
    rax_4 = 1

*(rdx_1 + 0x324) = 0
*(rdx_1 + 0x325) = rax_4
return 1
