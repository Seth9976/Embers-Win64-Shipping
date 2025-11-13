// 函数: sub_1417c50e0
// 地址: 0x1417c50e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x140))(arg2, arg1 + 8)
int64_t* r8 = arg2[1]
int32_t* rcx_1 = *r8

if (&rcx_1[1] u<= r8[1])
    *(arg1 + 0x10) = *rcx_1
    int64_t* rax_3 = arg2[1]
    *rax_3 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x10, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x10, 4)

int64_t* rcx_3 = arg2[1]
int32_t* r8_1 = *rcx_3

if (&r8_1[1] u<= rcx_3[1])
    *(arg1 + 0x14) = *r8_1
    int64_t* rax_7 = arg2[1]
    *rax_7 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x14, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x14, 4)

int64_t* rcx_5 = arg2[1]
int32_t* r8_2 = *rcx_5

if (&r8_2[1] u<= rcx_5[1])
    *(arg1 + 0x18) = *r8_2
    int64_t* rax_11 = arg2[1]
    *rax_11 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x18, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x18, 4)

int64_t* rcx_7 = arg2[1]
int32_t* r8_3 = *rcx_7

if (&r8_3[1] u<= rcx_7[1])
    *(arg1 + 0x1c) = *r8_3
    int64_t* rax_15 = arg2[1]
    *rax_15 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x1c, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x1c, 4)

sub_141707780(arg2, arg1 + 0x20, arg3)
int64_t* rcx_10 = arg2[1]
char arg_8 = *(arg1 + 0x50)
char* rdx_6 = *rcx_10

if (&rdx_6[1] u> rcx_10[1])
    (*(*arg2 + 0x150))(arg2, &arg_8, 1)
    uint32_t rax_22 = zx.d(arg_8)
    *(arg1 + 0x50) = rax_22
    return rax_22

arg_8 = *rdx_6
*rcx_10 += 1
uint32_t rax_20 = zx.d(arg_8)
*(arg1 + 0x50) = rax_20
return rax_20
