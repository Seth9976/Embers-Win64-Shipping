// 函数: sub_1418cedd0
// 地址: 0x1418cedd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
*(arg1 + 0xdc) = 0
__builtin_memset(arg1 + 0xe4, 0xff, 0x20)
__builtin_memset(arg1 + 0x104, 0, 0x1e)
memset(&arg1[1], 0, 0x120)
arg1[0x25] = 0
*arg1 = &data_142fef6a8
arg1[0x27] = arg5
arg1[0x26] = arg2
arg1[0x28] = arg3
arg1[0x29] = arg4
arg1[0x2a].w = 0x100
*(arg1 + 0x152) = 1
arg1[0x2b] = 0
sub_1418b87e0(&arg1[0x2c], arg3)
__builtin_memset(&arg1[0x46], 0, 0x18)
sub_1418ce6e0(&arg1[0x49])
__builtin_memset(&arg1[0x89], 0, 0x20)
sub_1418f1f00(&arg1[0x8d], arg1, arg3)
arg1[0xa9] = 0
arg1[0xaa] = 0
int64_t* rax_1 = j_sub_140a82f30(0x20)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = arg3
    rax_1[1].w = 0
    rax_1[2] = arg1
    rax_1[3] = 0

arg1[0xa8] = rax_1
int64_t* rax_2 = j_sub_140a82f30(0xc0)
int64_t* rax_3

if (rax_2 == 0)
    rax_3 = nullptr
else
    rax_3 = sub_1418b88b0(rax_2, arg3, arg1)

arg1[0x48] = rax_3
data_143efb320 = rax_3
sub_1418fbab0(arg1[0xa8])

if (arg1[0x27] == 0)
    void* rdi_1 = arg1[0x48]
    
    if (*(rdi_1 + 0x78) != 0)
        sub_1418c86c0(rdi_1, 0, 0)
    
    sub_1419032a0(arg1[0xa8], *(rdi_1 + 0x70))
    sub_1418c8030(arg1[0x48], nullptr)
    sub_1418c2ee0(arg1[0x48])

int64_t* rax_4 = j_sub_140a82f30(0x1b0)
int64_t* rdx_4 = rax_4

if (rax_4 == 0)
    rdx_4 = nullptr
else
    *rax_4 = arg1[0x28]
    void* rcx_11 = &rax_4[0xc]
    rax_4[6].d = 0x26
    *(rcx_11 + 0x10) = 0
    *(rcx_11 + 0x18) = 0
    *(rcx_11 + 0x1c) = 0x80
    void* rax_5 = *(rcx_11 + 0x10)
    
    if (rax_5 != 0)
        rcx_11 = rax_5
    
    *rcx_11 = 0
    *(rcx_11 + 8) = 0
    rdx_4[0x10].d = 0xffffffff
    *(rdx_4 + 0x84) = 0
    rdx_4[0x12] = 0
    rdx_4[0x13].d = 0
    rdx_4[0x14] = 0
    rdx_4[0x15].d = 0
    rdx_4[0x16] = 0
    rdx_4[0x17].d = 0
    rdx_4[0x18] = 0
    rdx_4[0x19].d = 0
    rdx_4[0x1a] = 0
    rdx_4[0x1b].d = 0
    rdx_4[0x1c] = 0
    rdx_4[0x1d].d = 0
    rdx_4[0x1e] = 0
    rdx_4[0x1f].d = 0
    rdx_4[0x20] = 0
    rdx_4[0x21].d = 0
    rdx_4[0x22] = 0
    rdx_4[0x23].d = 0
    rdx_4[0x24] = 0
    rdx_4[0x25].d = 0
    rdx_4[0x26] = 0
    rdx_4[0x27].d = 0
    rdx_4[0x28] = 0
    rdx_4[0x29].d = 0
    rdx_4[0x2a] = 0
    rdx_4[0x2b].d = 0
    rdx_4[0x2c] = 0
    rdx_4[0x2d].d = 0
    rdx_4[0x2e] = 0
    rdx_4[0x2f].d = 0
    rdx_4[0x30] = 0
    rdx_4[0x31].d = 0
    rdx_4[0x32] = 0
    rdx_4[0x33].d = 0
    rdx_4[0x35] = arg1
    __builtin_memset(&rdx_4[1], 0, 0x28)
    rdx_4[6] = 0x26
    rdx_4[7].b = 0
    __builtin_memset(&rdx_4[8], 0, 0x20)
    rdx_4[0x34].b = 1

arg1[0x8a] = rdx_4
int64_t* rax_6 = j_sub_140a82f30(0x80)
int64_t* rdx_5 = rax_6

if (rax_6 == 0)
    rdx_5 = nullptr
else
    *rax_6 = arg1[0x28]
    void* rcx_13 = &rax_6[7]
    __builtin_memset(&rax_6[1], 0, 0x30)
    *(rcx_13 + 0x10) = 0
    *(rcx_13 + 0x18) = 0
    *(rcx_13 + 0x1c) = 0x80
    void* rax_7 = *(rcx_13 + 0x10)
    
    if (rax_7 != 0)
        rcx_13 = rax_7
    
    *rcx_13 = 0
    *(rcx_13 + 8) = 0
    rdx_5[0xb].d = 0xffffffff
    *(rdx_5 + 0x5c) = 0
    rdx_5[0xd] = 0
    rdx_5[0xe].d = 0
    rdx_5[0xf] = arg1

arg1[0x8b] = rdx_5
int64_t* rax_8 = j_sub_140a82f30(0x10)

if (rax_8 != 0)
    rsi = sub_1418f4420(rax_8, arg1[0x28])

arg1[0x2b] = rsi
sub_1419ce440()
int64_t rdi_2 = sx.q(arg1[0xaa].d)
int64_t rsi_1 = sx.q(data_143f213d8)
int32_t rax_10 = (rdi_2 + rsi_1).d
arg1[0xaa].d = rax_10

if (rax_10 s> *(arg1 + 0x554))
    sub_1405a4d70(&arg1[0xa9])

memset(&arg1[0xa9][rdi_2], 0, rsi_1 << 3)
return arg1
