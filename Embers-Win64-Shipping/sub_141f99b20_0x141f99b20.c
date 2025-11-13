// 函数: sub_141f99b20
// 地址: 0x141f99b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
char* rcx = *r8

if (&rcx[1] u> r8[1])
    (*(*arg2 + 0x150))(arg2, arg1, 1)
else
    *arg1 = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 1

int64_t* rcx_2 = arg2[1]
char* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    (*(*arg2 + 0x150))(arg2, &arg1[1], 1)
else
    arg1[1] = *rdx_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 1

int64_t* rcx_4 = arg2[1]
char* rdx_3 = *rcx_4

if (&rdx_3[1] u> rcx_4[1])
    (*(*arg2 + 0x150))(arg2, &arg1[2], 1)
else
    arg1[2] = *rdx_3
    int64_t* rax_10 = arg2[1]
    *rax_10 += 1

int64_t* rcx_6 = arg2[1]
char* rdx_5 = *rcx_6

if (&rdx_5[1] u> rcx_6[1])
    (*(*arg2 + 0x150))(arg2, &arg1[3], 1)
else
    arg1[3] = *rdx_5
    int64_t* rax_14 = arg2[1]
    *rax_14 += 1

int64_t* rcx_8 = arg2[1]
int32_t arg_10 = *(arg1 + 4)
int32_t* rdx_7 = *rcx_8

if (&rdx_7[1] u> rcx_8[1])
    int32_t* rdx_8 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_8, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_8, 4)
else
    arg_10 = *rdx_7
    *rcx_8 += 4

*(arg1 + 4) = arg_10
int64_t* rcx_10 = arg2[1]
int32_t arg_8

if ((arg2[5].b & 1) == 0)
    arg_8 = *(arg1 + 0x10)
    int32_t* rdx_14 = *rcx_10
    
    if (&rdx_14[1] u> rcx_10[1])
        int32_t* rdx_15 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_15, arg3)
        else
            (*(*arg2 + 0x150))(arg2, rdx_15, 4)
    else
        arg_8 = *rdx_14
        *rcx_10 += 4
    
    (*(*arg2 + 0x150))(arg2, *(arg1 + 8), sx.q(arg_8))
    int64_t rax_32
    rax_32.b = 1
    return rax_32

int32_t* rdx_9 = *rcx_10

if (&rdx_9[1] u> rcx_10[1])
    int32_t* rdx_10 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_10, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_10, 4)
else
    arg_8 = *rdx_9
    *rcx_10 += 4

int32_t rcx_13 = arg_8
int32_t rdx_11 = 0
*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) != rcx_13)
    sub_1405c5510(&arg1[8], rcx_13)
    rdx_11 = *(arg1 + 0x10)
    rcx_13 = arg_8

int32_t rax_24 = rdx_11 + rcx_13
*(arg1 + 0x10) = rax_24

if (rax_24 s> *(arg1 + 0x14))
    sub_1405daba0(&arg1[8])
    rcx_13 = arg_8

(*(*arg2 + 0x150))(arg2, *(arg1 + 8), sx.q(rcx_13))
int64_t rax_26
rax_26.b = 1
return rax_26
