// 函数: sub_1422214a0
// 地址: 0x1422214a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
uint32_t result = sub_141a995e0(arg2)

if (result.b == 0)
    result = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1 + 0xf0)
    int64_t (* var_48)(int64_t* arg1, int64_t* arg2)
    int64_t (* var_38)(int64_t* arg1, int64_t* arg2)
    char* var_28
    
    if (result.b == 0)
        char* rbx_1 = *(arg1 + 0xa0)
        
        if (rbx_1 != 0)
            var_48 = arg1
            int64_t (** var_20_2)(int64_t* arg1, int64_t* arg2) = &var_48
            char var_58 = 0
            char* var_18_2 = &var_58
            var_28 = rbx_1
            char** var_30_2 = &var_28
            var_38 = j_sub_14220d610
            sub_14226a4e0(&rbx_1[0xf0], &var_38)
            sub_1422272c0(rbx_1)
            return sub_142227c50(rbx_1, arg1, arg2)
    else
        result = sub_141a995e0(arg2)
        
        if (result.b == 0)
            float zmm1_1[0x4] = *arg2
            float temp0_1[0x4] = _mm_mul_ps(zmm1_1, zmm1_1)
            float temp0_3[0x4] = _mm_add_ps(temp0_1, _mm_shuffle_ps(temp0_1, temp0_1, 0x4e))
            float temp0_5[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x39), temp0_3)
            float temp0_6[0x4] = _mm_sub_ps(data_143f51030, temp0_5)
            result = _mm_movemask_ps(_mm_cmpeq_ps(data_143f51120, 
                __andps_xmmxud_memxud(temp0_6, data_143f51130), 1))
            
            if (result == 0)
                int64_t var_50 = sub_14226c380(arg1 + 0xf0)
                result = sub_1422714e0(arg1 + 0xf0)
                
                if (result.b == 0)
                    if (var_50 != 0)
                        var_48 = arg2
                        int64_t (** var_30_1)(int64_t* arg1, int64_t* arg2) = &var_48
                        var_38 = sub_142212430
                        return sub_14226a4e0(arg1 + 0xf0, &var_38)
                else if (var_50 != 0)
                    int64_t (* var_18_1)(int64_t* arg1, int64_t* arg2) = arg1
                    var_28 = &arg_18
                    int128_t* var_10_1 = arg2
                    int64_t* var_20_1 = &var_50
                    char** var_40_1 = &var_28
                    var_48 = j__Cnd_wait
                    return sub_14226a4e0(arg1 + 0xf0, &var_48)

return result
