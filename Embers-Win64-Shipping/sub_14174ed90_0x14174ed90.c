// 函数: sub_14174ed90
// 地址: 0x14174ed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x38)
int64_t r10 = sx.q(*(arg1 + 0x60) + *(arg1 + 0x50))
uint64_t var_d8 = 0
void* r11_1 = sx.q(*(arg1 + 0x40)) * 0x98 + r9
int64_t var_d0 = 0

if (r9 != r11_1)
    void* r8_1 = r9 + 0x3c
    
    do
        r9 += 0x98
        int32_t rax_4 = *(r8_1 + 0x2c) * *(r8_1 - 4)
        r8_1 += 0x98
        r10 = r10 + sx.q(*(r8_1 - 0x5c) + *(r8_1 - 0xbc))
            + sx.q(rax_4 * *(r8_1 - 0x94) * *(r8_1 - 0x98))
    while (r9 != r11_1)

if (r10.d s> 0)
    sub_1405a52a0(&var_d8, r10.d)

sub_14153eaf0(&var_d8, arg1 + 0x48)
sub_14153eaf0(&var_d8, arg1 + 0x58)
void* i = *(arg1 + 0x38)

for (void* rdi_1 = sx.q(*(arg1 + 0x40)) * 0x98 + i; i != rdi_1; i += 0x98)
    sub_14173bc40(i, &var_d8)

int128_t var_b8
__builtin_memcpy(&var_b8, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
int128_t var_58
__builtin_memcpy(&var_58, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x10\x00\x00\x00\x00\x50\xc3\x47", 0x14)
int16_t var_c0 = 0x102
void** const var_c8 = &data_142fc5920
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x48)
int32_t var_44 = 0
int64_t var_38
__builtin_memset(&var_38, 0, 0x30)
sub_141680ae0(&var_c8, &var_d8)
sub_141706d00(arg1, &var_c8)
var_c8 = &data_142fc5920
int64_t var_18
sub_1417055c0(&var_18)
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

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
int64_t result = sub_141705720(&var_90)
int64_t rcx_14 = var_a0

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

uint64_t rcx_15 = var_d8

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
