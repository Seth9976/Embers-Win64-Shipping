// 函数: sub_14204a5f0
// 地址: 0x14204a5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408d9160(arg1, arg2, arg3)
int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    arg2[3] = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[3], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[3], 4)

sub_1408d9160(arg1, &arg2[4], arg3)
int64_t* rcx_3 = arg1[1]
int32_t* r8_1 = *rcx_3

if (&r8_1[1] u<= rcx_3[1])
    arg2[7] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[7], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[7], 4)

int64_t* rcx_5 = arg1[1]
int32_t* r8_2 = *rcx_5

if (&r8_2[1] u<= rcx_5[1])
    arg2[8] = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[8], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[8], 4)

int64_t* rcx_7 = arg1[1]
int32_t* r8_3 = *rcx_7

if (&r8_3[1] u<= rcx_7[1])
    arg2[9] = *r8_3
    int64_t* rax_14 = arg1[1]
    *rax_14 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[9], arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, &arg2[9], 4)
return arg1
