// 函数: sub_141e58ef0
// 地址: 0x141e58ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
void arg_20
sub_141e62af0(arg1, &arg_20)
int16_t* const rdi = &data_142d40450

if (arg1[4].b != 0)
    rdi = u"Permanent, "

int16_t* rsi = nullptr
int32_t r14 = 0
int16_t* var_78 = nullptr
int32_t rax = 0
int64_t var_70 = 0

if (*rdi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_78, rbx_1.d + 1)
        rax = var_70:4.d
        r14 = var_70.d
        rsi = var_78
    
    r14 += rbx_1.d + 1
    var_70.d = r14
    
    if (r14 s> rax)
        sub_140594770(&var_78)
        rsi = var_78
    
    UnDecorator::getReferenceType(rsi, rdi, (rbx_1.d + 1) * 2)

int16_t* var_68
sub_141e5ef30(arg1, &var_68)
int64_t var_58
int16_t** rax_1
int32_t rbx_4

if (arg3 == 0)
    rax_1 = sub_140b19c30(&var_58, &arg1[2], 0)
    rbx_4 = 2
else
    int32_t rbx_3 = arg1[3].d
    int64_t r15_1 = arg1[2]
    var_78 = nullptr
    var_70.d = rbx_3
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_78, rbx_3, 0)
        memcpy(var_78, r15_1, rbx_3 * 2)
        rax_1 = &var_78
        rbx_4 = 1
    else
        rax_1 = &var_78
        var_70:4.d = 0
        rbx_4 = 1

int16_t* r15_2 = *rax_1
*rax_1 = nullptr
rax_1[1] = 0

if ((rbx_4.b & 2) != 0)
    int64_t rcx_7 = var_58
    rbx_4 &= 0xfffffffd
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if ((rbx_4.b & 1) != 0)
    int16_t* rcx_8 = var_78
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

int64_t* rax_2 = sub_140b63b70(&arg_20, &var_58)
int16_t* const arg_8

if (rax_2[1].d == 0)
    arg_8 = &data_142d40450
else
    arg_8 = *rax_2

int16_t* const rdi_1

if (arg1[3].d == 0)
    rdi_1 = &data_142d40450
else
    rdi_1 = arg1[2]

int16_t* const rbx_5 = &data_142d40450
int32_t var_60

if (var_60 != 0)
    rbx_5 = var_68

int16_t* const var_88 = arg_8
int16_t* const var_90 = rdi_1
int16_t* const var_98 = rbx_5
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o((*(*arg1 + 8))(arg1))).d f* 0.0009765625f
sub_140a2e390(arg2, u"%8.2fkb, %s%s, '%s', Class: %s", _mm_cvtps_pd(zmm0.q))
int64_t rcx_12 = var_58

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

if (r15_2 != 0)
    sub_140a74f90(r15_2)

int16_t* rcx_14 = var_68

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

if (rsi != 0)
    sub_140a74f90(rsi)

return arg2
