// 函数: sub_1406ce990
// 地址: 0x1406ce990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_1d8
uint64_t* arg_8 = &var_1d8
var_1d8 = 0
int32_t rbx = arg2[1].d
int64_t r14 = *arg2

if (rbx != 0)
    sub_1405a4c70(&var_1d8, rbx, 0)
    memcpy(var_1d8, r14, rbx * 2)
else
    int32_t var_1cc_1 = 0

uint64_t var_1e8
arg_8 = &var_1e8
var_1e8 = 0
int32_t rbx_1 = arg1[1].d
int64_t rsi_1 = *arg1

if (rbx_1 != 0)
    sub_1405a4c70(&var_1e8, rbx_1, 0)
    memcpy(var_1e8, rsi_1, rbx_1 * 2)
else
    int32_t var_1dc_1 = 0

int64_t var_1f8 = 0
int32_t var_1f0 = 0
sub_1405947f0(&var_1f8, 7)
int32_t rbx_2 = var_1f0 + 7

if (rbx_2 s> 0)
    sub_140594770(&var_1f8)

int64_t r15 = var_1f8
UnDecorator::getReferenceType(r15, u".style", 0xe)
int16_t* const rsi_2 = &data_142d40450
int16_t* const rax = &data_142d40450

if (rbx != 0)
    rax = var_1d8

arg_8 = rax
int64_t var_1b8
sub_1406b35b0(&var_1b8, &data_143cdf120, &arg_8)
int32_t r8_5 = rbx_2 - 1

if (rbx_2 == 0)
    r8_5 = 0

sub_140a20ba0(&var_1e8, r15, r8_5)
uint64_t rax_1 = &data_142d40450

if (rbx_1 != 0)
    rax_1 = var_1e8

arg_8 = rax_1
int16_t* var_1c8
sub_1406b35b0(&var_1c8, &var_1b8, &arg_8)
uint64_t var_208
arg_8 = &var_208
int32_t var_1c0

if (var_1c0 != 0)
    rsi_2 = var_1c8

var_208 = 0
int32_t var_200 = 0
int32_t rcx_10 = 0
int32_t var_1fc = 0

if (rsi_2 != 0 && *rsi_2 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (rsi_2[rbx_3] != 0)
    
    int32_t rdx_7 = 0
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_208, rbx_3.d + 1)
        rdx_7 = var_200
        rcx_10 = var_1fc
    
    int32_t rax_2 = rdx_7 + rbx_3.d + 1
    int32_t var_200_1 = rax_2
    
    if (rax_2 s> rcx_10)
        sub_140594770(&var_208)
    
    UnDecorator::getReferenceType(var_208, rsi_2, (rbx_3.d + 1) * 2)

int128_t var_1a8
int128_t* rax_3 = sub_1406ce7a0(&var_1a8, &var_208, arg4)

if (arg3 != rax_3)
    int64_t rcx_15 = *arg3
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    *arg3 = *rax_3
    *rax_3 = 0
    arg3[1].d = *(rax_3 + 8)
    *(arg3 + 0xc) = *(rax_3 + 0xc)
    *(rax_3 + 8) = 0

if (&arg3[2] != &rax_3[1])
    int64_t rcx_17 = arg3[2]
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    arg3[2] = rax_3[1].q
    rax_3[1].q = 0
    arg3[3].d = *(rax_3 + 0x18)
    *(arg3 + 0x1c) = *(rax_3 + 0x1c)
    *(rax_3 + 0x18) = 0

if (&arg3[4] != &rax_3[2])
    int64_t rcx_18 = arg3[4]
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    arg3[4] = rax_3[2].q
    rax_3[2].q = 0
    arg3[5].d = *(rax_3 + 0x28)
    *(arg3 + 0x2c) = *(rax_3 + 0x2c)
    *(rax_3 + 0x28) = 0

arg3[6].d = rax_3[3].d
*(arg3 + 0x34) = *(rax_3 + 0x34)
arg3[7].d = *(rax_3 + 0x38)
*(arg3 + 0x3c) = *(rax_3 + 0x3c)
arg3[8].d = rax_3[4].d
*(arg3 + 0x44) = *(rax_3 + 0x44)
arg3[9].b = *(rax_3 + 0x48)

if (&arg3[0xa] != &rax_3[5])
    int64_t rcx_19 = arg3[0xa]
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    arg3[0xa] = rax_3[5].q
    rax_3[5].q = 0
    arg3[0xb].d = *(rax_3 + 0x58)
    *(arg3 + 0x5c) = *(rax_3 + 0x5c)
    *(rax_3 + 0x58) = 0

arg3[0xc].d = rax_3[6].d
*(arg3 + 0x64) = *(rax_3 + 0x64)
arg3[0xd].d = *(rax_3 + 0x68)
char* result = sub_1406cb360(&arg3[0xe], &rax_3[7])
int64_t var_b0

if (var_b0 != 0)
    result = sub_140a74f90(var_b0)

int64_t var_e0

if (var_e0 != 0)
    result = sub_140a74f90(var_e0)

int64_t var_f8

if (var_f8 != 0)
    result = sub_140a74f90(var_f8)

int64_t var_158

if (var_158 != 0)
    result = sub_140a74f90(var_158)

int64_t var_188

if (var_188 != 0)
    result = sub_140a74f90(var_188)

int64_t var_198

if (var_198 != 0)
    result = sub_140a74f90(var_198)

int64_t rcx_27 = var_1a8.q

if (rcx_27 != 0)
    result = sub_140a74f90(rcx_27)

int16_t* rcx_28 = var_1c8

if (rcx_28 != 0)
    result = sub_140a74f90(rcx_28)

int64_t rcx_29 = var_1b8

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

if (r15 != 0)
    result = sub_140a74f90(r15)

uint64_t rcx_31 = var_1e8

if (rcx_31 != 0)
    result = sub_140a74f90(rcx_31)

uint64_t rcx_32 = var_1d8

if (rcx_32 == 0)
    return result

return sub_140a74f90(rcx_32)
