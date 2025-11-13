// 函数: sub_14103d970
// 地址: 0x14103d970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg3)

if (*(arg1 + ((rbx + 0x103) << 3)) == arg2)
    return 

int32_t r8 = 0
int64_t rax_3

if (arg2 == 0)
    *(arg1 + 0x2018) &= not.q(1 << (rbx u% 0x40))
    rax_3 = 0
else
    *(arg1 + 0x33) = 0
    *(arg1 + 0x2018) |= 1 << (rbx u% 0x40)
    rax_3 = *(arg2 + 0x48)

*(arg1 + (rbx << 3) + 0x1418) = rax_3
int64_t rax_6 = *(arg1 + 0x2018)

if (rax_6 != 0)
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_6.d)
    
    if (rax_6 != 0)
        r8 = temp0_2
else
    r8 = (rax_6 - 1).d

*(arg1 + 0x2048) = r8
sub_1405d16e0(arg1 + ((rbx + 0x103) << 3), arg2)
*(arg1 + 0x7e8) |= 1 << (rbx u% 0x40)
