// 函数: sub_141df1e90
// 地址: 0x141df1e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = *(arg1 + 0x30)

if (result != 0)
    int32_t rax_1 = *(result + 0xc)
    void* const rax_7
    
    if (rax_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
        void* rax_10 = sub_14245f6d0()
        void* rdx_4 = *(result + 0x10)
        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
        
        if (rax_11.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
            return result
        
        return nullptr

return 0
