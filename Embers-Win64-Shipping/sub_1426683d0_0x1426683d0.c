// 函数: sub_1426683d0
// 地址: 0x1426683d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3c6e0(arg1 + 0xf8)

if (arg2 != result)
    void* rdi_1 = nullptr
    
    if (sub_140d3e110(arg1 + 0xf8) != 0)
        int32_t rax_2 = *(sub_140d3c6e0(arg1 + 0xf8) + 0xc)
        void* const rax_9
        
        if (rax_2 s>= data_143e1d9b4)
            rax_9 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_2)
            uint32_t rdx_1 = zx.d(temp0_1)
            int32_t rax_4 = temp1_1 + rdx_1
            rax_9 =
                *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18
        
        *(rax_9 + 8) &= 0xbfffffff
    
    result = sub_140d3a3a0(arg1 + 0xf8, arg2)
    
    if (arg2 != 0)
        result = zx.q(*(sub_140d3c6e0(arg1 + 0xf8) + 0xc))
        
        if (result.d s< data_143e1d9b4)
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(result.d)
            uint32_t rdx_5 = zx.d(temp2_1)
            int32_t rax_12 = temp3_1 + rdx_5
            result = data_143e1d9a0
            rdi_1 = *(result + (sx.q(rax_12 s>> 0x10) << 3)) + sx.q(zx.d(rax_12.w) - rdx_5) * 0x18
        
        *(rdi_1 + 8) |= 0x40000000

return result
