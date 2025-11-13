// 函数: sub_1407a9870
// 地址: 0x1407a9870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t rsi = (data_143ce06d8.q).d
int32_t r14 = 1
int64_t** var_198
int32_t var_190
int32_t var_18c
int64_t** var_158

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
    
    int64_t r15_1 = data_143ce06d0
    int32_t rcx_1 = rdi_1 + rax_3
    var_198 = nullptr
    
    if (rsi != 0 || rcx_1 != 0)
        sub_1405a4c70(&var_198, rsi + rcx_1, 0)
        memcpy(var_198, r15_1, rsi * 2)
    else
        var_18c = 0
    
    sub_140a20ba0(&var_198, *arg2, rdi_1)
    var_158 = var_198
    int32_t var_150_1 = rsi
    int32_t var_14c_1 = var_18c
    var_190.q = 0
    var_198 = nullptr
else
    sub_140596d10(&var_158, arg2)

void var_e8
sub_140b2f3e0(&var_e8, &var_158)
int64_t var_168 = 0
int32_t var_160 = 0
sub_1405947f0(&var_168, 0xe)
int32_t rax_7 = var_160 + 0xe
var_160 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_168)

UnDecorator::getReferenceType(var_168, u"NumVoxelsName", 0x1c)
int32_t rsi_1 = (data_143ce06e8.q).d
int64_t* var_c8 = &var_168
void* var_c0 = &var_e8
int64_t** var_148

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
    
    int64_t r15_2 = data_143ce06e0
    int32_t rcx_10 = rdi_2 + rax_9
    var_198 = nullptr
    
    if (rsi_1 != 0 || rcx_10 != 0)
        sub_1405a4c70(&var_198, rsi_1 + rcx_10, 0)
        memcpy(var_198, r15_2, rsi_1 * 2)
    else
        var_18c = 0
    
    sub_140a20ba0(&var_198, *arg2, rdi_2)
    var_148 = var_198
    int32_t var_140_1 = rsi_1
    int32_t var_13c_1 = var_18c
    var_190.q = 0
    var_198 = nullptr
else
    sub_140596d10(&var_148, arg2)

void var_108
sub_140b2f3e0(&var_108, &var_148)
int64_t var_178 = 0
int32_t var_170 = 0
sub_1405947f0(&var_178, 0xe)
int32_t rax_13 = var_170 + 0xe
var_170 = rax_13

if (rax_13 s> 0)
    sub_140594770(&var_178)

UnDecorator::getReferenceType(var_178, u"VoxelSizeName", 0x1c)
int32_t rsi_2 = (data_143ce06f8.q).d
int64_t* var_b8 = &var_178
void* var_b0 = &var_108
int64_t** var_138

if (rsi_2 s> 1)
    int32_t rax_14 = arg2[1].d
    int32_t rdi_3 = rax_14 - 1
    
    if (rax_14 == 0)
        rdi_3 = 0
    
    if (rsi_2 != 0 || rdi_3 == 0)
        r14 = 0
    
    var_198 = nullptr
    int32_t rax_15 = r14 + rdi_3
    int64_t r14_1 = data_143ce06f0
    
    if (rsi_2 != 0 || rax_15 != 0)
        sub_1405a4c70(&var_198, rax_15 + rsi_2, 0)
        memcpy(var_198, r14_1, rsi_2 * 2)
    else
        var_18c = 0
    
    sub_140a20ba0(&var_198, *arg2, rdi_3)
    var_138 = var_198
    int32_t var_130_1 = rsi_2
    int32_t var_12c_1 = var_18c
    var_190.q = 0
    var_198 = nullptr
else
    sub_140596d10(&var_138, arg2)

void var_128
sub_140b2f3e0(&var_128, &var_138)
int64_t var_188 = 0
int32_t var_180 = 0
sub_1405947f0(&var_188, 0x12)
int32_t rax_19 = var_180 + 0x12
var_180 = rax_19

if (rax_19 s> 0)
    sub_140594770(&var_188)

UnDecorator::getReferenceType(var_188, u"WorldBBoxSizeName", 0x24)
int64_t* var_a8 = &var_188
void* var_a0 = &var_128
var_198 = &var_c8
void var_98
var_190.q = &var_98
var_198.o = var_198.o
sub_140742130(&var_98, &var_198)
int64_t rcx_27 = var_188

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int64_t rcx_29 = var_178

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

int64_t var_f8

if (var_f8 != 0)
    sub_140a74f90(var_f8)

int64_t rcx_31 = var_168

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t var_d8

if (var_d8 != 0)
    sub_140a74f90(var_d8)

int64_t* rax_20 = sub_140b3b600(&var_198, data_14396ec50, &var_98)
int32_t rdx_19 = rax_20[1].d
int32_t r8_10 = rdx_19 - 1

if (rdx_19 == 0)
    r8_10 = 0

sub_140a20ba0(arg3, *rax_20, r8_10)
int64_t** rcx_35 = var_198

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

int32_t var_50 = 0
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

void* result = sub_1407464c0(&var_98)
__security_check_cookie(rax_1 ^ &var_1b8)
return result
