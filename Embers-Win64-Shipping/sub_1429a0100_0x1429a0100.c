// 函数: sub_1429a0100
// 地址: 0x1429a0100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_38 = -2
int64_t rsi = arg1[1]
int64_t rcx = *arg1
int64_t r14_2 = (rsi - rcx) s>> 2
int64_t rax_2 = (arg1[2] - rcx) s>> 2

if (arg2 u<= rax_2)
    if (arg2 u> r14_2)
        int64_t count = (arg2 - r14_2) << 2
        memset(rsi, 0, count)
        int64_t rax_7 = count + rsi
        arg1[1] = rax_7
        return rax_7
    
    if (arg2 != r14_2)
        rax_2 = rcx + (arg2 << 2)
        arg1[1] = rax_2
    
    return rax_2

if (arg2 u> 0x3fffffffffffffff)
    sub_140610c20()
    noreturn

uint64_t rdx_1 = rax_2 u>> 1
int64_t rsi_1

if (rax_2 u<= 0x3fffffffffffffff - rdx_1)
    rsi_1 = rdx_1 + rax_2
    
    if (rsi_1 u< arg2)
        rsi_1 = arg2
else
    rsi_1 = arg2

int64_t arg_10 = rsi_1
int64_t rax_3 = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<unsigned long>>(class std::allocator<unsigned long> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<unsigned long>>(class std::allocator<unsigned long> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
    arg1, rsi_1)
int64_t arg_20 = rax_3
memset(rax_3 + (r14_2 << 2), 0, (arg2 - r14_2) << 2)
int64_t rdx_3 = *arg1
memmove(rax_3, rdx_3, (arg1[1]).d - rdx_3.d)
void* rcx_5 = *arg1

if (rcx_5 != 0)
    if (((arg1[2] - rcx_5) & 0xfffffffffffffffc) u>= 0x1000)
        void* r8_5 = *(rcx_5 - 8)
        
        if (rcx_5 - r8_5 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_5 = r8_5
    
    j_sub_140a74f90(rcx_5)

*arg1 = rax_3
arg1[1] = rax_3 + (arg2 << 2)
int64_t rax_6 = rax_3 + (rsi_1 << 2)
arg1[2] = rax_6
return rax_6
