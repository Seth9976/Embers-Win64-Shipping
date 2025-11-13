// 函数: sub_1417d9930
// 地址: 0x1417d9930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int32_t zmm6_1
int128_t zmm7
result, zmm6_1, zmm7 = sub_1423dde20(data_143f5b298, arg1)

if (result.d != 1)
    int128_t var_38_1 = zmm7
    int64_t rax = sub_142437e30(arg1, 0, 1)
    int64_t* result_1
    result = sub_1424373a0(arg1, &result_1)
    int32_t i_1
    int32_t i = i_1
    
    while (i s>= 0)
        result = result_1
        
        if (i s>= result[1].d)
            break
        
        result = sub_140d3c6e0(*result + (sx.q(i) << 3))
        
        if (result != 0)
            int64_t* rcx_5 = result[0x56]
            
            if (rcx_5 != 0 && result[0x53] != 0)
                int32_t rax_2 = arg2[1].d
                int64_t zmm0_1 = *arg2
                int32_t var_60_1 = rax_2
                int32_t var_50_1 = rax_2
                int32_t rax_3 = *arg4
                int64_t var_68 = zmm0_1
                int64_t var_58 = zmm0_1
                result, zmm6_1 = sub_1424c3150(rcx_5, arg3, rax, arg5, &var_58, &var_68, rax_3, 1, 
                    1, 0, 0, zmm6_1, arg6)
        
        i = i_1 + 1
        i_1 = i

return result
