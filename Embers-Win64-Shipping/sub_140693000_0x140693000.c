// 函数: sub_140693000
// 地址: 0x140693000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140693140(&arg1[1], &arg2[1])

if (&arg1[5] != &arg2[5])
    int64_t rbp_1 = arg2[5]
    void* rcx_1 = arg1[5]
    int64_t r14_2 = arg2[6] - rbp_1
    int64_t r8_2 = r14_2 s>> 4
    int64_t rdx_3 = (arg1[7] - rcx_1) s>> 4
    
    if (r8_2 u> rdx_3)
        int64_t rbx_2 = 0xfffffffffffffff
        
        if (r8_2 u> 0xfffffffffffffff)
            sub_140610c20()
            noreturn
        
        uint64_t r9_2 = rdx_3 u>> 1
        
        if (rdx_3 u<= 0xfffffffffffffff - r9_2)
            rbx_2 = r9_2 + rdx_3
            
            if (rbx_2 u< r8_2)
                rbx_2 = r8_2
        
        if (rcx_1 != 0)
            if (rdx_3 << 4 u>= 0x1000)
                void* r8_3 = *(rcx_1 - 8)
                
                if (rcx_1 - r8_3 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rcx_1 = r8_3
            
            j_sub_140a74f90(rcx_1)
            __builtin_memset(&arg1[5], 0, 0x18)
        
        void* rax_3 = sub_1406afec0(&arg1[5], rbx_2)
        arg1[5] = rax_3
        arg1[6] = rax_3
        arg1[7] = (rbx_2 << 4) + rax_3
    
    int64_t rbx_5 = arg1[5]
    memmove(rbx_5, rbp_1, r14_2.d)
    arg1[6] = r14_2 + rbx_5

return arg1
