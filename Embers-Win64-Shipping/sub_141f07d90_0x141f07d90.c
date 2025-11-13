// 函数: sub_141f07d90
// 地址: 0x141f07d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x17c) = *arg2 f+ *(arg1 + 0x17c)
*(arg1 + 0x180) = arg2[1] f+ *(arg1 + 0x180)
*(arg1 + 0x184) = arg2[2] f+ *(arg1 + 0x184)
float* i = *(arg1 + 0x158)
int64_t result = sx.q(*(arg1 + 0x160))

for (void* rcx_1 = result * 0x1c + i; i != rcx_1; i = &i[7])
    if (i[3].b == 0)
        *i = *i f+ *arg2
        i[1] = arg2[1] f+ i[1]
        i[2] = arg2[2] f+ i[2]

return result
