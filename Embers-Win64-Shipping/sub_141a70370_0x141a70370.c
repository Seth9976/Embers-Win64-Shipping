// 函数: sub_141a70370
// 地址: 0x141a70370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
char* rcx = *r8

if (&rcx[1] u> r8[1])
    (*(*arg1 + 0x150))(arg1, arg3, 1)
else
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 1

int64_t* rax_4 = sub_1409ac740(arg1, &arg2[4], arg3)
int64_t* rdx_1 = rax_4[1]
char* rax_5 = *rdx_1

if (&rax_5[1] u> rdx_1[1])
    (*(*rax_4 + 0x150))(rax_4, &arg2[8], 1)
else
    arg2[8] = *rax_5
    int64_t* rcx_5 = rax_4[1]
    *rcx_5 += 1

int64_t* result = sub_1409ac740(rax_4, &arg2[0xc], arg3)
int64_t* rdx_4 = result[1]
int32_t* rax_7 = *rdx_4

if (&rax_7[1] u<= rdx_4[1])
    *(arg2 + 0x10) = *rax_7
    int64_t* rcx_10 = result[1]
    *rcx_10 += 4
else if ((*(result + 0x29) & 0x20) != 0)
    sub_140b54070(result, &arg2[0x10], arg3)
else
    (*(*result + 0x150))(result, &arg2[0x10], 4)

int64_t* rcx_12 = result[1]
int32_t* r8_1 = *rcx_12

if (&r8_1[1] u<= rcx_12[1])
    *(arg2 + 0x14) = *r8_1
    int64_t* rax_11 = result[1]
    *rax_11 += 4
else if ((*(result + 0x29) & 0x20) != 0)
    sub_140b54070(result, &arg2[0x14], arg3)
else
    (*(*result + 0x150))(result, &arg2[0x14], 4)

int64_t* rcx_14 = result[1]
int32_t* r8_2 = *rcx_14

if (&r8_2[1] u<= rcx_14[1])
    *(arg2 + 0x18) = *r8_2
    int64_t* rax_15 = result[1]
    *rax_15 += 4
else if ((*(result + 0x29) & 0x20) != 0)
    sub_140b54070(result, &arg2[0x18], arg3)
else
    (*(*result + 0x150))(result, &arg2[0x18], 4)

int64_t* rcx_16 = result[1]
int32_t* r8_3 = *rcx_16

if (&r8_3[1] u<= rcx_16[1])
    *(arg2 + 0x1c) = *r8_3
    int64_t* rax_19 = result[1]
    *rax_19 += 4
    return result

if ((*(result + 0x29) & 0x20) != 0)
    sub_140b54070(result, &arg2[0x1c], arg3)
    return result

(*(*result + 0x150))(result, &arg2[0x1c], 4)
return result
