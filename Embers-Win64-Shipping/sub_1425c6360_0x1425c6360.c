// 函数: sub_1425c6360
// 地址: 0x1425c6360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && ((zx.q(*(*(arg2 + 8) + 0x10)) u>> 0x15).b & 1) != 0)
    void* rax_2 = *(arg2 + 0x78)
    
    if (rax_2 == arg1)
        char rcx = (*(arg2 + 0x80)).b
        void** rdx_1 = sx.q(*(arg2 + 0x4c)) + arg3
        void* var_28 = rax_2
        int32_t rax_3 = *(rax_2 + 0x3c)
        int32_t rax_4 = sub_140cd78f0(&var_28, 1)
        
        if (rdx_1[1].d != 0)
            void* rcx_3 = *rdx_1
            
            if ((not.b(rcx) & 1) == 0 && (rcx_3.b & 1) != 0)
                rcx_3 = (rcx_3 s>> 1) + rdx_1
            
            return sx.q(rax_3 * rax_4) + rcx_3
else if (arg4 s< *(arg1 + 0x38))
    return sx.q(*(arg1 + 0x4c)) + sx.q(*(arg1 + 0x3c) * arg4) + arg3

return 0
