// 函数: sub_141dbf290
// 地址: 0x141dbf290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = arg2.b
uint64_t result
result.b = *(arg1 + 0x5c) & 0x60

if (result.b != 0x40)
    int32_t rax = *(arg1 + 0xc)
    void* rsi_1 = nullptr
    void* const rax_7
    
    if (rax s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_1
        arg2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + (arg2 << 3)
    
    result = zx.q(*(rax_7 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        result = (*(*arg1 + 0x150))(arg1, arg2)
        
        if (result != 0)
            int32_t rbx_1 = data_143f38be8
            data_143f38be8 = rbx_1 + 1
            *(arg1 + 0x5b) &= 0xbf
            *(arg1 + 0x5c) &= 0xbf
            int64_t rdx_2 = *arg1
            *(arg1 + 0x5c) |= 0x20
            *(arg1 + 0x5b) |= r14 << 6
            (*(rdx_2 + 0x328))(arg1, rdx_2)
            data_143f38be8 = rbx_1
            
            if ((*(arg1 + 0x5c) & 0x10) != 0)
                sub_1420e0c80(result, arg1, 1, 1)
            
            int32_t rax_10 = *(arg1 + 0xc)
            
            if (rax_10 s< data_143e1d9b4)
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_10)
                uint32_t rdx_6 = zx.d(temp2_1)
                int32_t rax_12 = temp3_1 + rdx_6
                rsi_1 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_12.w) - rdx_6) * 0x18
            
            result = zx.q(*(rsi_1 + 8) u>> 0x1d)
            
            if ((result.b & 1) == 0)
                uint64_t rdx_3
                
                if (r14 != 0)
                    rdx_3.b = *(arg1 + 0x5a) u>> 3
                    rdx_3.b &= 1
                    
                    if (rdx_3.b != 0)
                        result = sub_141ddbe90(arg1, rdx_3.b)
                    else
                        result = zx.q(*(arg1 + 0x5d))
                        char rcx_13
                        
                        if (result.b != 0)
                            rcx_13 = result.b
                        else
                            result = zx.q(*(arg1 + 0x5e))
                            rcx_13 = 1
                            
                            if (result.b != 0)
                                rcx_13 = result.b
                        
                        uint32_t rcx_14 = zx.d(rcx_13)
                        
                        if (rcx_14 == 2)
                            result = arg1[0x26]
                            
                            if (result != 0 && *(result + 0x14f) == 2)
                                result = sub_141ddbe90(arg1, 0.b)
                        else if (rcx_14 != 3)
                            result = sub_141ddbe90(arg1, 0.b)
                else
                    rdx_3.b = 1
                    result = sub_141ddbe90(arg1, rdx_3.b)
            
            *(arg1 + 0x5b) &= 0xbf

return result
