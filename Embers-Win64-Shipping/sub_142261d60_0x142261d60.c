// 函数: sub_142261d60
// 地址: 0x142261d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int32_t r8 = 0
int32_t rax = arg2[1].d
_mm_shuffle_ps(arg3, arg3, 0)
int64_t* var_e8 = nullptr
int64_t var_e0 = 0

if (rax s> 0)
    sub_1405c5570(&var_e8, rax)
    rax = arg2[1].d
    r8 = var_e0.d
    rsi = var_e8

int64_t* i = *arg2

while (i != &i[sx.q(rax)])
    int64_t rbp_1 = *i
    int64_t rdi_1 = sx.q(r8)
    r8 = (rdi_1 + 1).d
    var_e0.d = r8
    
    if (r8 s> var_e0:4.d)
        sub_1405a4d70(&var_e8)
        r8 = var_e0.d
        rsi = var_e8
    
    i = &i[1]
    rsi[rdi_1] = rbp_1

int32_t var_d8[0x10]
int32_t* result
float zmm13_1[0x4]
result, zmm13_1 = sub_1427ee760(&var_d8, rsi, r8)
float zmm9 = zmm13_1[0] f* result[0xc]
int32_t zmm6 = result[9]
int32_t zmm7 = result[0xa]
int32_t zmm8 = result[0xb]
float zmm1[0x4] = *(result + 4)
float zmm5[0x4] = *(result + 0x14)
*arg1 = zmm13_1[0] f* *result
float temp0_1[0x4] = _mm_mul_ps(zmm1, zmm13_1)
float temp0_2[0x4] = _mm_mul_ps(zmm5, zmm13_1)
*(arg1 + 4) = temp0_1
*(arg1 + 0x14) = temp0_2
arg1[9] = zmm6
arg1[0xa] = zmm7
arg1[0xb] = zmm8
arg1[0xc] = zmm9

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
