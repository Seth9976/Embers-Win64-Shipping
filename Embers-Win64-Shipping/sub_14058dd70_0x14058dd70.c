// 函数: sub_14058dd70
// 地址: 0x14058dd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp_2 = (arg1[1] - *arg1) s>> 3
int64_t rcx_2 = (arg1[2] - *arg1) s>> 3
uint64_t rdx_1 = rcx_2 u>> 1

if (rcx_2 u<= 0x1fffffffffffffff - rdx_1)
    int64_t r14_1 = rdx_1 + rcx_2
    int64_t* rdi_1
    int64_t r14_2
    
    if (r14_1 u< 0x80)
        r14_2 = 0x400
        rdi_1 = j_sub_140a82f30(0x400)
    label_14058de3c:
        int64_t* rax_4 = &rdi_1[rbp_2]
        int64_t i_1 = 0x80 - rbp_2
        
        if (0x80 != rbp_2)
            int64_t i
            
            do
                *rax_4 = 0
                rax_4 = &rax_4[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int64_t* rcx_5 = *arg1
        int64_t* rdx_2 = rdi_1
        int64_t r8_1 = arg1[1]
        
        if (rcx_5 != r8_1)
            do
                int64_t rax_5 = *rcx_5
                rcx_5 = &rcx_5[1]
                *rdx_2 = rax_5
                rdx_2 = &rdx_2[1]
            while (rcx_5 != r8_1)
            
            rcx_5 = *arg1
        
        if (rcx_5 == 0)
            goto label_14058decd
        
        if (((arg1[2] - rcx_5) & 0xfffffffffffffff8) u< 0x1000)
            goto label_14058deb7
        
        int64_t* r8_2 = rcx_5[-1]
        
        if (rcx_5 - r8_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_5 = r8_2
    label_14058deb7:
        j_sub_140a74f90(rcx_5)
    label_14058decd:
        *arg1 = rdi_1
        arg1[1] = &rdi_1[0x80]
        void* result = r14_2 + rdi_1
        arg1[2] = result
        return result
    
    if (r14_1 u<= 0x1fffffffffffffff)
        r14_2 = r14_1 << 3
        
        if (r14_2 u< 0x1000)
            if (r14_2 == 0)
                rdi_1 = nullptr
            else
                rdi_1 = j_sub_140a82f30(r14_2)
            
            goto label_14058de3c
        
        if (r14_2 + 0x27 u> r14_2)
            int64_t rax_2 = j_sub_140a82f30(r14_2 + 0x27)
            
            if (rax_2 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rdi_1 = (rax_2 + 0x27) & 0xffffffffffffffe0
            rdi_1[-1] = rax_2
            goto label_14058de3c

stdext::threads::_Throw_lock_error()
noreturn
