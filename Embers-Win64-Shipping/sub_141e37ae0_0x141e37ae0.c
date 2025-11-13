// 函数: sub_141e37ae0
// 地址: 0x141e37ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
int64_t* rdx = &arg1[0x4d]
*arg1 = &data_143249010
arg1[0x44] = &data_143249658
arg1[0x4b] = 0
arg1[0x4c] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
*(arg1 + 0x28c) = 0
arg1[0x51].d = 0xffffffff
arg1[0x53] = 0
arg1[0x54].d = 0
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"SkeletalMeshComponent0", 1)
int64_t* rax_2 = sub_142591550()
void* rax_3
int64_t r8_1
rax_3, r8_1 = sub_140cd9110(arg1, rbx, rax_2, rax_2, 1, 0)
arg1[0x46] = rax_3
r8_1.b = 1
*(rax_3 + 0x5a4) = 1
int64_t* rcx_2 = arg1[0x46]
(*(*rcx_2 + 0x620))(rcx_2, data_143f3a5a0, r8_1)
arg1[0x45].d |= 1
arg1[0x26] = arg1[0x46]
return arg1
