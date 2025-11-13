// 函数: sub_140693140
// 地址: 0x140693140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rbp_1 = *arg2
    void* rdi_1 = *arg1
    void* r15_2 = arg2[1] - rbp_1
    int64_t rdx_1 = r15_2 s>> 2
    int64_t rcx_2 = (arg1[2] - rdi_1) s>> 2
    
    if (rdx_1 u> rcx_2)
        int64_t rsi_1 = 0x3fffffffffffffff
        
        if (rdx_1 u> 0x3fffffffffffffff)
            sub_140610c20()
            noreturn
        
        uint64_t r8_2 = rcx_2 u>> 1
        
        if (rcx_2 u<= 0x3fffffffffffffff - r8_2)
            rsi_1 = r8_2 + rcx_2
            
            if (rsi_1 u< rdx_1)
                rsi_1 = rdx_1
        
        if (rdi_1 != 0)
            if (rcx_2 << 2 u>= 0x1000)
                void* rcx_3 = *(rdi_1 - 8)
                
                if (rdi_1 - rcx_3 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rdi_1 = rcx_3
            
            j_sub_140a74f90(rdi_1)
            __builtin_memset(arg1, 0, 0x18)
        
        void* rax_3 = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
            arg1, rsi_1)
        *arg1 = rax_3
        rdi_1 = rax_3
        arg1[1] = rax_3
        arg1[2] = rax_3 + (rsi_1 << 2)
    
    memmove(rdi_1, rbp_1, r15_2.d)
    arg1[1] = r15_2 + rdi_1
    arg1[3] = arg2[3]

return arg1
