// 函数: sub_141ee4f80
// 地址: 0x141ee4f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_6
int64_t zmm0

if ((*(*arg1 + 0x5c0))() == 0)
    zmm0 = data_143dbb1f8.q
    rax_6 = data_143dbb200
else
    int128_t zmm1 = *arg4
    
    if (zmm1.d f!= 0f || 0f f!= *(arg4 + 4) || not(0f f== *(arg4 + 8)))
        zmm1 ^= data_142d3f780
        int64_t rax_2 = *arg1
        int32_t var_18 = (*(arg4 + 4)).d
        int32_t var_14_1 = zmm1.d
        int32_t var_10_1 = 0
        char rax_3 = (*(rax_2 + 0x7a8))(arg1, arg3, &var_18, arg5, var_18, var_10_1)
        char rax_5
        
        if (rax_3 == 0)
            int64_t rax_4 = *arg1
            zmm0.d = var_18.d f* -1f
            zmm1.d = var_14_1.d f* -1f
            var_18 = zmm0.d
            zmm0.d = var_10_1.d f* -1f
            int32_t var_14_2 = zmm1.d
            var_10_1 = zmm0.d
            rax_5 = (*(rax_4 + 0x7a8))(arg1, arg3, &var_18, arg5, var_18, var_10_1)
        
        if (rax_3 == 0 && rax_5 == 0)
            zmm0 = data_143dbb1f8.q
            rax_6 = data_143dbb200
        else
            zmm0 = var_18.q
            rax_6 = var_10_1
    else
        zmm0 = data_143dbb1f8.q
        rax_6 = data_143dbb200

*arg2 = zmm0
arg2[1].d = rax_6
return arg2
