// 函数: sub_1426b0ac0
// 地址: 0x1426b0ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1426b2ca0(arg1)

if (rax != 0)
    char rax_1 = sub_1426b21d0(rax, arg2 + 0x10)
    void* rax_2 = *(rax + 0xc0)
    void* const rdi_1
    
    if (rax_2 == 0 || rax_1 == 0xff)
        rdi_1 = nullptr
    else
        char rcx_1 = *(rax_2 + 0x4c)
        
        if (rax_1 u< rcx_1)
            void* rcx_4 = *(rax_2 + 0x30)
            
            if (rcx_4 == 0)
                rdi_1 = nullptr
            else
                rdi_1 = sub_1426b21a0(rcx_4, rax_1)
        else
            rdi_1 = *(rax_2 + 0x38) + (zx.q(rax_1) - zx.q(rcx_1)) * 0x18
    
    if (rdi_1 != 0)
        void* rbx_1 = *(rdi_1 + 8)
        
        if (rbx_1 != 0 && *(rbx_1 + 0x10) == sub_14272e650())
            uint32_t rax_8
            
            if (*(rax + 0xd0) != 0)
                rax_8.b = zx.d(rax_1) s< *(rax + 0xe0)
            
            int64_t rdx_4
            
            if (*(rax + 0xd0) == 0 || rax_8.b == 0)
                rdx_4 = 0
            else
                rdx_4 = zx.q(*(*(rax + 0xd8) + (zx.q(rax_1) << 1))) + *(rax + 0xc8)
            
            int64_t* rax_11 = rdx_4 + ((zx.q(*(*(rdi_1 + 8) + 0x2b) u>> 1) & 1) << 2)
            void* result
            
            if (rax_11 == 0)
                result = nullptr
            else
                int64_t arg_18 = *rax_11
                result = sub_140d3c6e0(&arg_18)
            
            if (result != 0)
                void* rax_14 = sub_142452380()
                void* rcx_7 = *(result + 0x10)
                int64_t rdx_5 = sx.q(*(rax_14 + 0x38))
                
                if (rdx_5.d s<= *(rcx_7 + 0x38)
                        && *(*(rcx_7 + 0x30) + (rdx_5 << 3)) == rax_14 + 0x30)
                    return result

return nullptr
