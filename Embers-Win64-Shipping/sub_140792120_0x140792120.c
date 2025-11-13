// 函数: sub_140792120
// 地址: 0x140792120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_6c = 0x80
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_68 = 0xffffffff
void var_d0
void var_b0
sub_140b2f3e0(&var_d0, sub_140596d10(&var_b0, arg3 + 8))
int16_t* var_f8 = nullptr
int64_t var_f0 = 0
sub_1405947f0(&var_f8, 0xd)
int32_t r14 = var_f0:4.d
int32_t rsi = var_f0.d + 0xd
var_f0.d = rsi

if (rsi s> r14)
    sub_140594770(&var_f8)
    r14 = var_f0:4.d
    rsi = var_f0.d

int16_t* rbx = var_f8
UnDecorator::getReferenceType(rbx, u"FunctionName", 0x1a)
int32_t var_e0
sub_140783a30(&var_98, &var_e0)
int64_t* var_d8
*var_d8 = rbx
var_d8[1].d = rsi
*(var_d8 + 0xc) = r14
sub_140b2f340(&var_d8[2], &var_d0)
var_d8[6].d = 0xffffffff
int16_t* const r12 = &data_142d40450
int32_t rax_3 = var_d8[1].d
int16_t* rdx_5

if (rax_3 == 0)
    rdx_5 = &data_142d40450
else
    rdx_5 = *var_d8

int32_t rcx_7 = rax_3 - 1

if (rax_3 == 0)
    rcx_7 = 0

void var_e8
sub_140754310(&var_98, &var_e8, sub_1405969c0(rcx_7, rdx_5), var_d8, var_e0, nullptr)
int64_t var_c0

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t rbx_1 = data_143ce0450

if (rbx_1 s> 1)
    int32_t rdi_1 = arg2[1].d
    int32_t rdi_2
    
    if (rdi_1 == 0)
        rdi_2 = 0
    else
        rdi_2 = rdi_1 - 1
    
    int32_t rax_5
    
    if (rbx_1 == 0)
        rax_5 = rbx_1 + 1
    
    if (rbx_1 != 0 || rdi_2 == 0)
        rax_5 = 0
    
    int64_t rsi_1 = data_143ce0448
    int32_t rcx_12 = rax_5 + rdi_2
    var_f8 = nullptr
    var_f0.d = rbx_1
    
    if (rbx_1 != 0 || rcx_12 != 0)
        sub_1405a4c70(&var_f8, rbx_1 + rcx_12, 0)
        memcpy(var_f8, rsi_1, rbx_1 * 2)
    else
        var_f0:4.d = 0
    
    sub_140a20ba0(&var_f8, *arg2, rdi_2)
    var_e0.q = var_f8
    var_d8.d = var_f0.d
    var_d8:4.d = var_f0:4.d
    int64_t var_f0_1 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e0, arg2)

sub_140b2f3e0(&var_d0, &var_e0)
var_f8 = nullptr
int16_t** var_f0_2 = nullptr
sub_1405947f0(&var_f8, 0x13)
int32_t r14_1 = var_f0_2:4.d
int32_t rsi_2 = var_f0_2.d + 0x13
var_f0_2.d = rsi_2

if (rsi_2 s> r14_1)
    sub_140594770(&var_f8)
    r14_1 = var_f0_2:4.d
    rsi_2 = var_f0_2.d

int16_t* rbx_2 = var_f8
UnDecorator::getReferenceType(rbx_2, u"OffsetFromSeedName", 0x26)
sub_140783a30(&var_98, &var_f8)
*var_f0_2 = rbx_2
var_f0_2[1].d = rsi_2
*(var_f0_2 + 0xc) = r14_1
sub_140b2f340(&var_f0_2[2], &var_d0)
var_f0_2[6].d = 0xffffffff
int32_t rax_9 = var_f0_2[1].d

if (rax_9 != 0)
    r12 = *var_f0_2

int32_t rcx_22 = rax_9 - 1

if (rax_9 == 0)
    rcx_22 = 0

sub_140754310(&var_98, &var_e8, sub_1405969c0(rcx_22, r12), var_f0_2, var_f8.d, nullptr)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int64_t* rax_11 = sub_140b3b600(&var_f8, data_14396eb80, &var_98)
int32_t rdx_18 = rax_11[1].d
int32_t r8_6 = rdx_18 - 1

if (rdx_18 == 0)
    r8_6 = 0

sub_140a20ba0(arg4, *rax_11, r8_6)
int16_t* rcx_28 = var_f8

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_1407464c0(&var_98)
void* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_128)
return result
