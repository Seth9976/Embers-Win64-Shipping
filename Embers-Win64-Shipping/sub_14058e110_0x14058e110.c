// 函数: sub_14058e110
// 地址: 0x14058e110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx_3 = ((arg1[2] - *arg1) s>> 3) * -0x5555555555555555
int64_t rbx_3 = ((arg1[1] - *arg1) s>> 3) * -0x5555555555555555
uint64_t rdx_1 = rcx_3 u>> 1

if (rcx_3 u<= 0xaaaaaaaaaaaaaaa - rdx_1)
    int64_t rax_1 = rdx_1 + rcx_3
    void* const rdi_1
    int64_t r14_1
    
    if (rax_1 u< 0x10)
        r14_1 = 0x180
        rdi_1 = j_sub_140a82f30(0x180)
    label_14058e1f1:
        void* rcx_6 = rdi_1 + rbx_3 * 0x18
        int64_t i_1 = 0x10 - rbx_3
        
        if (0x10 != rbx_3)
            int64_t i
            
            do
                __builtin_memset(rcx_6, 0, 0x18)
                rcx_6 += 0x18
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int64_t* rbx_4 = *arg1
        int64_t rdx_2 = arg1[1]
        
        if (rbx_4 != rdx_2)
            int64_t* rcx_7 = rdi_1 + 0x10
            
            do
                rcx_7[-2] = 0
                rcx_7[-1] = 0
                *rcx_7 = 0
                rcx_7 = &rcx_7[3]
                rcx_7[-5] = *rbx_4
                rcx_7[-4] = rbx_4[1]
                rcx_7[-3] = rbx_4[2]
                __builtin_memset(rbx_4, 0, 0x18)
                rbx_4 = &rbx_4[3]
            while (rbx_4 != rdx_2)
            
            rbx_4 = *arg1
        
        if (rbx_4 == 0)
            goto label_14058e2e5
        
        int64_t rbp_1 = arg1[1]
        
        if (rbx_4 != rbp_1)
            do
                sub_14058d5f0(rbx_4)
                rbx_4 = &rbx_4[3]
            while (rbx_4 != rbp_1)
            
            rbx_4 = *arg1
        
        if (((arg1[2] - rbx_4) s>> 3) * 8 u< 0x1000)
            goto label_14058e2cf
        
        int64_t* rax_14 = rbx_4[-1]
        
        if (rbx_4 - rax_14 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rbx_4 = rax_14
    label_14058e2cf:
        j_sub_140a74f90(rbx_4)
    label_14058e2e5:
        *arg1 = rdi_1
        arg1[1] = rdi_1 + 0x180
        void* result = r14_1 + rdi_1
        arg1[2] = result
        return result
    
    if (rax_1 u<= 0xaaaaaaaaaaaaaaa)
        r14_1 = rax_1 * 0x18
        
        if (r14_1 u< 0x1000)
            if (r14_1 == 0)
                rdi_1 = nullptr
            else
                rdi_1 = j_sub_140a82f30(r14_1)
            
            goto label_14058e1f1
        
        if (r14_1 + 0x27 u> r14_1)
            int64_t rax_4 = j_sub_140a82f30(r14_1 + 0x27)
            
            if (rax_4 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rdi_1 = (rax_4 + 0x27) & 0xffffffffffffffe0
            *(rdi_1 - 8) = rax_4
            goto label_14058e1f1

stdext::threads::_Throw_lock_error()
noreturn
