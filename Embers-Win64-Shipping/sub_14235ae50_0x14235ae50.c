// 函数: sub_14235ae50
// 地址: 0x14235ae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x2d]

if (rcx == 0)
    return 

int128_t zmm0_1 = sub_140cd85e0(rcx)
int64_t* rcx_1 = arg1[0x2d]
(*(*rcx_1 + 0x278))(rcx_1)
arg1[0x1f].d = zmm0_1.d
int32_t zmm0_2 = sub_142361450(arg1, zmm0_1)
int64_t* rcx_3 = arg1[0x2d]
*(arg1 + 0xfc) = zmm0_2
char rax_3 = (*(*rcx_3 + 0x280))(rcx_3)
arg1[6].b &= 0xf7
int64_t* rcx_4 = arg1[0x2d]
arg1[6].b |= (rax_3 & 1) << 3
char rax_5 = (*(*rcx_4 + 0x288))(rcx_4)
arg1[6].b &= 0xef
int64_t* rcx_5 = arg1[0x2d]
arg1[6].b |= (rax_5 & 1) << 4
char rax = (*(*rcx_5 + 0x290))(rcx_5)
arg1[0xa5].b &= 0xfe
arg1[0xa5].b |= rax & 1
