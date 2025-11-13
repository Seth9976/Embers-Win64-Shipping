// 函数: sub_141c7dac0
// 地址: 0x141c7dac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2 = *arg1
int32_t r10 = arg3
char r9

if (rax_2 s<= 0 || *arg2 s< rax_2)
    r9 = 0
else
    r9 = 1

int32_t rax = arg1[1]

if (rax s<= 0 || arg2[2] s< rax)
    arg3.b = 0
else
    arg3.b = 1

int32_t rax_1 = arg1[2]

if (rax_1 s<= 0 || arg2[3] s< rax_1)
    arg2.b = 0
else
    arg2.b = 1

uint32_t result = zx.d(arg1[3].w)

if (result.w s<= 0 || r10 s<= sx.d(result.w))
    result.b = 0
else
    result.b = 1

if (r9 == 0 && arg3.b == 0 && arg2.b == 0 && result.b == 0)
    return result

result.b = 1
return result
