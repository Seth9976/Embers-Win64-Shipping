// 函数: sub_1429e10f0
// 地址: 0x1429e10f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1 + 0x430
int64_t i_1 = 2
int64_t result
int64_t i

do
    result = sub_1429dde60(*rbx)
    *rbx = 0
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x448) = 0

if (*(arg1 + 0x115c) == 0)
    *(arg1 + 0x440) = 0

return result
