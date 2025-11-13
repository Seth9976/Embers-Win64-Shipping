// 函数: sub_1420d2600
// 地址: 0x1420d2600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int32_t r8

if (arg2 s>= 0)
    r8 = *(arg1 + 0x50)
    
    if (rbx.d s< r8)
        int64_t r9_1 = *(arg1 + 0x48)
        int64_t rdx = rbx * 5
        void* rcx = r9_1 + (rdx << 2)
        char rbp_1 = *(rcx + 0x10)
        int128_t zmm7 = *(rcx + 8)
        int128_t zmm8 = *(rcx + 0xc)
        int32_t arg_10 = *(r9_1 + (rdx << 2) + 4)
        int32_t rax_2 = r8 - rbx.d
        
        if (rax_2 != 1)
            memmove(rcx, r9_1 + sx.q((rbx + 1).d) * 0x14, (rax_2 - 1) * 0x14)
            r8 = *(arg1 + 0x50)
        
        *(arg1 + 0x50) = r8 - 1
        sub_1413a8970(arg1 + 0x48)
        int32_t rax_8
        rax_8, r8 = sub_141fda760(arg1 + 0x48, arg3, &arg_10)
        rbx = sx.q(rax_8)
        int64_t rcx_3 = rbx * 5
        *(*(arg1 + 0x48) + (rcx_3 << 2) + 0x10) = rbp_1
        *(*(arg1 + 0x48) + (rcx_3 << 2) + 8) = zmm7.d
        *(*(arg1 + 0x48) + (rcx_3 << 2) + 0xc) = zmm8.d

r8.b = 1
sub_141fdb4d0(arg1 + 0x48, *(arg1 + 0x60), r8.b)
return zx.q(rbx.d)
