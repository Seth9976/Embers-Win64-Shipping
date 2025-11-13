// 函数: sub_1417c5390
// 地址: 0x1417c5390
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

int64_t* rcx_3 = arg2[1]
int32_t* r8_1 = *rcx_3

if (&r8_1[1] u<= rcx_3[1])
    *(arg1 + 0x14) = *r8_1
    int64_t* rax_7 = arg2[1]
    *rax_7 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x14, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x14, 4)

return sub_141707780(arg2, arg1 + 0x20, arg3) __tailcall
