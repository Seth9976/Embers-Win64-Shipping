// 函数: sub_141ec00d0
// 地址: 0x141ec00d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x70) = 0
*(arg1 + 0x58) = 0

if (*(arg1 + 0x5c) != 0)
    sub_141eca410(arg1 + 0x50, 0)

*(arg1 + 0x68) = 0

if (*(arg1 + 0x6c) != 0)
    sub_141eca410(arg1 + 0x60, 0)

int32_t rax

if ((*(arg1 + 0x38) & 1) != 0)
    rax = *(arg1 + 0x58) + 1
    *(arg1 + 0x58) = rax
    
    if (rax s> *(arg1 + 0x5c))
        sub_141eca1b0(arg1 + 0x50)

if (data_143f3a448 == 0)
    return 

*(arg1 + 0x74) = 0
rax = *(arg1 + 0x68) + 0xa
*(arg1 + 0x68) = rax

if (rax s> *(arg1 + 0x6c))
    sub_141eca1b0(arg1 + 0x60)
