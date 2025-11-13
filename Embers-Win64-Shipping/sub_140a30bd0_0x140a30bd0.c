// 函数: sub_140a30bd0
// 地址: 0x140a30bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x228)

if (rcx == 0)
    return 

if (arg2 == 0xffffffff)
    *(arg1 + 0x225) = 1
    *(arg1 + 0x41d) = 1
    (*(*rcx + 0x10))(rcx)
    jump(*(**(arg1 + 0x420) + 0x10))

*(sx.q(arg2) * 0x1f8 + arg1 + 0x224) = 1
