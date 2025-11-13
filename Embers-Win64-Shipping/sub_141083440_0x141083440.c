// 函数: sub_141083440
// 地址: 0x141083440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[1] u> 0)
    void*** r10_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    uint32_t r15_1 = zx.d(*arg3)
    void* rax = &r10_3[5]
    
    if (rax u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        r10_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax = &r10_3[5]
    
    *(arg1 + 0x30) = rax
    void**** rax_1 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_1 = r10_3
    *(arg1 + 8) = &r10_3[1]
    r10_3[1] = 0
    r10_3[3].d = r15_1
    *r10_3 = &data_142da77d8
    r10_3[2] = arg2
    r10_3[4] = arg4

void** const result
result.b = arg3[1] u> 0
return result
