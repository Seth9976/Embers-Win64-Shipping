// 函数: sub_1417c5a80
// 地址: 0x1417c5a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x140))(arg2, arg1 + 8)
int64_t* r8 = arg2[1]
int32_t* rcx_1 = *r8

if (&rcx_1[1] u<= r8[1])
    *(arg1 + 0x10) = *rcx_1
    int64_t* rax_3 = arg2[1]
    *rax_3 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x10, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x10, 4)

sub_1417bf0f0(arg2, arg1 + 0x18)
sub_1417bf0f0(arg2, arg1 + 0x20)
int64_t* rcx_5 = arg2[1]
char arg_8 = *(arg1 + 0x28)
char* rdx_4 = *rcx_5

if (&rdx_4[1] u> rcx_5[1])
    (*(*arg2 + 0x150))(arg2, &arg_8, 1)
    uint32_t rax_10 = zx.d(arg_8)
    *(arg1 + 0x28) = rax_10
    return rax_10

arg_8 = *rdx_4
*rcx_5 += 1
uint32_t rax_8 = zx.d(arg_8)
*(arg1 + 0x28) = rax_8
return rax_8
