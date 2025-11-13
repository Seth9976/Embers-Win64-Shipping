// 函数: sub_1413675a0
// 地址: 0x1413675a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0xa)
        uint32_t rax = (sub_140a846a0(rbx << 3, 0) u>> 3).d
        
        if (rbx.d s> rax)
            rax = 0x7fffffff
        
        rbx = zx.q(rax)
    else
        rbx = 0xa

if (rbx.d == *(arg1 + 0x5c))
    return 

int32_t rdx = *(arg1 + 0x58)
*(arg1 + 0x5c) = rbx.d
sub_14119a3a0(arg1, rdx, rbx.d, 8)
