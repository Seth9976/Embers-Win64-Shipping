// 函数: sub_1426fbe40
// 地址: 0x1426fbe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rbx_1 = *(arg1 + 0x120)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_14269bba0()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* result = sub_140d3c6e0(rbx_1 + 0xf8)
            
            if (result != 0)
                void* rax_4 = sub_142738740()
                void* rcx_2 = *(result + 0x10)
                int64_t rdx_2 = sx.q(*(rax_4 + 0x38))
                
                if (rdx_2.d s<= *(rcx_2 + 0x38)
                        && *(*(rcx_2 + 0x30) + (rdx_2 << 3)) == rax_4 + 0x30)
                    return result

return 0
