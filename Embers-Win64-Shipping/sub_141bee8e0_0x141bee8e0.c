// 函数: sub_141bee8e0
// 地址: 0x141bee8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x48)

if (rdx != 0)
    *(rdx + 0x2c) = *(arg1 + 0x3c)
    rdx = *(arg1 + 0x48)

uint32_t result = *(arg1 + 0x40)

if (rdx != 0)
    *(rdx + 0x28) = result
    void* rdx_1 = *(arg1 + 0x48)
    
    if (rdx_1 != 0)
        result = zx.d(*(arg1 + 0x38))
        *(rdx_1 + 0x20) = result
        void* rdx_2 = *(arg1 + 0x48)
        
        if (rdx_2 != 0)
            result = zx.d(*(arg1 + 0x39))
            *(rdx_2 + 0x24) = result

return result
