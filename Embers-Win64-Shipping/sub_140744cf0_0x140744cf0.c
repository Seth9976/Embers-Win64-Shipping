// 函数: sub_140744cf0
// 地址: 0x140744cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140744780(arg1)
int64_t rbx = 0
int64_t* r8 = &arg1[0x1b]
*arg1 = &data_142d9efc0
arg1[0x19] = 0
arg1[0x1a] = 0
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
arg1[0x1f].d = 0xffffffff
*(arg1 + 0xfc) = 0
arg1[0x21] = 0
arg1[0x22].d = 0
sub_141c305b0(&arg1[0x23])
arg1[0x38] = 0
arg1[0x39].b = 0
*(arg1 + 0x1cc) = arg2
arg1[0x3a] = 0
arg1[0x3b] = 0
int32_t var_30 = 0
void*** rax_1 = sub_140a84c80(0, 0x30, 0)

if (rax_1 != 0)
    *rax_1 = &data_142da2598
    rax_1[1] = arg1
    *(rax_1 + 0x10) = sub_14076e780.o
    rax_1[5] = sub_140a387b0()
    *rax_1 = &data_142da25f0

int64_t rdi_1 = 0
void arg_8

if (rax_1 != 0)
    sub_140599630(&data_143a2d488, 1)
    int64_t* rax_4 = (*rax_1)[6](rax_1, &arg_8)
    int64_t rbp_1 = sx.q(data_143a2d490)
    rdi_1 = *rax_4
    int32_t rax_5 = (rbp_1 + 1).d
    bool cond:0_1 = rax_5 s<= data_143a2d494
    data_143a2d490 = rax_5
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_143a2d488)
    
    void** rax_8 = (rbp_1 << 4) + data_143a2d488
    *rax_8 = rax_1
    rax_8[1].d = 3

arg1[0x3a] = rdi_1
int32_t var_30_1 = 0
void*** rax_9 = sub_140a84c80(0, 0x30, 0)

if (rax_9 != 0)
    *rax_9 = &data_142da2598
    rax_9[1] = arg1
    *(rax_9 + 0x10) = sub_14076e4b0.o
    rax_9[5] = sub_140a387b0()
    *rax_9 = &data_142da25f0

if (rax_9 != 0)
    sub_140599630(&data_143a2d4a0, 1)
    int64_t* rax_12 = (*rax_9)[6](rax_9, &arg_8)
    int64_t rbp_2 = sx.q(data_143a2d4a8)
    rbx = *rax_12
    int32_t rax_13 = (rbp_2 + 1).d
    bool cond:1_1 = rax_13 s<= data_143a2d4ac
    data_143a2d4a8 = rax_13
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_143a2d4a0)
    
    void**** rax_16 = (rbp_2 << 4) + data_143a2d4a0
    *rax_16 = rax_9
    rax_16[1].d = 3

arg1[0x3b] = rbx
return arg1
