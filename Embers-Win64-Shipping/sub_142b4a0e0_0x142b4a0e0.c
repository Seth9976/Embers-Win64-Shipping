// 函数: sub_142b4a0e0
// 地址: 0x142b4a0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
char rax

if (rcx != 0)
    rax = (*(*rcx + 0x18))(rcx)

if (rcx == 0 || rax == 0)
    int64_t* rcx_1 = *(arg1 + 0x10)
    
    if (rcx_1 != 0)
        rax = (*(*rcx_1 + 0x18))(rcx_1, arg2)
    
    if (rcx_1 == 0 || rax == 0)
        return 0

return 1
