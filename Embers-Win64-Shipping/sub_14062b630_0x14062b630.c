// 函数: sub_14062b630
// 地址: 0x14062b630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_142577430()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4 = sub_1423de540(data_143f5b298, arg1, 0)
            
            if (rax_4 != 0)
                uint32_t rcx_4
                rcx_4.b = (arg3 u>> 0x20).d == 0
                
                if ((rcx_4.b & sub_140b5b8a0(arg3.d, 0)) != 0)
                    sub_140d19010(rax_4, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                void* result
                float zmm6_1[0x4]
                float zmm7_1[0x4]
                float zmm8_1[0x4]
                result, zmm6_1, zmm7_1, zmm8_1 =
                    sub_140d2dfc0(sub_142577430(), rax_4, arg3, 0, 0, 0, 0, 0, 0)
                
                if (result != 0)
                    int32_t var_10_1 = arg4[1].d
                    int64_t var_18 = *arg4
                    sub_141f49c70(result, &var_18, 0, 0, zmm6_1, zmm7_1, zmm8_1, 0)
                    int32_t rax_8 = arg5[1].d
                    var_18 = *arg5
                    int32_t var_10_2 = rax_8
                    sub_141f4a3b0(result, &var_18, 0, 0, 0)
                    sub_141ef14c0(result, rax_4, 0)
                    return result

return nullptr
