// 函数: sub_14152ef80
// 地址: 0x14152ef80
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
    sub_1405a52a0(arg2, rax_4)
    rax_4 = arg_8

int32_t rcx_3 = arg2[1].d

if (rax_4 s> rcx_3)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405c4fe0(arg2)
        rax_4 = arg_8
else if (rax_4 s< rcx_3 && rcx_3 != rax_4)
    arg2[1].d = rax_4
    sub_1407c3fe0(arg2)
    rax_4 = arg_8

int32_t rbx = 0

if (rax_4 s> 0)
    do
        sub_1408dbe80(arg1, (sx.q(rbx) << 6) + *arg2, arg3)
        rbx += 1
    while (rbx s< arg_8)

return arg1
