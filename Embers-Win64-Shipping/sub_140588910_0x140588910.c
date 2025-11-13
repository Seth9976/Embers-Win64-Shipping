// 函数: sub_140588910
// 地址: 0x140588910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2 = j_sub_140a82f30(0x38)
int64_t* result_1 = result_2
int64_t* result = result_2

if (result_2 == 0)
    result = result_2
else
    __builtin_memset(result, 0, 0x2c)
    result[6] = 0

char* rdx = result[1]
char* rcx = *result

if (rdx != rcx)
    result[1] = rcx
    rdx = rcx

char rdi = (arg4 & 0xf) | 0xb0
char arg_10 = rdi

if (rdx == result[2])
    sub_14058b5e0(result, rdx, &arg_10)
else
    *rdx = rdi
    result[1] += 1

char* rdx_1 = result[1]
char arg_28
char rax = arg_28 & 0x7f
arg_28 = rax

if (rdx_1 == result[2])
    sub_14058b5e0(result, rdx_1, &arg_28)
else
    *rdx_1 = rax
    result[1] += 1

char* rdx_2 = result[1]
char rax_1 = arg5 & 0x7f
arg_28 = rax_1

if (rdx_2 == result[2])
    sub_14058b5e0(result, rdx_2, &arg_28)
else
    *rdx_2 = rax_1
    result[1] += 1

result[3].d = arg3
int64_t rcx_4 = *arg1
result_1 = result
int64_t* rcx_5 = *(rcx_4 + (sx.q(arg2) << 3))
void** rdx_3 = rcx_5[1]

if (rdx_3 == rcx_5[2])
    sub_14058d7f0(rcx_5, rdx_3, &result_1)
else
    *rdx_3 = result
    rcx_5[1] += 8

return result
