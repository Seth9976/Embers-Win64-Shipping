// 函数: sub_1426b0a00
// 地址: 0x1426b0a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_14272a130()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rbx_1 = *(arg2 + 0x68)
        
        if (rbx_1 != 0)
            void* result = *(rbx_1 + 0x2e0)
            
            if (result != 0)
                void* rax_4 = sub_1427297d0()
                void* rcx_1 = *(result + 0x10)
                int64_t rdx_1 = sx.q(*(rax_4 + 0x38))
                
                if (rdx_1.d s<= *(rcx_1 + 0x38)
                        && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == rax_4 + 0x30)
                    return result

return 0
