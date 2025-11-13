// 函数: sub_1417d6630
// 地址: 0x1417d6630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142018d10(arg1, arg2)
arg1[0x61].d = 0x200
void* rdx = &arg1[0x64]
*arg1 = &data_142fd0420
arg1[0x62] = 0
arg1[0x63] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
arg1[0x68].d = 0xffffffff
*(arg1 + 0x344) = 0
arg1[0x6a] = 0
arg1[0x6b].d = 0
arg1[0x6c] = 0
arg1[0x6d] = 0
arg1[0x47] = sub_1417e54c0()
arg1[0x48] = sub_1417e5580()
return arg1
