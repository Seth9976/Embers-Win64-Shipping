// 函数: sub_142c31d20
// 地址: 0x142c31d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(arg1[1])
uint32_t r9_1 = zx.d(*arg1) << 8
uint64_t r10 = zx.q(arg2)
uint32_t r9_2 = r9_1 + rax

if (r9_1 == neg.d(rax))
    if (r10.d u< arg3)
        void* result = &arg1[2 + (r10 << 1)]
        
        if (result u>= &arg1[2])
            return result
        
        return &data_14369a5d0
else
    int32_t arg_8
    
    if (r9_2 == 2)
        arg_8 = r10.d
        void* rax_5 = sub_142c2b430(&arg1[2], &arg_8)
        
        if (rax_5 != 0)
            return rax_5 + 4
    else
        if (r9_2 == 4)
            return sub_142c31ea0(arg1, r10.d) __tailcall
        
        if (r9_2 == 6)
            arg_8 = r10.d
            void* rax_2 = sub_142c2b4f0(&arg1[2], &arg_8)
            
            if (rax_2 != 0)
                return rax_2 + 2
        else if (r9_2 == 8)
            return sub_142c31f40(arg1, r10.d) __tailcall

return 0
