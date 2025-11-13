// 函数: sub_141e0eb60
// 地址: 0x141e0eb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x660) = 0

if (*(arg1 + 0x664) s<= 0xffffffff)
    sub_1405a5130(arg1 + 0x658, 0)

*(arg1 + 0xe0) = 0
void* rbx = arg1 + 0x2f8
int64_t i_1 = 3
int64_t i

do
    sub_1409d9b90(rbx)
    rbx += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t result = *(arg1 + 0x3f4)
*(arg1 + 0x3f0) = i_1.d

if (result s< 0 && result != i_1.d)
    return sub_140638c50(arg1 + 0x3e8, 0)

return result
