// 函数: sub_140ce8110
// 地址: 0x140ce8110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg1 = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1, 4)

int64_t* rcx_2 = arg2[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg1[1] = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[1], arg3)
else
    (*(*arg2 + 0x150))(arg2, &arg1[1], 4)

int64_t* rcx_4 = arg2[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    arg1[2] = *r8_2
    int64_t* rax_10 = arg2[1]
    *rax_10 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[2], arg3)
else
    (*(*arg2 + 0x150))(arg2, &arg1[2], 4)

int64_t* rcx_6 = arg2[1]
int32_t* r8_3 = *rcx_6

if (&r8_3[1] u<= rcx_6[1])
    arg1[3] = *r8_3
    int64_t* rax_14 = arg2[1]
    *rax_14 += 4
    rax_14.b = 1
    return rax_14

if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[3], arg3)
    int64_t* rax_17
    rax_17.b = 1
    return rax_17

(*(*arg2 + 0x150))(arg2, &arg1[3], 4)
int64_t rax_16
rax_16.b = 1
return rax_16
