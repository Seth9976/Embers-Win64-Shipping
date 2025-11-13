// 函数: sub_1418d4780
// 地址: 0x1418d4780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t* rdx = *rcx

if (&rdx[1] u<= rcx[1])
    *arg2 = *rdx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2, 4)

int64_t* rcx_2 = arg1[1]
int64_t i_2 = 2
int16_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    arg2[1].w = *r8
    int64_t* rax_6 = arg1[1]
    *rax_6 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 2)

int64_t* rcx_4 = arg1[1]
int16_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    *(arg2 + 6) = *r8_1
    int64_t* rax_10 = arg1[1]
    *rax_10 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, arg2 + 6, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 6, 2)

int64_t* rcx_6 = arg1[1]
int32_t* r8_2 = *rcx_6

if (&r8_2[1] u<= rcx_6[1])
    arg2[2] = *r8_2
    int64_t* rax_14 = arg1[1]
    *rax_14 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 4)

sub_1418d5a80(arg1, &arg2[4], arg3)
int512_t zmm1 = sub_1418d6f20(arg1, &arg2[8], arg3)
sub_1418d6d70(arg1, &arg2[0xc], zmm1)
sub_1418d6bc0(arg1, &arg2[0x10], zmm1)
int64_t* rcx_12 = arg1[1]
char* rdx_9 = *rcx_12

if (&rdx_9[1] u> rcx_12[1])
    (*(*arg1 + 0x150))(arg1, &arg2[0x14], 1)
else
    arg2[0x14].b = *rdx_9
    int64_t* rax_18 = arg1[1]
    *rax_18 += 1

int64_t* rcx_14 = arg1[1]
char* rdx_11 = *rcx_14

if (&rdx_11[1] u> rcx_14[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x51, 1)
else
    *(arg2 + 0x51) = *rdx_11
    int64_t* rax_22 = arg1[1]
    *rax_22 += 1

int64_t* rcx_16 = arg1[1]
int32_t* r8_3 = *rcx_16

if (&r8_3[1] u<= rcx_16[1])
    arg2[0x15] = *r8_3
    int64_t* rax_26 = arg1[1]
    *rax_26 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x15], zmm1)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x15], 4)

int64_t* rcx_18 = arg1[1]
int32_t* r8_4 = *rcx_18

if (&r8_4[1] u<= rcx_18[1])
    arg2[0x16] = *r8_4
    int64_t* rax_30 = arg1[1]
    *rax_30 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x16], zmm1)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x16], 4)

sub_1418d41a0(arg1, &arg2[0x17], zmm1)
void* i = &arg2[0x22]

for (void* r14 = i + 0x28; i != r14; i += 8)
    int64_t* rcx_21 = arg1[1]
    int64_t* rdx_16 = *rcx_21
    
    if (&rdx_16[1] u<= rcx_21[1])
        *i = *rdx_16
        int64_t* rax_34 = arg1[1]
        *rax_34 += 8
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b540d0(arg1, i, zmm1)
    else
        (*(*arg1 + 0x150))(arg1, i, 8)

sub_1418d4f00(arg1, &arg2[0x32], zmm1)
void* rdi = &arg2[0x2e]
int64_t i_1

do
    int64_t* rcx_24 = arg1[1]
    int64_t arg_8 = *rdi
    int64_t* rdx_19 = *rcx_24
    
    if (&rdx_19[1] u> rcx_24[1])
        int64_t* rdx_20 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg1, rdx_20, zmm1)
        else
            (*(*arg1 + 0x150))(arg1, rdx_20, 8)
    else
        arg_8 = *rdx_19
        *rcx_24 += 8
    
    *rdi = arg_8
    rdi += 8
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return arg1
