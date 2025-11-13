// 函数: sub_141e764f0
// 地址: 0x141e764f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int128_t* rax = arg1[0xa]
char r8 = *arg2
*rax = *(arg1 + 0x58)
rax[1].q = arg1[0xd]
*(arg1[0xa] + 0x28) = arg1[0xe].d
void* rdx_1 = arg1[0xa]
char temp0 = (*(rdx_1 + 0x44)).b
*(rdx_1 + 0x44) = 1
arg_18.b = sbb.b(temp0, temp0, r8 != 0) & 2
void* rax_3 = arg1[4]
void* rcx = &arg1[6]

if (rax_3 != 0)
    rcx = rax_3

arg1[2]((*(*rcx + 8))(rcx, rdx_1, neg.b(r8)), &arg_18)
void* result = *arg1
*(result + 0x40) -= 1
return result
