// 函数: sub_140628270
// 地址: 0x140628270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0

if (arg1 != 0)
    void* rax_1 = sub_1424890f0()
    void* rdx = *(arg1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* result = *(arg1 + 0x258)
        
        if (result != 0)
            void* rax_4 = sub_14256a090()
            void* rcx_1 = *(result + 0x10)
            int64_t rdx_1 = sx.q(*(rax_4 + 0x38))
            
            if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == rax_4 + 0x30)
                *arg2 = 1
                return result

return 0
