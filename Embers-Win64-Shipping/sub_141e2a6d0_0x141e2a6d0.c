// 函数: sub_141e2a6d0
// 地址: 0x141e2a6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x90))()
void* result = sub_141df1e90(arg1)

if (result != 0 && arg1[0x11] != 0)
    void* rbp_1 = *(result + 0x20)
    
    if (rbp_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx = *(rbp_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            uint32_t rax_4
            void* r8_1
            
            if (data_143de5480 != 0)
                rax_4, r8_1 = GetCurrentThreadId()
                rax_4.b = rax_4 == data_143de5470
            
            if (data_143de5480 == 0 || rax_4.b != 0)
                r8_1.b = 1
                sub_141f3e990(*(result + 0x20), 1, r8_1.b)
    
    int64_t* r14_1 = *(result + 0x240)
    
    if (r14_1 == 0)
        int64_t* rax_6 = (*(*result + 0x300))(result)
        *(result + 0x240) = rax_6
        r14_1 = rax_6
    
    (*(*r14_1 + 0x90))(r14_1, result)
    void* rdx_2 = *arg2
    r14_1[0x80].w = *(rdx_2 + 0x400)
    r14_1[0x7f] = *(rdx_2 + 0x3f8)
    *(r14_1 + 0x402) = *(rdx_2 + 0x402)
    result = sub_141e06200(r14_1, arg1[0x11])

int32_t* i = arg1[0xb]

for (void* rsi_3 = &i[sx.q(arg1[0xc].d) * 4]; i != rsi_3; i = &i[4])
    if (*(i + 8) == 0 && *i != 0xffffffff)
        int64_t* rcx_6 = *arg2
        
        if (rcx_6 != 0)
            rcx_6 = rcx_6[0x15]
        
        result = (*(*rcx_6 + 0x20))(rcx_6)
        int64_t rdx_4 = sx.q(*i)
        char rcx_7
        
        if (rdx_4.d s< 0 || rdx_4.d s>= *(result + 8))
            rcx_7 = 0
        else
            rcx_7 = 1
        
        if (rcx_7 != 0)
            void* rcx_8 = *(*result + (rdx_4 << 3))
            result = *arg2
            *(i + 8) = sx.q(*(rcx_8 + 0x4c)) + *(result + 0xa0)
    
    int64_t* rcx_9 = *(i + 8)
    
    if (rcx_9 != 0)
        result = (**rcx_9)(rcx_9, arg2)

return result
