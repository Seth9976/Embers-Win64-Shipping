// 函数: sub_1420574a0
// 地址: 0x1420574a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x20)
int32_t i_1 = *(arg1 + 0x28)
void* result_1 = arg1

if (result != 0)
    result_1 = result

if (i_1 != 0)
    int32_t i
    
    do
        void* rsi_1 = *result_1
        
        if (rsi_1 != 0)
            void* rax = *(rsi_1 + 0x20)
            void* rbx_1 = rsi_1
            int64_t rdi_1 = 0
            
            if (rax != 0)
                rbx_1 = rax
            
            int64_t r14_1 = sx.q(*(rsi_1 + 0x28)) << 3
            uint64_t r14_2 = r14_1 u>> 3
            
            if (rbx_1 u> r14_1 + rbx_1)
                r14_2 = 0
            
            if (r14_2 != 0)
                do
                    int64_t* rcx = *rbx_1
                    (*(*rcx + 0x20))(rcx)
                    rdi_1 += 1
                    rbx_1 += 8
                while (rdi_1 != r14_2)
            
            sub_1420575b0(rsi_1, 0)
            int64_t rcx_2 = *(rsi_1 + 0x20)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            result = j_sub_140a74f90(rsi_1)
        
        result_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) == arg2)
    return result

return sub_14085a940(arg1, arg2)
