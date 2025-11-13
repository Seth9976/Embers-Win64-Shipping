// 函数: sub_141d656d0
// 地址: 0x141d656d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*(arg1 + 0x5b) |= 1
*arg1 = &data_14322e010
arg1[0x47].d = 0x80800000
arg1[0x44] = &data_14322e638
arg1[0x48] = 0
void arg_8
uint64_t rbx = *sub_140b58170(&arg_8, "MediaComponent", 1)
int64_t* rax_1 = sub_141d5e7a0()
void* rax_2 = sub_140d1dc20(arg2, arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x46] = rax_2
sub_141dba110(arg1, rax_2)
return arg1
