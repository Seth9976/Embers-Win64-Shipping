// 函数: sub_142af0220
// 地址: 0x142af0220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u> 0x10ffff)
    abort()
    noreturn

if (sub_142af4740(arg1, 0x22) == 0)
    return sub_142aa0550(arg2, arg1, arg1) __tailcall

int32_t rax_1 = j_sub_142a52cd0(arg1, 0)
sub_142aa0550(arg2, rax_1, rax_1)
int32_t rcx_2 = 0

if (arg1 s> 0x61)
    wchar32 const* const rax_2 = U"afhijstwy"
    
    do
        rcx_2 += 1
        rax_2 = &rax_2[1]
    while (*rax_2 s< arg1)

int64_t rax_3 = sx.q(rcx_2)

if ((*U"afhijstwy")[rax_3] == arg1)
    int32_t i_2 = sx.d(*((rax_3 << 1) + 0x14365c210))
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        void* rbx_1 = &data_14365c280 + (sx.q(*((rax_3 << 1) + 0x14365c1a0)) << 1)
        uint64_t i
        
        do
            uint32_t rdx_3 = zx.d(*rbx_1)
            rbx_1 += 2
            
            if ((rdx_3 & 0xfffffc00) == 0xd800)
                rdx_3 = ((rdx_3 - 0xd7f7) << 0xa) + zx.d(*rbx_1)
                rbx_1 += 2
            
            sub_142a9e7d0(arg2, rdx_3)
            i = i_1
            i_1 -= 1
        while (i != 1)

sub_142b682a0(arg2, 2)
return sub_142aa0130(arg2) __tailcall
