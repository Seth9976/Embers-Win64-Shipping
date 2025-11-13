// 函数: sub_142718ca0
// 地址: 0x142718ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*arg2)
int32_t rdx = *(arg1 + 0xe0)
void* result
result.b = test_bit(rdx, rcx)

if (arg3 != result.b)
    int32_t rdx_1
    
    if (arg3 == 0)
        rdx_1 = rdx & not.d(1 << (rcx u% 0x20))
    else
        rdx_1 = rdx | 1 << (rcx u% 0x20)
    
    *(arg1 + 0xe0) = rdx_1
    int64_t* rax = *(arg1 + 0xa8)
    
    if (rax == 0)
        rax = sub_141ee69e0(arg1)
    
    result = sub_1426fbdd0(rax)
    
    if (result != 0)
        return sub_142717480(result, arg1) __tailcall

return result
