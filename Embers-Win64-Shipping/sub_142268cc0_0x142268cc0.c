// 函数: sub_142268cc0
// 地址: 0x142268cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()

if (rax_1 != 0)
    sub_1424419c0(rax_1, arg1)
    
    if (arg2 == 3 || arg2 == 0)
        void* r14_1 = arg1[0x47]
        char r15_1 = *(r14_1 + 0x209) & 1
        sub_141f256b0(r14_1, 0)
        void* i = *(r14_1 + 0x298)
        
        for (void* rdi_2 = sx.q(*(r14_1 + 0x2a0)) * 0x8c + i; i != rdi_2; i += 0x8c)
            int64_t* rax_3
            int64_t rdx_1
            rax_3, rdx_1 = sub_140d3c6e0(i + 0x74)
            
            if (rax_3 != 0 && (*(rax_3 + 0x14d) & 2) != 0)
                int64_t r8_1 = *rax_3
                rdx_1.b = 1
                (*(r8_1 + 0x4a8))(rax_3, rdx_1, r8_1)
        
        sub_141f256b0(r14_1, r15_1)

return sub_141dc1f60(arg1, arg2) __tailcall
