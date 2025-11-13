// 函数: sub_1407924a0
// 地址: 0x1407924a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int32_t rdi = 0
int64_t var_48 = 0
int32_t rcx = 0
int32_t rdx = 0
int32_t var_3c = 0
int32_t rbx = rax - 1
int32_t var_40 = 0

if (rax == 0)
    rbx = 0

int64_t rsi = 0

if (rbx + 0x13 s> 0)
    sub_1405947f0(&var_48, rbx + 0x13)
    rcx = var_3c
    rdx = var_40
    rsi = var_48

int32_t rax_3 = rbx + 0x13 + rdx

if (rax_3 s> rcx)
    sub_140594770(&var_48)
    rsi = var_48

int64_t rbx_1 = sx.q(rbx)
__builtin_memcpy(rsi, u"TimeToLUTFraction_", 0x24)
memcpy(rsi + 0x24, *arg2, rbx_1.d * 2)
*(rsi + (rbx_1 << 1) + 0x24) = 0
int32_t rdx_3 = 0
int32_t rax_4 = arg2[1].d
int128_t* r14 = nullptr
int128_t* var_58 = nullptr
int32_t var_50 = 0
int32_t rbx_2 = rax_4 - 1
int32_t rax_5 = 0

if (rax_4 == 0)
    rbx_2 = 0

int32_t var_4c = 0

if (rbx_2 + 0xd s> 0)
    sub_1405947f0(&var_58, rbx_2 + 0xd)
    rax_5 = var_4c
    rdx_3 = var_50
    r14 = var_58

int32_t r13_1 = rbx_2 + 0xd + rdx_3

if (r13_1 s> rax_5)
    sub_140594770(&var_58)
    r14 = var_58

int64_t rbx_3 = sx.q(rbx_2)
*r14 = (*u"SampleCurve_")[0].o
r14[1].q = 0x5f006500760072
memcpy(r14 + 0x18, *arg2, rbx_3.d * 2)
*(r14 + (rbx_3 << 1) + 0x18) = 0
int32_t rdx_6 = 0
int32_t rax_6 = arg2[1].d
int128_t* r15_1 = nullptr
var_58 = nullptr
int32_t var_50_2 = 0
int32_t rbx_4 = rax_6 - 1
int32_t rax_7 = 0

if (rax_6 == 0)
    rbx_4 = 0

int32_t var_4c_1 = 0

if (rbx_4 + 0x15 s> 0)
    sub_1405947f0(&var_58, rbx_4 + 0x15)
    rax_7 = var_4c_1
    rdx_6 = var_50_2
    r15_1 = var_58

int32_t r12_1 = rbx_4 + 0x15 + rdx_6

if (r12_1 s> rax_7)
    sub_140594770(&var_58)
    r15_1 = var_58

int64_t rbx_5 = sx.q(rbx_4)
__builtin_memcpy(r15_1, u"CurveLUTNumMinus", 0x20)
r15_1[2].q = 0x5f0065006e004f
memcpy(r15_1 + 0x28, *arg2, rbx_5.d * 2)
int16_t* const r8_3 = &data_142d40450
*(r15_1 + (rbx_5 << 1) + 0x28) = 0
int128_t* rax_8 = &data_142d40450
int128_t* rcx_12 = &data_142d40450

if (r13_1 != 0)
    rax_8 = r14

if (r12_1 != 0)
    rcx_12 = r15_1

if (*(arg3 + 0x10) != 0)
    r8_3 = *(arg3 + 8)

int128_t* var_60 = rax_8
int128_t* var_68 = rax_8
int128_t* var_70 = rcx_12
int128_t* var_78 = rcx_12
sub_140a2e390(&var_48, 
    void %s(in float In_X, out float Out_Value) \n{ \n\tfloat RemappedX = %s(In_X) * %s; \n\tfloat Prev "
"= floor(RemappedX); \n\tfloat Next = Prev < %s ? Prev + 1.", r8_3)

if (rax_3 != 0)
    rdi = rax_3 - 1

sub_140a20ba0(arg4, var_48, rdi)
int64_t rcx_15 = var_48

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

if (r15_1 != 0)
    sub_140a74f90(r15_1)

if (r14 != 0)
    sub_140a74f90(r14)

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t result
result.b = 1
return result
