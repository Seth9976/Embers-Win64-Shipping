// 函数: sub_1407a81b0
// 地址: 0x1407a81b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rbx = data_143ce0450
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int64_t var_d8
int64_t var_c8

if (rbx s> 1)
    int32_t rdi_1 = arg2[1].d
    int32_t rdi_2
    
    if (rdi_1 == 0)
        rdi_2 = 0
    else
        rdi_2 = rdi_1 - 1
    
    int32_t rax_2
    
    if (rbx == 0)
        rax_2 = rbx + 1
    
    if (rbx != 0 || rdi_2 == 0)
        rax_2 = 0
    
    int64_t r14_1 = data_143ce0448
    int32_t rcx_1 = rax_2 + rdi_2
    var_d8 = 0
    int64_t var_d0
    var_d0.d = rbx
    
    if (rbx != 0 || rcx_1 != 0)
        sub_1405a4c70(&var_d8, rbx + rcx_1, 0)
        memcpy(var_d8, r14_1, rbx * 2)
    else
        var_d0:4.d = 0
    
    sub_140a20ba0(&var_d8, *arg2, rdi_2)
    var_c8 = var_d8
    int32_t var_c0_1 = var_d0.d
    int32_t var_bc_1 = var_d0:4.d
    int64_t var_d0_1 = 0
    var_d8 = 0
else
    sub_140596d10(&var_c8, arg2)

void var_b0
sub_140b2f3e0(&var_b0, &var_c8)
var_d8 = 0
int64_t* var_d0_2 = nullptr
sub_1405947f0(&var_d8, 0x13)
int32_t r14_2 = var_d0_2:4.d
int32_t rsi_1 = var_d0_2.d + 0x13
var_d0_2.d = rsi_1

if (rsi_1 s> r14_2)
    sub_140594770(&var_d8)
    r14_2 = var_d0_2:4.d
    rsi_1 = var_d0_2.d

int64_t rbx_1 = var_d8
UnDecorator::getReferenceType(rbx_1, u"OffsetFromSeedName", 0x26)
sub_140783a30(&var_88, &var_d8)
*var_d0_2 = rbx_1
var_d0_2[1].d = rsi_1
*(var_d0_2 + 0xc) = r14_2
sub_140b2f340(&var_d0_2[2], &var_b0)
var_d0_2[6].d = 0xffffffff
int32_t rax_6 = var_d0_2[1].d
int16_t* rdx_7

if (rax_6 == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *var_d0_2

int32_t rcx_11 = rax_6 - 1

if (rax_6 == 0)
    rcx_11 = 0

void var_b8
sub_140754310(&var_88, &var_b8, sub_1405969c0(rcx_11, rdx_7), var_d0_2, var_d8.d, nullptr)
int64_t var_a0

if (var_a0 != 0)
    sub_140a74f90(var_a0)

int64_t* rax_8 = sub_140b3b600(&var_d8, data_14396eb88, &var_88)
int32_t rdx_10 = rax_8[1].d
int32_t r8_5 = rdx_10 - 1

if (rdx_10 == 0)
    r8_5 = 0

sub_140a20ba0(arg3, *rax_8, r8_5)
int64_t rcx_17 = var_d8

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

void* result = sub_1407464c0(&var_88)
__security_check_cookie(rax_1 ^ &var_108)
return result
