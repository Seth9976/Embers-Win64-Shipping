// 函数: sub_14068c940
// 地址: 0x14068c940
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
arg1[0x10] = 0
arg1[0x11].d = 0
*(arg1 + 0x79) = 1
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
arg1[0x31].d = 0
arg1[0x30] = 0
__builtin_memset(&arg1[0x32], 0, 0x28)
arg1[0x37].b = 1
arg1[0x38] = 0
arg1[0x39].d = 0
arg1[0x3a] = data_143e244b0
void* rax_2 = data_143e244b8
arg1[0x3b] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0x3c].d = 0xbf800000
arg1[0x3e].d = 0
*(arg1 + 0x1e4) = 1
arg1[0x3d] = 0
arg1[0x3f].d = 0xbf800000
arg1[0x41].d = 0
*(arg1 + 0x1fc) = 1
arg1[0x40] = 0
arg1[0x42].d = 0xbf800000
arg1[0x44].d = 0
*(arg1 + 0x214) = 1
arg1[0x43] = 0
arg1[0x45].d = 0xbf800000
arg1[0x47].d = 0
*(arg1 + 0x22c) = 1
arg1[0x46] = 0
arg1[0x48].d = 0xbf800000
arg1[0x4a].d = 0
*(arg1 + 0x244) = 1
arg1[0x49] = 0
arg1[0x4b].d = 0xbf800000
arg1[0x4d].d = 0
*(arg1 + 0x25c) = 1
arg1[0x4c] = 0
arg1[0x4e].d = 0xbf800000
*(arg1 + 0x274) = 0
arg1[0x4f] = 0
arg1[0x50].d = 0
arg1[0x51].d = 0xbf800000
*(arg1 + 0x28c) = 0
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0xf].b = data_1439ae520
*(arg1 + 0x79) = 1
void var_20

if (&var_20 != &arg1[0x10] && arg1[0x11].d != 0)
    int64_t* rcx_1 = arg1[0x10]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x38))(rcx_1, 0)
        int64_t rcx_2 = arg1[0x10]
        
        if (rcx_2 != 0)
            arg1[0x10] = sub_140a84c80(rcx_2, 0, 0)
        
        arg1[0x11].d = 0

return arg1
