// 函数: sub_141755f60
// 地址: 0x141755f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (arg2 s> rdi.d)
    int32_t i_1 = arg2 - rdi.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    if (i_1 != 0)
        void* rax = *arg1 + rdi * 0x18 + 0x10
        int32_t i
        
        do
            *(rax - 8) = 0
            *rax = 0
            *(rax + 4) = 1
            rax += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rdi.d)
    return sub_14174cdc0(arg1, arg2, rdi.d - arg2, arg3) __tailcall
