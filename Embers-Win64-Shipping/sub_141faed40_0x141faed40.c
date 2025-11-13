// 函数: sub_141faed40
// 地址: 0x141faed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = data_143dbb1f0:4.d
uint128_t zmm0 = data_143dbb1f0.d
float* r15 = arg4
int64_t var_e8 = 0
char var_e0 = 0
int64_t var_d8 = 0
void** const var_f8 = &data_14328aab8
uint64_t result_1
int128_t* result = result_1
int32_t var_ec = zmm1.d
int32_t var_f0 = zmm0.d
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x1c)
uint128_t var_d0 = *result
int128_t var_b8
void var_98

if (arg5 == 0)
    uint128_t* rax_5 = (*(*arg1 + 0x268))(arg1, &result_1, r15, arg2)
    uint128_t* rax_6 = (*(*arg1 + 0x268))(arg1, &var_98, arg3, arg2)
    var_c0.d = (*rax_6).d
    var_c0:4.d = (*(rax_6 + 4)).d
    var_b8:4.d = (*rax_5).d
    var_b8:8.d = (*(rax_5 + 4)).d
    return var_f8[3](&var_f8, *(arg2 + 0x260))

if (arg5 == 1)
    zmm0.d = float.s(*(arg2 + 0x40))
    uint128_t zmm8 = *arg4
    uint128_t zmm6
    zmm6.d = zmm8.d f- *arg3
    uint128_t zmm9 = *(arg4 + 4)
    uint128_t zmm7
    zmm7.d = zmm9.d f- arg3[1]
    uint128_t zmm10
    zmm10.d = 5f f/ zmm0.d
    zmm1.d = zmm7.d f* zmm7.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm1.d = zmm1.d f+ zmm0.d
    uint128_t result_2
    
    if (zmm1.d f<= 9.99999994e-09f)
        zmm6 = zx.o(0)
        zmm7 = zx.o(0)
    else
        uint128_t zmm5 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
        result_2.d = zmm1.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = result_2.d f* zmm0.d
        zmm0.d = zmm5.d f* (0.5f f- zmm1.d)
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        result_2.d = result_2.d f* zmm1.d
        zmm0.d = zmm5.d f* (0.5f f- result_2.d)
        zmm5.d = zmm5.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm7.d = zmm7.d f* zmm5.d
    
    result_2 = zx.o(*arg3)
    zmm8.d = zmm8.d f- result_2.d
    result_1 = result_2.q
    float zmm4 = result_1:4.d
    zmm9.d = zmm9.d f- zmm4
    zmm8.d = zmm8.d f* zmm6.d
    zmm9.d = zmm9.d f* zmm7.d
    zmm8.d = zmm8.d f+ zmm9.d
    
    if (not(zmm8.d f<= 0f))
        zmm8.d = zmm6.d f* zmm10.d
        zmm9.d = zmm7.d f* zmm10.d
        zmm10.d = zmm8.d f+ zmm8.d
        uint128_t zmm12
        zmm12.d = zmm9.d f+ zmm9.d
        
        do
            int64_t rax = *arg1
            zmm0.d = zmm8.d f+ result_2.d
            zmm1.d = zmm9.d f+ zmm4
            int32_t var_108 = zmm0.d
            int32_t var_104_1 = zmm1.d
            void var_90
            uint128_t* rax_1 = (*(rax + 0x268))(arg1, &var_90, &var_108, arg2, var_108)
            uint128_t* rax_2 = (*(*arg1 + 0x268))(arg1, &var_98, &result_1, arg2)
            var_c0.d = (*rax_2).d
            var_c0:4.d = (*(rax_2 + 4)).d
            var_b8:4.d = (*rax_1).d
            var_b8:8.d = (*(rax_1 + 4)).d
            result = var_f8[3](&var_f8, *(arg2 + 0x260))
            result_2.d = result_1.d.d f+ zmm10.d
            zmm4 = result_1:4.d f+ zmm12.d
            result_1.d = result_2.d
            zmm0.d = r15[1].d f- zmm4
            result_1:4.d = zmm4
            zmm1.d = zmm7.d f* zmm0.d
            zmm1.d = zmm1.d f+ (*r15 f- result_2.d) f* zmm6.d
        while (zmm1.d f> 0f)

return result
