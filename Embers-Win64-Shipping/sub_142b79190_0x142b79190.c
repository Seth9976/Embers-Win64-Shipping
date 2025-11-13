// 函数: sub_142b79190
// 地址: 0x142b79190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2

if (arg2 == 0)
    return 0

int64_t rcx = sx.q(sub_142b790c0(arg1, arg2))
int32_t* rax_3 = *arg1 + (rcx << 2)

if (rbx != (*rax_3 & 0xffffff00))
    do
        rbx = rax_3[1]
        rax_3 = &rax_3[1]
    while (rbx.b s< 0)

return zx.q(rbx) << 0x20 | 0x5000500
