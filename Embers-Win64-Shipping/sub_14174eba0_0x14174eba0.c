// 函数: sub_14174eba0
// 地址: 0x14174eba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x38)
int32_t rax_1 = *(arg1 + 0x60) + *(arg1 + 0x50)
void* r9_2 = (sx.q(*(arg1 + 0x40)) << 6) + r8
uint64_t var_d8 = 0
int64_t var_d0 = 0
int64_t rdx = sx.q(rax_1)

while (r8 != r9_2)
    int64_t rax_2 = sx.q(*(r8 + 0x20))
    r8 += 0x40
    rdx += rax_2

if (rdx.d s> 0)
    sub_1405a52a0(&var_d8, rdx.d)

sub_14153eaf0(&var_d8, arg1 + 0x48)
sub_14153eaf0(&var_d8, arg1 + 0x58)
void* i = *(arg1 + 0x38)

for (void* rdi_2 = (sx.q(*(arg1 + 0x40)) << 6) + i; i != rdi_2; i += 0x40)
    sub_14153eaf0(&var_d8, i + 0x18)

int128_t var_b8
__builtin_memcpy(&var_b8, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
int128_t var_58
__builtin_memcpy(&var_58, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x10\x00\x00\x00\x00\x50\xc3\x47", 0x14)
int16_t var_c0 = 0x101
void** const var_c8 = &data_142fc58b0
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x48)
int32_t var_44 = 0
int64_t var_38
__builtin_memset(&var_38, 0, 0x30)
sub_141680540(&var_c8, &var_d8)
sub_141706b20(arg1, &var_c8)
var_c8 = &data_142fc58b0
int64_t var_18
sub_1417055c0(&var_18)
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t var_60

if (var_60 != 0)
    sub_140a74f90(var_60)

int64_t var_70

if (var_70 != 0)
    sub_140a74f90(var_70)

int64_t var_80

if (var_80 != 0)
    sub_140a74f90(var_80)

int64_t var_90
int64_t result = sub_1413c30d0(&var_90)
int64_t rcx_13 = var_a0

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

uint64_t rcx_14 = var_d8

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
