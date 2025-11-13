// 函数: sub_14058d7f0
// 地址: 0x14058d7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg1
int64_t r14_2 = (arg2 - rdx) s>> 3
int64_t rbx = 0x1fffffffffffffff
int64_t rax_2 = (arg1[1] - rdx) s>> 3

if (rax_2 == 0x1fffffffffffffff)
    sub_14058ac50()
    noreturn

int64_t rcx_2 = (arg1[2] - rdx) s>> 3
uint64_t rdx_2 = rcx_2 u>> 1

if (rcx_2 u<= 0x1fffffffffffffff - rdx_2)
    rbx = rdx_2 + rcx_2
    
    if (rbx u< rax_2 + 1)
        rbx = rax_2 + 1

void* rax_4 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
    rcx_2, rbx)
*(rax_4 + (r14_2 << 3)) = *arg3
void* rcx_4 = rax_4
int64_t r8 = arg1[1]
int64_t rdx_4 = *arg1
void* result = rax_4 + (r14_2 << 3)
uint32_t count

if (arg2 != r8)
    memmove(rcx_4, rdx_4, arg2.d - rdx_4.d)
    rcx_4 = result + 8
    count = (arg1[1]).d - arg2.d
    rdx_4 = arg2
else
    count = r8.d - rdx_4.d

memmove(rcx_4, rdx_4, count)
std::vector<uint64_t,struct std::_Parallelism_allocator<uint64_t> >::_Change_array(arg1, rax_4, 
    rax_2 + 1, rbx)
return result
