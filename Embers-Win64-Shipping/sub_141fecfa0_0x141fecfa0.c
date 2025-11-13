// 函数: sub_141fecfa0
// 地址: 0x141fecfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int32_t r8

if (arg2 s>= 0)
    r8 = *(arg1 + 0x18)
    
    if (rbx.d s< r8)
        int64_t r9_1 = *(arg1 + 0x10)
        void* rcx_2 = rbx * 0x50 + r9_1
        char rbp_1 = *(rcx_2 + 0x4c)
        uint128_t zmm1 = zx.o(*(rcx_2 + 0x14))
        int128_t zmm7 = *(rcx_2 + 0x1c)
        uint128_t zmm8 = zx.o(*(rcx_2 + 0x2c))
        int128_t zmm9 = *(rcx_2 + 0x34)
        uint128_t zmm10 = zx.o(*(rcx_2 + 0x44))
        int128_t var_78 = *(rcx_2 + 4)
        uint64_t var_68_1 = zmm1.q
        int32_t rax_2 = r8 - rbx.d
        
        if (rax_2 != 1)
            memmove(rcx_2, sx.q((rbx + 1).d) * 0x50 + r9_1, (rax_2 - 1) * 0x50)
            r8 = *(arg1 + 0x18)
        
        *(arg1 + 0x18) = r8 - 1
        sub_140976b40(arg1 + 0x10)
        int32_t rax_7
        rax_7, r8 = sub_141fda810(arg1 + 0x10, arg3, &var_78)
        rbx = sx.q(rax_7)
        int64_t rcx_6 = rbx * 0xa
        *(*(arg1 + 0x10) + (rcx_6 << 3) + 0x4c) = rbp_1
        int64_t rax_9 = *(arg1 + 0x10)
        *(rax_9 + (rcx_6 << 3) + 0x1c) = zmm7
        *(rax_9 + (rcx_6 << 3) + 0x2c) = zmm8.q
        int64_t rax_10 = *(arg1 + 0x10)
        *(rax_10 + (rcx_6 << 3) + 0x34) = zmm9
        *(rax_10 + (rcx_6 << 3) + 0x44) = zmm10.q

r8.b = 1
sub_141fdb820(arg1 + 0x10, zx.o(0), r8.b)
*(arg1 + 8) |= 2
return zx.q(rbx.d)
