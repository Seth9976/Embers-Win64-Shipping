// 函数: sub_1429b42d0
// 地址: 0x1429b42d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_48 = -2
int64_t rcx = *arg1
int64_t r14_2 = (arg2 - rcx) s>> 3
int64_t rax_2 = (arg1[1] - rcx) s>> 3

if (rax_2 == 0x1fffffffffffffff)
    sub_14175ce00()
    noreturn

int64_t rax_5 = (arg1[2] - rcx) s>> 3
uint64_t rcx_2 = rax_5 u>> 1
int64_t rdi

if (rax_5 u<= 0x1fffffffffffffff - rcx_2)
    rdi = rcx_2 + rax_5
    
    if (rdi u< rax_2 + 1)
        rdi = rax_2 + 1
else
    rdi = rax_2 + 1

int64_t arg_10 = rdi
int64_t rax_6 = public: static struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, unsigned __int64)'::`2'::M * __cdecl phmap::allocator_traits<class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, unsigned __int64)'::`2'::M>>::allocate(class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct SymbolEntry>>(class std::allocator<struct SymbolEntry> *, unsigned __int64)'::`2'::M> &, unsigned __int64)(
    arg1, rdi)
int64_t arg_20 = rax_6
*(rax_6 + (r14_2 << 3)) = *arg3
int64_t r8 = arg1[1]
int64_t rdx_2 = *arg1
int64_t rcx_5 = rax_6
uint32_t count

if (arg2 != r8)
    memmove(rcx_5, rdx_2, arg2.d - rdx_2.d)
    rcx_5 = rax_6 + ((r14_2 + 1) << 3)
    count = (arg1[1]).d - arg2.d
    rdx_2 = arg2
else
    count = r8.d - rdx_2.d

memmove(rcx_5, rdx_2, count)
void* rcx_7 = *arg1

if (rcx_7 != 0)
    if (((arg1[2] - rcx_7) & 0xfffffffffffffff8) u>= 0x1000)
        void* r8_4 = *(rcx_7 - 8)
        
        if (rcx_7 - r8_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_7 = r8_4
    
    j_sub_140a74f90(rcx_7)

*arg1 = rax_6
arg1[1] = rax_6 + ((rax_2 + 1) << 3)
arg1[2] = rax_6 + (rdi << 3)
return *arg1 + (r14_2 << 3)
