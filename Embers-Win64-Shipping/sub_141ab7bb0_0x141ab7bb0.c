// 函数: sub_141ab7bb0
// 地址: 0x141ab7bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = 0
int64_t var_80 = 0
sub_1405947f0(&var_88, 0x10)
int32_t r12 = var_80:4.d
int32_t rbx = var_80.d + 0x10
var_80.d = rbx

if (rbx s> r12)
    sub_140594770(&var_88)
    r12 = var_80:4.d
    rbx = var_80.d

int64_t r14 = var_88
int16_t var_98 = 0x3f
sub_1405a7220(r14, 0x10, " Snapshot Name:", 0x10, 0x3f)
int16_t* const rsi = &data_142d40450
int16_t* const r15

if (arg2[4].d == 0)
    r15 = &data_142d40450
else
    r15 = arg2[3]

int64_t arg_18 = *(sub_141ae2560() + 0x18)
int16_t* var_58
sub_140b63b70(&arg_18, &var_58)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
var_98.q = r15
int32_t var_50

if (var_50 != 0)
    rsi = var_58

_mm_cvtps_pd(zmm0)
int64_t var_78
sub_140a2e390(&var_78, u"%s<W:%.1f%%> %s", rsi)
int16_t* rcx_6 = var_58

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

int32_t r13_1 = 1
int32_t var_70
int64_t r15_1

if (var_70 s> 1)
    int32_t rbx_1
    
    if (rbx == 0)
        rbx_1 = 0
    else
        rbx_1 = rbx - 1
    
    int32_t rdx_2
    
    if (var_70 == 0)
        rdx_2 = 1
    
    if (var_70 != 0 || rbx_1 == 0)
        rdx_2 = 0
    
    var_88 = var_78
    int32_t rdx_4 = rdx_2 + var_70 + rbx_1
    var_78 = 0
    var_80.d = var_70
    int32_t var_6c
    var_80:4.d = var_6c
    var_70.q = 0
    
    if (rdx_4 s> var_6c)
        sub_1405947f0(&var_88, rdx_4)
    
    sub_140a20ba0(&var_88, r14, rbx_1)
    r15_1 = var_88
    rbx = var_80.d
    r12 = var_80:4.d
    var_88 = 0
    int64_t var_80_1 = 0
else
    r15_1 = r14
    r14 = 0

int64_t var_48
int64_t* rax_3 = sub_140b63b70(arg1 + 0x10, &var_48)
int64_t var_68
int32_t rbx_2
int64_t rsi_1

if (rbx s> 1)
    int32_t rax_4 = rax_3[1].d
    int32_t rsi_2 = rax_4 - 1
    
    if (rax_4 == 0)
        rsi_2 = 0
    
    if (rbx != 0 || rsi_2 == 0)
        r13_1 = 0
    
    var_68 = r15_1
    int32_t rdx_8 = rbx + r13_1 + rsi_2
    int32_t var_5c_1 = r12
    
    if (rdx_8 s> r12)
        sub_1405947f0(&var_68, rdx_8)
    
    sub_140a20ba0(&var_68, *rax_3, rsi_2)
    rbx_2 = rbx
    rsi_1 = var_68
else
    rsi_1 = *rax_3
    *rax_3 = 0
    rbx_2 = rax_3[1].d
    rax_3[1] = 0
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)

int64_t rcx_16 = var_78

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

if (r14 != 0)
    sub_140a74f90(r14)

var_68 = 0
int32_t var_60_2 = rbx_2

if (rbx_2 != 0)
    sub_1405a4c70(&var_68, rbx_2, 0)
    memcpy(var_68, rsi_1, rbx_2 * 2)
else
    int32_t var_5c_2 = 0

int64_t result = sub_141e14220(arg2, &var_68, 1)

if (rsi_1 == 0)
    return result

return sub_140a74f90(rsi_1)
