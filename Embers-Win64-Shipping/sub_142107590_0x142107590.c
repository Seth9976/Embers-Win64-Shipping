// 函数: sub_142107590
// 地址: 0x142107590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432d02d0
arg1[8] = 0
arg1[9] = 0
__builtin_memset(&arg1[0xb], 0, 0x40)

if (arg1[0xb] != u"Custom")
    arg1[0xc].d = 0
    sub_1405947f0(&arg1[0xb], 7)
    int32_t rax_1 = arg1[0xc].d + 7
    arg1[0xc].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x64))
        sub_140594770(&arg1[0xb])
    
    uint64_t* rcx_2 = arg1[0xb]
    *rcx_2 = 0x74007300750043
    rcx_2[1].d = 0x6d006f
    *(rcx_2 + 0xc) = 0

if (arg1[8] != &(*U"RGBXYZF10|")[7])
    int32_t rdx_1 = 0
    arg1[9].d = 0
    
    if (*(arg1 + 0x4c) != 2)
        sub_1405947f0(&arg1[8], 2)
        rdx_1 = arg1[9].d
    
    arg1[9].d = rdx_1 + 2
    
    if (rdx_1 + 2 s> *(arg1 + 0x4c))
        sub_140594770(&arg1[8])
    
    *arg1[8] = 0x31

arg1[0xa].b = 2
int64_t rbx = sx.q(arg1[0xe].d)
int64_t var_30 = 0
int32_t rax_3 = (rbx + 1).d
arg1[0xe].d = rax_3

if (rax_3 s> *(arg1 + 0x74))
    sub_1405c50f0(&arg1[0xd])

int64_t rax_4 = arg1[0xd]
uint128_t* rcx_7 = rbx * 0x1c
*(rcx_7 + rax_4) = 0.o
*(rcx_7 + rax_4 + 0x10) = 0
*(rcx_7 + rax_4 + 0x18) = 0
int64_t arg_8
sub_140b58260(&arg_8, &data_142d40450, 1)
*arg1[0xd] = arg_8
return arg1
