// 函数: sub_1424fbdd0
// 地址: 0x1424fbdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_2 = *(arg2 + 0x38)
void* rbp = &var_38
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rbp = rax_2

void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_4 = *(arg2 + 0x38)
void* r14 = &var_28
int32_t arg_10 = (zx.o(0)).d

if (rax_4 != 0)
    r14 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
uint32_t zmm5[0x4] = data_143f65b80
int64_t rdi
rdi.b = rax_6 != 0
float zmm3[0x4] = arg_10[0]
*(arg2 + 0x20) = rdi + rax_6
float zmm4[0x4] = *rbp
float zmm2[0x4] = *r14
float temp0[0x4] = _mm_sub_ps(zmm4, zmm2)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
uint32_t result = _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(temp0, zmm5), 1))

if (result == 0)
    *arg3 = 0
else
    result = _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_add_ps(zmm2, zmm4), zmm5), 1))
    
    if (result == 0)
        *arg3 = 0
    else
        *arg3 = 1

return result
