// 函数: sub_14211c2a0
// 地址: 0x14211c2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x90)
int64_t* r8 = rbx[1]
int32_t* rcx = *r8
int32_t arg_8

if (&rcx[1] u> r8[1])
    int32_t* rdx = &arg_8
    
    if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, rdx, arg3)
    else
        (*(*rbx + 0x150))(rbx, rdx, 4)
else
    arg_8 = *rcx
    int64_t* rax_2 = rbx[1]
    *rax_2 += 4

int64_t* rcx_2 = rbx[1]
int32_t* rdx_1 = *rcx_2
int32_t arg_10

if (&rdx_1[1] u> rcx_2[1])
    int32_t* rdx_2 = &arg_10
    
    if ((*(rbx + 0x29) & 0x20) != 0)
        sub_140b54070(rbx, rdx_2, arg3)
    else
        (*(*rbx + 0x150))(rbx, rdx_2, 4)
else
    arg_10 = *rdx_1
    int64_t* rax_6 = rbx[1]
    *rax_6 += 4

int32_t arg_c = arg_10
arg_8 = *(*(arg1 + 0x98) + (sx.q(arg_8) << 3))
*arg2 = arg_8.q
return arg1
