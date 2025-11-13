// 函数: sub_1418a8e20
// 地址: 0x1418a8e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x14)
*(arg1 + 0x14) += 1
int32_t result = rax + 1

if (result s> 0x14)
    return result

int64_t* var_178 = nullptr
int32_t var_16c_1 = 0
int64_t var_158
sub_140b291e0(arg2, &var_158, 0)
int64_t var_78 = 0
int64_t var_70_1 = 0
sub_1405947f0(&var_78, 0xa)
int32_t r13_1 = var_70_1:4.d
int32_t r12_1 = var_70_1.d + 0xa
var_70_1.d = r12_1

if (r12_1 s> r13_1)
    sub_140594770(&var_78)
    r13_1 = var_70_1:4.d
    r12_1 = var_70_1.d

int64_t rbx_1 = var_78
UnDecorator::getReferenceType(rbx_1, u"ChunkGuid", 0x14)
int64_t r14_1 = var_158
int32_t var_150
int32_t rdi_1 = var_150
var_158 = 0
var_150.q = 0
int32_t var_170_1 = 1
sub_1405c4f50(&var_178)
int64_t* r15_1 = var_178
*r15_1 = rbx_1
r15_1[1].d = r12_1
*(r15_1 + 0xc) = r13_1
r15_1[2] = r14_1
r15_1[3].d = rdi_1
int32_t var_14c
*(r15_1 + 0x1c) = var_14c
r15_1[4] = 0
r15_1[5].b = 0
*(r15_1 + 0x2c) = 0
int64_t rcx_5 = var_158

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t var_148 = 0
int64_t var_140_1 = 0
sub_1405947f0(&var_148, 9)
int32_t rax_1 = var_140_1.d + 9
var_140_1.d = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_148)

UnDecorator::getReferenceType(var_148, u"Filename", 0x12)
int64_t var_138
sub_140596d10(&var_138, arg3)
int64_t rsi_2 = sx.q(var_170_1)
int32_t rbx_2 = var_16c_1
int32_t rdi_2 = (rsi_2 + 1).d

if (rdi_2 s> rbx_2)
    sub_1405c4f50(&var_178)
    rbx_2 = var_16c_1
    r15_1 = var_178

int64_t rax_2 = var_148
void* rcx_13 = &r15_1[rsi_2 * 6]
int64_t var_b8 = 0
int64_t var_b0_1 = 0
*rcx_13 = rax_2
*(rcx_13 + 8) = var_140_1.d
*(rcx_13 + 0xc) = var_140_1:4.d
*(rcx_13 + 0x10) = var_138
int32_t var_130
*(rcx_13 + 0x18) = var_130
int32_t var_12c
*(rcx_13 + 0x1c) = var_12c
*(rcx_13 + 0x20) = 0
*(rcx_13 + 0x28) = 0
*(rcx_13 + 0x2c) = 0
sub_1405947f0(&var_b8, 0xa)
int32_t r13_2 = var_b0_1:4.d
int32_t r14_2 = var_b0_1.d + 0xa
var_b0_1.d = r14_2

if (r14_2 s> r13_2)
    sub_140594770(&var_b8)
    r13_2 = var_b0_1:4.d
    r14_2 = var_b0_1.d

int64_t r12_2 = var_b8
UnDecorator::getReferenceType(r12_2, u"LastError", 0x14)
int32_t rsi_3 = rdi_2 + 1
uint128_t zmm6 = _mm_cvtepi32_pd(zx.q(arg4))

if (rsi_3 s> rbx_2)
    sub_1405c4f50(&var_178)
    rbx_2 = var_16c_1
    r15_1 = var_178

void* rcx_20 = &r15_1[sx.q(rdi_2) * 6]
*rcx_20 = r12_2
*(rcx_20 + 8) = r14_2
*(rcx_20 + 0xc) = r13_2
*(rcx_20 + 0x10) = 0
*(rcx_20 + 0x18) = 0
*(rcx_20 + 0x20) = zmm6.q
*(rcx_20 + 0x28) = 0
*(rcx_20 + 0x2c) = 1
int64_t var_118 = 0
int64_t var_110_1 = 0
sub_1405947f0(&var_118, 0xb)
int32_t rax_9 = var_110_1.d + 0xb
var_110_1.d = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_118)

UnDecorator::getReferenceType(var_118, u"SystemName", 0x16)
int64_t var_108
sub_140596d10(&var_108, arg5)
int32_t rdi_3 = rsi_3 + 1

if (rdi_3 s> rbx_2)
    sub_1405c4f50(&var_178)
    rbx_2 = var_16c_1
    r15_1 = var_178

int64_t var_e8 = 0
int64_t var_e0_1 = 0
void* rcx_28 = &r15_1[sx.q(rsi_3) * 6]
*rcx_28 = var_118
*(rcx_28 + 8) = var_110_1.d
*(rcx_28 + 0xc) = var_110_1:4.d
*(rcx_28 + 0x10) = var_108
int32_t var_100
*(rcx_28 + 0x18) = var_100
int32_t var_fc
*(rcx_28 + 0x1c) = var_fc
*(rcx_28 + 0x20) = 0
*(rcx_28 + 0x28) = 0
*(rcx_28 + 0x2c) = 0
sub_1405947f0(&var_e8, 0xc)
int32_t rax_17 = var_e0_1.d + 0xc
var_e0_1.d = rax_17

if (rax_17 s> 0)
    sub_140594770(&var_e8)

UnDecorator::getReferenceType(var_e8, u"ErrorString", 0x18)
int64_t var_d8
sub_140596d10(&var_d8, arg6)
int32_t rdx_13 = rdi_3 + 1

if (rdx_13 s> rbx_2)
    sub_1405c4f50(&var_178)
    rbx_2 = var_16c_1
    r15_1 = var_178

int32_t var_80_1 = rdx_13
int64_t* var_88 = r15_1
int32_t var_7c_1 = rbx_2
int64_t var_168 = 0
void* rcx_36 = &r15_1[sx.q(rdi_3) * 6]
int32_t var_160_1 = 0
*rcx_36 = var_e8
*(rcx_36 + 8) = var_e0_1.d
*(rcx_36 + 0xc) = var_e0_1:4.d
*(rcx_36 + 0x10) = var_d8
int32_t var_d0
*(rcx_36 + 0x18) = var_d0
int32_t var_cc
*(rcx_36 + 0x1c) = var_cc
*(rcx_36 + 0x20) = 0
*(rcx_36 + 0x28) = 0
*(rcx_36 + 0x2c) = 0
sub_1405947f0(&var_168, 0x14)
int32_t rax_25 = var_160_1 + 0x14
var_160_1 = rax_25

if (rax_25 s> 0)
    sub_140594770(&var_168)

UnDecorator::getReferenceType(var_168, u"Patcher.Error.Cache", 0x28)
return sub_1418a8d40(arg1, &var_168, &var_88)
