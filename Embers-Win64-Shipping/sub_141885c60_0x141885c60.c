// 函数: sub_141885c60
// 地址: 0x141885c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x300) == 0)
    return arg1 + 0x78

while (true)
    void* rax_1 = *(arg1 + 0x300)
    
    if (rax_1 != 0)
        int64_t* rcx = *(rax_1 + 0x70)
        
        if ((*(*rcx + 0x20))(rcx, 0xffffffff, 0) != 0)
            break

return arg1 + 0x78
