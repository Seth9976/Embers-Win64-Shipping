// 函数: sub_141083370
// 地址: 0x141083370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141083440(arg2, *arg3, &arg1[2], arg5)

if (result == 0)
    int64_t rsi_1 = *arg3
    
    if (arg1[1] u> 0)
        uint32_t rbp_1 = zx.d(*arg1)
        void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax = &rcx_3[5]
        
        if (rax u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax = &rcx_3[5]
        
        *(arg2 + 0x30) = rax
        void**** rax_1 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_1 = rcx_3
        *(arg2 + 8) = &rcx_3[1]
        rcx_3[1] = 0
        result = -0x48
        rcx_3[3].d = rbp_1
        *rcx_3 = &data_142da77b8
        rcx_3[2] = rsi_1
        rcx_3[4] = arg4

return result
