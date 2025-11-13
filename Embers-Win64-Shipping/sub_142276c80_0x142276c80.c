// 函数: sub_142276c80
// 地址: 0x142276c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2a0) = arg2

if (data_143a2f30c == 0 || arg2 == 0)
    return 

int64_t* rcx = *(arg1 + 0x250)

if (arg2 != rcx || rcx == 0)
    return 

void* rax = (*(*rcx + 0x628))(rcx)

if (rax == 0)
    return 

rax = sub_140d21950(rax, sub_14254d8b0())

if (rax != 0)
    jump(*(*rax + 0x50))
