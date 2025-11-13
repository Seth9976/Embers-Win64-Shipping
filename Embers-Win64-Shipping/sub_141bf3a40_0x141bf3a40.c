// 函数: sub_141bf3a40
// 地址: 0x141bf3a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r9 = sx.q(arg1[0x6b].d)
void** result_1 = arg1

if (r9.d != 0)
    void* r8_1 = arg1[0x6a]
    int32_t rdi_1 = 0
    int32_t r14_1 = 0
    int32_t rcx_4 = (*(r8_1 + 0x1c) ^ arg2[3]) | (*(r8_1 + 0x14) ^ arg2[1])
        | (*(r8_1 + 0x18) ^ arg2[2]) | (*arg2 ^ *(r8_1 + 0x10))
    int64_t r15
    r15.b = rcx_4 != 0
    int64_t rbx_1 = 0
    
    do
        int64_t r10_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< r9)
            void* rdx_1 = result_1[0x6a] + ((rbx_1 * 9 + 6) << 2)
            
            do
                int32_t rax_13
                rax_13.b = ((*(rdx_1 - 8) ^ *arg2) | (*(rdx_1 - 4) ^ arg2[1])
                    | (*(rdx_1 + 4) ^ arg2[3]) | (*rdx_1 ^ arg2[2])) != 0
                
                if (zx.d(r15.b) != rax_13)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rdx_1 += 0x24
            while (rbx_1 s< r9)
            
            result_1 = arg1
        
        int32_t rsi_3 = rdi_1 - r10_1.d
        
        if (r15.b != 0)
            if (r14_1 != r10_1.d)
                int64_t r9_2 = result_1[0x6a]
                memmove(r9_2 + sx.q(r14_1) * 0x24, r9_2 + r10_1 * 0x24, rsi_3 * 0x24)
            
            r14_1 += rsi_3
        
        result_1 = arg1
        r15.b ^= 1
    while (rbx_1 s< r9)
    
    result = result_1
    result_1[0x6b].d = r14_1

return result
