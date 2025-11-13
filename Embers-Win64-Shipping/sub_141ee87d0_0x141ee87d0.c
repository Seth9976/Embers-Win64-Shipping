// 函数: sub_141ee87d0
// 地址: 0x141ee87d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[0x5e].d
char result = rbx.b & 3
uint128_t zmm10 = arg3.o

if (result == 3)
    int32_t var_120_1 = 0
    int512_t zmm1
    zmm1.o = arg3.o
    zmm1.d = zmm1.d f* arg2[1]
    float var_128 = arg3.d * *arg2
    int32_t var_124_1 = zmm1.d
    char result_1
    memset(&result_1, 0, 0x88)
    int32_t var_e0_1 = 0x3f800000
    uint64_t var_108
    (*(*arg1 + 0x860))(arg1, &var_108, &var_128, arg1 + 0x2fc, (rbx u>> 2).b & 1)
    uint128_t zmm0_1 = *(arg1[0x16] + 0x1c0)
    uint8_t var_138_1
    var_138_1.q = &result_1
    uint128_t var_f8 = zmm0_1
    sub_141f231f0(arg1, &var_108, &var_f8, 1, zmm0_1.q, zmm1, arg3, var_138_1, 0)
    result = result_1
    void var_c0
    
    if ((result & 2) != 0)
        arg3.o = zx.o(0)
        (*(*arg1 + 0x458))(arg1, &result_1, arg3, &data_143dbb1f8)
        var_138_1.q = &result_1
        arg3.o = 0x3f800000
        result = (*(*arg1 + 0x498))(arg1, &var_128, arg3, &var_c0, var_138_1, 1)
        
        if ((result_1 & 2) != 0)
            return (*(*arg1 + 0x870))(arg1, &result_1)
    else if ((result & 1) != 0)
        uint128_t zmm8 = var_e0_1
        int32_t var_118
        int32_t var_b8
        uint128_t zmm0_2
        
        if (not(zmm8.d f<= 0f) && not(var_b8.d f<= 9.99999975e-05f))
            if ((*(*arg1 + 0x820))(arg1, &result_1) == 0)
                result = result_1
            else
                zmm1.o = var_124_1
                int64_t rax_8 = *arg1
                var_138_1 = 0
                uint128_t zmm6
                zmm6.d = 1f f- zmm8.d
                zmm0_2.d = var_128.d f* zmm6.d
                zmm1.d = zmm1.d f* zmm6.d
                var_118 = zmm0_2.d
                zmm0_2.d = var_120_1.d f* zmm6.d
                int32_t var_114_1 = zmm1.d
                int32_t var_110_1 = zmm0_2.d
                int64_t* rax_9 = (*(rax_8 + 0x860))(arg1, &var_f8, &var_118, &result_1, 0)
                var_108 = *rax_9
                int32_t var_100_1 = rax_9[1].d
                zmm0_2.d = zmm6.d f* zmm10.d
                zmm10 = zmm0_2
                zmm0_2 = *(arg1[0x16] + 0x1c0)
                var_f8 = zmm0_2
                var_138_1.q = &result_1
                sub_141f231f0(arg1, &var_108, &var_f8, 1, zmm0_2.q, zmm1, arg3, var_138_1, 0)
                zmm6.d = zmm6.d f* var_e0_1
                result = result_1
                zmm6.d = zmm6.d f+ zmm8.d
                
                if (zmm6.d f>= 0f)
                    zmm8 = _mm_min_ss(zmm6.d, 0x3f800000)
                else
                    zmm8 = zx.o(0)
        
        if ((result & 1) != 0 && (result & 2) == 0)
            char rax_13 = (*(*arg1 + 0x6e0))(arg1, &result_1)
            int64_t rax_15
            void* rbx_2
            int64_t rbx_3
            
            if (rax_13 == 0)
                rbx_2 = *(arg1[0x29] + 0x298)
                
                if (rbx_2 != 0)
                    rbx_3 = *(rbx_2 + 0xa0)
                    void var_80
                    rax_15 = sub_140d3c6e0(&var_80)
            
            int128_t zmm7
            
            if (rax_13 != 0 || (rbx_2 != 0 && rbx_3 == rax_15))
                zmm7.d = 1f f- zmm8.d
                zmm1.o = var_124_1
                int64_t rax_18 = *arg1
                var_f8:8.d = 0xbf800000
                zmm0_2.d = var_128.d f* zmm7.d
                var_f8.q = 0
                zmm1.d = zmm1.d f* zmm7.d
                var_138_1.q = arg4
                var_118 = zmm0_2.d
                zmm0_2.d = var_120_1.d f* zmm7.d
                int32_t var_114_2 = zmm1.d
                int32_t var_110_2 = zmm0_2.d
                
                if ((*(rax_18 + 0x6e8))(arg1, &var_f8, &var_118, &result_1, var_138_1, 0) == 0)
                    arg3.o = zmm10
                    (*(*arg1 + 0x458))(arg1, &result_1, arg3, &var_108)
                label_141ee8ba5:
                    var_138_1.q = &result_1
                    arg3.o = zmm7
                    return (*(*arg1 + 0x498))(arg1, &var_128, arg3, &var_c0, var_138_1, 1)
                
                result = *(arg1 + 0x387)
                *(arg1 + 0x387) = (((not.b(result) << 5 | result) ^ result) & 0x20) ^ result
            else
                void var_78
                result = sub_140d3e110(&var_78)
                
                if (result != 0)
                    int64_t* rax_16 = sub_140d3c6e0(&var_78)
                    int64_t r8_5 = *rax_16
                    result = (*(r8_5 + 0x850))(rax_16, arg1[0x29], r8_5)
                    
                    if (result == 0)
                        arg3.o = zmm10
                        (*(*arg1 + 0x458))(arg1, &result_1, arg3, &var_108, var_138_1, 0)
                        zmm7.d = 1f f- zmm8.d
                        goto label_141ee8ba5

return result
