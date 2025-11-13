// 函数: sub_141e9f4e0
// 地址: 0x141e9f4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x280) != 0 && arg2 != 0)
    void* rax_1 = sub_142459c10()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* rsi_1 = *(arg1 + 0x280)
            void* rax_4 = sub_142459c10()
            int64_t rax_5
            
            if (rax_4 != 0)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            void* const rax_7
            
            if (rax_4 == 0 || rax_5.d s> *(arg2 + 0x38)
                    || *(*(arg2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rax_7 = nullptr
            else
                rax_7 = arg2
            
            void* rdx_2 = *(rsi_1 + 0x10)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
                return *(arg1 + 0x280)

return sub_141dc3180(arg1, arg2) __tailcall
