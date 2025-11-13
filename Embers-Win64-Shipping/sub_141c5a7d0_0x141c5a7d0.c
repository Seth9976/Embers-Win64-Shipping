// 函数: sub_141c5a7d0
// 地址: 0x141c5a7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x68)

if (rcx == 0)
    return 

if (*(arg1 + 0x78) == 3)
    int64_t* rax_2 = sub_1405f7040(sub_141f88540())
    int64_t r8_1 = *rax_2
    (*(r8_1 + 0xb0))(rax_2, *(arg1 + 0x68), r8_1)
    rcx = *(arg1 + 0x68)

if (rcx != 0)
    (**rcx)(rcx, 1)

*(arg1 + 0x68) = 0
