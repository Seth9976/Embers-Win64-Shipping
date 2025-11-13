// 函数: sub_1423ce770
// 地址: 0x1423ce770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_142e10380
sub_141dd84c0(arg1, 1)
sub_141dd7d00(arg1, 0)
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"CollisionComp", 1)
int64_t* rax_1 = sub_14258d940()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x44] = rax_2

if (rax_2 != 0)
    arg1[0x26] = rax_2
    *(rax_2 + 0x14d) &= 0xfb

return arg1
