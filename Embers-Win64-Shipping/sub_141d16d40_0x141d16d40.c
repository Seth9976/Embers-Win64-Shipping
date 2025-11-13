// 函数: sub_141d16d40
// 地址: 0x141d16d40
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
    sub_14061cd70(arg2, rax_4)
    rax_4 = arg_8

int64_t rbx = sx.q(arg2[1].d)

if (rax_4 s> rbx.d)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    memset((rbx << 4) + *arg2, 0, sx.q(rax_4 - rbx.d) << 4)
    rax_4 = arg_8
else if (rax_4 s< rbx.d)
    arg3 = sub_1406a4a20(arg2, rax_4, rbx.d - rax_4, 1)
    rax_4 = arg_8

int32_t rbx_2 = 0

if (rax_4 s> 0)
    do
        arg3 = sub_140a1d9d0(arg1, (sx.q(rbx_2) << 4) + *arg2, arg3)
        rbx_2 += 1
    while (rbx_2 s< arg_8)

return arg1
