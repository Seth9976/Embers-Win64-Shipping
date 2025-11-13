// 函数: sub_142bd2e70
// 地址: 0x142bd2e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg2)
__builtin_memset(arg3, 0, 0x20)

if (*(*(*(arg1 + 8) + 0xd0) + 0x50) == 0)
    void* rdi_1 = *(arg1 + 0x320)
    
    if (*(rdi_1 + 0x4d8) == 0 || r10.d u> 0xff)
        return 0x12
    
    int16_t i = (**(rdi_1 + 0x10e8))(zx.q(r10.d))
    int32_t rdx_1 = *(rdi_1 + 0x20)
    r10 = 0
    
    if (rdx_1 == 0)
        return 0x12
    
    while (*(*(rdi_1 + 0x4d8) + (r10 << 1)) != i)
        r10 = zx.q(r10.d + 1)
        
        if (r10.d u>= rdx_1)
            return 0x12
    
    if (r10.d s< 0)
        return 0x12

int32_t arg_8
int64_t arg_20
int32_t result = (*(arg1 + 0x380))(*(arg1 + 8), zx.q(r10.d), &arg_20, &arg_8)

if (result != 0)
    return result

int64_t rcx_2 = arg_20
*(arg3 + 0x10) = zx.q(arg_8) + rcx_2
*(arg3 + 8) = rcx_2
*(arg3 + 0x18) = rcx_2
return 0
