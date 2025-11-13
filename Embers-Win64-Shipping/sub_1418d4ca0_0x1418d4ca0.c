// 函数: sub_1418d4ca0
// 地址: 0x1418d4ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int16_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 2)

int64_t* rcx_2 = arg1[1]
char* rdx = *rcx_2

if (&rdx[1] u> rcx_2[1])
    (*(*arg1 + 0x150))(arg1, &arg2[1], 1)
else
    arg2[1].b = *rdx
    int64_t* rax_6 = arg1[1]
    *rax_6 += 1

int64_t* rcx_4 = arg1[1]
char* r8_1 = *rcx_4

if (&r8_1[1] u> rcx_4[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 3, 1)
else
    *(arg2 + 3) = *r8_1
    int64_t* rax_10 = arg1[1]
    *rax_10 += 1

sub_140a1d9d0(arg1, &arg2[4], arg3)
return arg1
