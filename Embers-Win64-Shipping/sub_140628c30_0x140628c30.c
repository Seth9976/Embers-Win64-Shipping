// 函数: sub_140628c30
// 地址: 0x140628c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result_16
result_16.d = (*arg2).d f- *arg1
float result_1[0x4] = *(arg2 + 8)
result_1[0] = result_1[0] f- arg1[2]
float result_4[0x4] = data_143dbb200
uint128_t result_11
result_11.d = (*(arg4 + 4)).d f- *(arg3 + 4)
uint128_t result_12
result_12.d = (*(arg2 + 4)).d f- arg1[1]
uint128_t result_17
result_17.d = (*arg4).d f- *arg3
float result_6[0x4] = *(arg4 + 8)
result_6[0] = result_6[0] f- arg3[1].d
uint128_t result_7
result_7.d = result_11.d f* result_11.d
int32_t arg_8 = result_16.d
uint128_t result_15
result_15.d = result_17.d f* result_17.d
float arg_10 = result_1[0]
result_6[0] = result_6[0] * result_6[0]
result_7.d = result_7.d f+ result_15.d
result_7.d = result_7.d f+ result_6[0]
float result_5[0x4]
uint128_t result_8
uint128_t result_9
uint128_t result_3

if (not(result_7.d f== 1f))
    if (result_7.d f>= 9.99999994e-09f)
        result_3 = _mm_rsqrt_ss(result_7.d, result_7.d)
        result_8.d = result_7.d f* 0.5f
        result_15.d = result_3.d f* result_3.d
        result_5 = result_8
        result_5[0] = result_5[0] f* result_15.d
        result_7.d = 0.5f - result_5[0]
        result_15.d = result_3.d f* result_7.d
        result_3.d = result_3.d f+ result_15.d
        result_5 = result_3
        result_5[0] = result_5[0] f* result_3.d
        result_8.d = result_8.d f* result_5[0]
        result_9.d = 0.5f f- result_8.d
        result_15.d = result_3.d f* result_9.d
        result_3.d = result_3.d f+ result_15.d
        result_5 = result_3
        result_15.d = result_3.d f* result_17.d
        result_5[0] = result_5[0] f* result_11.d
        result_3.d = result_3.d f* result_6[0]
        result_17 = result_15
        result_11 = result_5
        result_6 = result_3
    else
        result_17 = data_143dbb1f8
        result_6 = result_4
        result_11 = data_143dbb1fc

int32_t rax = arg3[1].d
uint64_t var_a8 = *arg3
result_7.d = result_12.d f* result_12.d
result_15.d = result_16.d f* result_16.d
result_1[0] = result_1[0] * result_1[0]
result_7.d = result_7.d f+ result_15.d
result_7.d = result_7.d f+ result_1[0]

if (not(result_7.d f== 1f))
    if (result_7.d f>= 9.99999994e-09f)
        result_3 = _mm_rsqrt_ss(result_7.d, result_7.d)
        result_8.d = result_7.d f* 0.5f
        result_15.d = result_3.d f* result_3.d
        result_5 = result_8
        result_5[0] = result_5[0] f* result_15.d
        result_7.d = 0.5f - result_5[0]
        result_15.d = result_3.d f* result_7.d
        result_3.d = result_3.d f+ result_15.d
        result_5 = result_3
        result_5[0] = result_5[0] f* result_3.d
        result_8.d = result_8.d f* result_5[0]
        result_9.d = 0.5f f- result_8.d
        result_15.d = result_3.d f* result_9.d
        result_3.d = result_3.d f+ result_15.d
        result_5 = result_3
        result_15.d = result_3.d f* result_16.d
        result_5[0] = result_5[0] f* result_12.d
        result_3.d = result_3.d f* result_1[0]
        result_16 = result_15
        arg_8 = result_15.d
        result_12 = result_5
        result_1 = result_3
    else
        result_16 = data_143dbb1f8
        result_1 = result_4
        result_12 = data_143dbb1fc
        arg_8 = result_16.d
    
    arg_10 = result_1[0]

int32_t result = arg1[2]
uint64_t var_98 = *arg1
result_1[0] = result_1[0] * result_1[0]
result_15.d = result_16.d f* result_16.d
result_7.d = result_12.d f* result_11.d
result_9.d = result_11.d f* result_11.d
result_8.d = result_12.d f* result_12.d
result_8.d = result_8.d f+ result_15.d
result_15.d = result_16.d f* result_17.d
result_8.d = result_8.d f+ result_1[0]
result_7.d = result_7.d f+ result_15.d
result_1[0] = result_1[0] * result_6[0]
result_15.d = result_17.d f* result_17.d
result_7.d = result_7.d f+ result_1[0]
int32_t var_b4 = result_8.d
result_9.d = result_9.d f+ result_15.d
result_6[0] = result_6[0] * result_6[0]
int32_t arg_20 = result_7.d
result_15.d = result_7.d f* result_7.d
result_9.d = result_9.d f+ result_6[0]
result_5 = result_9
int32_t var_b8 = result_9.d
result_5[0] = result_5[0] f* result_8.d
result_5[0] = result_5[0] f- result_15.d
float arg_18 = result_5[0]

if (result_5[0] == 0f)
    result.b = 0
else
    result_3 = var_98.d
    result_16 = var_98:4.d
    result_8.d = result_3.d f- var_a8.d
    result_1 = result
    uint128_t result_10
    result_10.d = result_16.d f- var_a8:4.d
    int32_t result_2 = *(arg2 + 8)
    result_7.d = result_1.d f- rax
    result_4 = zx.o(0)
    result_15.d = result_8.d f* arg_8
    result_8.d = result_8.d f* result_17.d
    result_9.d = result_10.d f* result_12.d
    result_5 = result_7
    result_5[0] = result_5[0] * arg_10
    result_9.d = result_9.d f+ result_15.d
    result_10.d = result_10.d f* result_11.d
    result_7.d = result_7.d f* result_6[0]
    result_10.d = result_10.d f+ result_8.d
    result_8.d = 1f / arg_18
    result_9.d = result_9.d f+ result_5[0]
    result_10.d = result_10.d f+ result_7.d
    result_7 = zx.o(*arg1)
    uint64_t result_13 = result_7.q
    result_15 = result_9
    result_9.d = result_9.d f* arg_20
    result_15.d = result_15.d f* var_b8
    result_5 = result_10
    result_5[0] = result_5[0] f* arg_20
    result_10.d = result_10.d f* var_b4
    result_5[0] = result_5[0] f- result_15.d
    result_10.d = result_10.d f- result_9.d
    result_5[0] = result_5[0] f* result_8.d
    result_10.d = result_10.d f* result_8.d
    result_8.d = arg_8.d f* result_5[0]
    result_12.d = result_12.d f* result_5[0]
    result_8.d = result_8.d f+ result_3.d
    result_9.d = arg_10.d f* result_5[0]
    result_3 = zx.o(*arg2)
    result_12.d = result_12.d f+ result_16.d
    result_16.d = (*arg2).d f- result_7.d
    result_3.d = _mm_shuffle_ps(result_3, result_3, 0x55).d f- result_13:4.d
    result_8.d = result_8.d f- result_7.d
    result_6[0] = result_6[0] f* result_10.d
    result_12.d = result_12.d f- result_13:4.d
    result_9.d = result_9.d f+ result_1[0]
    result_17.d = result_17.d f* result_10.d
    result_6[0] = result_6[0] f+ rax
    int32_t rax_1 = arg1[2]
    result_1 = result_2
    int32_t rcx = 2
    result_17.d = result_17.d f+ var_a8.d
    result_1[0] = result_1[0] f- rax_1
    result_9.d = result_9.d f- rax_1
    result_7.d = result_3.d f* result_12.d
    result_15.d = result_16.d f* result_8.d
    result_11.d = result_11.d f* result_10.d
    result_7.d = result_7.d f+ result_15.d
    result_1[0] = result_1[0] f* result_9.d
    result_11.d = result_11.d f+ var_a8:4.d
    result_7.d = result_7.d f+ result_1[0]
    int32_t rdx
    
    if (result_7.d f<= result_4[0])
        rdx = 1
    else
        result_12.d = result_12.d f* result_12.d
        rdx = 2
        result_3.d = result_3.d f* result_3.d
        result_8.d = result_8.d f* result_8.d
        result_16.d = result_16.d f* result_16.d
        result_12.d = result_12.d f+ result_8.d
        result_9.d = result_9.d f* result_9.d
        result_3.d = result_3.d f+ result_16.d
        result_1[0] = result_1[0] * result_1[0]
        result_12.d = result_12.d f+ result_9.d
        result_3.d = result_3.d f+ result_1[0]
        float temp0_4[0x4] = _mm_sqrt_ss(zx.o(0)[0], result_12.d)
        
        if (_mm_sqrt_ss(zx.o(0).d, result_3.d).d f>= temp0_4[0])
            rdx = 0
    
    result_7 = zx.o(*arg3)
    result_8 = zx.o(*arg4)
    result_17.d = result_17.d f- result_7.d
    int32_t rax_2 = *(arg4 + 8)
    result_9.d = (*arg4).d f- result_7.d
    uint64_t result_14 = result_7.q
    result_11.d = result_11.d f- result_14:4.d
    result_8.d = _mm_shuffle_ps(result_8, result_8, 0x55).d f- result_14:4.d
    result = arg3[1].d
    result_3.d = rax_2.d f- result
    result_6[0] = result_6[0] f- result
    result_15.d = result_9.d f* result_17.d
    result_7.d = result_8.d f* result_11.d
    result_5 = result_3
    result_5[0] = result_5[0] * result_6[0]
    result_7.d = result_7.d f+ result_15.d
    result_7.d = result_7.d f+ result_5[0]
    
    if (result_7.d f<= result_4[0])
        rcx = 1
    else
        result_11.d = result_11.d f* result_11.d
        result_8.d = result_8.d f* result_8.d
        result_17.d = result_17.d f* result_17.d
        result_9.d = result_9.d f* result_9.d
        result_11.d = result_11.d f+ result_17.d
        result_6[0] = result_6[0] * result_6[0]
        result_8.d = result_8.d f+ result_9.d
        result_3.d = result_3.d f* result_3.d
        result_11.d = result_11.d f+ result_6[0]
        result_8.d = result_8.d f+ result_3.d
        float temp0_7[0x4] = _mm_sqrt_ss(zx.o(0)[0], result_11.d)
        
        if (_mm_sqrt_ss(zx.o(0).d, result_8.d).d f>= temp0_7[0])
            rcx = 0
    
    if (rdx != 0 || rcx != 0)
        result.b = 0
    else
        result.b = 1

return result
