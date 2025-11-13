// 函数: sub_141fecd20
// 地址: 0x141fecd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 s>= 0)
    int32_t rdx = *(arg1 + 0x18)
    
    if (rbx.d s< rdx)
        int64_t r9_1 = *(arg1 + 0x10)
        void* rcx_2 = (rbx << 5) + r9_1
        char rbp_1 = *(rcx_2 + 0x1c)
        int128_t zmm7 = *(rcx_2 + 0xc)
        int128_t zmm8 = *(rcx_2 + 0x10)
        int128_t zmm9 = *(rcx_2 + 0x14)
        int128_t zmm10 = *(rcx_2 + 0x18)
        int64_t arg_8 = *(rcx_2 + 4)
        int32_t rax_2 = rdx - rbx.d
        
        if (rax_2 != 1)
            memmove(rcx_2, (sx.q((rbx + 1).d) << 5) + r9_1, (rax_2 - 1) << 5)
            rdx = *(arg1 + 0x18)
        
        *(arg1 + 0x18) = rdx - 1
        sub_1405dad20(arg1 + 0x10)
        rbx = sx.q(sub_141fda910(arg1 + 0x10, arg3, &arg_8))
        int64_t rcx_6 = rbx << 5
        *(*(arg1 + 0x10) + rcx_6 + 0x1c) = rbp_1
        int64_t rax_8 = *(arg1 + 0x10)
        *(rax_8 + rcx_6 + 0xc) = zmm7.d
        *(rax_8 + rcx_6 + 0x10) = zmm8.d
        int64_t rax_9 = *(arg1 + 0x10)
        *(rax_9 + rcx_6 + 0x14) = zmm9.d
        *(rax_9 + rcx_6 + 0x18) = zmm10.d

sub_141fdbdd0(arg1 + 0x10, zx.o(0), 1)
*(arg1 + 8) |= 2
return zx.q(rbx.d)
