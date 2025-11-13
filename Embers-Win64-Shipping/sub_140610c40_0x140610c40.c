// 函数: sub_140610c40
// 地址: 0x140610c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg1[3]
int32_t c = sx.d(arg3)

if (arg2 u> rbp)
    int64_t rdi_1 = 0x7fffffffffffffff
    
    if (arg2 u> 0x7fffffffffffffff)
        sub_1405871e0()
        noreturn
    
    int64_t rcx_2 = arg2 | 0xf
    uint64_t rdx_2
    
    if (rcx_2 u<= 0x7fffffffffffffff)
        rdx_2 = rbp u>> 1
    
    void* const r14_2
    int64_t rcx_3
    
    if (rcx_2 u> 0x7fffffffffffffff || rbp u> 0x7fffffffffffffff - rdx_2)
        rcx_3 = -0x7fffffffffffffd9
    label_140610cf4:
        int64_t rax_4 = j_sub_140a82f30(rcx_3)
        
        if (rax_4 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r14_2 = (rax_4 + 0x27) & 0xffffffffffffffe0
        *(r14_2 - 8) = rax_4
    else
        int64_t rax_2 = rdx_2 + rbp
        rdi_1 = rcx_2
        
        if (rcx_2 u< rax_2)
            rdi_1 = rax_2
        
        if (rdi_1 + 1 u>= 0x1000)
            rcx_3 = rdi_1 + 0x28
            
            if (rcx_3 u> rdi_1 + 1)
                goto label_140610cf4
            
            stdext::threads::_Throw_lock_error()
            noreturn
        
        if (rdi_1 == -1)
            r14_2 = nullptr
        else
            r14_2 = j_sub_140a82f30(rdi_1 + 1)
    arg1[2] = arg2
    arg1[3] = rdi_1
    memset(r14_2, c, arg2)
    *(r14_2 + arg2) = 0
    
    if (rbp u< 0x10)
        *arg1 = r14_2
    else
        void* rcx_6 = *arg1
        
        if (rbp + 1 u>= 0x1000)
            void* r8_2 = *(rcx_6 - 8)
            
            if (rcx_6 - r8_2 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_6 = r8_2
        
        j_sub_140a74f90(rcx_6)
        *arg1 = r14_2
else
    int64_t* rdi = arg1
    
    if (rbp u>= 0x10)
        rdi = *arg1
    
    arg1[2] = arg2
    memset(rdi, c, arg2)
    *(rdi + arg2) = 0

return arg1
