// 函数: ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z
// 地址: 0x1429b1ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** arg_8 = arg1
int64_t var_18 = -2
__builtin_memset(arg1, 0, 0x18)

if (arg2 != 0)
    if (arg2 u> 0x3fffffffffffffff)
        sub_140610c20()
        noreturn
    
    void* rax_1 = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
        arg1, arg2)
    *arg1 = rax_1
    arg1[1] = rax_1
    int64_t count = arg2 << 2
    void* rax_2 = *arg1
    arg1[2] = count + rax_2
    memset(rax_2, 0, count)
    arg1[1] = count + rax_2

return arg1
