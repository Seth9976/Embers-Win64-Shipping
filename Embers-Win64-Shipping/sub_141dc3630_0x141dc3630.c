// 函数: sub_141dc3630
// 地址: 0x141dc3630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1
arg1.b = 3
void* rax = sub_141e5ebb0(arg1)

if (rax != 0)
    void* rdx_1 = *(rdi + 0x18)
    
    for (int64_t* i = *(rdx_1 + 0x110); i != &i[sx.q(*(rdx_1 + 0x118))]; i = &i[1])
        void* rdx_2 = *i
        
        if (rdx_2 != 0)
            void* rax_1 = *(rdx_2 + 0x10)
            int64_t rcx_1 = sx.q(*(rax + 0x38))
            
            if (rcx_1.d s<= *(rax_1 + 0x38) && *(*(rax_1 + 0x30) + (rcx_1 << 3)) == rax + 0x30)
                return rdx_2
    
    void* rax_3 = sub_141ee2150(*(rdi + 0x28))
    void* r8_1
    
    if (rax_3 != 0)
        for (int64_t* i_1 = *(rax_3 + 0x710); i_1 != &i_1[sx.q(*(rax_3 + 0x718))]; i_1 = &i_1[1])
            r8_1 = *i_1
            
            if (r8_1 != 0)
                void* rax_5 = *(r8_1 + 0x10)
                int64_t rcx_3 = sx.q(*(rax + 0x38))
                
                if (rcx_3.d s<= *(rax_5 + 0x38) && *(*(rax_5 + 0x30) + (rcx_3 << 3)) == rax + 0x30)
                    return r8_1
    
    int64_t* rcx_4 = *(rdi + 0x18)
    void* rax_8 = (*(*rcx_4 + 0x2c8))(rcx_4)
    
    if (rax_8 != 0)
        void** rdx_3 = *(rax_8 + 0xa0)
        void* r10_3 = &rdx_3[sx.q(*(rax_8 + 0xa8))]
        
        if (rdx_3 != r10_3)
            while (true)
                r8_1 = *rdx_3
                
                if (r8_1 != 0)
                    void* rax_10 = *(r8_1 + 0x10)
                    int64_t rcx_5 = sx.q(*(rax + 0x38))
                    
                    if (rcx_5.d s<= *(rax_10 + 0x38)
                            && *(*(rax_10 + 0x30) + (rcx_5 << 3)) == rax + 0x30)
                        return r8_1
                
                rdx_3 = &rdx_3[1]
                
                if (rdx_3 == r10_3)
                    return 0

return 0
