// 函数: sub_1418d4f00
// 地址: 0x1418d4f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rcx = arg1[1]
char* r8 = *rcx

if (&r8[1] u> rcx[1])
    (*(*arg1 + 0x150))(arg1, &arg2[0xa], 1)
else
    arg2[0xa].b = *r8
    int64_t* rax_4 = arg1[1]
    *rax_4 += 1

int64_t* rcx_2 = arg1[1]
char* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x51, 1)
else
    *(arg2 + 0x51) = *rdx_1
    int64_t* rax_8 = arg1[1]
    *rax_8 += 1

int64_t* rcx_4 = arg1[1]
char* rdx_3 = *rcx_4

if (&rdx_3[1] u> rcx_4[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x55, 1)
else
    *(arg2 + 0x55) = *rdx_3
    int64_t* rax_12 = arg1[1]
    *rax_12 += 1

sub_1418d58d0(arg1, arg2, arg3)
sub_1418d58d0(arg1, &arg2[2], arg3)
sub_1418d3ee0(arg1, &arg2[4], arg3)
sub_1418d3ee0(arg1, &arg2[6], arg3)
sub_1418d5720(arg1, &arg2[8], arg3)
int64_t* rcx_11 = arg1[1]
char* r8_1 = *rcx_11

if (&r8_1[1] u> rcx_11[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x52, 1)
else
    *(arg2 + 0x52) = *r8_1
    int64_t* rax_16 = arg1[1]
    *rax_16 += 1

int64_t* rcx_13 = arg1[1]
char* r8_2 = *rcx_13

if (&r8_2[1] u> rcx_13[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x53, 1)
else
    *(arg2 + 0x53) = *r8_2
    int64_t* rax_20 = arg1[1]
    *rax_20 += 1

int64_t* rcx_15 = arg1[1]
int32_t* r8_3 = *rcx_15

if (&r8_3[1] u<= rcx_15[1])
    arg2[0xb].d = *r8_3
    int64_t* rax_24 = arg1[1]
    *rax_24 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xb], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xb], 4)

void** var_1a0
sub_140b4cb20(&var_1a0, arg1)
void var_1a8
int64_t* rbx_1 = *SymBuffer::end(&var_1a0, &var_1a8)
int64_t* r9 = *(*rbx_1 + 8)
int64_t* rcx_19 = r9[1]
int32_t* rdx_15 = *rcx_19

if (&rdx_15[1] u<= rcx_19[1])
    *(arg2 + 0x5c) = *rdx_15
    int64_t* rax_30 = r9[1]
    *rax_30 += 4
else if ((*(r9 + 0x29) & 0x20) != 0)
    sub_140b54070(r9, arg2 + 0x5c, arg3)
else
    (*(*r9 + 0x150))(r9, arg2 + 0x5c, 4)

int64_t* r9_1 = *(*rbx_1 + 8)
int64_t* rcx_21 = r9_1[1]
int32_t* r8_4 = *rcx_21

if (&r8_4[1] u<= rcx_21[1])
    arg2[0xc].d = *r8_4
    int64_t* rax_35 = r9_1[1]
    *rax_35 += 4
else if ((*(r9_1 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_1, &arg2[0xc], arg3)
else
    (*(*r9_1 + 0x150))(r9_1, &arg2[0xc], 4)

int64_t* r9_2 = *(*rbx_1 + 8)
int64_t* rcx_23 = r9_2[1]
int32_t* r8_5 = *rcx_23

if (&r8_5[1] u<= rcx_23[1])
    *(arg2 + 0x64) = *r8_5
    int64_t* rax_40 = r9_2[1]
    *rax_40 += 4
else if ((*(r9_2 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_2, arg2 + 0x64, arg3)
else
    (*(*r9_2 + 0x150))(r9_2, arg2 + 0x64, 4)

sub_140b4cbb0(&var_1a0)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
