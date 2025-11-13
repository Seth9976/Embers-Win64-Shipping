// 函数: sub_1420db0d0
// 地址: 0x1420db0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 4)

int64_t* rax_5 = sub_1408d9160(sub_1408d9160(arg1, &arg2[1], arg3), &arg2[4], arg3)
int64_t* rcx_4 = rax_5[1]
char* rdx_2 = *rcx_4

if (&rdx_2[1] u> rcx_4[1])
    (*(*rax_5 + 0x150))(rax_5, &arg2[7], 1)
else
    arg2[7].b = *rdx_2
    int64_t* rax_8 = rax_5[1]
    *rax_8 += 1

int64_t* rcx_6 = arg1[1]
int32_t* r8_1 = *rcx_6

if (&r8_1[1] u<= rcx_6[1])
    arg2[8] = *r8_1
    int64_t* rax_12 = arg1[1]
    *rax_12 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[8], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[8], 4)

int64_t* rcx_8 = arg1[1]
int32_t* r8_2 = *rcx_8

if (&r8_2[1] u<= rcx_8[1])
    arg2[9] = *r8_2
    int64_t* rax_16 = arg1[1]
    *rax_16 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[9], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[9], 4)

int64_t* rcx_10 = arg1[1]
int32_t* r8_3 = *rcx_10

if (&r8_3[1] u<= rcx_10[1])
    arg2[0xa] = *r8_3
    int64_t* rax_20 = arg1[1]
    *rax_20 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xa], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xa], 4)

sub_1408c9060(arg1, &arg2[0xc], arg3)
return arg1
