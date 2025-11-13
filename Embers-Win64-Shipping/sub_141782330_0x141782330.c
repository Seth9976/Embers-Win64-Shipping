// 函数: sub_141782330
// 地址: 0x141782330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x10)
int64_t rax = 1

if (r8 != 0)
    rax = r8

while (true)
    int64_t rsi_2 = rax - r8
    
    if (rsi_2 u>= arg2 && rax u>= 8)
        int64_t rdx = rax << 3
        uint64_t r15_1 = *(arg1 + 0x18) u>> 1
        void* r14_2
        
        if (rax u<= 0x1fffffffffffffff)
            if (rdx u>= 0x1000)
                goto label_1417823b6
            
            if (rdx == 0)
                r14_2 = nullptr
            else
                r14_2 = j_sub_140a82f30(rdx)
            
            goto label_1417823f2
        
        rdx = -1
    label_1417823b6:
        int64_t rcx_1 = rdx + 0x27
        
        if (rcx_1 u<= rdx)
            rcx_1 = -1
        
        int64_t rax_1 = j_sub_140a82f30(rcx_1)
        
        if (rax_1 != 0)
            r14_2 = (rax_1 + 0x27) & 0xffffffffffffffe0
            *(r14_2 - 8) = rax_1
        label_1417823f2:
            int64_t rax_3 = *(arg1 + 8)
            uint64_t count_2 = r15_1 << 3
            int64_t rdx_1 = rax_3 + count_2
            void* rdi_1 = count_2 + r14_2
            void* rbx_4 = (*(arg1 + 0x10) << 3) - rdx_1 + rax_3
            memmove(rdi_1, rdx_1, rbx_4.d)
            int64_t rdx_2 = *(arg1 + 8)
            void* rbx_5 = rbx_4 + rdi_1
            void* rcx_6
            uint64_t count
            
            if (r15_1 u> rsi_2)
                uint64_t count_1 = rsi_2 << 3
                memmove(rbx_5, rdx_2, count_1.d)
                int64_t rbx_6 = *(arg1 + 8)
                int64_t rdx_3 = count_1 + rbx_6
                void* rbx_8 = rbx_6 - rdx_3 + count_2
                memmove(r14_2, rdx_3, rbx_8.d)
                rcx_6 = rbx_8 + r14_2
                count = count_1
            else
                memmove(rbx_5, rdx_2, count_2.d)
                memset(count_2 + rbx_5, 0, (rsi_2 - r15_1) << 3)
                count = count_2
                rcx_6 = r14_2
            
            int64_t result = memset(rcx_6, 0, count)
            void* rcx_8 = *(arg1 + 8)
            
            if (rcx_8 == 0)
                goto label_1417824e4
            
            if (*(arg1 + 0x10) << 3 u< 0x1000)
                goto label_1417824da
            
            void* r8_8 = *(rcx_8 - 8)
            
            if (rcx_8 - r8_8 - 8 u<= 0x1f)
                rcx_8 = r8_8
            label_1417824da:
                result = j_sub_140a74f90(rcx_8)
            label_1417824e4:
                *(arg1 + 8) = r14_2
                *(arg1 + 0x10) += rsi_2
                return result
        
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (0xfffffffffffffff - rax u< rax)
        break
    
    rax *= 2

sub_141782510()
noreturn
