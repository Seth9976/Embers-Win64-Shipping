// 函数: sub_1406c3e30
// 地址: 0x1406c3e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x10)
int64_t rax = 1

if (r8 != 0)
    rax = r8

while (true)
    int64_t rsi_2 = rax - r8
    
    if (rsi_2 u>= arg2 && rax u>= 8)
        int64_t r12 = *(arg1 + 0x18)
        
        if (rax u<= 0x1fffffffffffffff)
            int64_t rcx_1 = rax << 3
            void* r14_2
            
            if (rcx_1 u< 0x1000)
                if (rcx_1 == 0)
                    r14_2 = nullptr
                else
                    r14_2 = j_sub_140a82f30(rcx_1)
                
                goto label_1406c3ee9
            
            if (rcx_1 + 0x27 u> rcx_1)
                int64_t rax_2 = j_sub_140a82f30(rcx_1 + 0x27)
                
                if (rax_2 == 0)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                r14_2 = (rax_2 + 0x27) & 0xffffffffffffffe0
                *(r14_2 - 8) = rax_2
            label_1406c3ee9:
                int64_t rax_4 = *(arg1 + 8)
                uint64_t count_2 = r12 << 3
                int64_t rdx = rax_4 + count_2
                void* rdi_1 = count_2 + r14_2
                void* rbx_4 = (*(arg1 + 0x10) << 3) - rdx + rax_4
                memmove(rdi_1, rdx, rbx_4.d)
                int64_t rdx_1 = *(arg1 + 8)
                void* rbx_5 = rbx_4 + rdi_1
                void* rcx_6
                uint64_t count
                
                if (r12 u> rsi_2)
                    uint64_t count_1 = rsi_2 << 3
                    memmove(rbx_5, rdx_1, count_1.d)
                    int64_t rbx_6 = *(arg1 + 8)
                    int64_t rdx_2 = count_1 + rbx_6
                    void* rbx_8 = rbx_6 - rdx_2 + count_2
                    memmove(r14_2, rdx_2, rbx_8.d)
                    rcx_6 = rbx_8 + r14_2
                    count = count_1
                else
                    memmove(rbx_5, rdx_1, count_2.d)
                    memset(count_2 + rbx_5, 0, (rsi_2 - r12) << 3)
                    count = count_2
                    rcx_6 = r14_2
                
                int64_t result = memset(rcx_6, 0, count)
                void* rcx_8 = *(arg1 + 8)
                
                if (rcx_8 == 0)
                    goto label_1406c3fd6
                
                if (*(arg1 + 0x10) << 3 u< 0x1000)
                    goto label_1406c3fd1
                
                void* r8_8 = *(rcx_8 - 8)
                
                if (rcx_8 - r8_8 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rcx_8 = r8_8
            label_1406c3fd1:
                result = j_sub_140a74f90(rcx_8)
            label_1406c3fd6:
                *(arg1 + 0x10) += rsi_2
                *(arg1 + 8) = r14_2
                return result
        
        stdext::threads::_Throw_lock_error()
        noreturn
    
    if (0xfffffffffffffff - rax u< rax)
        break
    
    rax *= 2

sub_1406c44f0()
noreturn
