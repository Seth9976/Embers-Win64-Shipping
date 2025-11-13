// 函数: sub_141e02990
// 地址: 0x141e02990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141e01bc0(*(arg1 + 0x10))

if (rax != 0)
    int64_t rdx = *rax
    int64_t* rax_1 = (*(rdx + 0x30))(rax, rdx)
    
    for (int64_t* i = *rax_1; i != &i[sx.q(rax_1[1].d)]; i = &i[1])
        int64_t rcx_2 = sx.q(*(*i + 0x4c))
        void* rcx_3 = rcx_2 + arg1
        
        if (rcx_2 != neg.q(arg1) && *(rcx_3 + 0x80) == arg2)
            return sub_141df1e90(rcx_3) __tailcall

return 0
