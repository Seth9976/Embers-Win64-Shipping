// 函数: sub_140a08810
// 地址: 0x140a08810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_f8[0x4]
uint64_t* rax = sub_140a04880(arg2, &var_f8, 3)
int32_t var_d8 = (*rax ^ 0x80000000).d
int32_t var_d0 = (rax[1].d ^ 0x80000000).d
int32_t var_d4 = (*(rax + 4) ^ 0x80000000).d
uint64_t* rax_1
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
rax_1, zmm6, zmm7, zmm8 = sub_140a04880(arg2, &var_f8, 1)
int32_t i = 0
char var_dc = 0
float result = rax_1[1].d
float result_1 = result

if (arg1[1].d s> 0)
    uint128_t* rsi_1 = nullptr
    float var_38_1[0x4] = zmm6
    float var_48_1[0x4] = zmm7
    float var_58_1[0x4] = zmm8
    int128_t zmm10 = (*rax_1).o
    int32_t var_f0_1 = 0
    int32_t var_ec_1 = 0x3f800000
    
    do
        int64_t rcx_2 = *arg1
        float zmm2_1[0x4] = var_f8
        int64_t r15_1 = sx.q(arg3[1].d)
        float zmm1_1[0x4] = *(rsi_1 + rcx_2 + 4)
        zmm2_1[0] = (*(rsi_1 + rcx_2)).d
        float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
        temp0_1[0] = zmm1_1[0]
        int32_t var_b4_1 = var_d0
        int32_t rax_3 = *(rsi_1 + rcx_2 + 8)
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
        var_f8 = temp0_2
        float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), arg2[2])
        int32_t var_a0_1 = rax_3
        int32_t rax_4 = (r15_1 + 1).d
        float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), arg2[1])
        int64_t var_94
        __builtin_memset(&var_94, 0, 0x18)
        uint128_t zmm0_1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), arg2[3])
        float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *arg2)
        float temp0_11[0x4] = _mm_add_ps(temp0_4, zmm0_1)
        int32_t var_9c_1 = (*(rsi_1 + rcx_2 + 0xc)).d
        int64_t var_e8_1 = 0
        int32_t var_e0 = 0
        uint64_t var_bc_1 = var_d8.q
        float temp0_13[0x4] = _mm_add_ps(temp0_11, _mm_add_ps(temp0_6, temp0_10))
        float var_98_1 = (*(rsi_1 + rcx_2 + 0x10))[0]
        arg3[1].d = rax_4
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)
        float var_c4_1 = temp0_14[0]
        float result_2 = temp0_15[0]
        float var_c8_1 = temp0_13[0]
        
        if (rax_4 s> *(arg3 + 0xc))
            sub_140a05ee0(arg3)
        
        int64_t rcx_4 = *arg3
        int64_t var_84
        result = var_84:4.d
        uint128_t* rdx_3 = r15_1 * 0x4c
        *(rdx_3 + rcx_4) = var_c8_1.o
        *(rdx_3 + rcx_4 + 0x10) = var_bc_1:4.o
        *(rdx_3 + rcx_4 + 0x20) = zmm10
        *(rdx_3 + rcx_4 + 0x30) = var_98_1.o
        int64_t var_8c
        *(rdx_3 + rcx_4 + 0x40) = var_8c
        *(rdx_3 + rcx_4 + 0x48) = result
        
        if (arg4[6].b == 0)
            zmm1_1 = zx.o(var_c8_1.q)
            result = result_2
            *(arg4 + 0xc) = zmm1_1.q
            *arg4 = zmm1_1.q
            arg4[5] = result
            arg4[2] = result
            arg4[6].b = 1
        else
            zmm1_1 = arg4[1]
            zmm0_1 = __minss_xmmss_memss(temp0_13.d, *arg4)
            float temp0_17[0x4] = _mm_min_ss(zmm1_1[0], temp0_14[0])
            *arg4 = zmm0_1.d
            zmm0_1 = __minss_xmmss_memss(temp0_15.d, arg4[2])
            arg4[1] = temp0_17[0]
            float temp0_19[0x4] = _mm_max_ss(arg4[3][0], temp0_13[0])
            arg4[2] = zmm0_1.d
            zmm0_1 = _mm_max_ss(arg4[4].d, temp0_14[0])
            arg4[3] = temp0_19[0]
            float temp0_21[0x4] = _mm_max_ss(arg4[5][0], temp0_15[0])
            arg4[4] = zmm0_1.d
            arg4[5] = temp0_21[0]
        
        i += 1
        rsi_1 += 0x18
    while (i s< arg1[1].d)

return result
