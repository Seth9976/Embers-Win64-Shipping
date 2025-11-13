// 函数: sub_141b0e8d0
// 地址: 0x141b0e8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void** var_128
sub_141a30780(&var_128, *(arg1 + 0x60), arg1 + 0x68)
int64_t rdi = sx.q(*(arg3 + 0xf0))
int64_t r14 = *(arg3 + 0xe8)
var_128 = &data_1430589d8
void** var_e0 = &data_142d9acb8
uint64_t var_d8 = 0
int32_t var_d0 = rdi.d
int32_t var_cc

if (rdi.d != 0)
    sub_1405c4a90(&var_d8, rdi.d, 0)
    memcpy(var_d8, r14, (rdi << 2).d)
else
    var_cc = 0

int32_t rax_2 = *(arg3 + 0xf8)
int64_t rdi_1 = sx.q(*(arg3 + 0x108))
int64_t r14_1 = *(arg3 + 0x100)
char rax_3 = *(arg3 + 0xfc)
uint64_t var_c0 = 0
int32_t var_b8 = rdi_1.d
int32_t var_b4

if (rdi_1.d != 0)
    sub_140638750(&var_c0, rdi_1.d, 0)
    memcpy(var_c0, r14_1, (rdi_1 << 2).d)
else
    __builtin_memset(&var_b4, 0, 0x40)

char rax_4 = *(arg3 + 0xc9)
arg2[0x10].b &= 0xfc
int32_t var_74 = 0x80
int32_t var_70 = 0xffffffff
int32_t var_6c = 0
int64_t var_60 = 0
int32_t var_58 = 0
int64_t* rax_5 = sub_140a82f30(0xe0, 8)
*arg2 = rax_5
int64_t* rdx_5 = rax_5
char rax_6 = arg2[0x10].b | 1
arg2[0x10].b = rax_6

if ((rax_6 & 2) != 0)
    rdx_5 = arg2

*rdx_5 = &data_142d4b9d8
char var_120
rdx_5[1].b = var_120
*rdx_5 = &data_142d4ba68
char var_118
rdx_5[2].b = var_118
int64_t var_114
*(rdx_5 + 0x14) = var_114
*rdx_5 = &data_142d4c6c8
int64_t var_108
rdx_5[4] = var_108
rdx_5[5] = 0
int64_t var_100
rdx_5[5] = var_100
int64_t var_100_1 = 0
int32_t var_f8
rdx_5[6].d = var_f8
int32_t var_f4
*(rdx_5 + 0x34) = var_f4
var_f8.q = 0
int64_t var_f0
rdx_5[7] = var_f0
int64_t var_e8
rdx_5[8] = var_e8
*rdx_5 = &data_1430589d8
rdx_5[9] = &data_142d9acb8
rdx_5[0xa] = 0
rdx_5[0xa] = var_d8
var_d8 = 0
rdx_5[0xb].d = var_d0
*(rdx_5 + 0x5c) = var_cc
var_d0.q = 0
rdx_5[0xc].d = rax_2
*(rdx_5 + 0x64) = rax_3
rdx_5[0xd] = 0
rdx_5[0xd] = var_c0
var_c0 = 0
rdx_5[0xe].d = var_b8
*(rdx_5 + 0x74) = var_b4
var_b8.q = 0
__builtin_memset(&rdx_5[0xf], 0, 0x20)
void* rcx_5 = &rdx_5[0x13]
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_24 = *(rcx_5 + 0x10)

if (rax_24 != 0)
    rcx_5 = rax_24

*rcx_5 = 0
*(rcx_5 + 8) = 0
rdx_5[0x17].d = 0xffffffff
*(rdx_5 + 0xbc) = 0
rdx_5[0x19] = 0
rdx_5[0x1a].d = 0
rdx_5[0x1b].b = rax_4
sub_140746700(&var_e0)

if (var_100_1 != 0)
    sub_140a74f90(var_100_1)

__security_check_cookie(rax_1 ^ &var_148)
return arg2
