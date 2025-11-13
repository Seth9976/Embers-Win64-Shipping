// 函数: sub_1406ec320
// 地址: 0x1406ec320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0xe38e38e38e38e39, arg1[1] - *arg1)
int64_t rbp_1 = rdx s>> 2

if (arg2 u<= 0x38e38e38e38e38e)
    int64_t r13_1 = arg2 * 0x48
    void* const r14_2
    
    if (r13_1 u< 0x1000)
        if (r13_1 == 0)
            r14_2 = nullptr
        else
            r14_2 = j_sub_140a82f30(r13_1)
        
        goto label_1406ec3d8
    
    if (r13_1 + 0x27 u> r13_1)
        int64_t rax_4 = j_sub_140a82f30(r13_1 + 0x27)
        
        if (rax_4 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r14_2 = (rax_4 + 0x27) & 0xffffffffffffffe0
        *(r14_2 - 8) = rax_4
    label_1406ec3d8:
        int32_t* rbx_1 = *arg1
        int64_t r12_1 = arg1[1]
        
        if (rbx_1 != r12_1)
            int64_t* rdi_1 = &rbx_1[0x10]
            void* rsi_1 = r14_2 + 0x40
            
            do
                *(rsi_1 - 0x40) = *rbx_1
                *rsi_1 = 0
                int64_t* rcx_2 = *rdi_1
                
                if (rcx_2 != 0)
                    if (rcx_2 != &rdi_1[-7])
                        *rsi_1 = rcx_2
                        *rdi_1 = 0
                    else
                        int64_t rax_8
                        int64_t rdx_3
                        rax_8, rdx_3 = (*(*rcx_2 + 8))(rcx_2, rsi_1 - 0x38)
                        *rsi_1 = rax_8
                        int64_t* rcx_3 = *rdi_1
                        
                        if (rcx_3 != 0)
                            rdx_3.b = rcx_3 != &rdi_1[-7]
                            (*(*rcx_3 + 0x20))(rcx_3, rdx_3)
                            *rdi_1 = 0
                
                rsi_1 += 0x48
                rbx_1 = &rbx_1[0x12]
                rdi_1 = &rdi_1[9]
            while (rbx_1 != r12_1)
            
            rbx_1 = *arg1
        
        if (rbx_1 == 0)
            goto label_1406ec509
        
        int64_t rsi_2 = arg1[1]
        
        if (rbx_1 != rsi_2)
            void* rdi_2 = &rbx_1[0x10]
            
            do
                int64_t* rcx_4 = *rdi_2
                
                if (rcx_4 != 0)
                    int64_t r8_2 = *rcx_4
                    int64_t rdx_1
                    rdx_1.b = rcx_4 != rdi_2 - 0x38
                    (*(r8_2 + 0x20))(rcx_4, rdx_1, r8_2)
                    *rdi_2 = 0
                
                rbx_1 = &rbx_1[0x12]
                rdi_2 += 0x48
            while (rbx_1 != rsi_2)
            
            rbx_1 = *arg1
        
        int64_t rax_11
        int64_t rdx_4
        rdx_4:rax_11 = muls.dp.q(0xe38e38e38e38e39, arg1[2] - rbx_1)
        int64_t rdx_5 = rdx_4 s>> 2
        
        if ((rdx_5 + (rdx_5 u>> 0x3f)) * 0x48 u< 0x1000)
            goto label_1406ec4ea
        
        int32_t* rax_14 = *(rbx_1 - 8)
        
        if (rbx_1 - rax_14 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rbx_1 = rax_14
    label_1406ec4ea:
        j_sub_140a74f90(rbx_1)
    label_1406ec509:
        *arg1 = r14_2
        void* result = r14_2 + r13_1
        arg1[1] = r14_2 + (rbp_1 + (rbp_1 u>> 0x3f)) * 0x48
        arg1[2] = result
        return result

stdext::threads::_Throw_lock_error()
noreturn
