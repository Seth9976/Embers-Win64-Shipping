// 函数: sub_140f6a600
// 地址: 0x140f6a600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)

if (rcx == 0 || *(arg1 + 0x58) != 0)
    return 

*(arg1 + 0x58) = 1
char rdx
uint32_t r8
rdx, r8 = sub_140f6a640(rcx)
return sub_140f8fc70(*(arg1 + 8), rdx, r8) __tailcall
