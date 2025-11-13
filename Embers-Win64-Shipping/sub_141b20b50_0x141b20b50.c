// 函数: sub_141b20b50
// 地址: 0x141b20b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t rax_2 = *(arg1 + 0x98)
char var_120 = 0
int32_t var_114 = 0xffffffff
int32_t var_110 = 0
uint32_t r9_1 = (rax_2 u>> 0x20).d
char var_118 = 0
int64_t rax_3 = *(arg1 + 0x90)

if (rax_2.b == 1)
    r9_1 = (rax_2 u>> 0x20).d + 1

void** const var_128 = &data_143059a70
uint32_t r8_2 = (rax_3 u>> 0x20).d + 1

if (rax_3.b == 1)
    r8_2 = (rax_3 u>> 0x20).d

int64_t var_108
sub_141af7e00(&var_108, arg1 + 0xe0, r8_2, r9_1)
arg2[0x10].b &= 0xfc
int64_t* rax_4 = sub_140a82f30(0x100, 8)
*arg2 = rax_4
int64_t* rbx = rax_4
char rax_5 = arg2[0x10].b | 1
arg2[0x10].b = rax_5

if ((rax_5 & 2) != 0)
    rbx = arg2

rbx[1].b = var_120
rbx[2].b = var_118
*(rbx + 0x14) = var_114.q
int64_t rax_9 = var_108
*rbx = &data_143059a70
rbx[7].d &= 0xfffffffe
rbx[4] = rax_9
int32_t var_100
rbx[5].d = var_100
int32_t var_fc
*(rbx + 0x2c) = var_fc
int32_t var_f8
rbx[6].d = var_f8
int32_t var_f4
*(rbx + 0x34) = var_f4
int32_t var_f0
rbx[7].d |= var_f0 & 1
int64_t var_ec
*(rbx + 0x3c) = var_ec
void** var_e0
sub_1405ac0c0(&rbx[9], &var_e0)
char var_40
rbx[0x1d].b = var_40
char var_3f
*(rbx + 0xe9) = var_3f
int32_t var_30
rbx[0x1f].d = var_30
int32_t var_2c
*(rbx + 0xfc) = var_2c
int32_t var_3c
*(rbx + 0xec) = var_3c
int32_t var_38
rbx[0x1e].d = var_38
sub_1405aec80(&var_e0)
__security_check_cookie(rax_1 ^ &var_148)
return arg2
