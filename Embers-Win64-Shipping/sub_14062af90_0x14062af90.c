// 函数: sub_14062af90
// 地址: 0x14062af90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *arg2
int128_t zmm9 = *arg4
int128_t* result

if (zmm7.d f!= zmm9.d || (*(arg4 + 4)).d f!= *(arg2 + 4) || (*(arg4 + 8)).d f!= *(arg2 + 8)
        || (*(arg4 + 0xc)).d f!= *(arg2 + 0xc))
    int64_t rcx = data_143f5b298
    int32_t arg_10 = 0x3f800000
    int32_t arg_14 = 0x3f800000
    void* rax
    int128_t zmm6_1
    rax, zmm6_1 = sub_1423de540(rcx, arg1, 2)
    
    if (rax != 0 && sub_14243ade0(rax) != 0)
        void* rax_2 = sub_142436920(rax)
        
        if (rax_2 != 0)
            sub_14202bf60(rax_2, &arg_10)
    
    int128_t zmm8 = arg_14
    int128_t zmm10 = arg_10
    int128_t var_18_1 = zmm6_1
    int128_t var_68_1 = *arg3
    int128_t zmm0_1
    
    if (not(zmm7.d f!= 0f))
        zmm0_1 = *(arg2 + 4)
    
    int128_t zmm3
    float zmm4_1
    int128_t zmm5_1
    
    if (zmm7.d f!= 0f || zmm0_1.d f!= 0f)
        zmm0_1 = *(arg2 + 4)
        zmm4_1 = *(arg2 + 8)
    label_14062b138:
        zmm3 = *arg3
        float zmm2_1 = *(arg3 + 4)
        zmm6_1.d = zmm7.d f* zmm10.d
        zmm5_1.d = zmm0_1.d f* zmm8.d
        zmm6_1.d = zmm6_1.d f+ zmm3.d
        zmm5_1.d = zmm5_1.d f+ zmm2_1
        var_68_1.d = zmm6_1.d
        var_68_1:4.d = zmm5_1.d
        
        if (zmm7.d f== zmm4_1)
            zmm4_1 = var_68_1:8.d
        else
            zmm3.d = zmm3.d f+ *(arg3 + 8)
            zmm4_1 = zmm4_1 f* zmm10.d f- zmm3.d
            var_68_1:8.d = zmm4_1
        
        zmm3 = *(arg2 + 0xc)
        
        if (zmm0_1.d f== zmm3.d)
            zmm3 = var_68_1:0xc.d
        else
            zmm3.d = zmm3.d f* zmm8.d
            zmm3.d = zmm3.d f- (zmm2_1 f+ *(arg3 + 0xc))
            var_68_1:0xc.d = zmm3.d
        
        if (zmm9.d f!= 0f || 0f f!= *(arg4 + 4) || 0f f!= *(arg4 + 8) || 0f f!= *(arg4 + 0xc))
            goto label_14062b0d5
        
        result = arg5
        *result = var_68_1
    else
        zmm4_1 = *(arg2 + 8)
        
        if (zmm4_1 != 0f || 0f f!= *(arg2 + 0xc))
            goto label_14062b138
        
        zmm3 = var_68_1:0xc.d
        zmm4_1 = var_68_1:8.d
        zmm5_1 = var_68_1:4.d
        zmm6_1 = var_68_1.d
    label_14062b0d5:
        result = arg5
        zmm7 = *(arg4 + 4)
        zmm0_1.d = zmm9.d f* zmm10.d
        int32_t zmm1_1 = zmm6_1.d f- zmm0_1.d
        zmm0_1.d = zmm5_1.d f- zmm7.d f* zmm8.d
        *result = zmm1_1
        zmm1_1 = *(arg4 + 8)
        *(result + 4) = zmm0_1.d
        
        if (zmm9.d f== zmm1_1)
            zmm1_1 = zmm4_1
        else
            zmm1_1 = zmm1_1 f* zmm10.d f- (zmm4_1 f+ zmm6_1.d)
        
        zmm0_1 = *(arg4 + 0xc)
        *(result + 8) = zmm1_1
        
        if (zmm7.d f== zmm0_1.d)
            zmm0_1 = zmm3
        else
            zmm3.d = zmm3.d f+ zmm5_1.d
            zmm0_1.d = zmm0_1.d f* zmm8.d
            zmm0_1.d = zmm0_1.d f- zmm3.d
        
        *(result + 0xc) = zmm0_1.d
else
    result = arg5
    *result = *arg3

return result
