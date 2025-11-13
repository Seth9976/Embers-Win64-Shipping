// 函数: sub_1424ebb70
// 地址: 0x1424ebb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_10 = (zx.o(0)).d

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
uint32_t result[0x4] = result_1
result[0] = result[0] f- var_18
int64_t rcx_3
rcx_3.b = rax_4 != 0
int32_t zmm2 = arg_10
*(arg2 + 0x20) = rcx_3 + rax_4
result = _mm_and_ps(result, 0x7fffffff)

if (not(result[0] f> zmm2))
    int32_t result_2
    result = result_2
    int32_t var_14
    result[0] = result[0] f- var_14
    result = _mm_and_ps(result, 0x7fffffff)
    
    if (not(result[0] f> zmm2))
        int32_t result_3
        result = result_3
        int32_t var_10
        result[0] = result[0] f- var_10
        result = _mm_and_ps(result, 0x7fffffff)
        
        if (not(result[0] f> zmm2))
            *arg3 = 1
            return result

*arg3 = 0
return result
