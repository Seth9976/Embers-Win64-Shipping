// 函数: sub_141e02800
// 地址: 0x141e02800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[4]

if (rsi != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rsi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8
        
        if (data_143de5480 != 0)
            rax_4, r8 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8.b = 1
            sub_141f3e990(arg1[4], 1, r8.b)

void* rsi_1 = arg1[0x48]

if (rsi_1 == 0)
    void* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rsi_1 = rax_6

int64_t* rcx_3 = *(rsi_1 + 0xa8)

if (rcx_3 != 0)
    int64_t* rax_8 = (*(*rcx_3 + 0x20))(rcx_3)
    
    if (arg2 s>= 0)
        int32_t rcx_4 = rax_8[1].d
        
        if (arg2 s< rcx_4)
            int64_t rdi_1 = sx.q(*(*(*rax_8 + (sx.q(rcx_4 - arg2) << 3) - 8) + 0x4c))
            void* rdi_2 = rdi_1 + *(rsi_1 + 0xa0)
            
            if (rdi_1 != neg.q(*(rsi_1 + 0xa0)) && sub_141e2afc0(rdi_2, arg3) != 0)
                int32_t* r8_1 = *(rdi_2 + 0x30)
                void* r10_2 = sx.q(*(rdi_2 + 0x38)) * 0xc8 + r8_1
                
                if (r8_1 != r10_2)
                    void* r9_1 = &r8_1[0x20]
                    
                    do
                        void* i_1 = *(r9_1 - 8)
                        void* i = r9_1 - 0x18
                        
                        if (i_1 != 0)
                            i = i_1
                        
                        for (void* rdx_2 = i + (sx.q(*r9_1) << 2); i != rdx_2; i += 4)
                            if (*i == arg3)
                                return *r8_1 f/ r8_1[2]
                        
                        r8_1 = &r8_1[0x32]
                        r9_1 += 0xc8
                    while (r8_1 != r10_2)

return (zx.o(0)).d
