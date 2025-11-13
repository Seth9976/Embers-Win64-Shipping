// 函数: sub_141c93490
// 地址: 0x141c93490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1, 0, 0x90)
sub_140b4c2a0(arg1)
*arg1 = &data_1432100a0
arg1[0x12] = 0
arg1[0x13] = 0
int32_t rcx_2 = sub_140596d10(&arg1[0x14], arg3)
int32_t rdi = arg3[1].d
int64_t rbx_1 = *arg3
int64_t var_38 = 0
sub_1405a4c70(&var_38, sbb.d(rcx_2, rcx_2, rdi != 0) + 5 + rdi, 0)
memcpy(var_38, rbx_1, rdi * 2)
sub_140a20ba0(&var_38, u".tmp", 4)
void* rcx_7 = &arg1[0x1a]
arg1[0x16] = var_38
int64_t rdx_4
rdx_4.b = 1
arg1[0x17].d = rdi
int32_t var_2c
*(arg1 + 0xbc) = var_2c
arg1[0x18] = 0
arg1[0x19] = 0
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_5 = *(rcx_7 + 0x10)

if (rax_5 != 0)
    rcx_7 = rax_5

*rcx_7 = 0
*(rcx_7 + 8) = 0
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
(*arg1)[0x15](arg1, rdx_4)
sub_140a464c0()
int16_t* const rdx_5

if (arg1[0x17].d == 0)
    rdx_5 = &data_142d40450
else
    rdx_5 = arg1[0x16]

int64_t rax_8 = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx_5, 0)
arg1[0x13] = rax_8

if (rax_8 == 0)
    *(arg1 + 0x29) |= 1
    return arg1

int64_t* rcx_9 = arg1[1]
arg1[0x12] = rax_8
int32_t arg_8 = 0x9e2a83c1
int32_t* rdx_6 = *rcx_9

if (&rdx_6[1] u> rcx_9[1])
    int32_t* rdx_7 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_7, arg4)
    else
        (*arg1)[0x2a](arg1, rdx_7, 4)
else
    arg_8 = *rdx_6
    *rcx_9 += 4

int64_t* rcx_11 = arg1[1]
int32_t arg_18 = arg2
int32_t* rdx_8 = *rcx_11

if (&rdx_8[1] u> rcx_11[1])
    int32_t* rdx_9 = &arg_18
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_9, arg4)
    else
        (*arg1)[0x2a](arg1, rdx_9, 4)
else
    arg_18 = *rdx_8
    *rcx_11 += 4

int64_t* rcx_13 = arg1[0x12]
int64_t rax_16

if (rcx_13 == 0)
    rax_16 = 0
else
    rax_16 = (*(*rcx_13 + 0x20))(rcx_13)

int64_t* rcx_14 = arg1[1]
arg1[0x22] = rax_16
int64_t arg_20 = 0
int64_t* rdx_10 = *rcx_14

if (&rdx_10[1] u<= rcx_14[1])
    arg_20 = *rdx_10
    *rcx_14 += 8
    return arg1

int64_t* rdx_11 = &arg_20

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, rdx_11, arg4)
    return arg1

(*arg1)[0x2a](arg1, rdx_11, 8)
return arg1
