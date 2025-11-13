// 函数: sub_140fdac00
// 地址: 0x140fdac00
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
int16_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[1] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 2)

int64_t* rcx_4 = arg1[1]
int16_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    arg2[2] = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 2)

int64_t* rcx_6 = arg1[1]
int32_t* rdx_2 = *rcx_6

if (&rdx_2[1] u> rcx_6[1])
    int32_t rax_14
    rax_14.b = *(arg2 + 7) != 0
    int32_t arg_8 = rax_14
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 7) = arg_8 != 0
else
    void* rax_12
    rax_12.b = *rdx_2 != 0
    *(arg2 + 7) = rax_12.b
    int64_t* rax_13 = arg1[1]
    *rax_13 += 4

int64_t* rcx_8 = arg1[1]
char* r8_3 = *rcx_8

if (&r8_3[1] u> rcx_8[1])
    (*(*arg1 + 0x150))(arg1, &arg2[3], 1)
    return arg1

arg2[3].b = *r8_3
int64_t* rax_19 = arg1[1]
*rax_19 += 1
return arg1
