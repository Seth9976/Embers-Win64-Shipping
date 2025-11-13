// 函数: sub_141ea2da0
// 地址: 0x141ea2da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = sub_14247bf70()
    void* rdx = *(arg1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        void* rax_7 = sub_140bdf670()
        void* rdx_2 = *(arg1 + 0x10)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
            int64_t* i = *(arg1 + 0x260)
            
            for (void* rbp_1 = &i[sx.q(*(arg1 + 0x268))]; i != rbp_1; i = &i[1])
                void* rdi_1 = *i
                
                if (rdi_1 != 0)
                    void* rax_11 = sub_1424a0e60()
                    void* rdx_3 = *(rdi_1 + 0x10)
                    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                    
                    if (rax_12.d s<= *(rdx_3 + 0x38)
                            && *(*(rdx_3 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30
                            && rdx_3 == arg2)
                        return rdi_1
    else
        int64_t* rcx_1 = *(arg1 + 0x238)
        void* rdx_1 = &rcx_1[sx.q(*(arg1 + 0x240))]
        
        if (rcx_1 != rdx_1)
            do
                void* rax_5 = *rcx_1
                
                if (rax_5 != 0 && *(rax_5 + 0x10) == arg2)
                    return rax_5
                
                rcx_1 = &rcx_1[1]
            while (rcx_1 != rdx_1)
            
            return 0

return nullptr
