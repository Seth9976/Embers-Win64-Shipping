// 函数: sub_141f99df0
// 地址: 0x141f99df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[8].d s< 0x16e)
    int64_t rax
    rax.b = 0
    return rax

int64_t* rcx = arg2[1]
char* rdx = *rcx

if (&rdx[1] u> rcx[1])
    (*(*arg2 + 0x150))(arg2, arg1, 1)
else
    *arg1 = *rdx
    int64_t* rax_3 = arg2[1]
    *rax_3 += 1

int64_t* rcx_2 = arg2[1]
char* rdx_2 = *rcx_2

if (&rdx_2[1] u> rcx_2[1])
    (*(*arg2 + 0x150))(arg2, &arg1[1], 1)
else
    arg1[1] = *rdx_2
    int64_t* rax_7 = arg2[1]
    *rax_7 += 1

int64_t* rcx_4 = arg2[1]
char* rdx_4 = *rcx_4

if (&rdx_4[1] u> rcx_4[1])
    (*(*arg2 + 0x150))(arg2, &arg1[2], 1)
else
    arg1[2] = *rdx_4
    int64_t* rax_11 = arg2[1]
    *rax_11 += 1

int64_t* rcx_6 = arg2[1]
int32_t* r8 = *rcx_6

if (&r8[1] u<= rcx_6[1])
    *(arg1 + 4) = *r8
    int64_t* rax_15 = arg2[1]
    *rax_15 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[4], arg3)
else
    (*(*arg2 + 0x150))(arg2, &arg1[4], 4)

int64_t* rcx_8 = arg2[1]
int32_t* r8_1 = *rcx_8

if (&r8_1[1] u<= rcx_8[1])
    *(arg1 + 8) = *r8_1
    int64_t* rax_19 = arg2[1]
    *rax_19 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[8], arg3)
else
    (*(*arg2 + 0x150))(arg2, &arg1[8], 4)

int64_t* rcx_10 = arg2[1]
int32_t* r8_2 = *rcx_10

if (&r8_2[1] u<= rcx_10[1])
    *(arg1 + 0xc) = *r8_2
    int64_t* rax_23 = arg2[1]
    *rax_23 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[0xc], arg3)
else
    (*(*arg2 + 0x150))(arg2, &arg1[0xc], 4)

int64_t* rcx_12 = arg2[1]
int32_t* r8_3 = *rcx_12

if (&r8_3[1] u<= rcx_12[1])
    *(arg1 + 0x10) = *r8_3
    int64_t* rax_27 = arg2[1]
    *rax_27 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[0x10], arg3)
else
    (*(*arg2 + 0x150))(arg2, &arg1[0x10], 4)

int64_t* rcx_14 = arg2[1]
int32_t* r8_4 = *rcx_14

if (&r8_4[1] u<= rcx_14[1])
    *(arg1 + 0x14) = *r8_4
    int64_t* rax_31 = arg2[1]
    *rax_31 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[0x14], arg3)
else
    (*(*arg2 + 0x150))(arg2, &arg1[0x14], 4)

int64_t* rcx_16 = arg2[1]
int32_t* r8_5 = *rcx_16

if (&r8_5[1] u<= rcx_16[1])
    *(arg1 + 0x18) = *r8_5
    int64_t* rax_35 = arg2[1]
    *rax_35 += 4
    rax_35.b = 1
    return rax_35

if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[0x18], arg3)
    int64_t* rax_38
    rax_38.b = 1
    return rax_38

(*(*arg2 + 0x150))(arg2, &arg1[0x18], 4)
int64_t rax_37
rax_37.b = 1
return rax_37
