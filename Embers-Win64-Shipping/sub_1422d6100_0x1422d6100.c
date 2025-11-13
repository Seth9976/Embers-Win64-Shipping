// 函数: sub_1422d6100
// 地址: 0x1422d6100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[2].d = arg2
int32_t i_2 = (arg2 + 0x65) s/ 0x66
sub_1422e2520(arg1, i_2)

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rax_2 = j_sub_140a82f30(0x3fc0)
        void* rbp_1 = rax_2
        
        if (rax_2 == 0)
            rbp_1 = nullptr
        else
            void* rbx_2 = rax_2
            
            for (int64_t j = 0x66; j != 0; )
                *(rbx_2 + 0x68) = 0
                j -= 1
                *(rbx_2 + 0x70) = 0
                *(rbx_2 + 0x74) = 1
                __builtin_memset(rbx_2 + 0x78, 0, 0x18)
                *(rbx_2 + 0x90) = 0xffffffff
                *(rbx_2 + 0x9c) &= 0xfc0c003c
                *(rbx_2 + 0x9c) |= 0x40c003c
                *(rbx_2 + 0x94) = 0
                *(rbx_2 + 0x98) = 0xffff0000
                int64_t rdi_1 = sx.q(*(rbx_2 + 0x70))
                int32_t rax_3 = (rdi_1 + 1).d
                *(rbx_2 + 0x70) = rax_3
                
                if (rax_3 s> *(rbx_2 + 0x74))
                    sub_14083a750(rbx_2, rdi_1.d)
                
                void* rax_4 = *(rbx_2 + 0x68)
                void* rdx_3 = rbx_2
                
                if (rax_4 != 0)
                    rdx_3 = rax_4
                
                void* rax_5 = rdi_1 * 0x68
                void* rax_6 = rax_5 + rdx_3
                
                if (rax_5 != neg.q(rdx_3))
                    *(rax_6 + 0x3c) &= 0xf8000000
                    *(rax_6 + 0x64) &= 0xfffff800
                    __builtin_memset(rax_6, 0, 0x3c)
                    *(rax_6 + 0x48) = 1
                    *(rax_6 + 0x58) = 0xffffffff
                    *(rax_6 + 0x5c) = 0
                    *(rax_6 + 0x60) = 0x3f800000
                
                rbx_2 += 0xa0
        
        int64_t rbx_3 = sx.q(arg1[1].d)
        int32_t rax_7 = (rbx_3 + 1).d
        arg1[1].d = rax_7
        
        if (rax_7 s> *(arg1 + 0xc))
            sub_140638870(arg1)
        
        *(*arg1 + (rbx_3 << 3)) = rbp_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
