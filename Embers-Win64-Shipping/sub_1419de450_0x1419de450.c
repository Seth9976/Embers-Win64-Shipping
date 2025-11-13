// 函数: sub_1419de450
// 地址: 0x1419de450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
int64_t* rdx = &arg1[0x46]
*arg1 = &data_143011380
arg1[0x44] = 0
arg1[0x45] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
*(arg1 + 0x254) = 0
arg1[0x4a].d = 0xffffffff
arg1[0x4c] = 0
arg1[0x4d].d = 0
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"RootComponent0", 1)
int64_t* rax_2 = sub_1425881f0()
void* rax_3 = sub_140cd9110(arg1, rbx, rax_2, rax_2, 1, 0)
arg1[0x26] = rax_3
*(rax_3 + 0x14f) = 0
sub_141dd6600(arg1, 1)
*(arg1 + 0x32) &= 0xfd
return arg1
