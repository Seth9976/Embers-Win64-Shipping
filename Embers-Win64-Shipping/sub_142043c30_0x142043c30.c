// 函数: sub_142043c30
// 地址: 0x142043c30
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

int512_t zmm1 = sub_140b0c2e0(arg2, &arg1[4], arg3)
int64_t* rcx_7 = arg2[1]
int32_t* rdx_5 = *rcx_7

if (&rdx_5[1] u<= rcx_7[1])
    arg1[0xc] = *rdx_5
    int64_t* rax_14 = arg2[1]
    *rax_14 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[0xc], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[0xc], 4)

return sub_140a1d9d0(arg2, &arg1[0x12], sub_140b53480(&arg1[0xe], zmm1, arg1[0xc])) __tailcall
