// 函数: sub_14117ec10
// 地址: 0x14117ec10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1] u> 0)
    void* rsi_1 = *arg1
    int64_t r14_1 = arg1[1]
    uint32_t r15_1 = zx.d(*arg2)
    void*** rdx_2 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rdx_2[5]
    
    if (rax_1 u> *(rsi_1 + 0x38))
        sub_140b0e3d0(rsi_1 + 0x30, 0x30)
        rdx_2 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rdx_2[5]
    
    *(rsi_1 + 0x30) = rax_1
    void**** rax_2 = *(rsi_1 + 8)
    *(rsi_1 + 0x14) += 1
    *rax_2 = rdx_2
    *(rsi_1 + 8) = &rdx_2[1]
    rdx_2[1] = 0
    rdx_2[2] = r14_1
    rdx_2[3].d = r15_1
    *rdx_2 = &data_142da77b8
    rdx_2[4] = arg3

return arg1
