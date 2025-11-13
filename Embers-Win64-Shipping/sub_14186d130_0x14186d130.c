// 函数: sub_14186d130
// 地址: 0x14186d130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xa8)
(*(*rcx + 0x58))(rcx, arg3)
int64_t* rax_1 = j_sub_140a82f30(0x58)

if (rax_1 != 0)
    *rax_1 = 0
    sub_14077e140(&rax_1[1], arg3)
    int64_t* temp0_1 = *(arg1 + 0x200)
    *(arg1 + 0x200) = rax_1
    *temp0_1
    *temp0_1 = rax_1

*arg2 = 0
void* rcx_2 = &arg2[2]
arg2[1] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
arg3[9].d = 0
int64_t rcx_3 = arg3[8]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405a5130(arg3, 0)

arg3[6].d = 0xffffffff
*(arg3 + 0x34) = 0
sub_14059a8e0(&arg3[2], 0)
int64_t rcx_6 = arg3[4]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *arg3

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
