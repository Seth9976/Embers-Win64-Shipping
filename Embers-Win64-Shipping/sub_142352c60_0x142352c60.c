// 函数: sub_142352c60
// 地址: 0x142352c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(*(arg2 + 0x10)), sx.q(*(arg2 + 0x14)))
int32_t rax_1 = 0

if ((arg1[5].b & 1) == 0)
    rax_1 = *(arg2 + 0x10)

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_1
int32_t* rdx_1 = *rcx

if (&rdx_1[1] u> rcx[1])
    int32_t* rdx_2 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_2, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_2, 4)
else
    arg_8 = *rdx_1
    *rcx += 4

int32_t rcx_4 = arg_8

if (rcx_4 != 0)
    char rax_5 = *(arg1 + 0x29)
    
    if ((rax_5 & 1) != 0 || rcx_4 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rcx_4 s> 0x1000000))
        *(arg1 + 0x29) = rax_5 | 1
    else
        *(arg2 + 0x10) = rcx_4
        
        if ((arg1[5].b & 1) != 0)
            sub_1405da9e0(arg2 + 8, rcx_4, *(arg2 + 0x14))
            rcx_4 = *(arg2 + 0x10)
        
        (*(*arg1 + 0x150))(arg1, *(arg2 + 8), sx.q(rcx_4))
else if ((arg1[5].b & 1) != 0)
    *(arg2 + 0x10) = 0
    
    if (*(arg2 + 0x14) != 0)
        sub_1405c5510(arg2 + 8, 0)

int64_t* rcx_6 = arg1[1]
int32_t* rdx_5 = *rcx_6

if (&rdx_5[1] u<= rcx_6[1])
    *(arg2 + 0x18) = *rdx_5
    int64_t* rax_9 = arg1[1]
    *rax_9 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x18, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x18, 4)

int64_t* rcx_8 = arg1[1]
int32_t* r8_3 = *rcx_8

if (&r8_3[1] u<= rcx_8[1])
    *(arg2 + 0x1c) = *r8_3
    int64_t* rax_13 = arg1[1]
    *rax_13 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x1c, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x1c, 4)

int64_t* rcx_10 = arg1[1]
int32_t* r8_4 = *rcx_10

if (&r8_4[1] u<= rcx_10[1])
    *(arg2 + 0x20) = *r8_4
    int64_t* rax_17 = arg1[1]
    *rax_17 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x20, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x20, 4)

int64_t* rax_20 = sub_1408d9160(sub_1408d9160(arg1, arg2 + 0x24, arg3), arg2 + 0x30, arg3)
int64_t* rcx_14 = rax_20[1]
char* rdx_11 = *rcx_14

if (&rdx_11[1] u> rcx_14[1])
    (*(*rax_20 + 0x150))(rax_20, arg2 + 0x3c, 1)
else
    *(arg2 + 0x3c) = *rdx_11
    int64_t* rax_23 = rax_20[1]
    *rax_23 += 1

int64_t* rax_25 = sub_1409ac7a0(rax_20, arg2 + 0x40, arg3)
int64_t* rdx_14 = rax_25[1]
int32_t* rax_26 = *rdx_14

if (&rax_26[1] u> rdx_14[1])
    int32_t rax_27
    rax_27.b = *(arg2 + 0x48) != 0
    int32_t arg_10 = rax_27
    (*(*rax_25 + 0x150))(rax_25, &arg_10, 4)
    *(arg2 + 0x48) = arg_10 != 0
else
    void* rcx_17
    rcx_17.b = *rax_26 != 0
    *(arg2 + 0x48) = rcx_17.b
    int64_t* rcx_18 = rax_25[1]
    *rcx_18 += 4

int64_t* rcx_20 = rax_25[1]
int32_t* rdx_16 = *rcx_20

if (&rdx_16[1] u> rcx_20[1])
    int32_t rax_32
    rax_32.b = *(arg2 + 0x49) != 0
    int32_t arg_18 = rax_32
    (*(*rax_25 + 0x150))(rax_25, &arg_18, 4)
    *(arg2 + 0x49) = arg_18 != 0
else
    void* rax_30
    rax_30.b = *rdx_16 != 0
    *(arg2 + 0x49) = rax_30.b
    int64_t* rax_31 = rax_25[1]
    *rax_31 += 4

int64_t* rcx_22 = rax_25[1]
int32_t* rdx_18 = *rcx_22

if (&rdx_18[1] u<= rcx_22[1])
    void* rax_35
    rax_35.b = *rdx_18 != 0
    *(arg2 + 0x4a) = rax_35.b
    int64_t* rax_36 = rax_25[1]
    *rax_36 += 4
    return arg1

int64_t rax_38 = *rax_25
int32_t rbp
rbp.b = *(arg2 + 0x4a) != 0
int32_t arg_20 = rbp
(*(rax_38 + 0x150))(rax_25, &arg_20, 4)
*(arg2 + 0x4a) = arg_20 != 0
return arg1
