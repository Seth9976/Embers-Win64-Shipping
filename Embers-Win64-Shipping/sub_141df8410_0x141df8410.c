// 函数: sub_141df8410
// 地址: 0x141df8410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_2 = (*(*arg1 + 8))()
    void* rax_3 = sub_140bdf2e0()
    void* rcx = *(rax_2 + 0x10)
    arg2 = sx.q(*(rax_3 + 0x38))
    
    if (arg2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (arg2 << 3)) == rax_3 + 0x30)
        return rax_2

if (arg1 != 0)
    void* rax_7 = (*(*arg1 + 8))(arg1, arg2)
    void* rax_8 = sub_140d41340()
    void* rcx_3 = *(rax_7 + 0x10)
    int64_t rdx = sx.q(*(rax_8 + 0x38))
    
    if (rdx.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx << 3)) == rax_8 + 0x30)
        void* const rbx_2 = *(rax_7 + 0x20)
        
        if (rbx_2 != 0)
            void* rax_10 = sub_140bdf2e0()
            void* rdx_1 = *(rbx_2 + 0x10)
            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
            
            if (rax_11.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
                return rbx_2
        
        return nullptr

return 0
