// 函数: sub_140919260
// 地址: 0x140919260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14091a2d0(arg1)
arg1[0x2e] = arg2
void* rdx = &arg1[0x31]
uint64_t rbx_1 = 0
void* rcx = &arg1[0x3b]
int64_t var_88 = 0
*arg1 = &data_142e1ffa8
arg1[0x2f] = 0
arg1[0x30] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)
int32_t var_80 = 0

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
arg1[0x35].d = 0xffffffff
*(arg1 + 0x1ac) = 0
arg1[0x37] = 0
arg1[0x38].d = 0
arg1[0x39] = 0
arg1[0x3a] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x3f].d = 0xffffffff
*(arg1 + 0x1fc) = 0
arg1[0x41] = 0
arg1[0x42].d = 0
sub_1405947f0(&var_88, 8)
int32_t r12 = var_80 + 8

if (r12 s> 0)
    sub_140594770(&var_88)

UnDecorator::getReferenceType(var_88, u"DummyId", 0x10)
int64_t var_78 = 0
int32_t var_70 = 0
sub_1405947f0(&var_78, 0xa)
int32_t rdi = var_70 + 0xa

if (rdi s> 0)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, u"DummyUser", 0x14)
int64_t var_68 = 0
int32_t var_60 = 0
sub_1405947f0(&var_68, 0xa)
int32_t r14 = var_60 + 0xa

if (r14 s> 0)
    sub_140594770(&var_68)

int64_t r13 = var_68
UnDecorator::getReferenceType(r13, u"DummyType", 0x14)
uint64_t var_58 = 0
uint64_t rsi = 0
int32_t var_50 = r14

if (r14 != 0)
    sub_1405a4c70(&var_58, r14, 0)
    rsi = var_58
    memcpy(rsi, r13, r14 * 2)
else
    int32_t var_4c_1 = 0

uint64_t var_48 = 0
uint64_t r14_1 = 0
int32_t var_40 = rdi

if (rdi != 0)
    sub_1405a4c70(&var_48, rdi, 0)
    r14_1 = var_48
    memcpy(r14_1, var_78, rdi * 2)
    rsi = var_58
else
    int32_t var_3c_1 = 0

uint64_t var_38 = 0
int32_t var_30 = r12
int64_t rdi_1

if (r12 != 0)
    sub_1405a4c70(&var_38, r12, 0)
    rdi_1 = var_88
    rbx_1 = var_38
    memcpy(rbx_1, rdi_1, r12 * 2)
    r14_1 = var_48
    rsi = var_58
else
    rdi_1 = var_88
    int32_t var_2c_1 = 0

sub_14092ae00(arg1, 0, &var_58)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

if (r14_1 != 0)
    sub_140a74f90(r14_1)

if (rsi != 0)
    sub_140a74f90(rsi)

if (r13 != 0)
    sub_140a74f90(r13)

int64_t rax_2 = var_78

if (rax_2 != 0)
    sub_140a74f90(rax_2)

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

return arg1
