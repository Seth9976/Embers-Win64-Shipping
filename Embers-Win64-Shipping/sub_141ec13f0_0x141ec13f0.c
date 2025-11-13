// 函数: sub_141ec13f0
// 地址: 0x141ec13f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_190 = 1
void** var_198 = nullptr
sub_1405a4d70(&var_198)
void** rdx_1 = var_198
int64_t r14 = 0
void** rsi = rdx_1
*(arg1 + 0x158)
*rdx_1 = arg1
void* rcx_1 = &rdx_1[sx.q(var_190)]
uint64_t r12_3 = (rcx_1 - rdx_1 + 7) u>> 3

if (rdx_1 u> rcx_1)
    r12_3 = 0

int16_t* var_1c8
int64_t var_1a8

if (r12_3 != 0)
    do
        void** var_178
        uint128_t zmm6_1 = sub_141eb5c00(&var_178, *rsi)
        var_1c8 = nullptr
        int32_t rbx_1 = *(arg1 + 0x188)
        var_178 = &data_14325b358
        int64_t rdi_1 = *(arg1 + 0x180)
        int32_t var_1c0_1 = rbx_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_1c8, rbx_1, 0)
            memcpy(var_1c8, rdi_1, rbx_1 * 2)
        else
            int32_t var_1bc_1 = rbx_1
        
        int32_t rbx_2 = arg2[1].d
        int64_t rdi_2 = *arg2
        var_1a8 = 0
        int32_t var_1a0_1 = rbx_2
        
        if (rbx_2 != 0)
            sub_1405a4c70(&var_1a8, rbx_2, 0)
            memcpy(var_1a8, rdi_2, rbx_2 * 2)
        else
            int32_t var_19c_1 = 0
        
        sub_141ec0e70(&var_178, zmm6_1, &var_1a8, &var_1c8)
        sub_141eb68f0(&var_178)
        rsi = &rsi[1]
        r14 += 1
    while (r14 != r12_3)

int64_t* rax_1 = sub_140b24e60(&var_1a8)
int32_t rdx_7 = rax_1[1].d
int32_t rdx_8 = neg.d(rdx_7)
var_1c8 = *rax_1
*rax_1 = 0
int32_t rcx_11 = rax_1[1].d
int32_t rcx_12 = *(rax_1 + 0xc)
rax_1[1] = 0
int32_t rdx_11 = sbb.d(rdx_8, rdx_8, rdx_7 != 0) + 0xf + rcx_11

if (rdx_11 s> rcx_12)
    sub_1405947f0(&var_1c8, rdx_11)

sub_140a2cf70(&var_1c8, u"FPSChartStats", 0xd)
int64_t var_188
int64_t* rax_2 = sub_140b29020(arg1 + 0x150, &var_188)
int32_t rcx_16 = rax_2[1].d
int32_t rbx_3 = rcx_16 - 1

if (rcx_16 == 0)
    rbx_3 = 0

int32_t rcx_18

if (rcx_11 == 0)
    rcx_18 = 2

if (rcx_11 != 0 || rbx_3 == 0xffffffff)
    rcx_18 = 1

int32_t rdx_15 = rcx_11 + rcx_18 + rbx_3
int16_t* var_1b8 = var_1c8
var_1c8 = nullptr
int32_t var_1ac = rcx_12
int32_t var_1c0_2
var_1c0_2.q = 0

if (rdx_15 s> rcx_12)
    sub_1405947f0(&var_1b8, rdx_15)

sub_140a2cf70(&var_1b8, *rax_2, rbx_3)
int16_t* rcx_21 = var_1c8

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = var_1a8

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = var_188

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

sub_140a464c0()
int16_t* const rdx_17 = &data_142d40450
int64_t r8_7
r8_7.b = 1

if (rcx_11 != 0)
    rdx_17 = var_1b8

char const (* r9_2)[0x4] = data_14399ea08
(*(r9_2 + 0x58))(&data_14399ea08, rdx_17, r8_7, r9_2)
var_1c8 = nullptr
var_1c0_2.q = 0
sub_1405947f0(&var_1c8, 4)
int32_t var_1c0_3 = var_1c0_2 + 4

if (var_1c0_2 + 4 s> rcx_12)
    sub_140594770(&var_1c8)

int16_t* rbx_4 = var_1c8
int64_t result = UnDecorator::getReferenceType(rbx_4, &data_142dfc130, 8)

if (rbx_4 != 0)
    result = sub_140a74f90(rbx_4)

int16_t* rcx_28 = var_1b8

if (rcx_28 != 0)
    result = sub_140a74f90(rcx_28)

void** rcx_29 = var_198

if (rcx_29 == 0)
    return result

return sub_140a74f90(rcx_29)
