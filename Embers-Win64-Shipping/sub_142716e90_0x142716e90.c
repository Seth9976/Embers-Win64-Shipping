// 函数: sub_142716e90
// 地址: 0x142716e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_78
(*(*(arg1 + 0x258) + 0x10))(arg1 + 0x258, &var_78)
uint128_t zmm6
zmm6.d = (*arg3).d f- var_78
int32_t var_74
uint128_t zmm7
zmm7.d = (*(arg3 + 4)).d f- var_74
int32_t var_70
uint128_t zmm8
zmm8.d = (*(arg3 + 8)).d f- var_70
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
uint128_t zmm1
zmm1.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
int32_t var_88
uint128_t zmm3
uint128_t zmm5_1

if (not(zmm2.d f<= 100f))
    if (zmm2.d f== 1f)
        goto label_142716fc2
    
    int32_t var_80_1
    
    if (zmm2.d f>= 9.99999994e-09f)
        zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
        zmm3.d = zmm2.d f* 0.5f
        zmm0.d = zmm5_1.d f* zmm5_1.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5_1.d f* zmm2.d
        zmm5_1.d = zmm5_1.d f+ zmm0.d
        zmm1.d = zmm5_1.d f* zmm5_1.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
        zmm5_1.d = zmm5_1.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5_1.d
        zmm7.d = zmm7.d f* zmm5_1.d
        zmm8.d = zmm8.d f* zmm5_1.d
    label_142716fc2:
        var_80_1 = zmm8.d
        int32_t var_84_2 = zmm7.d
        var_88 = zmm6.d
    else
        zmm1 = data_143dbb1fc
        var_88 = data_143dbb1f8.d
        var_80_1 = data_143dbb200.d
        int32_t var_84_1 = zmm1.d
    
    *(arg1 + 0x1f8) = var_88.q
    *(arg1 + 0x200) = var_80_1

uint64_t result = *(arg1 + 0x260)

if (result == 0 || *(result + 0x168) != 3)
    char rax_2 = *(arg1 + 0x274)
    uint64_t var_68
    
    if ((rax_2 & 4) == 0)
        if ((rax_2 & 2) != 0 || arg4 != 0)
            zmm7 = *(arg2 + 4)
            zmm6 = *arg2
            zmm8 = arg2[1].d
            zmm2.d = zmm6.d f* zmm6.d
            zmm0.d = zmm7.d f* zmm7.d
            zmm1.d = zmm8.d f* zmm8.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
        
        uint64_t* rax_10
        
        if (((rax_2 & 2) == 0 && arg4 == 0) || zmm2.d f<= 9.99999975e-05f)
            int32_t var_60_3 = *(arg1 + 0x200)
            rax_10 = &var_68
            var_68 = *(arg1 + 0x1f8)
        else if (not(zmm2.d f!= 1f))
            int32_t var_80_5 = arg2[1].d
            rax_10 = &var_88
            var_88.q = *arg2
        else if (zmm2.d f>= 9.99999994e-09f)
            rax_10 = &var_88
            zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            zmm3.d = zmm2.d f* 0.5f
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = zmm3.d f* zmm0.d
            zmm2.d = 0.5f f- zmm1.d
            zmm0.d = zmm5_1.d f* zmm2.d
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm1.d = zmm5_1.d f* zmm5_1.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm6.d = zmm6.d f* zmm5_1.d
            zmm7.d = zmm7.d f* zmm5_1.d
            zmm8.d = zmm8.d f* zmm5_1.d
            var_88 = zmm6.d
            int32_t var_84_7 = zmm7.d
            int32_t var_80_7 = zmm8.d
        else
            rax_10 = &var_88
            zmm1 = data_143dbb1fc
            var_88 = data_143dbb1f8.d
            int32_t var_80_6 = data_143dbb200.d
            int32_t var_84_6 = zmm1.d
        
        zmm0 = zx.o(*rax_10)
        result = zx.q(rax_10[1].d)
    else
        int64_t* rax_7
        
        if (sub_140d3e110(arg1 + 0x138) == 0)
            int64_t var_58[0x2]
            sub_141e912d0(arg1 + 0x148, &var_58)
            rax_7 = &var_58
        else
            void* rcx_3 = *(sub_140d3c6e0(arg1 + 0x138) + 0x130)
            int32_t var_80_2
            
            if (rcx_3 == 0)
                var_88.q = data_143dbb1f8.q
                var_80_2 = data_143dbb200
            else
                zmm1 = *(rcx_3 + 0x1d0)
                var_88 = zmm1.d
                zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                var_80_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                int32_t var_84_3 = zmm0.d
            
            int32_t var_60_1 = var_80_2
            rax_7 = &var_68
            var_68 = var_88.q
        
        zmm0 = zx.o(*rax_7)
        int32_t rax_8 = rax_7[1].d
        zmm6.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f- var_74
        zmm7.d = zmm0.d f- var_78
        zmm8.d = rax_8.d f- var_70
        zmm2.d = zmm6.d f* zmm6.d
        zmm0.d = zmm7.d f* zmm7.d
        zmm1.d = zmm8.d f* zmm8.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (zmm2.d f== 1f)
            goto label_14271719b
        
        if (zmm2.d f>= 9.99999994e-09f)
            zmm3.d = zmm2.d
            zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = zmm3.d f* zmm0.d
            zmm2.d = 0.5f f- zmm1.d
            zmm0.d = zmm5_1.d f* zmm2.d
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm1.d = zmm5_1.d f* zmm5_1.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm7.d = zmm7.d f* zmm5_1.d
            zmm6.d = zmm6.d f* zmm5_1.d
            zmm8.d = zmm8.d f* zmm5_1.d
        label_14271719b:
            result = zx.q(zmm8.d)
            int32_t var_84_5 = zmm6.d
            var_88 = zmm7.d
            zmm0 = zx.o(var_88.q)
        else
            zmm1 = data_143dbb1fc
            var_88 = data_143dbb1f8.d
            result = zx.q(data_143dbb200.d)
            int32_t var_84_4 = zmm1.d
            zmm0 = zx.o(var_88.q)
    *(arg1 + 0x268) = zmm0.q
    *(arg1 + 0x270) = result.d

return result
