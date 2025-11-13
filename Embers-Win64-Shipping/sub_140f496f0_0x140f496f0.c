// 函数: sub_140f496f0
// 地址: 0x140f496f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140dc1df0(arg1)

if (rax == 0)
    int64_t* rcx = *(arg1 + 0x3f8)
    
    if (rcx != 0)
        rax = (*(*rcx + 0x1a0))(rcx)
    
    if (rcx == 0 || rax == 0)
        return 0

return 1
