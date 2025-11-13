// 函数: sub_1429959f0
// 地址: 0x1429959f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
__builtin_memset(arg1, 0, 0x18)
int64_t rbx_2 = (arg2[1] - *arg2) s>> 3

if (rbx_2 != 0)
    if (rbx_2 u> 0x1fffffffffffffff)
        sub_1427c7670()
        noreturn
    
    int64_t rax_1 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
        arg1, rbx_2)
    *arg1 = rax_1
    arg1[1] = rax_1
    int64_t rax_2 = *arg1
    arg1[2] = rax_2 + (rbx_2 << 3)
    int64_t rdx_1 = *arg2
    int64_t rbx_4 = arg2[1] - rdx_1
    memmove(rax_2, rdx_1, rbx_4.d)
    arg1[1] = rbx_4 + rax_2

return arg1
