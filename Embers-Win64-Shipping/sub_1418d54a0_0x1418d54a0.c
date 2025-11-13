// 函数: sub_1418d54a0
// 地址: 0x1418d54a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1_1 = sub_1418d5de0(arg1, &arg2[2], sub_1418d69f0(arg1, arg2, arg3))
(*(*arg1 + 8))(arg1, sx.q(arg2[5].d), sx.q(*(arg2 + 0x2c)))
int32_t rax_1 = 0

if ((arg1[5].b & 1) == 0)
    rax_1 = arg2[5].d

int64_t* rcx_2 = arg1[1]
int32_t arg_8 = rax_1
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u> rcx_2[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, zmm1_1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx_2 += 4

int32_t rcx_6 = arg_8

if (rcx_6 != 0)
    char rax_5 = *(arg1 + 0x29)
    
    if ((rax_5 & 1) != 0 || rcx_6 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rcx_6 s> 0x1000000))
        *(arg1 + 0x29) = rax_5 | 1
    else
        arg2[5].d = rcx_6
        
        if ((arg1[5].b & 1) != 0)
            sub_1405da9e0(&arg2[4], rcx_6, *(arg2 + 0x2c))
            rcx_6 = arg2[5].d
        
        (*(*arg1 + 0x150))(arg1, arg2[4], sx.q(rcx_6))
else if ((arg1[5].b & 1) != 0)
    arg2[5].d = 0
    
    if (*(arg2 + 0x2c) != 0)
        sub_1405c5510(&arg2[4], 0)

int512_t zmm1_2 = sub_1418d6150(arg1, &arg2[6], zmm1_1)
sub_1418d6310(arg1, &arg2[8], zmm1_2)
sub_1418d5fa0(arg1, &arg2[0xa], zmm1_2)
sub_140fdadf0(arg1, &arg2[0xc], zmm1_2)
sub_1418d6830(arg1, &arg2[0xe], zmm1_2)
int64_t* rcx_13 = arg1[1]
int32_t* r8_3 = *rcx_13

if (&r8_3[1] u<= rcx_13[1])
    arg2[0x10].d = *r8_3
    int64_t* rax_9 = arg1[1]
    *rax_9 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x10], zmm1_2)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x10], 4)

int64_t* rcx_15 = arg1[1]
int32_t* rdx_12 = *rcx_15

if (&rdx_12[1] u> rcx_15[1])
    int64_t rax_13 = *arg1
    int32_t rbp
    rbp.b = *(arg2 + 0x84) != 0
    arg_8 = rbp
    (*(rax_13 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0x84) = arg_8 != 0
else
    void* rax_11
    rax_11.b = *rdx_12 != 0
    *(arg2 + 0x84) = rax_11.b
    int64_t* rax_12 = arg1[1]
    *rax_12 += 4

sub_140b31010(arg1, &arg2[0x11])
int64_t* rcx_18 = arg1[1]
int32_t* r8_4 = *rcx_18

if (&r8_4[1] u<= rcx_18[1])
    *(arg2 + 0x9c) = *r8_4
    int64_t* rax_17 = arg1[1]
    *rax_17 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x9c, zmm1_2)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x9c, 4)

sub_1418d64c0(arg1, &arg2[0x14], zmm1_2)
sub_1418d64c0(arg1, &arg2[0x16], zmm1_2)
sub_140a1d9d0(arg1, &arg2[0x18], zmm1_2)
return arg1
