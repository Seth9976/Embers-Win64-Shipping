// 函数: sub_140588090
// 地址: 0x140588090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[9].b = 0
int64_t rbp = sx.q(arg2)
int32_t* result_2 = j_sub_140a82f30(0x38)
int32_t i = 0
int32_t* result_1 = result_2
int32_t* result = result_2

if (result_2 == 0)
    result = nullptr
else
    __builtin_memset(result_2, 0, 0x2c)
    *(result_2 + 0x30) = 0

result[6] = arg3
result[7] = rbp.d
sub_14058a370(result, arg4[1] - *arg4)

if (result[2] - *result s> 0)
    int64_t rdx_2 = 0
    
    do
        rdx_2 += 1
        i += 1
        *(rdx_2 + *result - 1) = *(rdx_2 + *arg4 - 1)
    while (i s< result[2] - *result)

int64_t* rcx_3 = *(*arg1 + (rbp << 3))
result_1 = result
int32_t** rdx_3 = rcx_3[1]

if (rdx_3 == rcx_3[2])
    sub_14058d7f0(rcx_3, rdx_3, &result_1)
    return result

*rdx_3 = result
rcx_3[1] += 8
return result
