// 函数: sub_14214b6b0
// 地址: 0x14214b6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x58)
int64_t result = 0

if (rdx != 0)
    result = *(rdx + 0x140)

if (rdx == 0 || result == 0)
    int64_t* rcx = *(arg1 + 0x98)
    
    if (rcx != 0)
        jump(*(*rcx + 0x150))

return result
