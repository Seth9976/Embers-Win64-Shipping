// 函数: sub_140b02790
// 地址: 0x140b02790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void** result_1 = arg1
int64_t rdx = sx.q(arg1[1].d)

if (rdx.d != 0)
    int32_t r13_1 = 0
    int32_t r14_1 = 0
    int64_t r12
    r12.b = **arg1 != arg2
    int64_t rsi_1 = 0
    
    do
        int64_t r10_1 = sx.q(r14_1)
        rsi_1 += 1
        r14_1 += 1
        
        if (rsi_1 s< rdx)
            void* rcx_2 = rsi_1 * 0x50 + *result_1
            
            do
                int32_t rax_1
                rax_1.b = *rcx_2 != arg2
                
                if (zx.d(r12.b) != rax_1)
                    break
                
                r14_1 += 1
                rsi_1 += 1
                rcx_2 += 0x50
            while (rsi_1 s< rdx)
        
        int32_t i_1 = r14_1 - r10_1.d
        
        if (r12.b != 0)
            if (r13_1 != r10_1.d)
                void* r9_1 = *result_1
                memmove(sx.q(r13_1) * 0x50 + r9_1, r10_1 * 0x50 + r9_1, i_1 * 0x50)
            
            r13_1 += i_1
        else if (i_1 != 0)
            void* rdi_4 = r10_1 * 0x50 + 0x20 + *result_1
            int32_t i
            
            do
                if (*(rdi_4 - 0x10) != 0)
                    void* rax_4 = *rdi_4
                    void* rcx_6 = rdi_4 + 0x10
                    
                    if (rax_4 != 0)
                        rcx_6 = rax_4
                    
                    (*(*rcx_6 + 0x10))(rcx_6)
                
                rdi_4 += 0x50
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        result_1 = arg1
        r12.b ^= 1
    while (rsi_1 s< rdx)
    
    result = result_1
    result[1].d = r13_1

return result
