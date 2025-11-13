// 函数: sub_140d9ce80
// 地址: 0x140d9ce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)

if (rcx == 0)
    return 

int32_t temp0_1 = *(rcx + 0xc)
*(rcx + 0xc) -= 1

if (temp0_1 == 1)
    jump(*(*rcx + 8))
