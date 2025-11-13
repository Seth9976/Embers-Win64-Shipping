// 函数: sub_141dcc720
// 地址: 0x141dcc720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    void* rdx_1 = *(arg1 + 0x20)
    
    if (rdx_1 != 0 && ((*(rdx_1 + 8) u>> 0xf).b & 1) == 0)
        int32_t rax_4 = *(rdx_1 + 0xc)
        void* const rax_11
        
        if (rax_4 s>= data_143e1d9b4)
            rax_11 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_4)
            uint32_t rdx_3 = zx.d(temp0_1)
            int32_t rax_6 = temp1_1 + rdx_3
            rax_11 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18
        
        if (((*(rax_11 + 8) u>> 0x1c).b & 1) == 0)
            void* rax_15 = sub_140d226f0(arg1, sub_142527690())
            
            if (rax_15 != 0)
                return *(rax_15 + 0xb8)

return 0
