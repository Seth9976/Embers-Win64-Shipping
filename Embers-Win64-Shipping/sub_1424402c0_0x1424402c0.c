// 函数: sub_1424402c0
// 地址: 0x1424402c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x18)

if (i_2 != 0)
    int64_t* rsi_1 = *(arg1 + 0x10) + 0x48
    int32_t i
    
    do
        int64_t j_1 = 3
        int64_t* rbx_1 = rsi_1
        int64_t j
        
        do
            rbx_1 -= 0x18
            sub_1405d1550(rbx_1)
            j = j_1
            j_1 -= 1
        while (j != 1)
        rsi_1 = &rsi_1[0xc]
        i = i_2
        i_2 -= 1
    while (i != 1)

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) != 0)
    sub_14090a730(arg1 + 0x10, 0)

int32_t i_3 = *(arg1 + 0x28)
int64_t* rbx_2 = *(arg1 + 0x20)

if (i_3 != 0)
    int32_t i_1
    
    do
        sub_14081c9d0(rbx_2)
        rbx_2 = &rbx_2[8]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) != 0)
    sub_1405a52a0(arg1 + 0x20, 0)
