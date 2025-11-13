// 函数: sub_141a32310
// 地址: 0x141a32310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x50)

if ((rax & 1) != 0)
    void* rcx
    
    if ((rax & 2) == 0)
        rcx = *(arg1 + 0x30)
    else
        rcx = arg1 + 0x30
    
    *(arg1 + 0x50) = rax & 0xfe
    (**rcx)(rcx, 0)
    
    if ((*(arg1 + 0x50) & 2) == 0)
        sub_140a74f90(*(arg1 + 0x30))

char result = *(arg1 + 0x28)

if ((result & 1) != 0)
    void* rcx_2 = arg1 + 8
    
    if ((result & 2) == 0)
        rcx_2 = *(arg1 + 8)
    
    *(arg1 + 0x28) = result & 0xfe
    result = (**rcx_2)(rcx_2, 0)
    
    if ((*(arg1 + 0x28) & 2) == 0)
        return sub_140a74f90(*(arg1 + 8))

return result
