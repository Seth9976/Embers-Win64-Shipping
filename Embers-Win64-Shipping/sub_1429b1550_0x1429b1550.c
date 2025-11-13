// 函数: sub_1429b1550
// 地址: 0x1429b1550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_38 = -2
int64_t rdi = arg1[1]
int64_t rcx = *arg1
int64_t rsi_2 = (rdi - rcx) s>> 2
int64_t rax_2 = (arg1[2] - rcx) s>> 2

if (arg2 u<= rax_2)
    if (arg2 u> rsi_2)
        int64_t count = (arg2 - rsi_2) << 2
        memset(rdi, 0, count)
        int64_t rax_5 = count + rdi
        arg1[1] = rax_5
        return rax_5
    
    if (arg2 != rsi_2)
        rax_2 = rcx + (arg2 << 2)
        arg1[1] = rax_2
    
    return rax_2

if (arg2 u> 0x3fffffffffffffff)
    sub_14058ac50()
    noreturn

uint64_t rdx_1 = rax_2 u>> 1
int64_t rdi_1

if (rax_2 u<= 0x3fffffffffffffff - rdx_1)
    rdi_1 = rdx_1 + rax_2
    
    if (rdi_1 u< arg2)
        rdi_1 = arg2
else
    rdi_1 = arg2

int64_t arg_10 = rdi_1
void* rax_3 = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
    arg1, rdi_1)
void* arg_20 = rax_3
memset(rax_3 + (rsi_2 << 2), 0, (arg2 - rsi_2) << 2)
int64_t rdx_3 = *arg1
memmove(rax_3, rdx_3, (arg1[1]).d - rdx_3.d)
return std::vector<uint64_t,class std::allocator<uint64_t> >::_Change_array(arg1, rax_3, arg2, 
    rdi_1) __tailcall
