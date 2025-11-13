// 函数: sub_140f01460
// 地址: 0x140f01460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
int512_t zmm1
rax, zmm1 = sub_140f053d0(arg1)
int64_t rdi

if (rax != 0)
    rdi = arg1[0xc0]
else
    rdi = arg1[0xbf]

if (sub_140f073c0(arg1, zmm1) != 0)
    return rdi + 0x4a0

if ((*(*arg1 + 0x1c8))(arg1) != 0)
    return rdi + 0x528

return rdi + 0x280
