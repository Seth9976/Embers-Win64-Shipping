// 函数: sub_14103d810
// 地址: 0x14103d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg3)
void* r8 = arg1 + (rdi << 3)

if (*(r8 + 0x1018) == arg2)
    return 

int32_t rcx = 0
int64_t rax_3

if (arg2 == 0)
    *(arg1 + 0x2038) &= not.q(1 << (rdi u% 0x40))
    rax_3 = 0
else
    *(arg1 + 0x33) = 0
    *(arg1 + 0x2038) |= 1 << (rdi u% 0x40)
    rax_3 = *(arg2 + 0x48)

*(arg1 + (rdi << 3) + 0x1c18) = rax_3
int64_t rax_6 = *(arg1 + 0x2038)

if (rax_6 != 0)
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_6.d)
    
    if (rax_6 != 0)
        rcx = temp0_2
else
    rcx = (rax_6 - 1).d

*(arg1 + 0x2058) = rcx
sub_1405d16e0(r8 + 0x1018, arg2)
*(arg1 + 0x808) |= 1 << (rdi u% 0x40)
