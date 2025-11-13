// 函数: sub_140642540
// 地址: 0x140642540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg1 != 0)
    void* rbx_1 = *(arg1 + 0x298)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_142531230()
        void* r8_1 = *(rbx_1 + 0x10)
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax << 3)) == rax_1 + 0x30)
            void* rbx_2 = *(rbx_1 + 0x70)
            
            if (rbx_2 != 0)
                void* rax_2 = sub_1424bff10()
                void* rdx = *(rbx_2 + 0x10)
                rax = sx.q(*(rax_2 + 0x38))
                
                if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_2 + 0x30)
                    *(rbx_2 + 0x6c) &= 0xfffffffb
                    *(rbx_2 + 0x6c) |= (zx.d(arg2) ^ 1) << 2
                    int32_t rax_5
                    rax_5.b = 1
                    return rax_5

rax.b = 0
return rax
