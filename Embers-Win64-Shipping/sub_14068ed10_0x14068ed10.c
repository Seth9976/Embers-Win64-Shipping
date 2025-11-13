// 函数: sub_14068ed10
// 地址: 0x14068ed10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
__builtin_memset(&arg1[1], 0, 0x18)
int64_t r15 = arg2[1]
int64_t rbp = arg2[2]

if (r15 != rbp)
    int64_t rbp_1 = rbp - r15
    int64_t rdi_2 = rbp_1 s>> 3
    void* rax_1 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
        &arg1[1], rdi_2)
    arg1[1] = rax_1
    arg1[2] = rax_1
    arg1[3] = rax_1 + (rdi_2 << 3)
    int64_t rbx_1 = arg1[1]
    memmove(rbx_1, r15, rbp_1.d)
    arg1[2] = rbx_1 + (rdi_2 << 3)

return arg1
