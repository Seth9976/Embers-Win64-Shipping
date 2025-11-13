// 函数: sub_140ce7ea0
// 地址: 0x140ce7ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cce170(arg1, arg2, arg3)
int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0x38) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x38, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x38, 4)

int64_t* rcx_2 = arg2[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg1 + 0x3c) = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x3c, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x3c, 4)

int64_t* rcx_4 = arg2[1]
int64_t arg_8 = *(arg1 + 0x40) & 0xfff7ffefbffffdff
int64_t* rdx_2 = *rcx_4

if (&rdx_2[1] u> rcx_4[1])
    int64_t* rdx_3 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b540d0(arg2, rdx_3, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 8)
else
    arg_8 = *rdx_2
    *rcx_4 += 8

if ((arg2[5].b & 1) != 0)
    *(arg1 + 0x40) &= 0x8001040000200
    *(arg1 + 0x40) |= arg_8 & 0xfff7ffefbffffdff

int64_t* rcx_6 = arg2[1]
int16_t* r8_2 = *rcx_6

if (&r8_2[1] u<= rcx_6[1])
    *(arg1 + 0x48) = *r8_2
    int64_t* rax_17 = arg2[1]
    *rax_17 += 2
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54000(arg2, arg1 + 0x48, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x48, 2)

(*(*arg2 + 0x140))(arg2, arg1 + 0x50)

if ((arg2[5].b & 1) != 0)
    *(arg1 + 0x4c) = 0
    *(arg1 + 0x68) = 0

int64_t* rcx_9 = arg2[1]
char* r8_3 = *rcx_9

if (&r8_3[1] u> rcx_9[1])
    return (*(*arg2 + 0x150))(arg2, arg1 + 0x4a, 1)

*(arg1 + 0x4a) = *r8_3
int64_t* result = arg2[1]
*result += 1
return result
