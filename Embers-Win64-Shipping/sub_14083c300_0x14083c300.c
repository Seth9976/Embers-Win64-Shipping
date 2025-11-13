// 函数: sub_14083c300
// 地址: 0x14083c300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result = *arg3

if (result != 0xffff)
    int64_t rsi_1 = *arg4
    
    if (rsi_1 != 0)
        void*** rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        uint32_t result_1 = zx.d(result)
        void* rax = &rcx_2[5]
        
        if (rax u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax = &rcx_2[5]
        
        *(arg1 + 0x30) = rax
        void**** rax_1 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_1 = rcx_2
        *(arg1 + 8) = &rcx_2[1]
        rcx_2[1] = 0
        result = 0x77a8
        rcx_2[3].d = result_1
        *rcx_2 = &data_142da77a8
        rcx_2[2] = arg2
        rcx_2[4] = rsi_1

return result
