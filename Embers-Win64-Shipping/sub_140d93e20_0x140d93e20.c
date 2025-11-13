// 函数: sub_140d93e20
// 地址: 0x140d93e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ab8c0(arg1)
*arg1 = &data_142ec2a20
arg1[2] = 0
arg1[3] = 0
arg1[0x36] = 0
arg1[0x37].d = 0
*(arg1 + 0x1bc) = 0x64
arg1[0x6a] = 0
arg1[0x6b].d = 0
*(arg1 + 0x35c) = 0x64
int64_t* rax = j_sub_140a82f30(0x1f8)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    void* rdx_1 = &rax[2]
    rax[1] = 0
    *(rdx_1 + 0x10) = 0
    *(rdx_1 + 0x18) = 0
    *(rdx_1 + 0x1c) = 0x80
    void* rcx = *(rdx_1 + 0x10)
    
    if (rcx != 0)
        rdx_1 = rcx
    
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    rax[6].d = 0xffffffff
    __builtin_memset(rax + 0x34, 0, 0x14)
    rax[0x3b] = 0
    rax[0x3c].d = 0
    *(rax + 0x1e4) = 0x32
    rax[0x3d] = 0
    rax[0x3e] = 0

arg1[0x6c] = rax
arg1[0x6d] = 0
arg1[0x6e] = 0
arg1[0x6f].d = 0xffffffff
arg1[0x70].w = 0x100
*(arg1 + 0x382) = 0
uint64_t* rsi_1 = data_143e20d08 + 0xb8
int32_t var_10 = 0
int64_t* rax_1 = sub_140a84c80(0, 0x30, 0)

if (rax_1 != 0)
    rax_1[1] = arg1
    *rax_1 = &data_142da2598
    *(rax_1 + 0x10) = sub_140db53f0.o
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
