// 函数: sub_14192c260
// 地址: 0x14192c260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_14192cc70(arg1, arg2, arg3)
sub_14192cac0(arg1, &arg2[2], zmm1)
int512_t zmm1_2 = sub_14192c900(arg1, &arg2[6], sub_14192c900(arg1, &arg2[4], zmm1))
int64_t* rcx_3 = arg1[1]
int32_t* rdx_3 = *rcx_3

if (&rdx_3[1] u<= rcx_3[1])
    arg2[8].d = *rdx_3
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[8], zmm1_2)
else
    (*(*arg1 + 0x150))(arg1, &arg2[8], 4)

sub_140fdadf0(arg1, &arg2[9], zmm1_2)
sub_140fdadf0(arg1, &arg2[0xb], zmm1_2)
sub_140fdadf0(arg1, &arg2[0xd], zmm1_2)
sub_140fdadf0(arg1, &arg2[0xf], zmm1_2)
sub_140fdadf0(arg1, &arg2[0x11], zmm1_2)
int64_t* rcx_10 = arg1[1]
int16_t* r8 = *rcx_10

if (&r8[1] u<= rcx_10[1])
    arg2[0x13].w = *r8
    int64_t* rax_6 = arg1[1]
    *rax_6 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, &arg2[0x13], zmm1_2)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x13], 2)

int64_t* rcx_12 = arg1[1]
char* rdx_11 = *rcx_12

if (&rdx_11[1] u> rcx_12[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x9a, 1)
else
    *(arg2 + 0x9a) = *rdx_11
    int64_t* rax_10 = arg1[1]
    *rax_10 += 1

int64_t* rcx_14 = arg1[1]
char* rdx_13 = *rcx_14

if (&rdx_13[1] u> rcx_14[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x9b, 1)
else
    *(arg2 + 0x9b) = *rdx_13
    int64_t* rax_14 = arg1[1]
    *rax_14 += 1

int64_t* rcx_16 = arg1[1]
char* rdx_15 = *rcx_16

if (&rdx_15[1] u> rcx_16[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x9c, 1)
else
    *(arg2 + 0x9c) = *rdx_15
    int64_t* rax_18 = arg1[1]
    *rax_18 += 1

int64_t* rcx_18 = arg1[1]
int32_t* rdx_17 = *rcx_18

if (&rdx_17[1] u> rcx_18[1])
    int32_t rax_22
    rax_22.b = *(arg2 + 0x9d) != 0
    int32_t arg_8 = rax_22
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0x9d) = arg_8 != 0
else
    void* rax_20
    rax_20.b = *rdx_17 != 0
    *(arg2 + 0x9d) = rax_20.b
    int64_t* rax_21 = arg1[1]
    *rax_21 += 4

void* rdi = arg2 + 0x9e
int64_t i_1 = 0x10
int64_t i

do
    int64_t* rcx_20 = arg1[1]
    char* rdx_19 = *rcx_20
    
    if (&rdx_19[1] u> rcx_20[1])
        (*(*arg1 + 0x150))(arg1, rdi, 1)
    else
        *rdi = *rdx_19
        int64_t* rax_27 = arg1[1]
        *rax_27 += 1
    
    rdi += 1
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rcx_22 = arg1[1]
char* r8_1 = *rcx_22

if (&r8_1[1] u> rcx_22[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0xae, 1)
else
    *(arg2 + 0xae) = *r8_1
    int64_t* rax_31 = arg1[1]
    *rax_31 += 1

return arg1
