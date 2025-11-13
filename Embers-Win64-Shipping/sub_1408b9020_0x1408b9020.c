// 函数: sub_1408b9020
// 地址: 0x1408b9020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xb].d = 0x3f800000
*(arg1 + 0x7c) = 0x3f800000
arg1[0x12] = 0x3f800000
*(arg1 + 0x9c) = 0x3f800000
*arg1 = &data_142e040e0
*(arg1 + 0x74) = 0
*(arg1 + 0x84) = 0
*(arg1 + 0x8c) = 0
arg1[0x13].d = 0
*(arg1 + 0xa4) = 0
arg1[0x15].b = (arg1[0x15].b & 0xfd) | 1
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32] = 0
arg1[0x3c] = &data_142d8ad18
arg1[0x3d].d = 0x42000000
*(arg1 + 0x1ec) = 0x42000000
*(arg1 + 0x1f4) = 0
*(arg1 + 0x1fc) = 0
*(arg1 + 0x200) = data_14399f5c0
arg1[0x42].b = 0
__builtin_memset(&arg1[0x43], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0x48].d = zmm1.d
arg1[0x47].d = zmm1.d
arg1[0x49].b = 0
int128_t zmm0 = zmm1:4.d
*(arg1 + 0x244) = zmm0.d
*(arg1 + 0x23c) = zmm0.d
arg1[0x4c].b &= 0xfc
*(arg1 + 0x24c) = 3
arg1[0x4a] = 0
arg1[0x4b] = 0
__builtin_memset(&arg1[1], 0, 0x50)
arg1[0xb] = 0x3f800000
arg1[0xc] = 0
arg1[0xd] = 0
int32_t i_1 = arg1[0x19].d

if (i_1 != 0)
    void* rdi_1 = &arg1[0x18][2]
    int32_t i
    
    do
        int64_t rcx = *(rdi_1 + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rdi_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rdi_1 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x19].d = 0

if (*(arg1 + 0xcc) != 0)
    sub_1408c37b0(&arg1[0x18], 0)

arg1[0xe].w = 1
__builtin_memset(&arg1[0x1a], 0, 0x14)
*(arg1 + 0xe4) = 2
*(arg1 + 0xe6) = 0
arg1[0x1d] = 0
arg1[0x1e].b = 0
__builtin_memset(arg1 + 0xf4, 0, 0x84)
arg1[0x30].d = 0

if (*(arg1 + 0x184) != 0)
    sub_1405dadb0(&arg1[0x2f], 0)

arg1[0x32].d = 0

if (*(arg1 + 0x194) != 0)
    sub_1405dadb0(&arg1[0x31], 0)

__builtin_memset(&arg1[0x33], 0, 0x48)
*(arg1 + 0x24c) = 0
__builtin_memset(&arg1[0x4d], 0, 0x1b)
*(arg1 + 0x284) = 0
*(arg1 + 0x28c) = 0
arg1[0x53] = 0
arg1[0x54] = 0
return arg1
