// 函数: sub_1405945d0
// 地址: 0x1405945d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg2
*(arg1 + 0x18) = 7
*(arg1 + 0x10) = 0
int64_t* result = arg1
int64_t var_18 = zmm0.q
*arg1 = 0
void* r14 = _mm_bsrli_si128(zmm0, 8).q

if (r14 u> 7)
    int64_t rbx_1 = 0x7ffffffffffffffe
    
    if (r14 u> 0x7ffffffffffffffe)
        sub_1405871e0()
        noreturn
    
    int64_t rax_2 = r14 | 7
    
    if (rax_2 u<= 0x7ffffffffffffffe)
        rbx_1 = rax_2
        
        if (rax_2 u< 0xa)
            rbx_1 = 0xa
    
    void* rax_3 = public: static struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M * __cdecl phmap::allocator_traits<class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M>>::allocate(class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M> &, unsigned __int64)(
        result, rbx_1 + 1)
    result[3] = rbx_1
    int16_t* rbx_2 = r14 * 2
    result[2] = r14
    memcpy(rax_3, var_18, rbx_2.d)
    *(rbx_2 + rax_3) = 0
    *result = rax_3
else
    int16_t* rbx = r14 * 2
    *(arg1 + 0x10) = r14
    memmove(arg1, var_18, rbx.d)
    *(rbx + result) = 0

return result
