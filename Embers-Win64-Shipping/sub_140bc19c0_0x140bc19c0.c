// 函数: sub_140bc19c0
// 地址: 0x140bc19c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t* r8 = *rcx
int32_t arg_8

if (&r8[1] u> rcx[1])
    int32_t* rdx = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_8 = *r8
    *rcx += 4

int64_t* rcx_2 = arg1[1]
int32_t arg_18 = 0
int32_t* rdx_1 = *rcx_2

if (&rdx_1[1] u> rcx_2[1])
    int32_t* rdx_2 = &arg_18
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_2, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_2, 4)
else
    arg_18 = *rdx_1
    *rcx_2 += 4

int64_t rdx_3 = sx.q(*(arg1[0x15] + (sx.q(arg_8) << 2)))
arg_8 = rdx_3.d

if (rdx_3.d s>= 0)
    int64_t* rax_7 = arg1[0x16]
    
    if (rdx_3.d s< rax_7[1].d)
        int32_t arg_c = arg_18
        arg_8 = *(*rax_7 + (rdx_3 << 2))
        *arg2 = arg_8.q
        return arg1

sub_140bc88d0(arg1, rdx_3, arg2)
return arg1
