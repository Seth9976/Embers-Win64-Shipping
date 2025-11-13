// 函数: sub_141b211f0
// 地址: 0x141b211f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141f3b9f0(arg1)

if (rax != 0)
    void* rax_2 = sub_140d21950(rax, sub_141ae8e30())
    
    if (rax_2 != 0)
        int64_t rdx_2 = *rax_2
        void* result = (*(rdx_2 + 0x10))(rax_2, rdx_2)
        
        if (result != 0)
            void* rax_3 = sub_141ae32c0()
            void* rcx_2 = *(result + 0x10)
            int64_t rdx_3 = sx.q(*(rax_3 + 0x38))
            
            if (rdx_3.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_3 << 3)) == rax_3 + 0x30)
                return result
        
        return nullptr

return 0
