// 函数: sub_14124fc10
// 地址: 0x14124fc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x20)

if (i_1 != 0)
    int64_t* rbx_1 = *(arg1 + 0x18) + 8
    int32_t i
    
    do
        sub_1405d1550(rbx_1)
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x24) == 0
*(arg1 + 0x20) = 0

if (not(cond:0))
    sub_1405a5410(arg1 + 0x18, 0)
