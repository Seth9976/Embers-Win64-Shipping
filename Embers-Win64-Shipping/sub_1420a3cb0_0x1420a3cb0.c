// 函数: sub_1420a3cb0
// 地址: 0x1420a3cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
char rdi = not.b(arg1[0x50].b) & 1

if (rdi != 0)
    zmm6 = sub_142097540(arg1)

sub_1420ab490(arg1, zmm6, 0, arg3)

if (rdi != 0)
    sub_1420a6540(arg1)

jump(*(*arg1 + 0x660))
