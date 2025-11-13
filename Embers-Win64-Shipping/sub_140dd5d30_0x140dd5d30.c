// 函数: sub_140dd5d30
// 地址: 0x140dd5d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a96170(arg1)
arg1[3].b = 0
arg1[4] = 0
arg1[5].d = 0
arg1[6] = 0
arg1[7] = 0
*(arg1 + 0x44) = 0
arg1[9].b = 1
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc].w = 0x101
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf].b = data_1439ae51c
*(arg1 + 0x79) = 1
arg1[0x10] = 0
arg1[0x11].d = 0
arg1[0x12].d = 0x3f800000
*(arg1 + 0x94) = 0
*(arg1 + 0x96) = 0
arg1[0x16].b = 0
*(arg1 + 0xb4) = 0
arg1[0x17] = 0
arg1[0x18].d = 0
uint128_t zmm1 = zx.o(data_143dbb1f0)
arg1[0x19].d = data_143dbb1f0.d
arg1[0x1a].b = 1
*(arg1 + 0xcc) = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = 0
arg1[0x2b].b = 0
sub_140a96170(&arg1[0x2c])
arg1[0x2f].b = 0
arg1[0x30] = 0
arg1[0x31].d = 0
__builtin_memset(&arg1[0x32], 0, 0x20)
char rax_1 = data_1439ae520
char var_28 = rax_1
arg1[0xf].b = rax_1
char var_27 = 1
int64_t var_20 = 0
int32_t var_18 = 0
*(arg1 + 0x79) = 1

if (&var_20 != &arg1[0x10] && arg1[0x11].d != 0)
    int64_t* rcx_1 = arg1[0x10]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x38))(rcx_1, 0)
        int64_t rcx_2 = arg1[0x10]
        
        if (rcx_2 != 0)
            arg1[0x10] = sub_140a84c80(rcx_2, 0, 0)
        
        arg1[0x11].d = 0

sub_140745b20(&var_20)
return arg1
