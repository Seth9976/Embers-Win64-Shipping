// 函数: sub_1406b4ac0
// 地址: 0x1406b4ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (arg1 != arg2)
    int64_t r9_1 = sx.q(*arg1)
    arg1 = &arg1[1]
    int64_t r9_2 = r9_1 << 2
    char* r10_2 = sx.q((r9_1 << 2).d) + **arg3
    *r10_2 = *(*arg3[1] + r9_2 + 2)
    r10_2[1] = *(*arg3[1] + r9_2 + 1)
    r10_2[2] = *(r9_2 + *arg3[1])
