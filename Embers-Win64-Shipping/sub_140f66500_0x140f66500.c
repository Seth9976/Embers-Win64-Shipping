// 函数: sub_140f66500
// 地址: 0x140f66500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dddeb0(arg1)
sub_140d93e20(&arg1[0x72])
*arg1 = &data_142ee7c68
arg1[0x72] = &data_142ee7ea8
arg1[0xe3] = &data_142d82a88
arg1[0xe4] = arg1
sub_140ddb700(&arg1[0xe5])
arg1[0xe6] = arg1
__builtin_memset(&arg1[0xe9], 0, 0x19)
arg1[0xed] = 0
arg1[0xee].d = 0
arg1[0xe3] = &data_142ec8af0
arg1[0xe5] = &data_142ec8b18
sub_140d921f0(&arg1[0xef])
arg1[0x10f].b = 0
sub_140d921c0(&arg1[0x110])
*(arg1 + 0x29) |= 0x10
*(arg1 + 0x8d4) = 0x101
*(arg1 + 0x8d6) = 0
arg1[0xdf] = arg1
arg1[0xe0] = &arg1[0xef]
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

int32_t var_10 = 0
*(arg1 + 0x8c4) = data_14399f5c0
uint64_t* rsi_1 = data_143e20d08 + 0xd0
int64_t* rax_1 = sub_140a84c80(0, 0x30, 0)

if (rax_1 != 0)
    rax_1[1] = arg1
    *rax_1 = &data_142da2598
    *(rax_1 + 0x10) = sub_140f7ec50.o
    rax_1[5] = sub_140a387b0()
    *rax_1 = &data_142da25f0

if (rax_1 != 0)
    sub_140599630(rsi_1, 1)
    void arg_8
    (*(*rax_1 + 0x30))(rax_1, &arg_8)
    int64_t rbp_1 = sx.q(rsi_1[1].d)
    int32_t rax_4 = (rbp_1 + 1).d
    rsi_1[1].d = rax_4
    
    if (rax_4 s> *(rsi_1 + 0xc))
        sub_1405a4f90(rsi_1)
    
    void** rax_7 = (rbp_1 << 4) + *rsi_1
    *rax_7 = rax_1
    rax_7[1].d = 3

return arg1
