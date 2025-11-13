// 函数: sub_142c5cba0
// 地址: 0x142c5cba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1 + 0x620
int64_t i_1 = 0x39
int64_t result
int64_t i

do
    result = data_143ccb8a0(*rbx)
    *rbx = 0
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)

if (*(arg1 + 0x898) != 0)
    result = data_143ccb8a0(*(arg1 + 0x890))
    *(arg1 + 0x890) = 0
    *(arg1 + 0x898) = 0

*(arg1 + 0x890) = 0

if (*(arg1 + 0x888) != 0)
    result = data_143ccb8a0(*(arg1 + 0x880))
    *(arg1 + 0x888) = 0

*(arg1 + 0x880) = 0
return result
