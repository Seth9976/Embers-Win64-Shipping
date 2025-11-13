// 函数: sub_140a8e3a0
// 地址: 0x140a8e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)

if (rcx != 0 && *(arg1 + 0x48) == 0)
    jump(*(*rcx + 8))

return arg1
