// 函数: sub_140f76ba0
// 地址: 0x140f76ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)

if (rcx != 0)
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    sub_140f048e0(*(rcx + 0x48), &var_28, arg3)
    void var_40
    sub_140f08ab0(&var_28, &var_40, arg2)
    void var_38
    sub_140f08ab0(&var_28, &var_38, arg2 + arg3)
    int32_t var_48
    int64_t arg_8
    sub_140f01c90(*(*(arg1 + 8) + 0x48), &arg_8, &var_40, 0, var_48, var_40)
    sub_140f01c90(*(*(arg1 + 8) + 0x48), &var_48, &var_38, 0)
    int64_t zmm2 = arg5
    int32_t var_44
    int64_t zmm6_1 = var_44
    bool cond:0_1 = zmm2.d f!= zmm6_1.d
    zmm6_1.d = zmm6_1.d f- zmm2.d
    uint128_t zmm0_1
    
    if (cond:0_1)
        *arg4 = (_mm_unpacklo_ps(zx.o(0), zmm2)).q
        void var_30
        zmm0_1 = *sub_140f00e70(*(*(arg1 + 8) + 0x48), &var_30)
    else
        *arg4 = arg_8
        zmm0_1.d = var_48.d f- arg_8.d
    
    int64_t rcx_9 = var_28
    *arg6 = (_mm_unpacklo_ps(zmm0_1, zmm6_1)).q
    zmm0_1.d = (*arg4).d f+ *(arg1 + 0x2c)
    *arg4 = zmm0_1.d
    int64_t zmm1
    zmm1.d = (*(arg1 + 0x30)).d f+ *(arg4 + 4)
    *(arg4 + 4) = zmm1.d
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
else
    *arg4 = data_143dbb1f0
    *arg6 = data_143dbb1f0

int64_t* result
result.b = 0
return result
