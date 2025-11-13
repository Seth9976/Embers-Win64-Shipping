// 函数: sub_14117b740
// 地址: 0x14117b740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2

if (arg1 != arg2)
    void* rax_1 = *(arg1 + 8)
    int32_t i_3 = *(arg1 + 0x10)
    void* r14_1 = arg1
    
    if (rax_1 != 0)
        r14_1 = rax_1
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t* rbx_1 = *r14_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    char rax_3
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_3 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                        (**rbx_1)(rbx_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_5 = sub_140a20af0()
                            uint64_t rdx = zx.q(rax_5)
                            void* const rax_6
                            
                            if (rax_5 != 0)
                                rax_6 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3))
                                    + (zx.q(rdx.d) & 0x3fff) * 0x18
                            else
                                rax_6 = nullptr
                            
                            *(rax_6 + 8) = rbx_1
                            sub_1405a42f0(&data_143f02390, rdx.d)
            
            r14_1 += 8
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = *(rdi + 0x10)
    void* rbp_1 = *(rdi + 8)
    int32_t r8_1 = *(arg1 + 0x14)
    *(arg1 + 0x10) = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_14119a5f0(arg1, i_2, r8_1)
        void* rax_11 = *(arg1 + 8)
        void* rcx_5 = arg1
        
        if (rbp_1 != 0)
            rdi = rbp_1
        
        if (rax_11 != 0)
            rcx_5 = rax_11
        
        if (i_2 != 0)
            void* rcx_6 = rcx_5 - rdi
            int32_t i_1
            
            do
                void* rax_12 = *rdi
                *(rcx_6 + rdi) = rax_12
                
                if (rax_12 != 0)
                    *(rax_12 + 8) += 1
                
                rdi += 8
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x14) = 1

return arg1
