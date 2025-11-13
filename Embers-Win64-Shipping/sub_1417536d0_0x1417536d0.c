// 函数: sub_1417536d0
// 地址: 0x1417536d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    arg1[1].d = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[1], arg3)
else
    (*(*arg2 + 0x150))(arg2, &arg1[1], 4)

int64_t* rcx_2 = arg2[1]
char arg_8 = *(arg1 + 0xc)
char* rdx_2 = *rcx_2

if (&rdx_2[1] u> rcx_2[1])
    (*(*arg2 + 0x150))(arg2, &arg_8, 1)
else
    arg_8 = *rdx_2
    *rcx_2 += 1

*(arg1 + 0xc) = arg_8
int512_t zmm1 = sub_1416f2f10(arg2, arg1, arg3)
int64_t* rcx_5 = arg2[1]
int32_t* r8_1 = *rcx_5

if (&r8_1[1] u<= rcx_5[1])
    arg1[2].d = *r8_1
    int64_t* rax_11 = arg2[1]
    *rax_11 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[2], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[2], 4)

int64_t result = *(*arg1 + 0xc8)
*(result + (sx.q(arg1[1].d) << 3)) = arg1
return result
