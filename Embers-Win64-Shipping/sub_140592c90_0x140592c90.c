// 函数: sub_140592c90
// 地址: 0x140592c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg2
arg1[1].q = 0
void** result = arg1
*(arg1 + 0x18) = 0
int64_t rbp = arg2[2]

if (arg2[3] u>= 8)
    rdi = *arg2

int64_t rsi

if (rbp u>= 8)
    rsi = rbp | 7
    
    if (rsi u> 0x7ffffffffffffffe)
        rsi = 0x7ffffffffffffffe
    
    void* rax_1 = public: static struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M * __cdecl phmap::allocator_traits<class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M>>::allocate(class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M> &, unsigned __int64)(
        arg1, rsi + 1)
    *result = rax_1
    memcpy(rax_1, rdi, (rbp << 1).d + 2)
else
    rsi = 7
    *arg1 = *rdi

result[2] = rbp
result[3] = rsi
return result
