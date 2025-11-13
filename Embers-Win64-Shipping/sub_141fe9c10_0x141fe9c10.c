// 函数: sub_141fe9c10
// 地址: 0x141fe9c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t r9_1 = arg1[1].d
    
    if (arg2 s< r9_1)
        int64_t r10 = *arg1
        void* rcx_1 = sx.q(arg2) * 0x2c + r10
        char rdi = *(rcx_1 + 0x28)
        uint128_t zmm7 = zx.o(*(rcx_1 + 0x10))
        int32_t rsi = *(rcx_1 + 0x18)
        uint128_t zmm8 = zx.o(*(rcx_1 + 0x1c))
        int32_t rbp = *(rcx_1 + 0x24)
        int32_t var_40 = *(rcx_1 + 0xc)
        int32_t rax_3 = r9_1 - arg2
        int64_t var_48 = *(rcx_1 + 4)
        
        if (rax_3 != 1)
            memmove(rcx_1, sx.q(arg2 + 1) * 0x2c + r10, (rax_3 - 1) * 0x2c)
            r9_1 = arg1[1].d
        
        arg1[1].d = r9_1 - 1
        sub_141febab0(arg1)
        int32_t result = sub_141fda9f0(arg1, arg3, &var_48)
        int64_t rdx_3 = sx.q(result) * 0x2c
        *(rdx_3 + *arg1 + 0x28) = rdi
        int64_t rcx_6 = *arg1
        *(rdx_3 + rcx_6 + 0x10) = zmm7.q
        *(rdx_3 + rcx_6 + 0x18) = rsi
        int64_t rcx_7 = *arg1
        *(rdx_3 + rcx_7 + 0x1c) = zmm8.q
        *(rdx_3 + rcx_7 + 0x24) = rbp
        return result

return zx.q(arg2)
