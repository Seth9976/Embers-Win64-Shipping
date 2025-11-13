// 函数: sub_1423d52c0
// 地址: 0x1423d52c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0xa40)

if (data_143de5458 != result)
    int64_t (* var_28)(int64_t arg1, int64_t* arg2)
    char arg_8
    
    if (*(arg1 + 0xa4c) == 0)
        arg_8 = 0
        char* arg_10 = &arg_8
        char** var_20_2 = &arg_10
        var_28 = sub_1423d3d50
        sub_140d3ba80(sub_1425be5e0(), &var_28, 1, 0x10, 0)
        
        if (arg_8 != 0)
            double zmm0_1[0x2] = _mm_cvtps_pd((*(arg1 + 0xa48))[0])
            zmm0_1[0] = zmm0_1[0] f+ data_14399f938
            *(arg1 + 0xa48) = _mm_cvtpd_ps(zmm0_1)[0].d
            float zmm6_1 = sub_1423de110()
            
            if (*(arg1 + 0xa4d) == 0)
                if (sub_140cc17f0() != 0 || zmm6_1 f>= *(arg1 + 0xa48) || zmm6_1 <= 0f)
                    sub_140cc11b0(1, 0x3b03126f)
                else if (data_14399fa10((zx.o(0)).d) == 0 && sub_140cd0200(0, 0) != 0)
                    arg_10.b = 0
                    char** var_20_3 = &arg_10
                    var_28 = sub_1423d3d40
                    sub_140d3ba80(sub_1425be5e0(), &var_28, 1, 0x10, 0)
                    *(arg1 + 0xa48) = 0
                    *(arg1 + 0xa4c) = 0
                    *(arg1 + 0xa40) = data_143de5458
            else
                *(arg1 + 0xa4d) = 0
    else if (sub_140cd0200(0, 1) != 0)
        arg_8 = 0
        char* var_20_1 = &arg_8
        var_28 = sub_1423d3d40
        sub_140d3ba80(sub_1425be5e0(), &var_28, 1, 0x10, 0)
        *(arg1 + 0xa4c) = 0
        *(arg1 + 0xa48) = 0
    
    if (*data_143f5b438 s> 0)
        float zmm0_3 = sub_1423de110() + 1f
        *(arg1 + 0xa4c) = 1
        *(arg1 + 0xa48) = zmm0_3
    
    result = data_143de5458
    *(arg1 + 0xa40) = result

return result
