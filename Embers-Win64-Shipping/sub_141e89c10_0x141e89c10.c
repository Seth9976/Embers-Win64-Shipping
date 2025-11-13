// 函数: sub_141e89c10
// 地址: 0x141e89c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (arg2 != 0)
    rax = *(arg1 + 0x2c0)
    
    if (rax != 0 && *(rax + 0x160) == arg2)
        void* rax_1 = sub_141e7b050(arg1, arg2)
        void* rcx = *(arg1 + 0x2c0)
        
        if (rax_1 == 0)
            sub_141e76c60(rcx)
            int64_t rax_3
            rax_3.b = 1
            return rax_3
        
        sub_141e871e0(rcx, rax_1, 1, 0)
        int64_t rax_2
        rax_2.b = 1
        return rax_2

rax.b = 0
return rax
