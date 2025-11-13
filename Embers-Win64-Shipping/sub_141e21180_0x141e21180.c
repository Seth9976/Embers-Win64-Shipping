// 函数: sub_141e21180
// 地址: 0x141e21180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
int16_t* const r15

if (arg2[4].d == 0)
    r15 = &data_142d40450
else
    r15 = arg2[3]

int64_t arg_8 = *(sub_1424684c0() + 0x18)
int16_t* var_a8
sub_140b63b70(&arg_8, &var_a8)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_b8 = r15
int32_t var_a0

if (var_a0 != 0)
    r8 = var_a8

_mm_cvtps_pd(zmm0)
int64_t var_98
sub_140a2e390(&var_98, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_a8

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

int64_t var_88
int64_t* rax_1 = sub_140b63b70(arg1 + 0x20, &var_88)

if (rax_1[1].d != 0)
    rsi = *rax_1

sub_140a2e390(&var_a8, u"%s:", rsi)
int32_t r8_3

if (var_a0 == 0)
    r8_3 = 0
else
    r8_3 = var_a0 - 1

sub_140a20ba0(&var_98, var_a8, r8_3)
int16_t* rcx_8 = var_a8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_88

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int32_t zmm0_1 = *(arg1 + 0x28)
int64_t r15_1 = arg2[5]
int64_t r12 = arg2[8]
var_a8 = nullptr
var_a0.q = 0
int64_t var_70 = 0
int64_t var_68 = 0
int64_t var_60
sub_140596d10(&var_60, &var_a8)
int16_t* rcx_11 = var_a8
int64_t var_50 = r15_1
int64_t var_38 = r12

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

void* rbx = arg2[5]
int64_t rsi_1 = sx.q(*(rbx + 0x38))
int32_t rax_2 = (rsi_1 + 1).d
*(rbx + 0x38) = rax_2

if (rax_2 s> *(rbx + 0x3c))
    sub_140775520(rbx + 0x30)

int64_t rcx_13 = *(rbx + 0x30)
int64_t rdx_5 = rsi_1 * 9
int64_t rax_3 = var_70
__builtin_memset(&var_70, 0, 0x20)
*(rcx_13 + (rdx_5 << 3)) = zmm0_1
*(rcx_13 + (rdx_5 << 3) + 8) = rax_3
*(rcx_13 + (rdx_5 << 3) + 0x10) = var_68.d
*(rcx_13 + (rdx_5 << 3) + 0x14) = var_68:4.d
*(rcx_13 + (rdx_5 << 3) + 0x18) = var_60
int32_t var_58
*(rcx_13 + (rdx_5 << 3) + 0x20) = var_58
int32_t var_54
*(rcx_13 + (rdx_5 << 3) + 0x24) = var_54
*(rcx_13 + (rdx_5 << 3) + 0x28) = r15_1
*(rcx_13 + (rdx_5 << 3) + 0x30) = 0
*(rcx_13 + (rdx_5 << 3) + 0x38) = 0
*(rcx_13 + (rdx_5 << 3) + 0x40) = r12
int64_t var_48 = 0
int64_t var_40 = 0
sub_141e13280(&var_48)
int64_t rcx_15 = var_60

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_141e12f90(&var_70)
void* rdx_6 = arg2[5]
int64_t rax_9 = sx.q(*(rdx_6 + 0x38))
int64_t rax_10 = *(rdx_6 + 0x30)

if (*(rax_10 + ((rax_9 * 9 - 8) << 3) + 0xc) s< 0x32)
    sub_1405c5660(rax_10 + ((rax_9 * 9 - 8) << 3), 0x32)
    rdx_6 = arg2[5]

int64_t result = *(rdx_6 + 0x30)
void* rdi_1 = result + sx.q(*(rdx_6 + 0x38) - 1) * 0x48

if (rdi_1 != 0)
    int64_t rsi_2 = var_98
    var_a8 = nullptr
    int32_t var_90
    int32_t var_a0_1 = var_90
    
    if (var_90 != 0)
        sub_1405a4c70(&var_a8, var_90, 0)
        memcpy(var_a8, rsi_2, var_90 * 2)
    else
        int32_t var_9c_1 = 0
    
    result = sub_141e14220(rdi_1, &var_a8, 0)
    int64_t* rcx_24 = *(arg1 + 0x18)
    
    if (rcx_24 != 0)
        result = (*(*rcx_24 + 0x30))(rcx_24, rdi_1)

int64_t rcx_25 = var_98

if (rcx_25 == 0)
    return result

return sub_140a74f90(rcx_25)
