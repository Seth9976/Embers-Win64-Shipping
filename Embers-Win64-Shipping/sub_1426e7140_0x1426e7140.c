// 函数: sub_1426e7140
// 地址: 0x1426e7140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142706dd0(arg1)

if (not(0f f< arg1[0x30].d))
    arg1[0x30].d = 0x43b40000

char rax

if (arg1[0x3b].d != 0)
    rax = *(arg1 + 0x201)
else
    rax = sub_141ffde90(zx.d(arg1[0x40].b))
    *(arg1 + 0x201) = rax

char result = sub_141ffded0(zx.d(rax))
arg1[0x40].b = result
arg1[0x3b].d = 1
arg1[0x31].d = arg1[0x30].d f* 0.0174532924f
return result
