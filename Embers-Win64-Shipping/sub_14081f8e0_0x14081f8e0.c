// 函数: sub_14081f8e0
// 地址: 0x14081f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg1[2].d

if (arg2 s> 0)
    int32_t r8_1 = r12
    uint64_t i_1 = zx.q(arg2)
    uint64_t i
    
    do
        if (r8_1 == r8_1 s/ 0x66 * 0x66)
            void* rax_3 = j_sub_140a82f30(0x3fc0)
            void* rbp_1 = rax_3
            
            if (rax_3 == 0)
                rbp_1 = nullptr
            else
                void* rbx_1 = rax_3
                
                for (int64_t j = 0x66; j != 0; )
                    *(rbx_1 + 0x68) = 0
                    j -= 1
                    *(rbx_1 + 0x70) = 0
                    *(rbx_1 + 0x74) = 1
                    __builtin_memset(rbx_1 + 0x78, 0, 0x18)
                    *(rbx_1 + 0x90) = 0xffffffff
                    *(rbx_1 + 0x9c) &= 0xfc0c003c
                    *(rbx_1 + 0x9c) |= 0x40c003c
                    *(rbx_1 + 0x94) = 0
                    *(rbx_1 + 0x98) = 0xffff0000
                    int64_t rdi_1 = sx.q(*(rbx_1 + 0x70))
                    int32_t rax_4 = (rdi_1 + 1).d
                    *(rbx_1 + 0x70) = rax_4
                    
                    if (rax_4 s> *(rbx_1 + 0x74))
                        sub_14083a750(rbx_1, rdi_1.d)
                    
                    void* rax_5 = *(rbx_1 + 0x68)
                    void* rdx_5 = rbx_1
                    
                    if (rax_5 != 0)
                        rdx_5 = rax_5
                    
                    void* rax_6 = rdi_1 * 0x68
                    void* rax_7 = rax_6 + rdx_5
                    
                    if (rax_6 != neg.q(rdx_5))
                        *(rax_7 + 0x3c) &= 0xf8000000
                        *(rax_7 + 0x64) &= 0xfffff800
                        __builtin_memset(rax_7, 0, 0x3c)
                        *(rax_7 + 0x48) = 1
                        *(rax_7 + 0x58) = 0xffffffff
                        *(rax_7 + 0x5c) = 0
                        *(rax_7 + 0x60) = 0x3f800000
                    
                    rbx_1 += 0xa0
            
            int64_t rbx_2 = sx.q(arg1[1].d)
            int32_t rax_8 = (rbx_2 + 1).d
            arg1[1].d = rax_8
            
            if (rax_8 s> *(arg1 + 0xc))
                sub_140638870(arg1)
            
            *(*arg1 + (rbx_2 << 3)) = rbp_1
            r8_1 = arg1[2].d
        
        r8_1 += 1
        arg1[2].d = r8_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r12)
