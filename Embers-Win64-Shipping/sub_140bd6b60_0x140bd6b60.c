// 函数: sub_140bd6b60
// 地址: 0x140bd6b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x130))()
int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg2 + 8) = *rcx
    int64_t* rax_3 = arg1[1]
    *rax_3 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 8, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 8, 4)

int64_t* rcx_2 = arg1[1]
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    int32_t rax_8
    rax_8.b = *(arg2 + 0xc) != 0
    int32_t arg_8 = rax_8
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    *(arg2 + 0xc) = arg_8 != 0
    return arg1

void* rax_5
rax_5.b = *rdx_1 != 0
*(arg2 + 0xc) = rax_5.b
int64_t* rax_6 = arg1[1]
*rax_6 += 4
return arg1
