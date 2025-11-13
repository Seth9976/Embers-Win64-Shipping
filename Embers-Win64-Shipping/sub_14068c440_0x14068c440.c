// 函数: sub_14068c440
// 地址: 0x14068c440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = 0
arg1[3] = 7
void** result = arg1
*arg1 = nullptr

if (arg2 u> 7)
    int64_t rdi_3 = 0x7ffffffffffffffe
    
    if (arg2 u> 0x7ffffffffffffffe)
        sub_1405871e0()
        noreturn
    
    int64_t rax_3 = arg2 | 7
    int64_t rdx
    
    if (rax_3 u<= 0x7ffffffffffffffe)
        rdi_3 = rax_3
        
        if (rax_3 u< 0xa)
            rdi_3 = 0xa
        
        arg1 = result
        rdx = rdi_3 + 1
    else
        rdx = 0x7fffffffffffffff
    
    void* rax_4 = public: static struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M * __cdecl phmap::allocator_traits<class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M>>::allocate(class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M> &, unsigned __int64)(
        arg1, rdx)
    result[2] = arg2
    result[3] = rdi_3
    int64_t rcx_3
    int64_t rdi_5
    rdi_5, rcx_3 = __memfill_u16(rax_4, arg3, arg2)
    *(rax_4 + (arg2 << 1)) = 0
    *result = rax_4
else
    arg1[2] = arg2
    int64_t rcx_1
    int64_t rdi_2
    
    if (arg2 != 0)
        rdi_2, rcx_1 = __memfill_u16(arg1, arg3, arg2)
    *(result + (arg2 << 1)) = 0

return result
