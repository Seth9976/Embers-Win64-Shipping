// 函数: sub_1410efe60
// 地址: 0x1410efe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg1)
int32_t rbx = arg2
char rax = sub_1410a09e0(arg1)
char rax_1

if (rax == 0)
    rax_1 = sub_1419a4830(rdi.d)

if ((rax != 0 || rax_1 != 0) && sub_1419a4830(rdi.d) == 0 && test_bit(data_143f13cb0, rdi)
        && rbx s>= 0)
    if (rbx s<= 1)
        rbx = 4
    else if (rbx == 2)
        rbx = 8
    else if (rbx == 3)
        rbx = 0xb
    else if (rbx == 0xf)
        rbx = 0xc

if (arg3 == 0)
    if (rbx == 4)
        return zx.q(rbx + 3)
    
    if (rbx == 9)
        rbx = 0xa

return zx.q(rbx)
