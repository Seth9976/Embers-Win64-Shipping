// 函数: sub_141e02c20
// 地址: 0x141e02c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141e01bc0(*(arg1 + 0x10))

if (rax != 0)
    int64_t rdx = *rax
    int64_t* rax_1 = (*(rdx + 0x40))(rax, rdx)
    void** i = *rax_1
    
    for (void* r15_1 = &i[sx.q(rax_1[1].d)]; i != r15_1; i = &i[1])
        void* rsi_2 = sx.q(*(*i + 0x4c)) + arg1
        int64_t* rdi_1
        
        if (*(rsi_2 + 0xa0) != 0)
            void* rax_4 = sub_142463bc0()
            
            if (rax_4 == 0)
                goto label_141e02cb4
            
            rdi_1 = *(rsi_2 + 0xa0)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> rdi_1[7].d || *(rdi_1[6] + (rax_5 << 3)) != rax_4 + 0x30 || rdi_1 == 0)
                goto label_141e02cb4
            
            goto label_141e02cc8
        
    label_141e02cb4:
        rdi_1 = *(arg1 + 0x10)
        void* rcx_4
        
        if (rdi_1 == 0)
            rcx_4 = nullptr
        else
        label_141e02cc8:
            void* rax_8 = sub_140d21950(rdi_1, sub_14245d9a0())
            rcx_4 = rax_8
            
            if (rax_8 == 0)
                void* rax_9 = sub_140bdf670()
                void* rdx_3 = rdi_1[2]
                int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                
                if (rax_10.d s> *(rdx_3 + 0x38)
                        || *(*(rdx_3 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                    rcx_4 = nullptr
                else
                    if (rdi_1[0x23] == 0)
                        (*(*rdi_1 + 0x390))(rdi_1)
                    
                    void* rdi_2 = rdi_1[0x54]
                    
                    if (rdi_2 == 0)
                        rcx_4 = nullptr
                    else
                        rcx_4 = sub_140d21950(rdi_2, sub_14245d9a0())
        
        int64_t* rax_16 = (*(*rcx_4 + 0x80))(rcx_4)
        int64_t* j = *rax_16
        
        for (void* rdx_6 = sx.q(rax_16[1].d) * 0x68 + j; j != rdx_6; j = &j[0xd])
            if (*j == *(rsi_2 + 0xa8))
                if (arg2 == j[1])
                    return sub_141df1e90(rsi_2)
                
                break

return nullptr
