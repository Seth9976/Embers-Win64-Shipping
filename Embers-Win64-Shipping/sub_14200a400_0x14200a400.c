// 函数: sub_14200a400
// 地址: 0x14200a400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142009780(arg1, arg2, arg3, arg4, arg5)

if (rax == 0)
    return rax

sub_1408d9160(arg2, arg1 + 0x98, arg5)
(*(*arg2 + 0x130))(arg2, arg1 + 0xa8)
int64_t* rcx_2 = arg2[1]
int32_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    *(arg1 + 0xb0) = *r8
    int64_t* rax_4 = arg2[1]
    *rax_4 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xb0, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xb0, 4)

int64_t* rcx_4 = arg2[1]
int32_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    *(arg1 + 0xb4) = *r8_1
    int64_t* rax_8 = arg2[1]
    *rax_8 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xb4, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xb4, 4)

int64_t* rcx_6 = arg2[1]
int32_t* rdx_4 = *rcx_6
int32_t var_18

if (&rdx_4[1] u> rcx_6[1])
    int32_t rax_12
    rax_12.b = *(arg1 + 0xb8) != 0
    var_18 = rax_12
    (*(*arg2 + 0x150))(arg2, &var_18, 4)
    *(arg1 + 0xb8) = var_18 != 0
else
    void* rax_10
    rax_10.b = *rdx_4 != 0
    *(arg1 + 0xb8) = rax_10.b
    int64_t* rax_11 = arg2[1]
    *rax_11 += 4

int64_t* rcx_8 = arg2[1]
int32_t* rdx_6 = *rcx_8

if (&rdx_6[1] u> rcx_8[1])
    int32_t rax_17
    rax_17.b = *(arg1 + 0xb9) != 0
    var_18 = rax_17
    (*(*arg2 + 0x150))(arg2, &var_18, 4)
    *(arg1 + 0xb9) = var_18 != 0
else
    void* rax_15
    rax_15.b = *rdx_6 != 0
    *(arg1 + 0xb9) = rax_15.b
    int64_t* rax_16 = arg2[1]
    *rax_16 += 4

(*(*arg2 + 0x130))(arg2, arg1 + 0xc0)
(*(*arg2 + 0x130))(arg2, arg1 + 0xc8)
int64_t* rcx_12 = arg2[1]
int32_t* rdx_10 = *rcx_12

if (&rdx_10[1] u> rcx_12[1])
    int64_t rax_24 = *arg2
    int32_t rsi
    rsi.b = *(arg1 + 0xd0) != 0
    var_18 = rsi
    (*(rax_24 + 0x150))(arg2, &var_18, 4)
    *(arg1 + 0xd0) = var_18 != 0
else
    void* rax_22
    rax_22.b = *rdx_10 != 0
    *(arg1 + 0xd0) = rax_22.b
    int64_t* rax_23 = arg2[1]
    *rax_23 += 4

sub_1408db650(arg2, arg1 + 0xd4, arg5)
int64_t* rax_26
rax_26.b = 1
*arg4 = 1
return rax_26
