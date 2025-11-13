// 函数: sub_141b6d430
// 地址: 0x141b6d430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    *rax = &data_142dc0378
    sub_140d3a3a0(&rax[1], arg3)
    rax[2] = arg4
    rax[4] = sub_140a387b0()
    *rax = &data_142dc03d0

*arg2 = 0

if (rax != 0)
    sub_140599630(arg1, 1)
    void arg_10
    int64_t* rax_3 = (*rax)[6](rax, &arg_10)
    int64_t r14_1 = sx.q(arg1[1].d)
    int64_t rbx_1 = *rax_3
    int32_t rax_4 = (r14_1 + 1).d
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    *arg2 = rbx_1
    void**** rax_7 = (r14_1 << 4) + *arg1
    *rax_7 = rax
    rax_7[1].d = 3

return arg2
