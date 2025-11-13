// 函数: sub_141be1370
// 地址: 0x141be1370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
int64_t rdx_2

if (arg2 == 0)
    *(*(arg1 + 0x910) + 0x28) = 0
    rdx_2 = *(*(arg1 + 0x910) + 0x20)
else
    void* rax = sub_142542e20()
    void* rdx = *(rdi + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
        rdi = sub_142121cc0(rdi, sub_140cde0b0())
    
    *(*(arg1 + 0x910) + 0x28) = rdi
    rdx_2 = *(*(arg1 + 0x910) + 0x28)

sub_140e24dd0(arg1 + 0x778, rdx_2)
return sub_141bf61a0(arg1) __tailcall
