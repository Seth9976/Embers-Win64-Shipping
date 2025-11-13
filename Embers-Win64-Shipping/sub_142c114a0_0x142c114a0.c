// 函数: sub_142c114a0
// 地址: 0x142c114a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
sub_142c115f0(arg1 + 0x20)
*(arg1 + 0x38) = 0
int64_t rax_2 = *(arg2 + 8)
*(arg1 + 0x50) = *(arg2 + 0x10)
*(arg1 + 0x48) = rax_2
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x69) = 1
*(arg1 + 0x6c) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
uint32_t result = sub_142c0c690(arg1 + 0x78)
*(arg1 + 0x98) = arg3
int32_t rdx = 0x8000
uint32_t rcx_9

if (arg3 != 0)
    result = zx.d(arg3[3])
    rcx_9 = (((((zx.d(*arg3) << 8) + zx.d(arg3[1])) << 8) + zx.d(arg3[2])) << 8) + result

if (arg3 == 0 || rcx_9 u< 0x4d8)
    *(arg1 + 0x90) = 0x6b
else
    result = 0x8000
    
    if (rcx_9 u< 0x846c)
        result = 0x46b
    
    *(arg1 + 0x90) = result

*(arg1 + 0xa8) = arg4
uint32_t rcx_16

if (arg4 != 0)
    result = zx.d(arg4[3])
    rcx_16 = (((((zx.d(*arg4) << 8) + zx.d(arg4[1])) << 8) + zx.d(arg4[2])) << 8) + result

if (arg4 == 0 || rcx_16 u< 0x4d8)
    *(arg1 + 0xa0) = 0x6b
else
    if (rcx_16 u< 0x846c)
        rdx = 0x46b
    
    *(arg1 + 0xa0) = rdx

return result
