// 函数: sub_14075d910
// 地址: 0x14075d910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t var_168 = 0
int32_t var_160 = 0
sub_1405947f0(&var_168, 0x10)
int32_t rax_2 = var_160 + 0x10
var_160 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_168)

UnDecorator::getReferenceType(var_168, u"GetSpectrumName", 0x20)
int32_t rdi = (data_143cdfdf8.q).d
int32_t r14 = 1
int64_t** var_198
int32_t var_190
int32_t var_18c
int64_t** var_158

if (rdi s> 1)
    int32_t rax_3 = arg2[1].d
    int32_t rsi_1 = rax_3 - 1
    
    if (rax_3 == 0)
        rsi_1 = 0
    
    int32_t rax_4
    
    if (rdi == 0)
        rax_4 = 1
    
    if (rdi != 0 || rsi_1 == 0)
        rax_4 = 0
    
    int64_t r15_1 = data_143cdfdf0
    int32_t rcx_4 = rsi_1 + rax_4
    var_198 = nullptr
    
    if (rdi != 0 || rcx_4 != 0)
        sub_1405a4c70(&var_198, rcx_4 + rdi, 0)
        memcpy(var_198, r15_1, rdi * 2)
    else
        var_18c = 0
    
    sub_140a20ba0(&var_198, *arg2, rsi_1)
    var_158 = var_198
    int32_t var_150_1 = rdi
    int32_t var_14c_1 = var_18c
    var_190.q = 0
    var_198 = nullptr
else
    sub_140596d10(&var_158, arg2)

void var_e8
int32_t* var_c0 = sub_140b2f3e0(&var_e8, &var_158)
int64_t* var_c8 = &var_168
int64_t var_178 = 0
int32_t var_170 = 0
sub_1405947f0(&var_178, 0x10)
int32_t rax_9 = var_170 + 0x10
var_170 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_178)

UnDecorator::getReferenceType(var_178, u"NumChannelsName", 0x20)
int32_t rdi_1 = (data_143cdfe08.q).d
int64_t** var_148

if (rdi_1 s> 1)
    int32_t rax_10 = arg2[1].d
    int32_t rsi_2 = rax_10 - 1
    
    if (rax_10 == 0)
        rsi_2 = 0
    
    int32_t rax_11
    
    if (rdi_1 == 0)
        rax_11 = 1
    
    if (rdi_1 != 0 || rsi_2 == 0)
        rax_11 = 0
    
    int64_t r15_2 = data_143cdfe00
    int32_t rcx_13 = rsi_2 + rax_11
    var_198 = nullptr
    
    if (rdi_1 != 0 || rcx_13 != 0)
        sub_1405a4c70(&var_198, rcx_13 + rdi_1, 0)
        memcpy(var_198, r15_2, rdi_1 * 2)
    else
        var_18c = 0
    
    sub_140a20ba0(&var_198, *arg2, rsi_2)
    var_148 = var_198
    int32_t var_140_1 = rdi_1
    int32_t var_13c_1 = var_18c
    var_190.q = 0
    var_198 = nullptr
else
    sub_140596d10(&var_148, arg2)

void var_108
int32_t* var_b0 = sub_140b2f3e0(&var_108, &var_148)
int64_t* var_b8 = &var_178
int64_t var_188 = 0
int32_t var_180 = 0
sub_1405947f0(&var_188, 0xf)
int32_t rax_16 = var_180 + 0xf
var_180 = rax_16

if (rax_16 s> 0)
    sub_140594770(&var_188)

UnDecorator::getReferenceType(var_188, u"ResolutionName", 0x1e)
int32_t rdi_2 = (data_143cdfe18.q).d
int64_t** var_138

if (rdi_2 s> 1)
    int32_t rax_17 = arg2[1].d
    int32_t rsi_3 = rax_17 - 1
    
    if (rax_17 == 0)
        rsi_3 = 0
    
    if (rdi_2 != 0 || rsi_3 == 0)
        r14 = 0
    
    var_198 = nullptr
    int32_t rax_18 = r14 + rsi_3
    int64_t r14_1 = data_143cdfe10
    
    if (rdi_2 != 0 || rax_18 != 0)
        sub_1405a4c70(&var_198, rdi_2 + rax_18, 0)
        memcpy(var_198, r14_1, rdi_2 * 2)
    else
        var_18c = 0
    
    sub_140a20ba0(&var_198, *arg2, rsi_3)
    var_138 = var_198
    int32_t var_130_1 = rdi_2
    int32_t var_12c_1 = var_18c
    var_190.q = 0
    var_198 = nullptr
else
    sub_140596d10(&var_138, arg2)

void var_128
int32_t* var_a0 = sub_140b2f3e0(&var_128, &var_138)
int64_t* var_a8 = &var_188
var_198 = &var_c8
void var_98
var_190.q = &var_98
var_198.o = var_198.o
sub_140742130(&var_98, &var_198)
int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int64_t rcx_28 = var_188

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t var_f8

if (var_f8 != 0)
    sub_140a74f90(var_f8)

int64_t rcx_30 = var_178

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

int64_t var_d8

if (var_d8 != 0)
    sub_140a74f90(var_d8)

int64_t rcx_32 = var_168

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int64_t* rax_23 = sub_140b3b600(&var_198, data_14396eb48, &var_98)
int32_t rdx_20 = rax_23[1].d
int32_t r8_10 = rdx_20 - 1

if (rdx_20 == 0)
    r8_10 = 0

sub_140a20ba0(arg3, *rax_23, r8_10)
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
