// 函数: ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAPEA_KQEA_KAEB_K@Z
// 地址: 0x1429b12c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_48 = -2
int64_t rcx = *arg1
int64_t r15_2 = (arg2 - rcx) s>> 2
int64_t rax_2 = (arg1[1] - rcx) s>> 2

if (rax_2 == 0x3fffffffffffffff)
    sub_14058ac50()
    noreturn

int64_t rax_5 = (arg1[2] - rcx) s>> 2
uint64_t rcx_2 = rax_5 u>> 1
int64_t rbx

if (rax_5 u<= 0x3fffffffffffffff - rcx_2)
    rbx = rcx_2 + rax_5
    
    if (rbx u< rax_2 + 1)
        rbx = rax_2 + 1
else
    rbx = rax_2 + 1

int64_t arg_10 = rbx
void* rax_6 = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
    arg1, rbx)
void* arg_20 = rax_6
*(rax_6 + (r15_2 << 2)) = *arg3
int64_t r8 = arg1[1]
int64_t rdx_2 = *arg1
void* rcx_5 = rax_6
uint32_t count

if (arg2 != r8)
    memmove(rcx_5, rdx_2, arg2.d - rdx_2.d)
    rcx_5 = rax_6 + ((r15_2 + 1) << 2)
    count = (arg1[1]).d - arg2.d
    rdx_2 = arg2
else
    count = r8.d - rdx_2.d

memmove(rcx_5, rdx_2, count)
std::vector<uint64_t,class std::allocator<uint64_t> >::_Change_array(arg1, rax_6, rax_2 + 1, rbx)
return *arg1 + (r15_2 << 2)
