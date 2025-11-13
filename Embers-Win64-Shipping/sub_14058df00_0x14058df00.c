// 函数: sub_14058df00
// 地址: 0x14058df00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0xaaaaaaaaaaaaaaa)
    sub_14058ac50()
    noreturn

int64_t rcx_3 = ((arg1[2] - *arg1) s>> 3) * -0x5555555555555555
uint64_t rdx_1 = rcx_3 u>> 1
int64_t r15_3 = ((arg1[1] - *arg1) s>> 3) * -0x5555555555555555

if (rcx_3 u<= 0xaaaaaaaaaaaaaaa - rdx_1)
    int64_t rax_1 = rdx_1 + rcx_3
    
    if (rax_1 u< arg2)
        rax_1 = arg2
    label_14058df93:
        int64_t r14_1 = rax_1 * 0x18
        void* const rbx_2
        
        if (r14_1 u< 0x1000)
            if (r14_1 == 0)
                rbx_2 = nullptr
            else
                rbx_2 = j_sub_140a82f30(r14_1)
            
            goto label_14058dfe6
        
        if (r14_1 + 0x27 u> r14_1)
            int64_t rax_3 = j_sub_140a82f30(r14_1 + 0x27)
            
            if (rax_3 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rbx_2 = (rax_3 + 0x27) & 0xffffffffffffffe0
            *(rbx_2 - 8) = rax_3
        label_14058dfe6:
            void* rcx_6 = rbx_2 + r15_3 * 0x18
            int64_t i_1 = arg2 - r15_3
            
            if (arg2 != r15_3)
                int64_t i
                
                do
                    __builtin_memset(rcx_6, 0, 0x18)
                    rcx_6 += 0x18
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int64_t* rcx_7 = *arg1
            int64_t r8_1 = arg1[1]
            
            if (rcx_7 != r8_1)
                void* rdx_2 = rbx_2 + 0x10
                
                do
                    *(rdx_2 - 0x10) = 0
                    *(rdx_2 - 8) = 0
                    *rdx_2 = 0
                    rdx_2 += 0x18
                    *(rdx_2 - 0x28) = *rcx_7
                    *(rdx_2 - 0x20) = rcx_7[1]
                    *(rdx_2 - 0x18) = rcx_7[2]
                    __builtin_memset(rcx_7, 0, 0x18)
                    rcx_7 = &rcx_7[3]
                while (rcx_7 != r8_1)
                
                rcx_7 = *arg1
            
            if (rcx_7 == 0)
                goto label_14058e0d2
            
            sub_14058d980(rcx_7, arg1[1])
            void* rcx_8 = *arg1
            
            if (((arg1[2] - rcx_8) s>> 3) * 8 u< 0x1000)
                goto label_14058e0b6
            
            void* r8_2 = *(rcx_8 - 8)
            
            if (rcx_8 - r8_2 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_8 = r8_2
        label_14058e0b6:
            j_sub_140a74f90(rcx_8)
        label_14058e0d2:
            void* result = r14_1 + rbx_2
            *arg1 = rbx_2
            arg1[1] = rbx_2 + arg2 * 0x18
            arg1[2] = result
            return result
    else if (rax_1 u<= 0xaaaaaaaaaaaaaaa)
        goto label_14058df93

stdext::threads::_Throw_lock_error()
noreturn
