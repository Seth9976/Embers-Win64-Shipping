// 函数: sub_141aed310
// 地址: 0x141aed310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t var_138 = 0
void var_118
sub_1405bb0c0(arg3, &var_118, arg2)
void* rax_2 = sub_1405bdd80(&var_118)
int64_t var_f0
int64_t rax_3
int64_t* rax_4

if (rax_2 != 0)
    rax_3 = sx.q(*(rax_2 + 0x4c))
    rax_4 = rax_3 + var_f0

uint64_t var_148
uint64_t var_130
uint64_t* rax_5
uint64_t rbx
int32_t rdi_1

if (rax_2 == 0 || rax_3 == neg.q(var_f0))
    int32_t var_128_1 = 0
    rax_5 = &var_130
    rdi_1 = 2
    rbx = 0
else
    int32_t rdi = rax_4[1].d
    rbx = 0
    int64_t rsi_1 = *rax_4
    var_148 = 0
    int32_t var_140_1 = rdi
    
    if (rdi != 0)
        sub_1405a4c70(&var_148, rdi, 0)
        rbx = var_148
        memcpy(rbx, rsi_1, rdi * 2)
        rax_5 = &var_148
        rdi_1 = 1
    else
        int32_t var_13c_1 = 0
        rax_5 = &var_148
        rdi_1 = 1

*rax_5 = 0
int32_t rsi_2 = rax_5[1].d
rax_5[1] = 0

if ((rdi_1.b & 2) != 0)
    uint64_t rcx_4 = var_130
    rdi_1 &= 0xfffffffd
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

if ((rdi_1.b & 1) != 0)
    uint64_t rcx_5 = var_148
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int64_t var_100

if (var_100 != 0)
    sub_140a74f90(var_100)

uint64_t var_d0 = 0
void** const var_d8 = &data_14305db40
int32_t var_c4

if (rsi_2 != 0)
    sub_1405a4c70(&var_d0, rsi_2, 0)
    memcpy(var_d0, rbx, rsi_2 * 2)
else
    var_c4 = 0

int64_t var_c0
sub_1405ac3f0(&var_c0, arg3)
arg1[4].b &= 0xfc
void*** rax_6 = sub_140a82f30(0x90, 8)
arg1[4].b |= 1
bool cond:0 = (arg1[4].b & 2) != 0
void*** rcx_10 = rax_6
*arg1 = rax_6

if (cond:0)
    rcx_10 = arg1

*rcx_10 = &data_14305db40
rcx_10[1] = 0
rcx_10[1] = var_d0
var_d0 = 0
rcx_10[2].d = rsi_2
*(rcx_10 + 0x14) = var_c4
int32_t var_c8
var_c8.q = 0
sub_1405ac2f0(&rcx_10[3], &var_c0)
int64_t var_70

if (var_70 != 0)
    sub_140a74f90(var_70)

int32_t var_78 = 0
int64_t var_80

if (var_80 != 0)
    sub_140a74f90(var_80)

sub_1405b8a50(&var_c0, 0)
int64_t var_a0

if (var_a0 != 0)
    sub_140a74f90(var_a0)

int64_t rcx_16 = var_c0

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

uint64_t rcx_17 = var_d0

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

void** const var_d8_1 = &data_142d4ba00

if (rbx != 0)
    sub_140a74f90(rbx)

__security_check_cookie(rax_1 ^ &var_168)
return arg1
