// 函数: sub_14075d580
// 地址: 0x14075d580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t var_128 = 0
int32_t var_120 = 0
sub_1405947f0(&var_128, 0x10)
int32_t rax_2 = var_120 + 0x10
var_120 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_128)

UnDecorator::getReferenceType(var_128, u"AudioBufferName", 0x20)
int32_t rbx = (data_143cdfdc8.q).d
int32_t r14 = 1
int64_t** var_148
int32_t var_140
int32_t var_13c
int64_t** var_118

if (rbx s> 1)
    int32_t rax_3 = arg2[1].d
    int32_t rdi_1 = rax_3 - 1
    
    if (rax_3 == 0)
        rdi_1 = 0
    
    int32_t rax_4
    
    if (rbx == 0)
        rax_4 = 1
    
    if (rbx != 0 || rdi_1 == 0)
        rax_4 = 0
    
    int64_t r15_1 = data_143cdfdc0
    int32_t rcx_4 = rax_4 + rdi_1
    var_148 = nullptr
    
    if (rbx != 0 || rcx_4 != 0)
        sub_1405a4c70(&var_148, rbx + rcx_4, 0)
        memcpy(var_148, r15_1, rbx * 2)
    else
        var_13c = 0
    
    sub_140a20ba0(&var_148, *arg2, rdi_1)
    var_118 = var_148
    int32_t var_110_1 = rbx
    int32_t var_10c_1 = var_13c
    var_140.q = 0
    var_148 = nullptr
else
    sub_140596d10(&var_118, arg2)

void var_b8
int32_t* var_f0 = sub_140b2f3e0(&var_b8, &var_118)
int64_t* var_f8 = &var_128
int64_t var_138 = 0
int32_t var_130 = 0
sub_1405947f0(&var_138, 0x10)
int32_t rax_9 = var_130 + 0x10
var_130 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_138)

UnDecorator::getReferenceType(var_138, u"NumChannelsName", 0x20)
int32_t rbx_1 = (data_143cdfdd8.q).d
int64_t** var_108

if (rbx_1 s> 1)
    int32_t rax_10 = arg2[1].d
    int32_t rdi_2 = rax_10 - 1
    
    if (rax_10 == 0)
        rdi_2 = 0
    
    if (rbx_1 != 0 || rdi_2 == 0)
        r14 = 0
    
    var_148 = nullptr
    int32_t rax_11 = r14 + rdi_2
    int64_t r14_1 = data_143cdfdd0
    
    if (rbx_1 != 0 || rax_11 != 0)
        sub_1405a4c70(&var_148, rax_11 + rbx_1, 0)
        memcpy(var_148, r14_1, rbx_1 * 2)
    else
        var_13c = 0
    
    sub_140a20ba0(&var_148, *arg2, rdi_2)
    var_108 = var_148
    int32_t var_100_1 = rbx_1
    int32_t var_fc_1 = var_13c
    var_140.q = 0
    var_148 = nullptr
else
    sub_140596d10(&var_108, arg2)

void var_d8
int32_t* var_e0 = sub_140b2f3e0(&var_d8, &var_108)
int64_t* var_e8 = &var_138
var_148 = &var_f8
var_140.q = &var_d8
var_148.o = var_148.o
void var_98
sub_140742130(&var_98, &var_148)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_19 = var_138

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

int64_t rcx_21 = var_128

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t* rax_16 = sub_140b3b600(&var_148, data_14396eb30, &var_98)
int32_t rdx_14 = rax_16[1].d
int32_t r8_7 = rdx_14 - 1

if (rdx_14 == 0)
    r8_7 = 0

sub_140a20ba0(arg3, *rax_16, r8_7)
int64_t** rcx_24 = var_148

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int32_t var_50 = 0
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

void* result = sub_1407464c0(&var_98)
__security_check_cookie(rax_1 ^ &var_168)
return result
