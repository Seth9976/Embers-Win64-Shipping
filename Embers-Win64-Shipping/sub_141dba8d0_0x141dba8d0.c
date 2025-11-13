// 函数: sub_141dba8d0
// 地址: 0x141dba8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(*(arg1 + 0x50) + 0xb8) == 8)
    *(arg1 + 0x181) &= 0xfd
    char rax_3 = *(arg1 + 0x181) | 1
    *(arg1 + 0x181) = rax_3
    return rax_3

void* rax = *(arg2 + 0x10)

if (rax != 0)
    float zmm0 = *(rax + 0x48) f* *(arg2 + 0x64)
    
    if (not(zmm0 <= 9.99999975e-05f))
        char rcx = 0
        
        if (zmm0 f> *(arg2 + 0x5c))
            rcx = 2
        
        *(arg1 + 0x181) = rcx | (*(arg1 + 0x181) & 0xfd)

char rax_2 = *(arg1 + 0x181) | 1
*(arg1 + 0x181) = rax_2
return rax_2
