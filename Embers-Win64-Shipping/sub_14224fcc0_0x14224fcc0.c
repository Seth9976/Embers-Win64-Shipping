// 函数: sub_14224fcc0
// 地址: 0x14224fcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142254c10(arg1)
void* rbp = nullptr
int64_t* rax
int64_t r8
rax, r8 = sub_14224ddf0(arg1, 0)

if (rax != 0)
    r8.b = 1
    rbp = (*(*rax + 0x6a8))(rax, arg1[0x4b], r8)

int64_t* result_1 = nullptr
int64_t* result
int64_t r8_1
result, r8_1 = sub_14224ddf0(arg1, 1)

if (result != 0)
    int64_t r9_1 = *result
    r8_1.b = 1
    result = (*(r9_1 + 0x6a8))(result, arg1[0x4c], r8_1, r9_1)
    result_1 = result

if (rbp == 0 && result_1 == 0)
    return result

int32_t var_10_1 = 0
int64_t (* var_18_1)(void* arg1, int32_t arg2) = sub_14224ff60
int64_t var_28 = 0
int32_t var_20_1 = 0
void*** rax_3 = sub_1405978f0(0x30, &var_28)

if (rax_3 != 0)
    *rax_3 = &data_143271de8
    sub_140d3a3a0(&rax_3[1], arg1)
    *(rax_3 + 0x10) = var_18_1.o
    rax_3[5] = sub_140a387b0()
    *rax_3 = &data_143271e40

float zmm2_1[0x4] = *(arg1 + 0x1e0)
int64_t* var_30_1 = &var_28
float zmm3_1[0x4] = _mm_and_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), 0x7fffffff)
float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float zmm0_1[0x4] = _mm_and_ps(zmm2_1, 0x7fffffff)
float temp0_5[0x4] = _mm_min_ss(zmm3_1[0], zmm0_1[0])
zmm2_1 = _mm_and_ps(temp0_3, 0x7fffffff)
return sub_142233a30(&arg1[0x47], rbp, result_1, _mm_min_ss(temp0_5[0], zmm2_1[0])[0], arg1)
