// 函数: sub_141384f40
// 地址: 0x141384f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f6be08
arg1[1] = *(arg2 + 0x3e8)
arg1[2].d = *(arg2 + 0x254)
int64_t rax_2 = *(arg2 + 0xa0)
int64_t r9 = rax_2 + 0x114

if (rax_2 == 0)
    r9 = 0

arg1[3] = r9
__builtin_memset(&arg1[4], 0, 0x40)
arg1[0xc].d = 0xffffffff
__builtin_memset(&arg1[0xd], 0, 0x20)
arg1[0x12] = 0
arg1[0x13].d = 0
*(arg1 + 0x9c) = 1
arg1[0x14].d |= 1
__builtin_memset(&arg1[0x18], 0, 0x18)
arg1[0x1b].d = 0xffffffff
arg1[0x1c] = 0
arg1[0x1d].d = 0xff7fffff
arg1[0x1e] = arg3
arg1[0x1f].d = 0
int64_t* rcx = arg1[1]
char rax_4 = (*(*rcx + 0x160))(rcx)
*(arg1 + 0xfc) &= 0xfe
int64_t* rcx_1 = arg1[1]
*(arg1 + 0xfc) |= rax_4 & 1
char rax_6 = (*(*rcx_1 + 0x170))(rcx_1)
*(arg1 + 0xfc) &= 0xfd
int64_t* rcx_2 = arg1[1]
*(arg1 + 0xfc) |= (rax_6 & 1) * 2
char rax_8 = ((*(*rcx_2 + 0x158))(rcx_2) << 2 ^ *(arg1 + 0xfc)) & 4
*(arg1 + 0xfc) ^= rax_8
char rcx_3 = *(arg1 + 0xfc)
uint8_t rdx = ((*(*(arg2 + 0x3e8) + 0x37) u>> 4 ^ rcx_3) & 8) ^ rcx_3
*(arg1 + 0xfc) = rdx
*(arg1 + 0xfc) = ((*(*(arg2 + 0x3e8) + 0x37) ^ rdx) & 0x10) ^ rdx
int64_t* rcx_5 = *(arg2 + 0x3e8)
char rax_12 = (*(*rcx_5 + 0x38))(rcx_5)
*(arg1 + 0xfc) &= 0xdf
*(arg1 + 0xfc) |= (rax_12 & 1) << 5
int64_t* rcx_6 = *(arg2 + 0x3e8)
char rax_14 = ((*(*rcx_6 + 0x40))(rcx_6) << 6 ^ *(arg1 + 0xfc)) & 0x40
*(arg1 + 0xfc) ^= rax_14
void* rax_15 = *(arg2 + 0x3e8)
*(arg1 + 0xfc) = ((*(rax_15 + 0x37) << 2 ^ *(arg1 + 0xfc)) & 0x7f) ^ *(rax_15 + 0x37) << 2
arg1[0x20] = 0
arg1[0x21] = 0
arg1[0x24].b &= 0xf0
arg1[0x22].d = 0xffffffff
arg1[0x23] = arg2
*(arg1 + 0x124) = 0xffffffff
arg1[0x25].d = 0
arg1[0x26] = 0
arg1[0x27] = 0
void* rax_16 = sub_141f15dc0(arg2)

if (rax_16 != 0 && rax_16 != arg2)
    arg1[4].d = *(rax_16 + 0x254)

void* rax_18 = sub_141f15610(arg2)

if (rax_18 != 0)
    *(arg1 + 0x24) = *(rax_18 + 0x254)

__builtin_memset(&arg1[0x15], 0, 0x18)
int64_t* rdi_2 = *(arg2 + 0x3e8) + 0x10

if (&arg1[0x26] != rdi_2)
    int64_t rcx_10 = arg1[0x26]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    arg1[0x26] = *rdi_2
    *rdi_2 = 0
    arg1[0x27].d = rdi_2[1].d
    *(arg1 + 0x13c) = *(rdi_2 + 0xc)
    rdi_2[1] = 0

return arg1
