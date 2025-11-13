// 函数: sub_141f47ba0
// 地址: 0x141f47ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* result)[0x4] = sub_140d3c6e0(arg1 + 0x194)

if (arg2 != result)
    (*(*arg1 + 0x540))(arg1)
    float zmm0_2[0x4]
    
    if (arg2 == 0)
        int64_t arg_8
        sub_140d3a3a0(&arg_8, nullptr)
        *(arg1 + 0x194) = arg_8
        arg1[0x31] = data_143dbb1f8.q
        result = zx.q(data_143dbb200)
        arg1[0x32].d = result.d
        zmm0_2 = data_14399f720
        *(arg1 + 0xf9) |= 0x10
    else
        sub_140d3a3a0(arg1 + 0x194, arg2)
        int32_t rax_1 = *(arg2 + 0x124)
        arg1[0x31] = *(arg2 + 0x11c)
        arg1[0x32].d = rax_1
        int32_t rax_2 = *(arg2 + 0x130)
        int64_t var_28 = *(arg2 + 0x128)
        int32_t var_20_1 = rax_2
        float var_18[0x4]
        result = sub_140ade170(&var_28, &var_18)
        zmm0_2 = *result
        *(arg1 + 0xf9) &= 0xef
    
    *(arg1 + 0x1b0) = zmm0_2

return result
