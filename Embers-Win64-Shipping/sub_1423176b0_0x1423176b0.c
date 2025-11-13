// 函数: sub_1423176b0
// 地址: 0x1423176b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = data_143dbb1f8.q
uint64_t result = zx.q(data_143dbb200)
arg2[1].d = result.d
*arg3 = 0x40000000
uint64_t result_1 = arg1[0x15]

if (result_1 != 0)
label_1423176ff:
    
    if (*(result_1 + 0x1b0) != 0)
        int64_t rdx = *arg1
        result = (*(rdx + 0x990))(arg1, rdx)
        
        if (result.b != 0)
            uint128_t zmm1 = *(arg1 + 0x1d0)
            int64_t* rcx_1 = *(result_1 + 0x1b0)
            uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            int32_t var_28 = zmm1.d
            int32_t var_20_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
            int32_t var_24_1 = zmm0.d
            int32_t arg_8
            void arg_10
            void arg_18
            (*(*rcx_1 + 0x1f8))(rcx_1, &var_28, arg2, &arg_8, &arg_18, &arg_10, var_28, var_20_1)
            uint128_t zmm2 = arg_8
            zmm0.d = zmm2.d f* *arg2
            zmm1.d = zmm2.d f* *(arg2 + 4)
            zmm2.d = zmm2.d f* arg2[1].d
            *arg2 = zmm0.d
            *(arg2 + 4) = zmm1.d
            arg2[1].d = zmm2.d
            int32_t rax_1 = rand()
            int32_t temp0_3
            int32_t result_2
            temp0_3:result_2 = muls.dp.d(0x66666667, rax_1)
            result = zx.q(result_2)
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_1 s% 0x14)).d f* 0.100000001f
            *arg3 = zmm0.d
else
    result = sub_141ee69e0(arg1)
    result_1 = result
    
    if (result != 0)
        goto label_1423176ff

return result
