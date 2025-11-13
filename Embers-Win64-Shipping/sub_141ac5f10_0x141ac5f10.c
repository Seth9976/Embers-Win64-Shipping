// 函数: sub_141ac5f10
// 地址: 0x141ac5f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_141ea6180(arg1 + 0x140, arg3)

if ((*(arg1 + 0x245) & 0x10) == 0)
    return zx.q(rax)

char rax_1 = sub_141ea6180(arg1 + 0x150, arg3)
int64_t rbp
rbp.b = 0

if (rax_1 == 0)
    void* i = *(arg1 + 0x408)
    
    for (void* rdi_3 = (sx.q(*(arg1 + 0x410)) << 4) + i; i != rdi_3; i += 0x10)
        if (sub_141ea6180(i, arg3) != 0)
            rbp.b = 1
            break

if (rax != 0 && (rax_1 != 0 || rbp.b != 0))
    return 1

return 0
