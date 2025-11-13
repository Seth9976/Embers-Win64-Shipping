// 函数: sub_1405883f0
// 地址: 0x1405883f0
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

char arg_10 = 0xff

if (rdx == result[2])
    sub_14058b5e0(result, rdx, &arg_10)
else
    *rdx = 0xff
    result[1] += 1

char* rdx_1 = result[1]
arg_10 = 2

if (rdx_1 == result[2])
    sub_14058b5e0(result, rdx_1, &arg_10)
else
    *rdx_1 = 2
    result[1] += 1

sub_14058e4c0(result, arg4)
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
