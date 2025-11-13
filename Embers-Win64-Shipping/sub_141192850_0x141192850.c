// 函数: sub_141192850
// 地址: 0x141192850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 4) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

uint64_t r8

if (rax_1 != 1)
    r8 = 8
    
    if (rax_1 != 0)
        r8 = 0
else
    r8 = zx.q(rax_1 + 3)

sub_1410b3fe0(arg2, u"PERMUTATION_MSAACOUNT", r8)
return sub_1410b3fe0(arg2, u"SHADER_FASTRESOLVE", 1) __tailcall
