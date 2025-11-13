// 函数: sub_141a34af0
// 地址: 0x141a34af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
char* rcx = *r8

if (&rcx[1] u> r8[1])
    (*(*arg1 + 0x150))(arg1, arg3, 1)
else
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 1

int64_t* rax_4 = sub_1409ac740(arg1, &arg2[4], arg3)
int64_t* rdx_1 = rax_4[1]
char* rax_5 = *rdx_1

if (&rax_5[1] u> rdx_1[1])
    (*(*rax_4 + 0x150))(rax_4, &arg2[8], 1)
else
    arg2[8] = *rax_5
    int64_t* rcx_5 = rax_4[1]
    *rcx_5 += 1

return sub_1409ac740(rax_4, &arg2[0xc], arg3) __tailcall
