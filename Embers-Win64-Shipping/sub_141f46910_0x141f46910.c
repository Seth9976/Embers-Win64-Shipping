// 函数: sub_141f46910
// 地址: 0x141f46910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x288)

if (rcx != 0)
    int32_t zmm0 = *(arg1 + 0x2b0)
    *(rcx + 0x420) = _mm_unpacklo_ps(0x44fa0000, 0x44fa0000)
    *(rcx + 0x428) = zmm0

if (*(arg1 + 0x2d0) != 0)
    void* rax_2 = *(arg1 + 0xa8)
    
    if (rax_2 == 0)
        rax_2 = sub_141ee69e0(arg1)
    
    int64_t* rcx_2 = *(rax_2 + 0x1b0)
    (*(*rcx_2 + 0xf8))(rcx_2, arg1)

return sub_141ef3920(arg1) __tailcall
