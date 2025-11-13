// 函数: sub_141fece70
// 地址: 0x141fece70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int32_t r8

if (arg2 s>= 0)
    r8 = *(arg1 + 0x18)
    
    if (rbx.d s< r8)
        int64_t r9_1 = *(arg1 + 0x10)
        void* rcx_1 = rbx * 0x2c + r9_1
        char rbp_1 = *(rcx_1 + 0x28)
        uint128_t zmm7 = zx.o(*(rcx_1 + 0x10))
        int32_t r14_1 = *(rcx_1 + 0x18)
        uint128_t zmm8 = zx.o(*(rcx_1 + 0x1c))
        int32_t r15_1 = *(rcx_1 + 0x24)
        int64_t var_58 = *(rcx_1 + 4)
        int32_t var_50_1 = *(rcx_1 + 0xc)
        int32_t rax_3 = r8 - rbx.d
        
        if (rax_3 != 1)
            memmove(rcx_1, sx.q((rbx + 1).d) * 0x2c + r9_1, (rax_3 - 1) * 0x2c)
            r8 = *(arg1 + 0x18)
        
        *(arg1 + 0x18) = r8 - 1
        sub_141febab0(arg1 + 0x10)
        int32_t rax_8
        rax_8, r8 = sub_141fda9f0(arg1 + 0x10, arg3, &var_58)
        rbx = sx.q(rax_8)
        int64_t rcx_4 = rbx * 0x2c
        *(*(arg1 + 0x10) + rcx_4 + 0x28) = rbp_1
        int64_t rax_10 = *(arg1 + 0x10)
        *(rax_10 + rcx_4 + 0x10) = zmm7.q
        *(rax_10 + rcx_4 + 0x18) = r14_1
        int64_t rax_11 = *(arg1 + 0x10)
        *(rax_11 + rcx_4 + 0x1c) = zmm8.q
        *(rax_11 + rcx_4 + 0x24) = r15_1

r8.b = 1
sub_141f55fe0(arg1 + 0x10, zx.o(0), r8.b)
*(arg1 + 8) |= 2
return zx.q(rbx.d)
