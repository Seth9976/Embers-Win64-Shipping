// 函数: sub_14298b680
// 地址: 0x14298b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg1[3]
void* r15 = arg1[2]

if (arg2 u> r12 - r15)
    int64_t rdi_2 = 0x7ffffffffffffffe
    
    if (0x7ffffffffffffffe - r15 u< arg2)
        sub_140909bd0()
        noreturn
    
    void* r13_1 = r15 + arg2
    int64_t rcx_3 = r13_1 | 7
    
    if (rcx_3 u<= 0x7ffffffffffffffe)
        uint64_t rdx_2 = r12 u>> 1
        
        if (r12 u<= 0x7ffffffffffffffe - rdx_2)
            int64_t rax_5 = rdx_2 + r12
            rdi_2 = rcx_3
            
            if (rcx_3 u< rax_5)
                rdi_2 = rax_5
    
    void* rax_6 = public: static struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M * __cdecl phmap::allocator_traits<class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M>>::allocate(class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M> &, unsigned __int64)(
        arg1, rdi_2 + 1)
    arg1[3] = rdi_2
    void* r8 = r15 * 2
    arg1[2] = r13_1
    void* rdi_3 = r8 + rax_6
    
    if (r12 u< 8)
        memcpy(rax_6, arg1, r8.d)
        int64_t rcx_11
        int64_t rdi_5
        
        if (arg2 != 0)
            rdi_5, rcx_11 = __memfill_u16(rdi_3, arg3, arg2)
        *(rax_6 + (r13_1 << 1)) = 0
    else
        void* rbp_1 = *arg1
        memcpy(rax_6, rbp_1, r8.d)
        int64_t rcx_7
        int64_t rdi_4
        
        if (arg2 != 0)
            rdi_4, rcx_7 = __memfill_u16(rdi_3, arg3, arg2)
        *(rax_6 + (r13_1 << 1)) = 0
        
        if ((r12 << 1) + 2 u>= 0x1000)
            void* rcx_8 = *(rbp_1 - 8)
            
            if (rbp_1 - rcx_8 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rbp_1 = rcx_8
        
        j_sub_140a74f90(rbp_1)
    
    *arg1 = rax_6
else
    void* r9_1 = r15 + arg2
    int64_t* rdx = arg1
    arg1[2] = r9_1
    
    if (r12 u>= 8)
        rdx = *arg1
    
    int64_t rcx_1
    int64_t rdi_1
    
    if (arg2 != 0)
        rdi_1, rcx_1 = __memfill_u16(rdx + (r15 << 1), arg3, arg2)
    *(rdx + (r9_1 << 1)) = 0

return arg1
