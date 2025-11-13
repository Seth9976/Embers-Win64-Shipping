// 函数: sub_140744830
// 地址: 0x140744830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140744780(arg1)
int64_t* r8 = &arg1[0x1b]
*arg1 = &data_142d9f348
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
arg1[0x3a].d = arg3.d
arg1[0x38] = 0
arg1[0x39].b = 0
*(arg1 + 0x1cc) = arg2
__builtin_memset(&arg1[0x3b], 0, 0x34)
arg1[0x42].d = 0
__builtin_memset(&arg1[0x43], 0, 0x20)
InitializeCriticalSection(&arg1[0x47])
SetCriticalSectionSpinCount(&arg1[0x47], 0xfa0)
int32_t var_50 = 0
void*** rax_1 = sub_140a84c80(0, 0x30, 0)

if (rax_1 != 0)
    *rax_1 = &data_142da2598
    rax_1[1] = arg1
    *(rax_1 + 0x10) = sub_14076e600.o
    rax_1[5] = sub_140a387b0()
    *rax_1 = &data_142da25f0

int64_t rbx_1 = 0

if (rax_1 != 0)
    sub_140599630(&data_143a2d488, 1)
    void arg_8
    int64_t* rax_4 = (*rax_1)[6](rax_1, &arg_8)
    int64_t rbp_1 = sx.q(data_143a2d490)
    rbx_1 = *rax_4
    int32_t rax_5 = (rbp_1 + 1).d
    bool cond:0_1 = rax_5 s<= data_143a2d494
    data_143a2d490 = rax_5
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_143a2d488)
    
    void** rax_8 = (rbp_1 << 4) + data_143a2d488
    *rax_8 = rax_1
    rax_8[1].d = 3

arg1[0x45] = rbx_1
int32_t var_50_1 = 0
void*** rax_9 = sub_140a84c80(0, 0x30, 0)

if (rax_9 != 0)
    *rax_9 = &data_142da2598
    rax_9[1] = arg1
    *(rax_9 + 0x10) = sub_14076e440.o
    rax_9[5] = sub_140a387b0()
    *rax_9 = &data_142da25f0

int64_t rbx_2 = 0

if (rax_9 != 0)
    sub_140599630(&data_143a2d4a0, 1)
    void arg_20
    int64_t* rax_12 = (*rax_9)[6](rax_9, &arg_20)
    int64_t rbp_2 = sx.q(data_143a2d4a8)
    rbx_2 = *rax_12
    int32_t rax_13 = (rbp_2 + 1).d
    bool cond:2_1 = rax_13 s<= data_143a2d4ac
    data_143a2d4a8 = rax_13
    
    if (not(cond:2_1))
        sub_1405a4f90(&data_143a2d4a0)
    
    void** rax_16 = (rbp_2 << 4) + data_143a2d4a0
    *rax_16 = rax_9
    rax_16[1].d = 3

arg1[0x46] = rbx_2
arg1[0x44].d = 0

if (*(arg1 + 0x224) s<= 0xffffffff)
    sub_140775b10(&arg1[0x43], 0)

int64_t rbx_3 = sx.q(arg1[0x44].d)
int32_t rax_17 = (rbx_3 + 0x10000).d
arg1[0x44].d = rax_17

if (rax_17 s> *(arg1 + 0x224))
    sub_140775270(&arg1[0x43])

memset(arg1[0x43] + (rbx_3 << 2), 0, 0x40000)
return arg1
