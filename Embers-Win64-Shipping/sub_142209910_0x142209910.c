// 函数: sub_142209910
// 地址: 0x142209910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int64_t rax_1 = *rcx + 4
int32_t arg_8

if (rax_1 u> rcx[1])
    int64_t rax_2 = *arg1
    arg_8 = 0
    (*(rax_2 + 0x150))(arg1, &arg_8, 4)
else
    *rcx = rax_1

int64_t* rcx_2 = arg1[1]
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u<= rcx_2[1])
    void* rax_3
    rax_3.b = *rdx_1 != 0
    *arg2 = rax_3.b
    int64_t* rax_4 = arg1[1]
    *rax_4 += 4
    return arg1

int64_t rax_6 = *arg1
int32_t rsi
rsi.b = *arg2 != 0
arg_8 = rsi
(*(rax_6 + 0x150))(arg1, &arg_8, 4)
*arg2 = arg_8 != 0
return arg1
