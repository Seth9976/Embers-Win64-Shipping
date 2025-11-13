// 函数: sub_140909dc0
// 地址: 0x140909dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[2]
int32_t* rdi = arg1[1]

if (rax != rdi)
    int32_t rax_1 = *arg2
    *rdi = rax_1
    arg1[1] += 4
    return rax_1

int64_t rcx = *arg1
int64_t r14_2 = (rdi - rcx) s>> 2

if (r14_2 == 0x3fffffffffffffff)
    sub_14058ac50()
    noreturn

int64_t rax_3 = (rax - rcx) s>> 2
uint64_t rcx_2 = rax_3 u>> 1
int64_t rbp

if (rax_3 u<= 0x3fffffffffffffff - rcx_2)
    rbp = rcx_2 + rax_3
    
    if (rbp u< r14_2 + 1)
        rbp = r14_2 + 1
else
    rbp = r14_2 + 1

void* rax_4 = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
    arg1, rbp)
*(rax_4 + (r14_2 << 2)) = *arg2
void* rcx_5 = rax_4
int64_t r8 = arg1[1]
int32_t* rdx_2 = *arg1
uint32_t count

if (rdi != r8)
    memmove(rcx_5, rdx_2, rdi.d - rdx_2.d)
    count = (arg1[1]).d - rdi.d
    rcx_5 = rax_4 + ((r14_2 + 1) << 2)
    rdx_2 = rdi
else
    count = r8.d - rdx_2.d

memmove(rcx_5, rdx_2, count)
void* rcx_7 = *arg1

if (rcx_7 != 0)
    if (((arg1[2] - rcx_7) & 0xfffffffffffffffc) u>= 0x1000)
        void* r8_4 = *(rcx_7 - 8)
        
        if (rcx_7 - r8_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_7 = r8_4
    
    j_sub_140a74f90(rcx_7)

arg1[1] = rax_4 + ((r14_2 + 1) << 2)
void* rax_7 = rax_4 + (rbp << 2)
*arg1 = rax_4
arg1[2] = rax_7
return rax_7
