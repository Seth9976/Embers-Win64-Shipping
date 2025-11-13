// 函数: sub_1406934d0
// 地址: 0x1406934d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[1] != &arg2[1])
    int64_t rbp_1 = arg2[1]
    void* r8_1 = arg1[1]
    int64_t r14_2 = arg2[2] - rbp_1
    int64_t rdx_2 = r14_2 s>> 3
    int64_t rcx_2 = (arg1[3] - r8_1) s>> 3
    
    if (rdx_2 u> rcx_2)
        int64_t rbx_1 = 0x1fffffffffffffff
        
        if (rdx_2 u> 0x1fffffffffffffff)
            sub_140610c20()
            noreturn
        
        uint64_t r9_2 = rcx_2 u>> 1
        
        if (rcx_2 u<= 0x1fffffffffffffff - r9_2)
            rbx_1 = r9_2 + rcx_2
            
            if (rbx_1 u< rdx_2)
                rbx_1 = rdx_2
        
        if (r8_1 != 0)
            if (rcx_2 << 3 u>= 0x1000)
                void* rcx_3 = *(r8_1 - 8)
                
                if (r8_1 - rcx_3 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                r8_1 = rcx_3
            
            j_sub_140a74f90(r8_1)
            __builtin_memset(&arg1[1], 0, 0x18)
        
        void* rax_3 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
            &arg1[1], rbx_1)
        arg1[1] = rax_3
        arg1[2] = rax_3
        arg1[3] = rax_3 + (rbx_1 << 3)
    
    int64_t rbx_2 = arg1[1]
    memmove(rbx_2, rbp_1, r14_2.d)
    arg1[2] = r14_2 + rbx_2

return arg1
