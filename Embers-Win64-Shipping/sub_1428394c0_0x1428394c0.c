// 函数: sub_1428394c0
// 地址: 0x1428394c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xe80) = 0
*(arg1 + 0xf20) = 0
*(arg1 + 0xe84) = 6
*(arg1 + 0xf24) = 6
void* rax = *(arg1 + 0xd98)
*(arg1 + 4) = 0xff03

if (rax != 0)
    *(rax + 0x58) -= 1
    void* rcx = *(arg1 + 0xd98)
    
    if (*(rcx + 0x58) == 0)
        int64_t rax_1 = *(rcx + 0x60)
        
        if (rax_1 != 0)
            rax_1(rcx, 2)
    
    *(arg1 + 0xd98) = 0

return 0
