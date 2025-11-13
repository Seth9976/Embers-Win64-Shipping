// 函数: sub_1429caa50
// 地址: 0x1429caa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t* arg_8 = arg1
int64_t var_28 = -2
int64_t rax = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<unsigned long>>(class std::allocator<unsigned long> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<unsigned long>>(class std::allocator<unsigned long> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
    arg1, arg2)
int64_t arg_18 = rax
int64_t rdx = *arg1
memmove(rax, rdx, (arg1[1]).d - rdx.d)
int64_t rdx_1 = *arg1
int64_t rdi_2 = (arg1[1] - rdx_1) s>> 2

if (rdx_1 != 0)
    sub_1429cc220(arg1, rdx_1, (arg1[2] - rdx_1) s>> 2)

arg1[2] = rax + (arg2 << 2)
int64_t result = rax + (rdi_2 << 2)
arg1[1] = result
*arg1 = rax
return result
