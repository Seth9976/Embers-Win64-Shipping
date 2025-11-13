// 函数: sub_141dd8c20
// 地址: 0x141dd8c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xec) == 0 & sub_140b5b8a0(arg1[0x1d].d, 0)) == 0)
    int32_t rbx_1 = *(arg1 + 0xec)
    sub_140b5b8a0(arg1[0x1d].d, 0x11a)
    int32_t rcx_1
    rcx_1.b = rbx_1 == 0

uint64_t result = sub_141dcdc50(arg1)

if (result.d != 3 && (*(arg1 + 0x5c) & 8) == 0)
    int32_t rax_1 = *(arg1 + 0xc)
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
    
    result = zx.q(*(rax_8 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        void* rax_11 = (*(*arg1 + 0x150))(arg1)
        result = sub_1423dcd80(data_143f5b298, rax_11, arg1[0x1d])
        uint64_t result_1 = result
        
        if (result != 0)
            uint32_t r8_2 = zx.d(*(arg1 + 0xf1))
            *(arg1 + 0xf1) = arg2.b
            
            if (r8_2 != arg2)
                result = sub_14216efb0(result, arg1)
            
            if (arg2 s<= 1)
                sub_14242c0c0(rax_11, arg1)
                result = sub_142167b90(result_1, arg1)
                void* rcx_12 = *(rax_11 + 0xf0)
                
                if (rcx_12 != 0 && rcx_12 != result_1)
                    return sub_142167b90(rcx_12, arg1)

return result
