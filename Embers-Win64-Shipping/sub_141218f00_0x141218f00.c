// 函数: sub_141218f00
// 地址: 0x141218f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_142f40b60
arg1[2] = 0
arg1[3] = 0
arg1[4] = arg2
arg1[5].d = 0xffffffff
arg1[6] = 0
arg1[7].d = 0xffffffff
__builtin_memset(&arg1[8], 0, 0x20)
arg1[0xc].d = 0xffffffff
int64_t* rcx = *(arg2 + 0x10)
int32_t rdx_3 =
    (zx.d((*(*rcx + 0x518))(rcx)) & 1) | (zx.d(arg3) * 2) | (*(arg1 + 0x64) & 0xfffffffc)
*(arg1 + 0x64) = rdx_3
*(arg1 + 0x64) = ((*(*(arg2 + 0x10) + 0x290) << 2 ^ rdx_3) & 4) ^ rdx_3
arg1[0xd].d = *(*(arg2 + 0x10) + 0x294)
*(arg1 + 0x6c) = *(*(arg2 + 0x10) + 0x298)
arg1[0xe].d = *(*(arg2 + 0x10) + 0x29c)
*(arg1 + 0x74) = *(*(arg2 + 0x10) + 0x2a0)
int64_t* rcx_10 = arg1[4]
arg1[0xf].d = 0
*(arg1 + 0x7c) = (*(*rcx_10 + 0x90))(rcx_10)
int64_t* rax_13 = sub_141ee6400(*(arg2 + 0x10))
int64_t rdx_4 = *rax_13
arg1[0x10] = (*(rdx_4 + 0x248))(rax_13, rdx_4)
sub_141997e80(arg1)
return arg1
