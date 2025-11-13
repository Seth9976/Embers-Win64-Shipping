// 函数: sub_141fe9b10
// 地址: 0x141fe9b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t r9_1 = arg1[1].d
    
    if (arg2 s< r9_1)
        int64_t r10 = *arg1
        int64_t r8 = sx.q(arg2) * 5
        void* rcx = r10 + (r8 << 2)
        char rdi = *(rcx + 0x10)
        int32_t rax_2 = r9_1 - arg2
        int128_t zmm7 = *(rcx + 8)
        int128_t zmm8 = *(rcx + 0xc)
        int32_t arg_10 = *(r10 + (r8 << 2) + 4)
        
        if (rax_2 != 1)
            memmove(rcx, r10 + sx.q(arg2 + 1) * 0x14, (rax_2 - 1) * 0x14)
            r9_1 = arg1[1].d
        
        arg1[1].d = r9_1 - 1
        sub_1413a8970(arg1)
        int32_t result = sub_141fda760(arg1, arg3, &arg_10)
        int64_t rdx_2 = sx.q(result) * 5
        *(*arg1 + (rdx_2 << 2) + 0x10) = rdi
        *(*arg1 + (rdx_2 << 2) + 8) = zmm7.d
        *(*arg1 + (rdx_2 << 2) + 0xc) = zmm8.d
        return result

return zx.q(arg2)
