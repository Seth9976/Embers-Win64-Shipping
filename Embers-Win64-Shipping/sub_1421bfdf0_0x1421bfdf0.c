// 函数: sub_1421bfdf0
// 地址: 0x1421bfdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_1421bf930(arg1, arg2, arg3)
int64_t* r8 = arg2[1]
char* rcx = *r8

if (&rcx[1] u> r8[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0xb2, 1)
else
    *(arg1 + 0xb2) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 1

int64_t* rcx_2 = arg2[1]
int32_t* rdx_1 = *rcx_2
int32_t arg_10

if (&rdx_1[1] u> rcx_2[1])
    int32_t rax_6
    rax_6.b = *(arg1 + 0xb0) != 0
    arg_10 = rax_6
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    *(arg1 + 0xb0) = arg_10 != 0
else
    void* rax_4
    rax_4.b = *rdx_1 != 0
    *(arg1 + 0xb0) = rax_4.b
    int64_t* rax_5 = arg2[1]
    *rax_5 += 4

int64_t* rcx_4 = arg2[1]
int32_t* rdx_3 = *rcx_4

if (&rdx_3[1] u> rcx_4[1])
    int32_t rax_11
    rax_11.b = *(arg1 + 0xb1) != 0
    arg_10 = rax_11
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    *(arg1 + 0xb1) = arg_10 != 0
else
    void* rax_9
    rax_9.b = *rdx_3 != 0
    *(arg1 + 0xb1) = rax_9.b
    int64_t* rax_10 = arg2[1]
    *rax_10 += 4

int64_t* rcx_6 = arg2[1]
char* rdx_5 = *rcx_6

if (&rdx_5[1] u> rcx_6[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0xb3, 1)
else
    *(arg1 + 0xb3) = *rdx_5
    int64_t* rax_16 = arg2[1]
    *rax_16 += 1

int64_t* rcx_8 = arg2[1]
int32_t* r8_1 = *rcx_8

if (&r8_1[1] u<= rcx_8[1])
    *(arg1 + 0x8c) = *r8_1
    int64_t* rax_20 = arg2[1]
    *rax_20 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x8c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x8c, 4)

int64_t* rcx_10 = arg2[1]
uint32_t arg_8 = zx.d(*(arg1 + 0xb4))
int32_t* rdx_8 = *rcx_10

if (&rdx_8[1] u> rcx_10[1])
    uint32_t* rdx_9 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_9, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_9, 4)
else
    arg_8 = *rdx_8
    *rcx_10 += 4

*(arg1 + 0xb4) = arg_8.b
int64_t* rcx_12 = arg2[1]
int32_t* r8_2 = *rcx_12

if (&r8_2[1] u<= rcx_12[1])
    *(arg1 + 0x90) = *r8_2
    int64_t* rax_29 = arg2[1]
    *rax_29 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x90, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x90, 4)

int64_t* rcx_14 = arg2[1]
int32_t* r8_3 = *rcx_14

if (&r8_3[1] u<= rcx_14[1])
    *(arg1 + 0x94) = *r8_3
    int64_t* rax_33 = arg2[1]
    *rax_33 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x94, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x94, 4)

int64_t* rcx_16 = arg2[1]
int32_t* r8_4 = *rcx_16

if (&r8_4[1] u<= rcx_16[1])
    *(arg1 + 0x98) = *r8_4
    int64_t* rax_37 = arg2[1]
    *rax_37 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x98, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x98, 4)

int64_t* rcx_18 = arg2[1]
int32_t* r8_5 = *rcx_18

if (&r8_5[1] u<= rcx_18[1])
    *(arg1 + 0x9c) = *r8_5
    int64_t* rax_41 = arg2[1]
    *rax_41 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x9c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x9c, 4)

int64_t* rcx_20 = arg2[1]
int32_t* r8_6 = *rcx_20

if (&r8_6[1] u<= rcx_20[1])
    *(arg1 + 0xa0) = *r8_6
    int64_t* rax_45 = arg2[1]
    *rax_45 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xa0, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xa0, 4)

int64_t* rcx_22 = arg2[1]
char* rdx_15 = *rcx_22

if (&rdx_15[1] u> rcx_22[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0xb5, 1)
else
    *(arg1 + 0xb5) = *rdx_15
    int64_t* rax_49 = arg2[1]
    *rax_49 += 1

sub_1408d9160(arg2, arg1 + 0x70, zmm1)
sub_1408d9160(arg2, arg1 + 0x7c, zmm1)
(*(*arg2 + 0x130))(arg2, arg1 + 0x60)
int64_t* rcx_27 = arg2[1]
int32_t* rdx_20 = *rcx_27

if (&rdx_20[1] u<= rcx_27[1])
    *(arg1 + 0xb8) = *rdx_20
    int64_t* rax_54 = arg2[1]
    *rax_54 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xb8, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xb8, 4)

int64_t* rcx_29 = arg2[1]
int32_t* r8_7 = *rcx_29

if (&r8_7[1] u<= rcx_29[1])
    *(arg1 + 0xbc) = *r8_7
    int64_t* rax_58 = arg2[1]
    *rax_58 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xbc, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xbc, 4)

int64_t* rcx_31 = arg2[1]
int32_t* rdx_23 = *rcx_31

if (&rdx_23[1] u> rcx_31[1])
    int64_t rax_62 = *arg2
    int32_t rbp
    rbp.b = *(arg1 + 0xc0) != 0
    arg_10 = rbp
    (*(rax_62 + 0x150))(arg2, &arg_10, 4)
    *(arg1 + 0xc0) = arg_10 != 0
else
    void* rax_60
    rax_60.b = *rdx_23 != 0
    *(arg1 + 0xc0) = rax_60.b
    int64_t* rax_61 = arg2[1]
    *rax_61 += 4

int64_t* rcx_33 = arg2[1]
int32_t* r8_8 = *rcx_33

if (&r8_8[1] u<= rcx_33[1])
    *(arg1 + 0xc4) = *r8_8
    int64_t* rax_66 = arg2[1]
    *rax_66 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xc4, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xc4, 4)

int64_t* rcx_35 = arg2[1]
int32_t* r8_9 = *rcx_35

if (&r8_9[1] u<= rcx_35[1])
    *(arg1 + 0xc8) = *r8_9
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0xc8, zmm1)

return (*(*arg2 + 0x150))(arg2, arg1 + 0xc8, 4)
