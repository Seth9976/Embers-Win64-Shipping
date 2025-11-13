// 函数: sub_142a86250
// 地址: 0x142a86250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = -1
bool cond:0_1

do
    cond:0_1 = *(arg1 + rbx + 1) != 0
    rbx += 1
while (cond:0_1)
int64_t result = sub_142a7dd00(rbx + 1)

if (result == 0)
    return result

memcpy(result, arg1, rbx.d + 1)
return result
