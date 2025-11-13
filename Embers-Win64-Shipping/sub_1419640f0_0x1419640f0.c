// 函数: sub_1419640f0
// 地址: 0x1419640f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 4)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[1] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 4)

int64_t* rcx_4 = arg1[1]
char* rdx_1 = *rcx_4

if (&rdx_1[1] u> rcx_4[1])
    (*(*arg1 + 0x150))(arg1, &arg2[2], 1)
else
    arg2[2].b = *rdx_1
    int64_t* rax_10 = arg1[1]
    *rax_10 += 1

int64_t* rcx_6 = arg1[1]
char* rdx_3 = *rcx_6

if (&rdx_3[1] u> rcx_6[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 9, 1)
else
    *(arg2 + 9) = *rdx_3
    int64_t* rax_14 = arg1[1]
    *rax_14 += 1

int64_t* rcx_8 = arg1[1]
int32_t* rdx_5 = *rcx_8
int32_t arg_8

if (&rdx_5[1] u> rcx_8[1])
    int32_t rax_18
    rax_18.b = *(arg2 + 0xa) != 0
    arg_8 = rax_18
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0xa) = arg_8 != 0
else
    void* rax_16
    rax_16.b = *rdx_5 != 0
    *(arg2 + 0xa) = rax_16.b
    int64_t* rax_17 = arg1[1]
    *rax_17 += 4

int64_t* rcx_10 = arg1[1]
int32_t* rdx_7 = *rcx_10

if (&rdx_7[1] u<= rcx_10[1])
    void* rax_21
    rax_21.b = *rdx_7 != 0
    *(arg2 + 0xb) = rax_21.b
    int64_t* rax_22 = arg1[1]
    *rax_22 += 4
    return arg1

int64_t rax_24 = *arg1
int32_t rsi
rsi.b = *(arg2 + 0xb) != 0
arg_8 = rsi
(*(rax_24 + 0x150))(arg1, &arg_8, 4)
*(arg2 + 0xb) = arg_8 != 0
return arg1
