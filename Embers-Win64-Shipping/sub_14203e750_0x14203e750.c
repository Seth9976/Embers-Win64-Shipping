// 函数: sub_14203e750
// 地址: 0x14203e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

void* rax = sub_1423de540(data_143f5b298, arg1, 1)

if (rax != 0)
    int64_t* result = sub_1420222d0(arg2, rax, sub_142437e30(rax, 0, 1), arg6, arg7)
    
    if (result != 0)
        sub_141f49960(result, 1)
        sub_141f49980(result, 1)
        sub_141f499a0(result, 1)
        int32_t rax_2 = arg3[1].d
        int64_t var_18 = *arg3
        int32_t var_10_1 = rax_2
        sub_141f48c60(result, &var_18)
        int32_t rax_3 = arg4[1].d
        var_18 = *arg4
        int32_t var_10_2 = rax_3
        sub_141f48ec0(result, &var_18)
        int32_t rax_5 = arg5[1].d
        var_18 = *arg5
        int32_t var_10_3 = rax_5
        sub_141f49070(result, &var_18)
        sub_141ef14c0(result, rax, 0)
        
        if (arg8 != 0)
            sub_142185b40(result, 1)
        
        void*** rax_6 = sub_141f88540()
        void** r8_2 = *rax_6
        r8_2[0xe](rax_6, result, r8_2)
        return result

return nullptr
