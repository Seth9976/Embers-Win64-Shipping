// 函数: sub_14083eb70
// 地址: 0x14083eb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg2 != 0)
    int64_t var_28
    
    if (arg10 == 0)
    label_14083ec0f:
        int64_t rax_4 = arg2[0x15]
        int64_t r14_1 = arg2[0x14]
        
        if (rax_4 == 0)
            rax_4 = sub_141ee69e0(arg2)
        
        void* result = sub_1408229d0(arg1, rax_4, r14_1, arg7, arg9)
        
        if (result == 0)
            return result
        
        void* rax_5 = arg2[0x15]
        
        if (rax_5 == 0)
            rax_5 = sub_141ee69e0(arg2)
        
        sub_141ef14c0(result, rax_5, 0)
        sub_141f32b40(result, arg2, &data_143f3f280, arg3)
        int64_t* result_1 = result
        int64_t zmm0_1 = *arg5
        int32_t rax_7 = arg5[1].d
        int64_t var_18
        
        if (arg6 != 1)
            var_18 = zmm0_1
            int32_t var_10_3 = rax_7
            int32_t rax_9 = arg4[1].d
            var_28 = *arg4
            int32_t var_20_3 = rax_9
            sub_141f48a10(result_1, &var_28, &var_18, 0, 0, 0)
        else
            var_28 = zmm0_1
            int32_t var_20_2 = rax_7
            int32_t rax_8 = arg4[1].d
            var_18 = *arg4
            int32_t var_10_2 = rax_8
            sub_141f4a260(result_1, &var_18, &var_28, 0, 0, 0)
        
        int32_t var_20_4 = 0x3f800000
        var_18 = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
        int32_t var_10_4 = 0x3f800000
        sub_141f48ee0(result, &var_18)
        
        if (arg8 != 0)
            (*(*result + 0x268))(result, 0)
        
        return result
    
    void* rax_1 = arg2[0x15]
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg2)
    
    int64_t* rax_2
    char r9
    rax_2, r9 = sub_140865dd0(rax_1)
    float zmm2[0x4] = *(arg2 + 0x1d0)
    float var_20_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    var_28 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    
    if (sub_140869770(rax_2, arg1, &var_28, r9) == 0)
        goto label_14083ec0f

return nullptr
