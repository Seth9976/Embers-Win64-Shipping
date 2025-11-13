// 函数: sub_1405887c0
// 地址: 0x1405887c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2 = j_sub_140a82f30(0x38)
int64_t* result_1 = result_2
int64_t* result = result_2

if (result_2 == 0)
    result = result_2
else
    __builtin_memset(result, 0, 0x2c)
    result[6] = 0

int64_t rsi = result[1]
int64_t rdx = *result
int64_t rcx_1 = rsi - rdx

if (rcx_1 u> 3)
    result[1] = rdx + 3
else if (rcx_1 u< 3)
    if (result[2] - rdx u>= 3)
        memset(rsi, 0, 3 - rcx_1)
        result[1] = 3 - rcx_1 + rsi
    else
        sub_14058bd40(result, 3)

char* rax_4 = *result
result_1 = result
*rax_4 = (arg4 & 0xf) | 0x90
*(*result + 1) = arg5 & 0x7f
*(*result + 2) = 0
result[3].d = arg3
int64_t* rcx_7 = *(*arg1 + (sx.q(arg2) << 3))
int64_t** rdx_1 = rcx_7[1]

if (rdx_1 == rcx_7[2])
    sub_14058d7f0(rcx_7, rdx_1, &result_1)
    return result

*rdx_1 = result
rcx_7[1] += 8
return result
