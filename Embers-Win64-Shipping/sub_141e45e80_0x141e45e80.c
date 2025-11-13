// 函数: sub_141e45e80
// 地址: 0x141e45e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e66300(arg1)
void* rbx = arg1[7]

if (rbx != 0)
    int64_t* i = arg1[0x10]
    
    for (void* rsi_1 = i + sx.q(arg1[0x11].d) * 0xc; i != rsi_1; i += 0xc)
        sub_141e4ba90(rbx, &data_143f398c8, i)
    
    *(rbx + 0x268) += 1
    void* rsi_2 = *(rbx + 0x240)
    
    if (rsi_2 != 0)
        *(rbx + 0x250) = 0
        
        if (*(rbx + 0x254) s<= 0xffffffff)
            sub_1405947f0(rbx + 0x248, 0)
        
        sub_141e5ced0(rsi_2, rbx + 0x248)
    
    void* i_1 = arg1[0x20]
    
    for (void* r14_1 = i_1 + sx.q(arg1[0x21].d) * 0x18; i_1 != r14_1; i_1 += 0x18)
        if (sub_141e4ba90(rbx, &data_143f398c8, i_1 + 8) != 0)
            *(rbx + 0x268) += 1
            void* rbp_1 = *(rbx + 0x240)
            
            if (rbp_1 != 0)
                int32_t rax_4 = *(rbx + 0x254)
                *(rbx + 0x250) = 0
                
                if (rax_4 s< 0 && rax_4 != 0)
                    sub_1405947f0(rbx + 0x248, 0)
                
                sub_141e5ced0(rbp_1, rbx + 0x248)
    
    int128_t var_28 = data_1439a9418
    int32_t rax_5 = sub_140cdd5d0(arg1, &var_28)
    int32_t rax_6
    
    if (rax_5 s>= 0xf)
        var_28 = data_1439a9418
        rax_6 = sub_140cdd5d0(rbx, &var_28)
    
    if (rax_5 s< 0xf || rax_6 s< 0xf)
        void* rdi_1 = arg1[0x20]
        void* r14_2 = rdi_1 + sx.q(arg1[0x21].d) * 0x18
        
        if (rdi_1 != r14_2)
            int64_t* rsi_3 = rdi_1 + 8
            
            do
                char rax_8 = sub_141e01870(rdi_1, 1)
                char rax_9 = sub_141e01870(rdi_1, 8)
                
                if (rax_8 != 0 || rax_9 != 0)
                    sub_141e3aac0(rbx, *rsi_3, rax_9, rax_8)
                
                rdi_1 += 0x18
                rsi_3 = &rsi_3[3]
            while (rdi_1 != r14_2)

return sub_141e46b90(arg1) __tailcall
