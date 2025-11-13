// 函数: sub_1413c7680
// 地址: 0x1413c7680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rsi = sx.q(*(rbx + 0xf90))
int32_t rax = (rsi + 1).d
*(rbx + 0xf90) = rax

if (rax s> *(rbx + 0xf94))
    sub_1405a4d70(rbx + 0xf88)

*(*(rbx + 0xf88) + (rsi << 3)) = arg1[1]
char rax_2 = sub_1410c2460(*arg1, 0)
*(*arg1 + 0xf80) = arg1[1]
uint64_t result = sub_1410c2460(*arg1, 0)

if (rax_2 != result.b)
    result = *arg1
    *(result + 0xf78) = 1

return result
