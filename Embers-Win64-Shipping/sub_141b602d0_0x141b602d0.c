// 函数: sub_141b602d0
// 地址: 0x141b602d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_4

if (arg3 != 0)
    int64_t arg_20
    sub_140d3a3a0(&arg_20, arg3)
    int32_t arg_18
    sub_1417f0130(arg1 + 0x50, &arg_18, arg_20)
    int64_t rax_1 = sx.q(arg_18)
    
    if (rax_1.d == 0xffffffff)
        rcx_4 = nullptr
    else
        rcx_4 = (rax_1 << 5) + *(arg1 + 0x50)

if (arg3 == 0 || rcx_4 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    *arg2 = *(rcx_4 + 8)
    void* rax_3 = *(rcx_4 + 0x10)
    arg2[1] = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1

return arg2
