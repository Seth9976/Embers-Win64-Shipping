// 函数: sub_142259af0
// 地址: 0x142259af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419ea8d0(arg1)
*arg1 = &data_143310e18
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"ForceComponent0", 1)
int64_t* rax_1 = sub_14257fc40()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
*(arg1 + 0x5b) |= 1
arg1[0xb].b |= 8
arg1[0x44] = rax_2
arg1[0x26] = rax_2
*(arg1 + 0x5f) = 1
arg1[0x21].d = 0x3dcccccd
return arg1
