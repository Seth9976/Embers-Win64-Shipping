// 函数: sub_140e21910
// 地址: 0x140e21910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (*(arg1 + 0xc) s<= 0xffffffff)
    sub_140888ba0(arg1, 0)

int32_t rax = *(arg1 + 0x2c)
arg1[5].d = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(&arg1[4], 0)

int32_t rax_1 = *(arg1 + 0x1c)
arg1[3].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405c5660(&arg1[2], 0)

int32_t rax_2 = *(arg1 + 0x4c)
arg1[9].d = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(&arg1[8], 0)

int32_t result = *(arg1 + 0x3c)
arg1[7].d = 0

if (result s< 0 && result != 0)
    result = sub_1405c5660(&arg1[6], 0)

arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
*(arg1 + 0x5c) = 0
return result
