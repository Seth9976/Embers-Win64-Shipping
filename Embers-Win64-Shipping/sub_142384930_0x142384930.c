// 函数: sub_142384930
// 地址: 0x142384930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int32_t rax_1 = *(arg2 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0 && (*(arg2 + 8) & 0x18000) == 0)
        *(arg2 + 0x208) |= 0x20
        uint64_t result = zx.q(*(arg2 + 0x208))
        
        if ((result.b & 0x40) == 0)
            result.b |= 0x40
            *(arg2 + 0x208) = result.b
            int64_t rsi_1 = sx.q(*(arg1 + 0x40))
            int32_t rax_10 = (rsi_1 + 1).d
            *(arg1 + 0x40) = rax_10
            
            if (rax_10 s> *(arg1 + 0x44))
                sub_1405a4d70(arg1 + 0x38)
            
            *(*(arg1 + 0x38) + (rsi_1 << 3)) = arg2
            *(arg2 + 0x208) |= 0x10
        
        result.b = 2
        return result

return 0
