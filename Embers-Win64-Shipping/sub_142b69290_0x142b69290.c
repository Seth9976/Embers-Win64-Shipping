// 函数: sub_142b69290
// 地址: 0x142b69290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax

if (*arg3 s<= 0)
    rax = *(arg2 + 8)
    
    if ((rax.b & 0x11) == 0)
        void* r10_1 = arg2 + 0xa
        
        if ((rax.b & 2) == 0)
            r10_1 = *(arg2 + 0x18)
        
        if (r10_1 != 0)
            int32_t rcx_1
            
            if (rax s< 0)
                rcx_1 = *(arg2 + 0xc)
            else
                rcx_1 = sx.d(rax) s>> 5
            
            void* rbx = r10_1 + (sx.q(rcx_1) << 1)
            int64_t rax_3
            rax_3.b = rbx == (*(*arg1 + 0x98))(arg1, r10_1, rbx, arg3)
            return rax_3
    
    *arg3 = 1

rax.b = 0
return rax
