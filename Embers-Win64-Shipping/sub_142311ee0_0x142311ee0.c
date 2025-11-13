// 函数: sub_142311ee0
// 地址: 0x142311ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141f64a80(arg1)

if (rax != 0)
    if ((arg2:4.d == 0 & sub_140b5b8a0(arg2.d, 0)) == 0)
        int32_t rax_5 = sub_142249710(rax, arg2)
        
        if (rax_5 s>= 0 && rax_5 s< *(arg1 + 0x808))
            return *(*(arg1 + 0x800) + (sx.q(rax_5) << 3))
    else
        int64_t rax_2 = sx.q(*(arg1 + 0x7a0))
        
        if (rax_2.d s>= 0 && rax_2.d s< *(arg1 + 0x808))
            return *(*(arg1 + 0x800) + (rax_2 << 3))

return 0
