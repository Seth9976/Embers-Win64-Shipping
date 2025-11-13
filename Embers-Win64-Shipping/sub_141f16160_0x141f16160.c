// 函数: sub_141f16160
// 地址: 0x141f16160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(*(*(arg1 + 8) + 0x410) + 0x20)

if (rbx != 0)
    void* rax_1 = sub_142527690()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rcx_1 = *(rbx + 0xb8)
        
        if (rcx_1 != 0)
            void* rax_4 = sub_1420f98f0(rcx_1)
            void* rcx_2
            
            if (rax_4 != 0)
                rcx_2 = *(rax_4 + 0x1e0)
            
            int128_t var_18
            
            if (rax_4 != 0 && rcx_2 != 0)
                var_18 = *(arg1 + 0x30)
                return sub_1420fa4c0(rcx_2, &var_18)
            
            rcx_2 = *(rbx + 0x1e0)
            
            if (rcx_2 != 0)
                var_18 = *(arg1 + 0x30)
                return sub_1420fa4c0(rcx_2, &var_18)

return 0
