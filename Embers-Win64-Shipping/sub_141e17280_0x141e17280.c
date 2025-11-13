// 函数: sub_141e17280
// 地址: 0x141e17280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141df1e90(arg1)

if (result != 0 && *(arg1 + 0x88) != 0)
    void* rbp_1 = *(result + 0x20)
    
    if (rbp_1 != 0)
        void* rax = sub_142591550()
        void* rdx = *(rbp_1 + 0x10)
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
            uint32_t rax_3
            void* r8_1
            
            if (data_143de5480 != 0)
                rax_3, r8_1 = GetCurrentThreadId()
                rax_3.b = rax_3 == data_143de5470
            
            if (data_143de5480 == 0 || rax_3.b != 0)
                r8_1.b = 1
                sub_141f3e990(*(result + 0x20), 1, r8_1.b)
    
    void* rdx_1 = *(result + 0x240)
    
    if (rdx_1 == 0)
        void* rax_5 = (*(*result + 0x300))(result, rdx_1)
        *(result + 0x240) = rax_5
        rdx_1 = rax_5
    
    void* rcx_3 = *arg2
    *(rdx_1 + 0x410) = *(rcx_3 + 0x410)
    *(rdx_1 + 0x408) = *(rcx_3 + 0x408)
    *(rdx_1 + 0x412) = *(rcx_3 + 0x412)
    int64_t* rcx_4 = *(arg1 + 0x88)
    void* arg_8 = rdx_1
    result = (*(*rcx_4 + 8))(rcx_4, &arg_8)

void* i = *(arg1 + 0x58)

for (void* rdi_3 = (sx.q(*(arg1 + 0x60)) << 4) + i; i != rdi_3; i += 0x10)
    int64_t* rcx_5 = *(i + 8)
    
    if (rcx_5 != 0)
        result = (*(*rcx_5 + 8))(rcx_5, arg2)

return result
