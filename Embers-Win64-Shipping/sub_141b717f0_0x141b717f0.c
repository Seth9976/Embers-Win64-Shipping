// 函数: sub_141b717f0
// 地址: 0x141b717f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = *(arg1 + 0x20)
void* i = arg1

if (i_1 != 0)
    i = i_1

for (void* rbp = i + (sx.q(*(arg1 + 0x28)) << 3); i != rbp; i += 8)
    void* const rdi_1 = *i
    
    if (rdi_1 == 0)
        rdi_1 = nullptr
    else
        void* rax_1 = sub_141c122a0()
        
        if (rax_1 == 0)
            rdi_1 = nullptr
        else
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> *(rdi_1 + 0x38) || *(*(rdi_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                rdi_1 = nullptr
    
    void* const rax_7
    
    if (arg2 == 0)
        rax_7 = nullptr
    else
        void* rax_4 = sub_141c122a0()
        
        if (rax_4 == 0)
            rax_7 = nullptr
        else
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rax_7 = nullptr
            else
                rax_7 = arg2
    
    if (rdi_1 != 0)
        int64_t rcx_2 = sx.q(*(rdi_1 + 0x38))
        
        if (rcx_2.d s<= *(rax_7 + 0x38) && *(*(rax_7 + 0x30) + (rcx_2 << 3)) == rdi_1 + 0x30)
            return i

return nullptr
