// 函数: sub_1417f5580
// 地址: 0x1417f5580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
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
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        int64_t* result = (*(*arg2 + 0x18))(arg2, zx.q(arg3), arg1, 0x1000000, arg6, arg7)
        
        if (result != 0)
            sub_141ef1390(result)
            
            if (arg4 == 0)
                int64_t* rdx_4 = *(arg1 + 0x130)
                
                if (rdx_4 != 0)
                    sub_141f32b40(result, rdx_4, &data_143f3f280, 0)
                else
                    sub_141dd9010(arg1, result)
            
            sub_141f49090(result, arg5, 0, 0, 0)
        
        return result

return 0
