// 函数: sub_1413a9d70
// 地址: 0x1413a9d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x10)
*(arg1 + 0x10) = arg2

if (arg2 != 0)
    *(arg2 + 8) += 1

if (r8 == 0)
    return 

r8[1].d -= 1

if (r8[1].d == 1)
    jump(**r8)
