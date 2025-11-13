// 函数: sub_140593700
// 地址: 0x140593700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg1[3]

if (arg3 u> rsi)
    int64_t rbx_1 = 0x7ffffffffffffffe
    
    if (arg3 u> 0x7ffffffffffffffe)
        sub_1405871e0()
        noreturn
    
    int64_t rcx_2 = arg3 | 7
    
    if (rcx_2 u<= 0x7ffffffffffffffe)
        uint64_t rdx_1 = rsi u>> 1
        
        if (rsi u<= 0x7ffffffffffffffe - rdx_1)
            int64_t rax_2 = rdx_1 + rsi
            rbx_1 = rcx_2
            
            if (rcx_2 u< rax_2)
                rbx_1 = rax_2
    
    void* rax_3 = public: static struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M * __cdecl phmap::allocator_traits<class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M>>::allocate(class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M> &, unsigned __int64)(
        arg1, rbx_1 + 1)
    arg1[3] = rbx_1
    int16_t* rbx_2 = arg3 * 2
    arg1[2] = arg3
    memcpy(rax_3, arg2, rbx_2.d)
    *(rbx_2 + rax_3) = 0
    
    if (rsi u>= 8)
        void* rcx_5 = *arg1
        
        if ((rsi << 1) + 2 u>= 0x1000)
            void* r8_2 = *(rcx_5 - 8)
            
            if (rcx_5 - r8_2 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_5 = r8_2
        
        j_sub_140a74f90(rcx_5)
    
    *arg1 = rax_3
else
    int64_t* rbp = arg1
    
    if (rsi u>= 8)
        rbp = *arg1
    
    int16_t* rbx = arg3 * 2
    arg1[2] = arg3
    memmove(rbp, arg2, rbx.d)
    *(rbx + rbp) = 0

return arg1
