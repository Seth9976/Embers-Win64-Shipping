// 函数: sub_1426a6170
// 地址: 0x1426a6170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f792b0(arg1)
*arg1 = &data_1434613c0
arg1[0x44] = &data_143461bc0
arg1[0x53] = &data_143461c18
arg1[0x54] = &data_143461c30
arg1[0x55] = &data_143461c78
arg1[0x56] = &data_143461ca0
arg1[0x57].w = 0
arg1[0x58] = 0
arg1[0x59] = 0
__builtin_memset(&arg1[0x61], 0, 0x18)
arg1[0x64].b = 0xff
arg1[0x5a].d |= 0x40
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"PathFollowingComponent", 1)
int64_t* rax_1 = sub_14273f770()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
int32_t var_10 = 0
arg1[0x5b] = rax_2
void*** rax_3 = sub_140a84c80(0, 0x30, 0)

if (rax_3 != 0)
    *rax_3 = &data_143468348
    sub_140d3a3a0(&rax_3[1], arg1)
    *(rax_3 + 0x10) = sub_1426a7ee4.o
    rax_3[5] = sub_140a387b0()
    *rax_3 = &data_1434683a0

if (rax_3 != 0)
    sub_140599630(rax_2 + 0xd0, 1)
    (*rax_3)[6](rax_3, &arg_8)
    int64_t rbp_1 = sx.q(*(rax_2 + 0xd8))
    int32_t rax_6 = (rbp_1 + 1).d
    *(rax_2 + 0xd8) = rax_6
    
    if (rax_6 s> *(rax_2 + 0xdc))
        sub_1405a4f90(rax_2 + 0xd0)
    
    void** rax_9 = (rbp_1 << 4) + *(rax_2 + 0xd0)
    *rax_9 = rax_3
    rax_9[1].d = 3

uint64_t rbx_2 = *sub_140b58170(&arg_8, "ActionsComp", 1)
int64_t* rax_11 = sub_14273e530()
void* rax_12 = sub_140cd9110(arg1, rbx_2, rax_11, rax_11, 1, 0)
int32_t rcx_10 = (arg1[0x5a].d & 0xffffffdf) | 8
arg1[0x5a].d = rcx_10
arg1[0x5e] = rax_12
arg1[0x64].b = data_143b57fe0
arg1[0x5a].d = (rcx_10 & 0xfffffffe) | 2
return arg1
