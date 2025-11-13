// 函数: sub_14058ad40
// 地址: 0x14058ad40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg1[3]

if (arg3 u> rbp)
    int64_t rdi_1 = 0x7fffffffffffffff
    
    if (arg3 u> 0x7fffffffffffffff)
        sub_1405871e0()
        noreturn
    
    int64_t rcx_2 = arg3 | 0xf
    uint64_t rdx_1
    
    if (rcx_2 u<= 0x7fffffffffffffff)
        rdx_1 = rbp u>> 1
    
    char* r14_2
    int64_t rcx_3
    
    if (rcx_2 u> 0x7fffffffffffffff || rbp u> 0x7fffffffffffffff - rdx_1)
        rcx_3 = -0x7fffffffffffffd9
    label_14058aded:
        int64_t rax_4 = j_sub_140a82f30(rcx_3)
        
        if (rax_4 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r14_2 = (rax_4 + 0x27) & 0xffffffffffffffe0
        *(r14_2 - 8) = rax_4
    else
        int64_t rax_2 = rdx_1 + rbp
        rdi_1 = rcx_2
        
        if (rcx_2 u< rax_2)
            rdi_1 = rax_2
        
        if (rdi_1 + 1 u>= 0x1000)
            rcx_3 = rdi_1 + 0x28
            
            if (rcx_3 u> rdi_1 + 1)
                goto label_14058aded
            
            stdext::threads::_Throw_lock_error()
            noreturn
        
        if (rdi_1 == -1)
            r14_2 = nullptr
        else
            r14_2 = j_sub_140a82f30(rdi_1 + 1)
    arg1[2] = arg3
    arg1[3] = rdi_1
    memcpy(r14_2, arg2, arg3.d)
    r14_2[arg3] = 0
    
    if (rbp u< 0x10)
        *arg1 = r14_2
    else
        void* rcx_6 = *arg1
        
        if (rbp + 1 u>= 0x1000)
            void* r8_1 = *(rcx_6 - 8)
            
            if (rcx_6 - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_6 = r8_1
        
        j_sub_140a74f90(rcx_6)
        *arg1 = r14_2
else
    int64_t* rdi = arg1
    
    if (rbp u>= 0x10)
        rdi = *arg1
    
    arg1[2] = arg3
    memmove(rdi, arg2, arg3.d)
    *(rdi + arg3) = 0

return arg1
