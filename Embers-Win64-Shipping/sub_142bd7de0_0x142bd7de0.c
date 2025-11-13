// 函数: sub_142bd7de0
// 地址: 0x142bd7de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_6 = *(arg1 + 0x18)

if (rax_6 == *(arg1 + 0x10))
    int32_t* rax = *(arg1 + 8)
    
    if (rax != 0 && *rax == 0)
        *rax = 0xa1
    
    return 0

if (*(rax_6 - 4) == 2)
    *(arg1 + 0x18) = rax_6 - 8
    return zx.q(*(rax_6 - 8))

int32_t* rax_2 = *(arg1 + 8)

if (rax_2 != 0 && *rax_2 == 0)
    *rax_2 = 0xa0

return 0
