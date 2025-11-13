// 函数: sub_1418a9730
// 地址: 0x1418a9730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x10)
*(arg1 + 0x10) += 1
int32_t result = rax + 1

if (result s> 0x14)
    return result

int64_t* var_f8 = nullptr
int32_t var_ec_1 = 0
int64_t var_d8 = 0
int64_t var_d0_1 = 0
sub_1405947f0(&var_d8, 9)
int32_t rax_1 = var_d0_1.d + 9
var_d0_1.d = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_d8)

UnDecorator::getReferenceType(var_d8, u"ChunkURL", 0x12)
int64_t var_c8
sub_140596d10(&var_c8, arg2)
int32_t var_f0_1 = 1
sub_1405c4f50(&var_f8)
int64_t* rbx_1 = var_f8
int64_t rax_2 = var_d8
int64_t var_78 = 0
int64_t var_70_1 = 0
*rbx_1 = rax_2
rbx_1[1].d = var_d0_1.d
*(rbx_1 + 0xc) = var_d0_1:4.d
rbx_1[2] = var_c8
int32_t var_c0
rbx_1[3].d = var_c0
int32_t var_bc
*(rbx_1 + 0x1c) = var_bc
rbx_1[4] = 0
rbx_1[5].b = 0
*(rbx_1 + 0x2c) = 0
sub_1405947f0(&var_78, 0xd)
int32_t r12_1 = var_70_1.d + 0xd
var_70_1.d = r12_1

if (r12_1 s> 0)
    sub_140594770(&var_78)
    r12_1 = var_70_1.d

int64_t r13_1 = var_78
UnDecorator::getReferenceType(r13_1, u"ResponseCode", 0x1a)
int64_t r15_1 = sx.q(var_f0_1)
int32_t rsi_1 = var_ec_1
uint128_t zmm6 = _mm_cvtepi32_pd(zx.q(arg3))
int32_t rdi_1 = (r15_1 + 1).d

if (rdi_1 s> rsi_1)
    sub_1405c4f50(&var_f8)
    rsi_1 = var_ec_1
    rbx_1 = var_f8

void* rcx_11 = &rbx_1[r15_1 * 6]
int64_t var_a8 = 0
int64_t var_a0_1 = 0
*rcx_11 = r13_1
*(rcx_11 + 8) = r12_1
*(rcx_11 + 0xc) = var_70_1:4.d
*(rcx_11 + 0x10) = 0
*(rcx_11 + 0x18) = 0
*(rcx_11 + 0x20) = zmm6.q
*(rcx_11 + 0x28) = 0
*(rcx_11 + 0x2c) = 1
sub_1405947f0(&var_a8, 0xc)
int32_t rax_9 = var_a0_1.d + 0xc
var_a0_1.d = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_a8)

UnDecorator::getReferenceType(var_a8, u"ErrorString", 0x18)
int64_t var_98
sub_140596d10(&var_98, arg4)
int32_t rdx_7 = rdi_1 + 1

if (rdx_7 s> rsi_1)
    sub_1405c4f50(&var_f8)
    rsi_1 = var_ec_1
    rbx_1 = var_f8

int32_t var_40_1 = rdx_7
int64_t* var_48 = rbx_1
int32_t var_3c_1 = rsi_1
int64_t var_e8 = 0
void* rcx_19 = &rbx_1[sx.q(rdi_1) * 6]
int32_t var_e0_1 = 0
*rcx_19 = var_a8
*(rcx_19 + 8) = var_a0_1.d
*(rcx_19 + 0xc) = var_a0_1:4.d
*(rcx_19 + 0x10) = var_98
int32_t var_90
*(rcx_19 + 0x18) = var_90
int32_t var_8c
*(rcx_19 + 0x1c) = var_8c
*(rcx_19 + 0x20) = 0
*(rcx_19 + 0x28) = 0
*(rcx_19 + 0x2c) = 0
sub_1405947f0(&var_e8, 0x17)
int32_t rax_17 = var_e0_1 + 0x17
var_e0_1 = rax_17

if (rax_17 s> 0)
    sub_140594770(&var_e8)

UnDecorator::getReferenceType(var_e8, u"Patcher.Error.Download", 0x2e)
return sub_1418a8d40(arg1, &var_e8, &var_48)
