// 函数: sub_1429b4bc0
// 地址: 0x1429b4bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rsi_1 = *arg1
    int64_t r15_1 = arg2[1]
    int64_t rbp_1 = *arg2
    void* r14_2 = r15_1 - rbp_1
    int64_t rax_3 = (arg1[1] - rsi_1) s>> 3
    int64_t r8_3 = (arg1[2] - rsi_1) s>> 3
    int64_t rbx_2 = r14_2 s>> 3
    void* rax_8
    
    if (rbx_2 u> r8_3)
        if (rbx_2 u> 0x1fffffffffffffff)
            sub_14175ce00()
            noreturn
        
        uint64_t rcx_1 = r8_3 u>> 1
        
        if (r8_3 u<= 0x1fffffffffffffff - rcx_1)
            int64_t rax_5 = rcx_1 + r8_3
            
            if (rax_5 u< rbx_2)
                rax_5 = rbx_2
            
            rbx_2 = rax_5
        
        if (rsi_1 != 0)
            public: void __cdecl std::allocator<struct `void __cdecl phmap::container_internal::Deallocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, void *, unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, void *, unsigned __int64)'::`2'::M *const, unsigned __int64)(
                arg1, rsi_1, r8_3)
        
        __builtin_memset(arg1, 0, 0x18)
        
        if (rbx_2 != 0)
            if (rbx_2 u> 0x1fffffffffffffff)
                sub_14175ce00()
                noreturn
            
            int64_t rax_6 = public: static struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, unsigned __int64)'::`2'::M * __cdecl phmap::allocator_traits<class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, unsigned __int64)'::`2'::M>>::allocate(class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, unsigned __int64)'::`2'::M> &, unsigned __int64)(
                arg1, rbx_2)
            *arg1 = rax_6
            arg1[1] = rax_6
            arg1[2] = *arg1 + (rbx_2 << 3)
        
        int64_t rbx_3 = *arg1
        memmove(rbx_3, rbp_1, r14_2.d)
        rax_8 = r14_2 + rbx_3
    else if (rbx_2 u<= rax_3)
        memmove(rsi_1, rbp_1, r14_2.d)
        rax_8 = rsi_1 + (rbx_2 << 3)
    else
        int64_t rbx_4 = rax_3 << 3
        memmove(rsi_1, rbp_1, rbx_4.d)
        int64_t rdx_4 = rbx_4 + rbp_1
        int64_t rbx_5 = arg1[1]
        void* r15_2 = r15_1 - rdx_4
        memmove(rbx_5, rdx_4, r15_2.d)
        rax_8 = r15_2 + rbx_5
    
    arg1[1] = rax_8

return arg1
