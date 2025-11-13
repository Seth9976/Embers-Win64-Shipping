// 函数: sub_14064b890
// 地址: 0x14064b890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

int32_t arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

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
result[0] = result[0] f- arg_20
int64_t rcx_3
rcx_3.b = rax_4 != 0
int32_t zmm2 = arg_10
*(arg2 + 0x20) = rcx_3 + rax_4
result = _mm_and_ps(result, 0x7fffffff)

if (not(result[0] f> zmm2))
    result = arg4
    result[0] = result[0] f- arg5
    result = _mm_and_ps(result, 0x7fffffff)
    
    if (not(result[0] f> zmm2))
        *arg3 = 1
        return result

*arg3 = 0
return result
