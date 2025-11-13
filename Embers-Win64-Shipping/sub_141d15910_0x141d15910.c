// 函数: sub_141d15910
// 地址: 0x141d15910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx += 4

int32_t rax_4 = arg_8

if (rax_4 s> *(arg2 + 0xc))
    sub_1405c5570(arg2, rax_4)
    rax_4 = arg_8

int64_t rdi = sx.q(arg2[1].d)

if (rax_4 s> rdi.d)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    memset(*arg2 + (rdi << 3), 0, sx.q(rax_4 - rdi.d) << 3)
    return arg1

if (rax_4 s< rdi.d)
    int32_t rcx_5 = rdi.d
    
    if (rcx_5 != rax_4)
        arg2[1].d = rdi.d - (rcx_5 - rax_4)
        sub_1405c53d0(arg2)

return arg1
