// 函数: sub_14147ddb0
// 地址: 0x14147ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* rax_2 = sub_14139bef0(arg1)
int32_t r12 = rax_2[0x7a].d

if (sub_1410a09e0(arg4) == 0)
    sub_1419a4830(arg4)

int32_t var_1a4 = 0xffffffff
int32_t var_1a8 = 0xffffffff
int64_t var_198
memset(&var_198, 0, 0x120)
sub_14139b410(rax_2, 1, &var_198, &var_1a4, &var_1a8)
char var_183 = 0
var_198 = *sub_14139d690(rax_2)
char var_c8 = 0x55
int64_t var_d8 = *(rax_2[8] + 8)
int32_t var_c4 = arg2
int64_t* var_1b8_1 = &var_198
sub_1419ba670(r12)
int64_t rax_7 = var_198
uint64_t rbx_1 = 0
int64_t var_78[0x8]

if (rax_7 != 0)
    var_78[0] = rax_7
    rbx_1 = 1

int64_t var_180

if (var_180 != 0)
    uint64_t rax_8 = zx.q(rbx_1.d)
    rbx_1 = zx.q(rbx_1.d + 1)
    var_78[rax_8] = var_180

int64_t var_168

if (var_168 != 0)
    uint64_t rax_9 = zx.q(rbx_1.d)
    rbx_1 = zx.q(rbx_1.d + 1)
    var_78[rax_9] = var_168

int64_t var_150

if (var_150 != 0)
    uint64_t rax_10 = zx.q(rbx_1.d)
    rbx_1 = zx.q(rbx_1.d + 1)
    var_78[rax_10] = var_150

int64_t var_138

if (var_138 != 0)
    uint64_t rax_11 = zx.q(rbx_1.d)
    rbx_1 = zx.q(rbx_1.d + 1)
    var_78[rax_11] = var_138

int64_t var_120

if (var_120 != 0)
    uint64_t rax_12 = zx.q(rbx_1.d)
    rbx_1 = zx.q(rbx_1.d + 1)
    var_78[rax_12] = var_120

int64_t var_108

if (var_108 != 0)
    uint64_t rax_13 = zx.q(rbx_1.d)
    rbx_1 = zx.q(rbx_1.d + 1)
    var_78[rax_13] = var_108

int64_t var_f0

if (var_f0 != 0)
    uint64_t rax_14 = zx.q(rbx_1.d)
    rbx_1 = zx.q(rbx_1.d + 1)
    var_78[rax_14] = var_f0

uint64_t rdx_5 = zx.q((rbx_1 << 3).d)
int64_t* rsi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = rdx_5 + rsi_3

if (rax_15 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, rdx_5.d + 8)
    rsi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = zx.q(rdx_5.d) + rsi_3

*(arg1 + 0x30) = rax_15
uint64_t i_2 = zx.q(rbx_1.d)

if (rbx_1.d != 0)
    int64_t* rcx_16 = rsi_3
    uint64_t i
    
    do
        *rcx_16 = *(&var_78 - rsi_3 + rcx_16)
        rcx_16 = &rcx_16[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

void*** rcx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_19[5]

if (rax_17 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_19[5]

*(arg1 + 0x30) = rax_17
void**** rax_18 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_18 = rcx_19
*(arg1 + 8) = &rcx_19[1]
rcx_19[1] = 0
rcx_19[2].d = rbx_1.d
*rcx_19 = &data_142d549c8
rcx_19[3] = rsi_3
rcx_19[4].d = 1
int64_t rbx_4 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_20 = rbx_4 + 0x1a

if (rax_20 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x1c)
    rbx_4 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_20 = rbx_4 + 0x1a

wchar16 const* const rcx_24 = u"WaterGBuffer"
*(arg1 + 0x30) = rax_20
wchar16 const i_1

do
    i_1 = *rcx_24
    *(rbx_4 - u"WaterGBuffer" + rcx_24) = i_1
    rcx_24 = &rcx_24[1]
while (i_1 != 0)
void*** rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_21 = &rcx_27[0x27]

if (rax_21 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &rcx_27[0x27]

*(arg1 + 0x30) = rax_21
void**** rax_22 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_22 = rcx_27
*(arg1 + 8) = &rcx_27[1]
sub_1405d11b0(rcx_27, &var_198, rbx_4)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_198)
char var_81
*(arg1 + 0x178) = var_81
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
void*** rcx_34 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_25 = &rcx_34[3]

if (rax_25 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_34 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_25 = &rcx_34[3]

*(arg1 + 0x30) = rax_25
int64_t* rax_26 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_26 = rcx_34
*(arg1 + 8) = &rcx_34[1]
rcx_34[1] = 0
*rcx_34 = &data_142f6bbc8
rcx_34[2].w = 0x101
*(rcx_34 + 0x12) = 0
void var_90
int64_t result = sub_1405d1550(&var_90)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
