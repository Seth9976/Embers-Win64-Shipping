// 函数: sub_141a84fb0
// 地址: 0x141a84fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8
int32_t arg_8

if (&rcx[1] u> r8[1])
    int32_t rax_2
    rax_2.b = *arg2 != 0
    arg_8 = rax_2
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *arg2 = arg_8 != 0
else
    void* rax
    rax.b = *rcx != 0
    *arg2 = rax.b
    int64_t* rax_1 = arg1[1]
    *rax_1 += 4

int64_t* rcx_2 = arg1[1]
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    int32_t rax_7
    rax_7.b = arg2[1] != 0
    arg_8 = rax_7
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    arg2[1] = arg_8 != 0
else
    void* rax_5
    rax_5.b = *rdx_1 != 0
    arg2[1] = rax_5.b
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4

int64_t* rcx_4 = arg1[1]
int32_t* rdx_3 = *rcx_4

if (&rdx_3[1] u<= rcx_4[1])
    void* rax_10
    rax_10.b = *rdx_3 != 0
    arg2[2] = rax_10.b
    int64_t* rax_11 = arg1[1]
    *rax_11 += 4
    return arg1

int64_t rax_13 = *arg1
int32_t rsi
rsi.b = arg2[2] != 0
arg_8 = rsi
(*(rax_13 + 0x150))(arg1, &arg_8, 4)
arg2[2] = arg_8 != 0
return arg1
