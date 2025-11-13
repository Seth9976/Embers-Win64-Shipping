// 函数: sub_141d5c770
// 地址: 0x141d5c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0xc8)
void* r8 = nullptr

if (result != 0 && result != arg2)
    int32_t r11_1 = *(result + 0xc)
    int64_t rdi_1 = data_143e1d9a0
    void* rdx_3
    
    if (r11_1 s>= data_143e1d9b4)
        rdx_3 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_1
        result = *(rdi_1 + (sx.q(rax_2 s>> 0x10) << 3))
        rdx_3 = result + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
    
    if (((*(rdx_3 + 8) u>> 0x1e).b & 1) != 0)
        void* rdx_7
        
        if (r11_1 s>= data_143e1d9b4)
            rdx_7 = nullptr
        else
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1)
            uint32_t rdx_5 = zx.d(temp4_1)
            int32_t rax_8 = temp5_1 + rdx_5
            result = *(rdi_1 + (sx.q(rax_8 s>> 0x10) << 3))
            rdx_7 = result + sx.q(zx.d(rax_8.w) - rdx_5) * 0x18
        
        *(rdx_7 + 8) &= 0xbfffffff

*(arg1 + 0xc8) = arg2

if (arg2 != 0)
    result = zx.q(data_143e1d994)
    
    if (*(arg1 + 0xc) s<= result.d)
        result = zx.q(*(arg2 + 0xc))
        
        if (result.d s< data_143e1d9b4)
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(result.d)
            uint32_t rdx_9 = zx.d(temp2_1)
            int32_t rax_13 = temp3_1 + rdx_9
            result = data_143e1d9a0
            r8 = *(result + (sx.q(rax_13 s>> 0x10) << 3)) + sx.q(zx.d(rax_13.w) - rdx_9) * 0x18
        
        *(r8 + 8) |= 0x40000000

return result
