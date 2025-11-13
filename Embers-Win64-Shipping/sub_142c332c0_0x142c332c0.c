// 函数: sub_142c332c0
// 地址: 0x142c332c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0)
    uint16_t rdx_1 = zx.w(*arg1)
    uint32_t r9_1 = zx.d(arg1[1])
    
    if (rdx_1 * 0x100 + r9_1.w u> 8 && sub_142bf7510(arg2, arg1, (zx.d(rdx_1.b) << 8) + r9_1) != 0)
        void* rax_1 = *(arg2 + 0x28)
        int64_t rcx_4 = *(rax_1 + 0x10)
        *(arg2 + 8) = rcx_4
        int64_t rdx_4 = zx.q(*(rax_1 + 0x18)) + rcx_4
        *(arg2 + 0x10) = rdx_4
        void* rax_5
        
        if (arg1 u< rcx_4 || rdx_4 u<= arg1)
            rax_5 = nullptr
            *(arg2 + 8) = 0
        else
            *(arg2 + 8) = arg1
            uint64_t rcx_7 = (zx.q(*arg1) << 8) + zx.q(arg1[1])
            uint64_t rax_4 = rdx_4 - arg1
            
            if (rax_4 u>= rcx_7)
                rax_4 = rcx_7
            
            rax_5 = &arg1[rax_4]
        
        *(arg2 + 0x10) = rax_5
        uint64_t result = sub_142c2b790(arg1, arg2)
        void* rcx_9 = *(arg2 + 0x28)
        int64_t rdx_6 = *(rcx_9 + 0x10)
        *(arg2 + 8) = rdx_6
        *(arg2 + 0x10) = zx.q(*(rcx_9 + 0x18)) + rdx_6
        return result

return 0
