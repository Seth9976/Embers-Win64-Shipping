// 函数: sub_141083500
// 地址: 0x141083500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result = *arg3

if (result != 0xffff)
    int64_t r14_1 = *arg2
    uint32_t result_1 = zx.d(result)
    void*** rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax = &rdx_2[5]
    
    if (rax u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax = &rdx_2[5]
    
    *(arg1 + 0x30) = rax
    void**** rax_1 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_1 = rdx_2
    *(arg1 + 8) = &rdx_2[1]
    rdx_2[1] = 0
    result = 0x1618
    rdx_2[2] = r14_1
    rdx_2[3].d = result_1
    *rdx_2 = &data_142f11618
    rdx_2[4] = arg4

return result
