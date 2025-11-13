// 函数: sub_1405884f0
// 地址: 0x1405884f0
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
int32_t rbp = int.d(60.0 f/ arg4.q * 1000000.0 + 0.5)

if (rcx_1 u> 6)
    result[1] = rdx + 6
else if (rcx_1 u< 6)
    if (result[2] - rdx u>= 6)
        memset(rsi, 0, 6 - rcx_1)
        result[1] = 6 - rcx_1 + rsi
    else
        sub_14058bd40(result, 6)

char* rax_4 = *result
result_1 = result
*rax_4 = 0xff
*(*result + 1) = 0x51
*(*result + 2) = 3
*(*result + 3) = (rbp s>> 0x10).b
*(*result + 4) = (rbp s>> 8).b
*(*result + 5) = rbp.b
result[3].d = arg3
int64_t* rcx_10 = *(*arg1 + (sx.q(arg2) << 3))
int64_t** rdx_1 = rcx_10[1]

if (rdx_1 == rcx_10[2])
    sub_14058d7f0(rcx_10, rdx_1, &result_1)
    return result

*rdx_1 = result
rcx_10[1] += 8
return result
