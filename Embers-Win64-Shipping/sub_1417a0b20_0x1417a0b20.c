// 函数: sub_1417a0b20
// 地址: 0x1417a0b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
*arg1 = 0

if (arg1 != arg2)
    *arg1 = *arg2
    *arg2 = 0

void arg_8

if (arg2 != &arg_8)
    int64_t* r8 = *arg2
    *arg2 = rcx
    
    if (r8 != 0)
        jump(**r8)
else if (rcx != 0)
    jump(**rcx)
