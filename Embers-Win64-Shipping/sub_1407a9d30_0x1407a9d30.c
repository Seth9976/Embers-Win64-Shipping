// 函数: sub_1407a9d30
// 地址: 0x1407a9d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
sub_1407a9870(arg1, arg2, arg3)
int32_t rsi = (data_143ce04e8.q).d
int32_t r14 = 1
int64_t** var_238
int32_t var_230
int32_t var_22c
int64_t** var_1d8

if (rsi s> 1)
    int32_t rax_2 = arg2[1].d
    int32_t rdi_1 = rax_2 - 1
    
    if (rax_2 == 0)
        rdi_1 = 0
    
    int32_t rax_3
    
    if (rsi == 0)
        rax_3 = 1
    
    if (rsi != 0 || rdi_1 == 0)
        rax_3 = 0
    
    int64_t r15_1 = data_143ce04e0
    int32_t rcx_1 = rdi_1 + rax_3
    var_238 = nullptr
    
    if (rsi != 0 || rcx_1 != 0)
        sub_1405a4c70(&var_238, rcx_1 + rsi, 0)
        memcpy(var_238, r15_1, rsi * 2)
    else
        var_22c = 0
    
    sub_140a20ba0(&var_238, *arg2, rdi_1)
    var_1d8 = var_238
    int32_t var_1d0_1 = rsi
    int32_t var_1cc_1 = var_22c
    var_230.q = 0
    var_238 = nullptr
else
    sub_140596d10(&var_1d8, arg2)

void var_108
sub_140b2f3e0(&var_108, &var_1d8)
int64_t var_1e8 = 0
int32_t var_1e0 = 0
sub_1405947f0(&var_1e8, 0x19)
int32_t rax_7 = var_1e0 + 0x19
var_1e0 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_1e8)

UnDecorator::getReferenceType(var_1e8, u"MaxNeighborsPerVoxelName", 0x32)
int32_t rsi_1 = (data_143ce04f8.q).d
int64_t* var_e8 = &var_1e8
void* var_e0 = &var_108
int64_t** var_1c8

if (rsi_1 s> 1)
    int32_t rax_8 = arg2[1].d
    int32_t rdi_2 = rax_8 - 1
    
    if (rax_8 == 0)
        rdi_2 = 0
    
    int32_t rax_9
    
    if (rsi_1 == 0)
        rax_9 = 1
    
    if (rsi_1 != 0 || rdi_2 == 0)
        rax_9 = 0
    
    int64_t r15_2 = data_143ce04f0
    int32_t rcx_10 = rdi_2 + rax_9
    var_238 = nullptr
    
    if (rsi_1 != 0 || rcx_10 != 0)
        sub_1405a4c70(&var_238, rcx_10 + rsi_1, 0)
        memcpy(var_238, r15_2, rsi_1 * 2)
    else
        var_22c = 0
    
    sub_140a20ba0(&var_238, *arg2, rdi_2)
    var_1c8 = var_238
    int32_t var_1c0_1 = rsi_1
    int32_t var_1bc_1 = var_22c
    var_230.q = 0
    var_238 = nullptr
else
    sub_140596d10(&var_1c8, arg2)

void var_128
sub_140b2f3e0(&var_128, &var_1c8)
int64_t var_1f8 = 0
int32_t var_1f0 = 0
sub_1405947f0(&var_1f8, 0x16)
int32_t rax_13 = var_1f0 + 0x16
var_1f0 = rax_13

if (rax_13 s> 0)
    sub_140594770(&var_1f8)

UnDecorator::getReferenceType(var_1f8, u"ParticleNeighborsName", 0x2c)
int32_t rsi_2 = (data_143ce0508.q).d
int64_t* var_d8 = &var_1f8
void* var_d0 = &var_128
int64_t** var_1b8

if (rsi_2 s> 1)
    int32_t rax_14 = arg2[1].d
    int32_t rdi_3 = rax_14 - 1
    
    if (rax_14 == 0)
        rdi_3 = 0
    
    int32_t rax_15
    
    if (rsi_2 == 0)
        rax_15 = 1
    
    if (rsi_2 != 0 || rdi_3 == 0)
        rax_15 = 0
    
    int64_t r15_3 = data_143ce0500
    int32_t rcx_19 = rax_15 + rdi_3
    var_238 = nullptr
    
    if (rsi_2 != 0 || rcx_19 != 0)
        sub_1405a4c70(&var_238, rcx_19 + rsi_2, 0)
        memcpy(var_238, r15_3, rsi_2 * 2)
    else
        var_22c = 0
    
    sub_140a20ba0(&var_238, *arg2, rdi_3)
    var_1b8 = var_238
    int32_t var_1b0_1 = rsi_2
    int32_t var_1ac_1 = var_22c
    var_230.q = 0
    var_238 = nullptr
else
    sub_140596d10(&var_1b8, arg2)

void var_148
sub_140b2f3e0(&var_148, &var_1b8)
int64_t var_208 = 0
int32_t var_200 = 0
sub_1405947f0(&var_208, 0x1a)
int32_t rax_19 = var_200 + 0x1a
var_200 = rax_19

if (rax_19 s> 0)
    sub_140594770(&var_208)

UnDecorator::getReferenceType(var_208, u"ParticleNeighborCountName", 0x34)
int32_t rsi_3 = (data_143ce0518.q).d
int64_t* var_c8 = &var_208
void* var_c0 = &var_148
int64_t** var_1a8

if (rsi_3 s> 1)
    int32_t rax_20 = arg2[1].d
    int32_t rdi_4 = rax_20 - 1
    
    if (rax_20 == 0)
        rdi_4 = 0
    
    int32_t rax_21
    
    if (rsi_3 == 0)
        rax_21 = 1
    
    if (rsi_3 != 0 || rdi_4 == 0)
        rax_21 = 0
    
    int64_t r15_4 = data_143ce0510
    int32_t rcx_28 = rax_21 + rdi_4
    var_238 = nullptr
    
    if (rsi_3 != 0 || rcx_28 != 0)
        sub_1405a4c70(&var_238, rcx_28 + rsi_3, 0)
        memcpy(var_238, r15_4, rsi_3 * 2)
    else
        var_22c = 0
    
    sub_140a20ba0(&var_238, *arg2, rdi_4)
    var_1a8 = var_238
    int32_t var_1a0_1 = rsi_3
    int32_t var_19c_1 = var_22c
    var_230.q = 0
    var_238 = nullptr
else
    sub_140596d10(&var_1a8, arg2)

void var_168
sub_140b2f3e0(&var_168, &var_1a8)
int64_t var_218 = 0
int32_t var_210 = 0
sub_1405947f0(&var_218, 0x1c)
int32_t rax_25 = var_210 + 0x1c
var_210 = rax_25

if (rax_25 s> 0)
    sub_140594770(&var_218)

UnDecorator::getReferenceType(var_218, u"OutputParticleNeighborsName", 0x38)
int32_t rsi_4 = (data_143ce0528.q).d
int64_t* var_b8 = &var_218
void* var_b0 = &var_168
int64_t** var_198

if (rsi_4 s> 1)
    int32_t rax_26 = arg2[1].d
    int32_t rdi_5 = rax_26 - 1
    
    if (rax_26 == 0)
        rdi_5 = 0
    
    if (rsi_4 != 0 || rdi_5 == 0)
        r14 = 0
    
    var_238 = nullptr
    int32_t rax_27 = rdi_5 + r14
    int64_t r14_1 = data_143ce0520
    
    if (rsi_4 != 0 || rax_27 != 0)
        sub_1405a4c70(&var_238, rsi_4 + rax_27, 0)
        memcpy(var_238, r14_1, rsi_4 * 2)
    else
        var_22c = 0
    
    sub_140a20ba0(&var_238, *arg2, rdi_5)
    var_198 = var_238
    int32_t var_190_1 = rsi_4
    int32_t var_18c_1 = var_22c
    var_230.q = 0
    var_238 = nullptr
else
    sub_140596d10(&var_198, arg2)

void var_188
sub_140b2f3e0(&var_188, &var_198)
int64_t var_228 = 0
int32_t var_220 = 0
sub_1405947f0(&var_228, 0x20)
int32_t rax_31 = var_220 + 0x20
var_220 = rax_31

if (rax_31 s> 0)
    sub_140594770(&var_228)

UnDecorator::getReferenceType(var_228, u"OutputParticleNeighborCountName", 0x40)
int64_t* var_a8 = &var_228
void* var_a0 = &var_188
var_238 = &var_e8
void var_98
var_230.q = &var_98
var_238.o = var_238.o
sub_140742130(&var_98, &var_238)
int64_t rcx_45 = var_228

if (rcx_45 != 0)
    sub_140a74f90(rcx_45)

int64_t var_178

if (var_178 != 0)
    sub_140a74f90(var_178)

int64_t rcx_47 = var_218

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

int64_t var_158

if (var_158 != 0)
    sub_140a74f90(var_158)

int64_t rcx_49 = var_208

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

int64_t var_138

if (var_138 != 0)
    sub_140a74f90(var_138)

int64_t rcx_51 = var_1f8

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int64_t rcx_53 = var_1e8

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

int64_t var_f8

if (var_f8 != 0)
    sub_140a74f90(var_f8)

int64_t* rax_32 = sub_140b3b600(&var_238, data_14396ebb0, &var_98)
int32_t rdx_32 = rax_32[1].d
int32_t r8_16 = rdx_32 - 1

if (rdx_32 == 0)
    r8_16 = 0

sub_140a20ba0(arg3, *rax_32, r8_16)
int64_t** rcx_57 = var_238

if (rcx_57 != 0)
    sub_140a74f90(rcx_57)

int32_t var_50 = 0
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

void* result = sub_1407464c0(&var_98)
__security_check_cookie(rax_1 ^ &var_258)
return result
