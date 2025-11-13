// 函数: sub_1418a9d30
// 地址: 0x1418a9d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_88 = nullptr
int32_t var_7c = 0
int64_t var_68 = 0
int64_t var_60 = 0
sub_1405947f0(&var_68, 8)
int32_t rax = var_60.d + 8
var_60.d = rax

if (rax s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"AppName", 0x10)
int64_t var_58
sub_140596d10(&var_58, arg2)
int32_t var_80 = 1
sub_1405c4f50(&var_88)
int64_t* rbx_1 = var_88
int64_t rax_1 = var_68
var_68 = 0
*rbx_1 = rax_1
rbx_1[1].d = var_60.d
*(rbx_1 + 0xc) = var_60:4.d
rbx_1[2] = var_58
int32_t var_50
rbx_1[3].d = var_50
int32_t var_4c
*(rbx_1 + 0x1c) = var_4c
rbx_1[4] = 0
rbx_1[5].b = 0
*(rbx_1 + 0x2c) = 0
int64_t var_60_1 = 0
sub_1405947f0(&var_68, 0xb)
int32_t rax_7 = var_60_1.d + 0xb
var_60_1.d = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"AppVersion", 0x16)
sub_140596d10(&var_58, arg3)
int64_t r14 = sx.q(var_80)
int32_t rdi_1 = var_7c
int32_t rsi = (r14 + 1).d

if (rsi s> rdi_1)
    sub_1405c4f50(&var_88)
    rdi_1 = var_7c
    rbx_1 = var_88

int64_t rax_8 = var_68
void* rcx_12 = &rbx_1[r14 * 6]
var_68 = 0
*rcx_12 = rax_8
*(rcx_12 + 8) = var_60_1.d
*(rcx_12 + 0xc) = var_60_1:4.d
*(rcx_12 + 0x10) = var_58
*(rcx_12 + 0x18) = var_50
*(rcx_12 + 0x1c) = var_4c
*(rcx_12 + 0x20) = 0
*(rcx_12 + 0x28) = 0
*(rcx_12 + 0x2c) = 0
int64_t var_60_2 = 0
sub_1405947f0(&var_68, 9)
int32_t rax_14 = var_60_2.d + 9
var_60_2.d = rax_14

if (rax_14 s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"Filename", 0x12)
sub_140596d10(&var_58, arg4)
int32_t r14_1 = rsi + 1

if (r14_1 s> rdi_1)
    sub_1405c4f50(&var_88)
    rdi_1 = var_7c
    rbx_1 = var_88

int64_t rax_16 = var_68
void* rcx_20 = &rbx_1[sx.q(rsi) * 6]
var_68 = 0
*rcx_20 = rax_16
*(rcx_20 + 8) = var_60_2.d
*(rcx_20 + 0xc) = var_60_2:4.d
*(rcx_20 + 0x10) = var_58
*(rcx_20 + 0x18) = var_50
*(rcx_20 + 0x1c) = var_4c
*(rcx_20 + 0x20) = 0
*(rcx_20 + 0x28) = 0
*(rcx_20 + 0x2c) = 0
int64_t var_60_3 = 0
sub_1405947f0(&var_68, 0xc)
int32_t rax_22 = var_60_3.d + 0xc
var_60_3.d = rax_22

if (rax_22 s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"CommandLine", 0x18)
sub_140596d10(&var_58, arg5)
int32_t r15_1 = r14_1 + 1

if (r15_1 s> rdi_1)
    sub_1405c4f50(&var_88)
    rdi_1 = var_7c
    rbx_1 = var_88

int64_t rax_24 = var_68
void* rcx_28 = &rbx_1[sx.q(r14_1) * 6]
var_68 = 0
*rcx_28 = rax_24
*(rcx_28 + 8) = var_60_3.d
*(rcx_28 + 0xc) = var_60_3:4.d
*(rcx_28 + 0x10) = var_58
*(rcx_28 + 0x18) = var_50
*(rcx_28 + 0x1c) = var_4c
*(rcx_28 + 0x20) = 0
*(rcx_28 + 0x28) = 0
*(rcx_28 + 0x2c) = 0
int64_t var_60_4 = 0
sub_1405947f0(&var_68, 0xb)
int32_t r13 = var_60_4:4.d
int32_t r14_2 = var_60_4.d + 0xb
var_60_4.d = r14_2

if (r14_2 s> r13)
    sub_140594770(&var_68)
    r13 = var_60_4:4.d
    r14_2 = var_60_4.d

int64_t r12 = var_68
UnDecorator::getReferenceType(r12, u"ReturnCode", 0x16)
int32_t rsi_1 = r15_1 + 1
var_58 = 0
var_50.q = 0
uint128_t zmm6 = _mm_cvtepi32_pd(zx.q(arg6))

if (rsi_1 s> rdi_1)
    sub_1405c4f50(&var_88)
    rdi_1 = var_7c
    rbx_1 = var_88

void* rcx_35 = &rbx_1[sx.q(r15_1) * 6]
*rcx_35 = r12
*(rcx_35 + 8) = r14_2
*(rcx_35 + 0xc) = r13
*(rcx_35 + 0x10) = 0
*(rcx_35 + 0x18) = 0
*(rcx_35 + 0x20) = zmm6.q
*(rcx_35 + 0x28) = 0
*(rcx_35 + 0x2c) = 1
var_68 = 0
int64_t var_60_5 = 0
sub_1405947f0(&var_68, 0xc)
int32_t rax_31 = var_60_5.d + 0xc
var_60_5.d = rax_31

if (rax_31 s> 0)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"ErrorString", 0x18)
sub_140596d10(&var_58, arg7)
int32_t rdx_16 = rsi_1 + 1

if (rdx_16 s> rdi_1)
    sub_1405c4f50(&var_88)
    rdi_1 = var_7c
    rbx_1 = var_88

int32_t var_70 = rdx_16
int64_t* var_78 = rbx_1
int32_t var_6c = rdi_1
var_88 = nullptr
void* rcx_43 = &rbx_1[sx.q(rsi_1) * 6]
int32_t var_80_5
var_80_5.q = 0
*rcx_43 = var_68
*(rcx_43 + 8) = var_60_5.d
*(rcx_43 + 0xc) = var_60_5:4.d
*(rcx_43 + 0x10) = var_58
*(rcx_43 + 0x18) = var_50
*(rcx_43 + 0x1c) = var_4c
*(rcx_43 + 0x20) = 0
*(rcx_43 + 0x28) = 0
*(rcx_43 + 0x2c) = 0
sub_1405947f0(&var_88, 0x1c)
int32_t var_80_6 = var_80_5 + 0x1c

if (var_80_5 + 0x1c s> var_7c)
    sub_140594770(&var_88)

UnDecorator::getReferenceType(var_88, u"Patcher.Error.Prerequisites", 0x38)
return sub_1418a8d40(arg1, &var_88, &var_78)
