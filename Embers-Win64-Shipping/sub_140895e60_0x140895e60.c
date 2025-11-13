// 函数: sub_140895e60
// 地址: 0x140895e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0xaaaaaaaaaaaaaaa)
    sub_140610c20()
    noreturn

int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - *arg1)
int64_t r15_1 = rdx s>> 2
int64_t r15_2 = r15_1 + (r15_1 u>> 0x3f)
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - *arg1)
int64_t rdx_2 = rdx_1 s>> 2
int64_t rdx_3 = rdx_2 + (rdx_2 u>> 0x3f)
uint64_t rcx_5 = rdx_3 u>> 1

if (rdx_3 u<= 0xaaaaaaaaaaaaaaa - rcx_5)
    int64_t rax_7 = rcx_5 + rdx_3
    
    if (rax_7 u< arg2)
        rax_7 = arg2
    label_140895f0e:
        int64_t r14_1 = rax_7 * 0x18
        void* const rbx_2
        
        if (r14_1 u< 0x1000)
            if (r14_1 == 0)
                rbx_2 = nullptr
            else
                rbx_2 = j_sub_140a82f30(r14_1)
            
            goto label_140895f61
        
        if (r14_1 + 0x27 u> r14_1)
            int64_t rax_9 = j_sub_140a82f30(r14_1 + 0x27)
            
            if (rax_9 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rbx_2 = (rax_9 + 0x27) & 0xffffffffffffffe0
            *(rbx_2 - 8) = rax_9
        label_140895f61:
            void* rcx_8 = rbx_2 + r15_2 * 0x18
            int64_t i_1 = arg2 - r15_2
            
            if (arg2 != r15_2)
                int64_t i
                
                do
                    __builtin_memset(rcx_8, 0, 0x18)
                    rcx_8 += 0x18
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            void* rcx_9 = *arg1
            int64_t r10_1 = arg1[1]
            
            if (rcx_9 != r10_1)
                void* r9_1 = rbx_2 + 0x10
                
                do
                    int64_t r8_1 = *(rcx_9 + 0x10)
                    r9_1 += 0x18
                    int64_t rdx_4 = *(rcx_9 + 8)
                    int64_t rax_13 = *rcx_9
                    __builtin_memset(rcx_9, 0, 0x18)
                    rcx_9 += 0x18
                    *(r9_1 - 0x28) = rax_13
                    *(r9_1 - 0x20) = rdx_4
                    *(r9_1 - 0x18) = r8_1
                while (rcx_9 != r10_1)
                
                rcx_9 = *arg1
            
            if (rcx_9 == 0)
                goto label_140896049
            
            sub_14058d8f0(rcx_9, arg1[1])
            void* r8_3 = *arg1
            int64_t rax_14
            int64_t rdx_6
            rdx_6:rax_14 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r8_3)
            int64_t rdx_7 = rdx_6 s>> 2
            
            if ((rdx_7 + (rdx_7 u>> 0x3f)) * 0x18 u< 0x1000)
                goto label_14089602d
            
            void* rcx_12 = *(r8_3 - 8)
            
            if (r8_3 - rcx_12 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            r8_3 = rcx_12
        label_14089602d:
            j_sub_140a74f90(r8_3)
        label_140896049:
            void* result = r14_1 + rbx_2
            *arg1 = rbx_2
            arg1[1] = rbx_2 + arg2 * 0x18
            arg1[2] = result
            return result
    else if (rax_7 u<= 0xaaaaaaaaaaaaaaa)
        goto label_140895f0e

stdext::threads::_Throw_lock_error()
noreturn
