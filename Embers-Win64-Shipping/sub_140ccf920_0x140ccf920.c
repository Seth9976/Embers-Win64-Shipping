// 函数: sub_140ccf920
// 地址: 0x140ccf920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x1f8)

if (rax == 0)
    rax = j_sub_140a82f30(0xc8)
    
    if (rax != 0)
        rax = sub_140b2f110(rax)
    
    *(arg1 + 0x1f8) = rax

return sub_140b30ae0(rax) __tailcall
