// 函数: sub_141afc920
// 地址: 0x141afc920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg1[8].b
void** rbx = arg1

if ((result & 1) != 0)
    if ((result & 2) == 0)
        arg1 = *arg1
    
    rbx[8].b = result & 0xfe
    result = (**arg1)(arg1, 0)
    
    if ((rbx[8].b & 2) == 0)
        return sub_140a74f90(*rbx) __tailcall

return result
