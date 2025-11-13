// 函数: sub_142029430
// 地址: 0x142029430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e29f28

if ((*(*rcx + 8))(rcx) != 0)
    char rax_3 = (*(*arg2 + 0x58))(arg2)
    char rax_5
    
    if (rax_3 == 0)
        rax_5 = (*(*arg2 + 0x60))(arg2)
    
    if (rax_3 != 0 || rax_5 != 0)
        int64_t* rcx_3 = *(arg1 + 0x18)
        char rax_7
        
        if (rcx_3 != 0)
            rax_7 = (*(*rcx_3 + 0x340))(rcx_3)
        
        if (rcx_3 == 0 || rax_7 == 0)
            void* rax_8 = *(arg1 + 0x58)
            
            if (rax_8 != 0)
                int64_t* i = *(rax_8 + 0x38)
                int64_t* i_1 = i
                void* r8_1 = &i[sx.q(*(rax_8 + 0x40))]
                
                if (i != r8_1)
                    do
                        void* rax_10 = *i_1
                        
                        if (rax_10 != 0 && *(rax_10 + 0x30) != 0)
                            int64_t* rdx
                            
                            for (; i != r8_1; i = &i[1])
                                void* rax_12 = *i
                                
                                if (rax_12 != 0)
                                    rdx = *(rax_12 + 0x30)
                                    
                                    if (rdx != 0)
                                        goto label_1420294fc
                            
                            rdx = nullptr
                        label_1420294fc:
                            jump(*(*rdx + 0xd28))
                        
                        i_1 = &i_1[1]
                    while (i_1 != r8_1)

return 1
