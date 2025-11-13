// 函数: sub_14232c140
// 地址: 0x14232c140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xe]
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0xd8))(rcx, 0xe)

char r8

if (rcx == 0 || rax_2 != 0)
    r8 = 0
else
    r8 = 1

void arg_8
sub_141ff4780(&arg_8, arg1, r8, 0xd6)
int64_t* rcx_2 = arg1[1]
int16_t* rdx_1 = *rcx_2

if (&rdx_1[1] u<= rcx_2[1])
    *arg2 = *rdx_1
    int64_t* rax_5 = arg1[1]
    *rax_5 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2, 2)

int64_t* rcx_4 = arg1[1]
int32_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    *(arg2 + 4) = *r8_1
    int64_t* rax_9 = arg1[1]
    *rax_9 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 4)

int64_t* rcx_6 = arg1[1]
int32_t* r8_2 = *rcx_6

if (&r8_2[1] u<= rcx_6[1])
    *(arg2 + 8) = *r8_2
    int64_t* rax_13 = arg1[1]
    *rax_13 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[4], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[4], 4)

int64_t* rcx_8 = arg1[1]
int32_t* rdx_5 = *rcx_8
int32_t arg_10

if (&rdx_5[1] u> rcx_8[1])
    int32_t rax_17
    rax_17.b = arg2[6].b != 0
    arg_10 = rax_17
    (*(*arg1 + 0x150))(arg1, &arg_10, 4)
    arg2[6].b = arg_10 != 0
else
    void* rax_15
    rax_15.b = *rdx_5 != 0
    arg2[6].b = rax_15.b
    int64_t* rax_16 = arg1[1]
    *rax_16 += 4

int64_t* rcx_10 = arg1[1]
int32_t* rdx_7 = *rcx_10

if (&rdx_7[1] u> rcx_10[1])
    int32_t rax_22
    rax_22.b = *(arg2 + 0xd) != 0
    arg_10 = rax_22
    (*(*arg1 + 0x150))(arg1, &arg_10, 4)
    *(arg2 + 0xd) = arg_10 != 0
else
    void* rax_20
    rax_20.b = *rdx_7 != 0
    *(arg2 + 0xd) = rax_20.b
    int64_t* rax_21 = arg1[1]
    *rax_21 += 4

int64_t* rcx_12 = arg1[1]
int32_t* r8_3 = *rcx_12

if (&r8_3[1] u<= rcx_12[1])
    *(arg2 + 0x10) = *r8_3
    int64_t* rax_27 = arg1[1]
    *rax_27 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[8], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[8], 4)

sub_14232c650(arg1, &arg2[0xc], arg3)
sub_141f05480(arg1, &arg2[0x14], arg3)
int64_t* rcx_16 = arg1[1]
int32_t* r8_4 = *rcx_16

if (&r8_4[1] u<= rcx_16[1])
    *(arg2 + 0x38) = *r8_4
    int64_t* rax_31 = arg1[1]
    *rax_31 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x1c], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x1c], 4)

int64_t* rcx_18 = arg1[1]
int32_t* r8_5 = *rcx_18

if (&r8_5[1] u<= rcx_18[1])
    *(arg2 + 0x3c) = *r8_5
    int64_t* rax_35 = arg1[1]
    *rax_35 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x1e], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x1e], 4)

int64_t* rcx_20 = arg1[1]
int16_t* r8_6 = *rcx_20

if (&r8_6[1] u<= rcx_20[1])
    arg2[0x20] = *r8_6
    int64_t* rax_39 = arg1[1]
    *rax_39 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, &arg2[0x20], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x20], 2)

sub_1409ac860(arg1, &arg2[0x22], arg3)
int64_t* rcx_23 = arg1[1]
int32_t* r8_7 = *rcx_23

if (&r8_7[1] u<= rcx_23[1])
    *(arg2 + 0x54) = *r8_7
    int64_t* rax_43 = arg1[1]
    *rax_43 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x2a], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x2a], 4)

if ((arg4 & 1) == 0)
    void* rdx_17 = &arg2[0x4c]
    
    if (arg2 == -0x90)
        rdx_17 = nullptr
    
    sub_1419fe650(arg1, rdx_17, arg3)
    int64_t* rdx_18 = &arg2[0x60]
    
    if (arg2 == -0xb8)
        rdx_18 = nullptr
    
    sub_14232c520(arg1, rdx_18, arg3)

int64_t* rcx_27 = arg1[1]
int32_t* rdx_19 = *rcx_27

if (&rdx_19[1] u<= rcx_27[1])
    void* rax_47
    rax_47.b = *rdx_19 != 0
    arg2[0x70].b = rax_47.b
    int64_t* rax_48 = arg1[1]
    *rax_48 += 4
    return arg1

int64_t rax_50 = *arg1
int32_t rbp
rbp.b = arg2[0x70].b != 0
arg_10 = rbp
(*(rax_50 + 0x150))(arg1, &arg_10, 4)
arg2[0x70].b = arg_10 != 0
return arg1
