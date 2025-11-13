// 函数: sub_1426a74e0
// 地址: 0x1426a74e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int32_t rdi = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf] = -1
int32_t rax_1 = arg1[0x12].d & 0xfffffffb
*(arg1 + 0x84) = 0
*(arg1 + 0x8c) = 0xffffffff
arg1[0x12].d = rax_1 | 1
*arg1 = &data_143461cb8
int64_t rax_3 = sub_14273dc90()
void arg_8
int64_t* rax_4 = sub_140b58260(&arg_8, u"ActionTick", 1)
void* rax_5 = sub_140bdc2b0(arg1[2], *rax_4, 1)

if (rax_5 != 0 && *(rax_5 + 0x20) != rax_3)
    rdi = 8

arg1[0x12].d &= 0xfffffff7
arg1[0x12].d |= rdi
return arg1
