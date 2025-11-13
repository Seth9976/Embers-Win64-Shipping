// 函数: sub_1419c41e0
// 地址: 0x1419c41e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = *(arg2 + 0x14)
int64_t* rax_1 = sub_1407e5270(arg1, arg2, arg3)
int64_t* r8 = rax_1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    arg2[2].d = *rcx
    int64_t* rax_4 = rax_1[1]
    *rax_4 += 4
else if ((*(rax_1 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_1, &arg2[2], arg3)
else
    (*(*rax_1 + 0x150))(rax_1, &arg2[2], 4)

int64_t* rcx_2 = rax_1[1]
char* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    (*(*rax_1 + 0x150))(rax_1, &arg_8, 1)
else
    arg_8 = *rdx_1
    int64_t* rax_8 = rax_1[1]
    *rax_8 += 1

*(arg2 + 0x14) = arg_8
return arg1
