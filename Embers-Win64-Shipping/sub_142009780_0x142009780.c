// 函数: sub_142009780
// 地址: 0x142009780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int16_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0x10) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 2
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54000(arg2, arg1 + 0x10, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x10, 2)

int64_t* rcx_2 = arg2[1]
int16_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg1 + 0x12) = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 2
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54000(arg2, arg1 + 0x12, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x12, 2)

int64_t* rcx_4 = arg2[1]
char arg_8 = *(arg1 + 0x14)
char* rdx_2 = *rcx_4

if (&rdx_2[1] u> rcx_4[1])
    (*(*arg2 + 0x150))(arg2, &arg_8, 1)
else
    arg_8 = *rdx_2
    *rcx_4 += 1

*(arg1 + 0x14) = arg_8
(*(*arg2 + 0x140))(arg2, arg1 + 0x18)
int64_t* rcx_7 = arg2[1]
int32_t* r8_2 = *rcx_7

if (&r8_2[1] u<= rcx_7[1])
    *(arg1 + 0x24) = *r8_2
    int64_t* rax_16 = arg2[1]
    *rax_16 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x24, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x24, 4)

int64_t* rcx_9 = arg2[1]
int32_t* r8_3 = *rcx_9

if (&r8_3[1] u<= rcx_9[1])
    *(arg1 + 0x2c) = *r8_3
    int64_t* rax_20 = arg2[1]
    *rax_20 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x2c, arg5)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x2c, 4)

int64_t* rcx_11 = arg2[1]
char* rdx_7 = *rcx_11

if (&rdx_7[1] u> rcx_11[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x30, 1)
else
    *(arg1 + 0x30) = *rdx_7
    int64_t* rax_24 = arg2[1]
    *rax_24 += 1

int64_t* rcx_13 = arg2[1]
int32_t* rdx_9 = *rcx_13
int64_t* result

if (&rdx_9[1] u> rcx_13[1])
    int32_t rax_27
    rax_27.b = *(arg1 + 0x32) != 0
    int32_t arg_10 = rax_27
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    result.b = arg_10 != 0
    *(arg1 + 0x32) = result.b
else
    void* rax_26
    rax_26.b = *rdx_9 != 0
    *(arg1 + 0x32) = rax_26.b
    result = arg2[1]
    *result += 4

result.b = 1
*arg4 = 1
return result
