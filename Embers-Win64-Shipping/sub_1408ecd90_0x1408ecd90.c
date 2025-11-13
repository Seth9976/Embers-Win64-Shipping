// 函数: sub_1408ecd90
// 地址: 0x1408ecd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_70 = 0
void** const var_78 = &data_142e134c8
int32_t var_60 = 0
char var_68 = 0
int64_t rax = *(arg1 + 0x98)
uint32_t rdi_1 = (rax u>> 0x20).d
int64_t rax_1 = *(arg1 + 0x90)

if (rax.b == 1)
    rdi_1 = (rax u>> 0x20).d + 1

uint32_t rbx_2 = (rax_1 u>> 0x20).d + 1

if (rax_1.b == 1)
    rbx_2 = (rax_1 u>> 0x20).d

int64_t var_58
sub_1408ec150(&var_58, arg1 + 0xe0)
arg2[0x10].b |= 3
arg2[1].b = 0
arg2[2].b = 0
*(arg2 + 0x14) = 0xffffffff.q
int64_t rax_3 = var_58
*arg2 = &data_142e134c8
arg2[7].d &= 0xfffffffe
arg2[4] = rax_3
int32_t var_50
arg2[5].d = var_50
int32_t var_4c
*(arg2 + 0x2c) = var_4c
int32_t var_48
arg2[6].d = var_48
int32_t var_44
*(arg2 + 0x34) = var_44
int32_t var_40
arg2[7].d |= var_40 & 1
int32_t var_3c
*(arg2 + 0x3c) = var_3c
int32_t var_38
arg2[8].d = var_38
int64_t var_30
arg2[9] = var_30
int64_t var_28
arg2[0xa] = var_28
int32_t var_20
arg2[0xb].d = var_20
int32_t var_1c
*(arg2 + 0x5c) = var_1c
arg2[0xc].d = rbx_2
*(arg2 + 0x64) = rdi_1
return arg2
