// 函数: sub_140cd02e0
// 地址: 0x140cd02e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18
char* var_30 = &arg_18
void* result = nullptr
void*** (* var_38)() = sub_140884c50
arg_18 = 0
void* r15 = *(sub_140a756e0(&var_38, &data_14397f5f0) + 0x48)

if (r15 == 0)
    return 0

void* rbx = *(r15 + 0x80)

if (rbx != 0)
    void* rax_1 = sub_140be01c0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int32_t rcx_2 = 0
        int32_t rdx_2 = 0
        void* i = *(r15 + 0x80)
        int64_t r14 = 0
        int64_t var_48 = 0
        int32_t var_3c = 0
        
        for (; i != 0; i = *(i + 0x20))
            int64_t rbx_1 = *(i + 0x18)
            int64_t rsi_1 = sx.q(rdx_2)
            rdx_2 = (rsi_1 + 1).d
            
            if (rdx_2 s> rcx_2)
                sub_1405a4d70(&var_48)
                rcx_2 = var_3c
                r14 = var_48
            
            *(r14 + (rsi_1 << 3)) = rbx_1
        
        int32_t rdi = *(arg1 + 0x18)
        
        if (rdx_2 s< rdi)
            int64_t rcx_4 = sx.q(rdi)
            int32_t rax_4 = rcx_4.d
            
            if (rdx_2 s<= rcx_4.d)
                rax_4 = rdx_2
            
            if (rax_4 s<= 0)
            label_140cd041b:
                result = *(r15 + 0x80)
                int32_t rdi_1 = rdi - rdx_2
                sub_140d3a3a0(arg1 + 8, result)
                int64_t rcx_7 = sx.q(*(arg1 + 0x18))
                int32_t rsi_2 = rcx_7.d
                int32_t rsi_3 = rsi_2 - rdi_1
                
                if (rsi_2 != rdi_1)
                    int32_t rax_8 = *(arg1 + 0x18)
                    int32_t rdx_6 = rax_8 - rsi_3
                    
                    if (rdx_6 != rdi_1)
                        int64_t r9_2 = *(arg1 + 0x10)
                        memmove(r9_2 + (sx.q(rdi_1) << 3), r9_2 + (rcx_7 << 3), 
                            (rdx_6 - rdi_1) << 3)
                        rax_8 = *(arg1 + 0x18)
                    
                    *(arg1 + 0x18) = rax_8 - rsi_3
                    sub_1405c53d0(arg1 + 0x10)
            else
                int32_t r9_1 = rdx_2 - 1
                int64_t r8_2 = 0
                int64_t* r10_1 = *(arg1 + 0x10) - 8 + (rcx_4 << 3)
                
                while (*(r14 + (sx.q(r9_1) << 3)) == *r10_1)
                    r9_1 -= 1
                    r8_2 += 1
                    r10_1 -= 8
                    
                    if (r8_2 s>= sx.q(rax_4))
                        goto label_140cd041b
        
        if (r14 != 0)
            sub_140a74f90(r14)
        
        return result

return 0
