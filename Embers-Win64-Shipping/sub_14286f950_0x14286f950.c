// 函数: sub_14286f950
// 地址: 0x14286f950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rdi = 0

if (arg2 != 0x11)
    if (arg2 == 0x49)
        if (sub_14286fc30(arg1, arg4) != 0)
            rdi = 1
        
        return zx.q(rdi)
    
    if (arg2 == 0x4a)
        int32_t var_18
        int32_t var_14
        
        if (sub_14286fc30(arg1, &var_18) == 0 || var_18 s> 0 || var_14 s> 0)
            return zx.q(rdi)
        
        void* rcx_8 = *(arg1 + 0xb0)
        int64_t rax_5 = *(rcx_8 + 0x208)
        int32_t rdx_1 = *(rcx_8 + 0x1fc)
        
        if (rax_5 == 0)
            *(rcx_8 + 0x1fc) = rdx_1 * 2
            void* rax_8 = *(arg1 + 0xb0)
            
            if (*(rax_8 + 0x1fc) u> 0x3938700)
                *(rax_8 + 0x1fc) = 0x3938700
            
            sub_142870200(arg1)
        else
            *(*(arg1 + 0xb0) + 0x1fc) = rax_5(arg1, rdx_1)
        
        void* rax_9 = *(arg1 + 0xb0)
        *(rax_9 + 0x1f0) += 1
        
        if (*(*(arg1 + 0xb0) + 0x1f0) u> 2 && not(test_bit(sub_14284fc20(arg1), 0xc)))
            int64_t rcx_15 = sx.q(sub_142899cf0(sub_14284fce0(arg1), 0x2f, 0, 0))
            void* rax_14 = *(arg1 + 0xb0)
            
            if (rcx_15 u< *(rax_14 + 0x130))
                *(rax_14 + 0x130) = rcx_15
        
        void* rax_15 = *(arg1 + 0xb0)
        
        if (*(rax_15 + 0x1f0) u> 0xc)
            sub_142856580(arg1, 0xffffffff, 0x13e, 0x138, "ssl\d1_lib.c", 0x17e)
            return 0xffffffff
        
        *(rax_15 + 0x1e8) += 1
        void* rax_17 = *(arg1 + 0xb0)
        
        if (*(rax_17 + 0x1e8) u> 2)
            *(rax_17 + 0x1e8) = 1
        
        sub_142870200(arg1)
        return sub_142877560(arg1)
    
    if (arg2 != 0x78)
        if (arg2 == 0x79)
            return 0x100
        
        return sub_142870b10(arg1, arg2, arg3, arg4)
    
    if (arg3 s>= 0x100)
        *(*(arg1 + 0xb0) + 0x128) = sx.q(arg3)
        return 1
else if (arg3 s>= 0xd0)
    *(*(arg1 + 0xb0) + 0x130) = sx.q(arg3)
    return zx.q(arg3)

return 0
