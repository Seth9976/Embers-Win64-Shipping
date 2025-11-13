// 函数: sub_1418e8c10
// 地址: 0x1418e8c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x18)

if (result != 1)
    if (result == 2)
        int64_t rsi_2 = sx.q(modu.dp.d(0:(*(arg2 + 0x68) + 1), *(arg2 + 0x70)))
        *(arg2 + 0x68) = rsi_2.d
        void* rbx_1 = *(arg1 + 0x240)
        
        if (*(rbx_1 + 0x78) != 0)
            sub_1418c86c0(rbx_1, 0, 0)
        
        void* rbx_2 = *(rbx_1 + 0x70)
        data_143efba80(*(rbx_2 + 0x40), 1, *(arg2 + 0x40), zx.q(rsi_2.d))
        *(arg2 + 0x40)
        int64_t var_18_1 = *(*(arg2 + 0x88) + 0x18)
        sub_1418badf0(rbx_2, zx.q(rsi_2.d), 1)
        int64_t rdx_5 = rsi_2 * 2
        *(*(arg2 + 0x78) + (rdx_5 << 3)) = rbx_2
        *(*(arg2 + 0x78) + (rdx_5 << 3) + 8) = *(rbx_2 + 0x98)
        int32_t result_1 = *(arg2 + 0x70)
        result = *(arg2 + 0x6c) + 1
        
        if (result u<= result_1)
            result_1 = result
        
        *(arg2 + 0x6c) = result_1
else if (*(arg1 + 0x448) != 0)
    *(arg2 + 0x38) = 2
    void* rsi_1 = *(arg1 + 0x240)
    
    if (*(rsi_1 + 0x78) != 0)
        sub_1418c86c0(rsi_1, 0, 0)
    
    *(arg2 + 0x28)
    *(*(arg1 + 0x448) + 0x10)
    *(*(rsi_1 + 0x70) + 0x40)
    jump(data_143efba70)

return result
