// 函数: sub_1405966e0
// 地址: 0x1405966e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x20, 0)

if (rax != 0)
    rax[1] = arg3
    *rax = &data_142d40dc0
    rax[3] = sub_140a387b0()
    *rax = &data_142d40e18

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
    void** rax_7 = (r14_1 << 4) + *arg1
    *rax_7 = rax
    rax_7[1].d = 2

return arg2
