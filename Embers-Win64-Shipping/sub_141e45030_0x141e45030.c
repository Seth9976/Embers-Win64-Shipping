// 函数: sub_141e45030
// 地址: 0x141e45030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e06880(arg1)
int64_t* result = sub_141df83c0(arg1)

if (result != 0)
    void* const rcx_4
    
    if (arg1 == 0)
        rcx_4 = nullptr
    else
        void* rdi_1 = arg1[4]
        
        if (rdi_1 != 0)
            void* rax = sub_142591550()
            void* rdx_1 = *(rdi_1 + 0x10)
            int64_t rax_1 = sx.q(*(rax + 0x38))
            
            if (rax_1.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_1 << 3)) == rax + 0x30)
                void* r8_1
                r8_1.b = 1
                sub_141f3e990(arg1[4], 1, r8_1.b)
        
        rcx_4 = arg1[0x48]
        
        if (rcx_4 == 0)
            void* rax_4 = (*(*arg1 + 0x300))(arg1)
            arg1[0x48] = rax_4
            rcx_4 = rax_4
    
    result = zx.q(result[0x25].d)
    *(rcx_4 + 0x80c) = result.d

return result
