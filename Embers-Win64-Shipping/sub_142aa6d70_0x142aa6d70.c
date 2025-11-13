// 函数: sub_142aa6d70
// 地址: 0x142aa6d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]
int32_t result = *(arg1 + 0xc)
*(arg1 + 0xc) -= 1

if (result != 1)
    return result

if (rcx == 0)
    jump(**arg1)

jump(*(*rcx + 0x10))
