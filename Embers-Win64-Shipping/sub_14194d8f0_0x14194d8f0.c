// 函数: sub_14194d8f0
// 地址: 0x14194d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1 + 0xb0
int32_t* r14_1 = arg2 - arg1
int64_t i_1 = 6
int32_t result
int64_t i

do
    sub_14192bc70(&rbx[-0x2c], &r14_1[-0x2c] + rbx)
    result = *(r14_1 + rbx)
    *rbx = result
    rbx = &rbx[0x2e]
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x450) = *(arg2 + 0x450)
*(arg1 + 0x460) = *(arg2 + 0x460)
*(arg1 + 0x470) = *(arg2 + 0x470)
*(arg1 + 0x480) = *(arg2 + 0x480)
*(arg1 + 0x490) = *(arg2 + 0x490)
*(arg1 + 0x4a0) = *(arg2 + 0x4a0)
*(arg1 + 0x4b0) = *(arg2 + 0x4b0)
*(arg1 + 0x4c0) = *(arg2 + 0x4c0)
*(arg1 + 0x5ee) = 1
return result
