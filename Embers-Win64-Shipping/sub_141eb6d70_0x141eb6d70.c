// 函数: sub_141eb6d70
// 地址: 0x141eb6d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0xffffffff
int64_t* rcx = arg1[1]
int32_t* r8 = *rcx

if (&r8[1] u> rcx[1])
    int32_t* rdx = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_8 = *r8
    *rcx += 4

int64_t rax_3 = sx.q(arg_8)

if (rax_3.d s>= 0)
    void* rdx_1 = arg1[0x14]
    
    if (rax_3.d s< *(rdx_1 + 0x40))
        *arg2 = *(*(rdx_1 + 0x38) + (rax_3 << 3))
        return arg1

*arg2 = 0
return arg1
