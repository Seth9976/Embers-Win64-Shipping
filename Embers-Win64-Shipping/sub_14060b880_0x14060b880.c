// 函数: sub_14060b880
// 地址: 0x14060b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg1
int64_t rbp_2 = (arg2 - rdx) s>> 3
int64_t rdi = 0x1fffffffffffffff
int64_t rax_2 = (arg1[1] - rdx) s>> 3

if (rax_2 == 0x1fffffffffffffff)
    sub_140610c20()
    noreturn

int64_t rcx_2 = (arg1[2] - rdx) s>> 3
uint64_t rdx_2 = rcx_2 u>> 1

if (rcx_2 u<= 0x1fffffffffffffff - rdx_2)
    rdi = rdx_2 + rcx_2
    
    if (rdi u< rax_2 + 1)
        rdi = rax_2 + 1

void* rax_4 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
    arg1, rdi)
*(rax_4 + (rbp_2 << 3)) = *arg3
void* rcx_5 = rax_4
int64_t r8 = arg1[1]
int64_t rdx_4 = *arg1
void* result = rax_4 + (rbp_2 << 3)
uint32_t count

if (arg2 != r8)
    memmove(rcx_5, rdx_4, arg2.d - rdx_4.d)
    rcx_5 = result + 8
    count = (arg1[1]).d - arg2.d
    rdx_4 = arg2
else
    count = r8.d - rdx_4.d

memmove(rcx_5, rdx_4, count)
void* rcx_6 = *arg1

if (rcx_6 != 0)
    if (((arg1[2] - rcx_6) & 0xfffffffffffffff8) u>= 0x1000)
        void* r8_4 = *(rcx_6 - 8)
        
        if (rcx_6 - r8_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_6 = r8_4
    
    j_sub_140a74f90(rcx_6)

*arg1 = rax_4
arg1[1] = rax_4 + ((rax_2 + 1) << 3)
arg1[2] = rax_4 + (rdi << 3)
return result
