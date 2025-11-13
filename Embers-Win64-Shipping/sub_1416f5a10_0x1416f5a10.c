// 函数: sub_1416f5a10
// 地址: 0x1416f5a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg2

if ((arg1[5].b & 1) != 0)
    int32_t* rax_1 = j_sub_140a82f30(0x90)
    
    if (rax_1 != 0)
        __builtin_memset(rax_1, 0, 0x30)
        rdi = rax_1
        *(rax_1 + 0x30) = _mm_unpacklo_ps(zx.o(0), 0)
        rax_1[0xe] = 0
        *(rax_1 + 0x3c) = _mm_unpacklo_ps(zx.o(0), 0)
        __builtin_memset(&rax_1[0x11], 0, 0x44)
        rax_1[0x22].w = 0x100
        rax_1[0x23] = 0
        *arg2 = rax_1
        int32_t var_14_1 = 0
        int32_t var_20_1 = 0

return sub_141754990(rdi, arg1, arg3) __tailcall
