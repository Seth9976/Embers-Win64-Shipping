// 函数: sub_142066200
// 地址: 0x142066200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (data_143f40810 != 0)
    sub_1420574a0(arg1 + 0xd0, 0)
    return sub_142065820(arg1) __tailcall

int64_t rdi = 0
int32_t i = 0

if (*(arg1 + 0xf8) s> 0)
    void* rdx_1 = arg1 + 0xc0
    int64_t r12_1 = 0
    
    do
        void* rax = *(arg1 + 0xf0)
        void* rcx = arg1 + 0xd0
        
        if (rax != 0)
            rcx = rax
        
        void* const* result_1 = *(rcx + r12_1)
        sub_14206a890(result_1, rdx_1)
        int64_t rcx_2 = sx.q(result_1[5].d)
        
        if (rcx_2.d != 0)
            result = result_1[4]
            
            if (result != 0)
                result_1 = result
        
        if (rcx_2.d == 0 || *(result_1[rcx_2 - 1] + 0x48) == 0)
            void* rcx_4 = *(arg1 + 0xf0)
            int64_t r10_1 = sx.q(i) << 3
            void* rax_2 = arg1 + 0xd0
            
            if (rcx_4 != 0)
                rax_2 = rcx_4
            
            void* r15_1 = *(rax_2 + r10_1)
            
            if (r15_1 != 0)
                void* rax_3 = *(r15_1 + 0x20)
                void* rbx_1 = r15_1
                
                if (rax_3 != 0)
                    rbx_1 = rax_3
                
                int64_t r14_1 = sx.q(*(r15_1 + 0x28)) << 3
                uint64_t r14_2 = r14_1 u>> 3
                
                if (rbx_1 u> r14_1 + rbx_1)
                    r14_2 = 0
                
                if (r14_2 != 0)
                    do
                        int64_t* rcx_5 = *rbx_1
                        (*(*rcx_5 + 0x20))(rcx_5)
                        rdi += 1
                        rbx_1 += 8
                    while (rdi != r14_2)
                
                sub_1420575b0(r15_1, 0)
                int64_t rcx_7 = *(r15_1 + 0x20)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                j_sub_140a74f90(r15_1)
                rdi = 0
            
            int32_t r9_2 = *(arg1 + 0xf8)
            int32_t rdx_5 = r9_2 - i - 1
            
            if (rdx_5 s>= 1)
                rdx_5 = 1
            
            if (rdx_5 != 0)
                void* rax_7 = *(arg1 + 0xf0)
                void* rcx_9 = arg1 + 0xd0
                
                if (rax_7 != 0)
                    rcx_9 = rax_7
                
                memcpy(rcx_9 + r10_1, rcx_9 + (sx.q(r9_2 - rdx_5) << 3), rdx_5 << 3)
                r9_2 = *(arg1 + 0xf8)
            
            *(arg1 + 0xf8) = r9_2 - 1
            result = sub_141bdc8d0(arg1 + 0xd0)
            i -= 1
            r12_1 -= 8
        
        i += 1
        rdx_1 = arg1 + 0xc0
        r12_1 += 8
    while (i s< *(arg1 + 0xf8))

return result
