// 函数: sub_14058bc70
// 地址: 0x14058bc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0x1fffffffffffffff

if (arg2 u> 0x1fffffffffffffff)
    sub_14058ac50()
    noreturn

int64_t rcx_2 = (arg1[2] - *arg1) s>> 3
int64_t rbp_2 = (arg1[1] - *arg1) s>> 3
uint64_t rdx_1 = rcx_2 u>> 1

if (rcx_2 u<= 0x1fffffffffffffff - rdx_1)
    rbx = rdx_1 + rcx_2
    
    if (rbx u< arg2)
        rbx = arg2

void* rax_1 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
    rcx_2, rbx)
memset(rax_1 + (rbp_2 << 3), 0, (arg2 - rbp_2) << 3)
int64_t rdx_3 = *arg1
memmove(rax_1, rdx_3, (arg1[1]).d - rdx_3.d)
return std::vector<uint64_t,struct std::_Parallelism_allocator<uint64_t> >::_Change_array(arg1, 
    rax_1, arg2, rbx) __tailcall
