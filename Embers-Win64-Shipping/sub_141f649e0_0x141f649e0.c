// 函数: sub_141f649e0
// 地址: 0x141f649e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg3
*arg2 = 0
int64_t arg_10 = rbx
arg3.b = sub_140b5b8a0(arg3.d, 0) == 0
arg3.b |= (rbx u>> 0x20).d != 0

if (arg3.b != 0)
    void* rcx_1 = *(arg1 + 0x430)
    
    if (rcx_1 != 0)
        int32_t rax_1 = sub_14078ee20(rcx_1 + 0x188, &arg_10)
        
        if (rax_1 s>= 1)
            int64_t rdx_1 = *(*(arg1 + 0x430) + 0x1a8)
            *arg2 = *(rdx_1 + sx.q(*(rdx_1 + sx.q(rax_1) * 0xc + 8)) * 0xc)

return arg2
