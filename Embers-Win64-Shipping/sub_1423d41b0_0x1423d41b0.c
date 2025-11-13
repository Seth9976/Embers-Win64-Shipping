// 函数: sub_1423d41b0
// 地址: 0x1423d41b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x1c0) = 0

if (*(arg2 + 0x1c4) != 0)
    sub_140638c50(arg2 + 0x1b8, 0)

*(arg2 + 0x1d0) = 0

if (*(arg2 + 0x1d4) != 0)
    sub_1405c5570(arg2 + 0x1c8, 0)

uint64_t result = &data_142d40450

if (*(arg2 + 0x1d8) != &data_142d40450)
    int32_t rdx = 0
    *(arg2 + 0x1e0) = 0
    
    if (*(arg2 + 0x1e4) != 0)
        result = sub_1405947f0(arg2 + 0x1d8, 0)
        rdx = *(arg2 + 0x1e0)
    
    *(arg2 + 0x1e0) = rdx
    
    if (rdx s> *(arg2 + 0x1e4))
        result = sub_140594770(arg2 + 0x1d8)

*(arg2 + 0x1e8) &= 0xfffffffe
void* rcx_4 = *(arg2 + 0x278)

if (rcx_4 != 0)
    *(rcx_4 + 0x588) = 0
    
    if (*(rcx_4 + 0x58c) != 0)
        return sub_140638c50(rcx_4 + 0x580, 0)

return result
