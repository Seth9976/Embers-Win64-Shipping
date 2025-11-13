// 函数: sub_14083e9d0
// 地址: 0x14083e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int64_t rax = sub_1423de540(data_143f5b298, arg1, 1)

if (rax != 0)
    int64_t var_28
    
    if (arg9 == 0)
    label_14083ea7d:
        void* result = sub_1408229d0(arg2, rax, sub_142437e30(rax, 0, 1), arg6, arg8)
        
        if (result == 0)
            return result
        
        sub_141ef14c0(result, rax, 0)
        sub_141f47470(result, 1, 1, 1)
        int32_t rax_5 = arg4[1].d
        var_28 = *arg4
        int32_t var_20_2 = rax_5
        int32_t rax_6 = arg3[1].d
        int64_t var_18 = *arg3
        int32_t var_10_1 = rax_6
        sub_141f4a260(result, &var_18, &var_28, 0, 0, 0)
        int32_t rax_8 = arg5[1].d
        var_18 = *arg5
        int32_t var_10_2 = rax_8
        sub_141f48ee0(result, &var_18)
        
        if (arg7 != 0)
            int64_t rdx_6
            rdx_6.b = 1
            (*(*result + 0x268))(result, rdx_6)
        
        return result
    
    int64_t* rax_1
    char r9
    rax_1, r9 = sub_140865dd0(rax)
    int32_t var_20_1 = arg3[1].d
    var_28 = *arg3
    
    if (sub_140869770(rax_1, arg2, &var_28, r9) == 0)
        goto label_14083ea7d

return nullptr
