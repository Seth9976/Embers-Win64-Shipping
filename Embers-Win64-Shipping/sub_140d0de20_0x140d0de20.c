// 函数: sub_140d0de20
// 地址: 0x140d0de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ca3bd0(arg1, arg2)
int64_t* r8 = arg2[1]
int64_t arg_8 = *(arg1 + 0x38) & 0xfff7ffefbffffdff
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0x30) = *rcx
    int64_t* rax_4 = arg2[1]
    *rax_4 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x30, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x30, 4)

int64_t* rcx_2 = arg2[1]
int64_t* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    int64_t* rdx_2 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b540d0(arg2, rdx_2, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_2, 8)
else
    arg_8 = *rdx_1
    *rcx_2 += 8

if ((arg2[5].b & 1) != 0)
    *(arg1 + 0x38) &= 0x8001040000200
    *(arg1 + 0x38) |= arg_8 & 0xfff7ffefbffffdff

(*(*arg2 + 0x140))(arg2, arg1 + 0x48)

if ((arg2[5].b & 1) != 0)
    *(arg1 + 0x44) = 0
    *(arg1 + 0x60) = 0

(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)

if ((arg2[5].b & 2) == 0)
    int32_t rax_13 = sub_140b4e7c0(arg2, &data_1439a4b70)
    
    if (rax_13 s< 0x15)
        return rax_13

int64_t* rcx_7 = arg2[1]
char* r8_1 = *rcx_7

if (&r8_1[1] u> rcx_7[1])
    return (*(*arg2 + 0x150))(arg2, arg1 + 0x42, 1)

*(arg1 + 0x42) = *r8_1
int64_t* rax_16 = arg2[1]
*rax_16 += 1
return rax_16
