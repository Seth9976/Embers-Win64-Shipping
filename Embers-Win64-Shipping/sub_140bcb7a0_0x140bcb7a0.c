// 函数: sub_140bcb7a0
// 地址: 0x140bcb7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rax = (*(arg1 + 0x18) u>> 0x11).b
*(arg1 + 0x1c) = 1

if ((rax & 1) == 0)
    return *(arg1 + 0x10)

int64_t* rcx = *(arg1 + 0x10)

if (rcx != 0)
    int64_t result = *rcx
    
    if (result != 0)
        return result
    
    void* rax_2 = rcx[2]
    
    if (rax_2 != 0)
        return *(rax_2 + 8)

return 0
