// 函数: sub_141eba990
// 地址: 0x141eba990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr

if (((arg1[1].d u>> 4).b & 1) == 0)
    rbx = arg1[4]

int16_t* const rdi = &data_142d40450
int16_t* const rsi

if (arg2[1].d == 0)
    rsi = &data_142d40450
else
    rsi = *arg2

int64_t var_98
int64_t* rax_2 = sub_140b0ec20(&var_98)
int16_t* const r8

if (rax_2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_2

int64_t var_28
sub_140a2e390(&var_28, u"%s%s/%s_", r8)
int64_t rcx_2 = var_98

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int16_t* var_78 = nullptr
int32_t var_70 = 0
var_98 = 0
float var_90 = 0f
sub_1405947f0(&var_98, 4)
float rax_3 = var_90 i+ 4
var_90 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_98)

UnDecorator::getReferenceType(var_98, &data_142d8ad90, 8)
sub_140a464c0()
sub_140b17a00(&var_28, &var_98, &var_78, &data_14399ea08)
int64_t rcx_7 = var_98

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (var_70 != 0)
    rdi = var_78

sub_140a2e390(&var_98, u"BUGSCREENSHOTWITHHUDINFO %s", rdi)
int64_t r9_1
r9_1.b = 1
int64_t var_88
(*(*rbx + 0xc20))(rbx, &var_88, &var_98, r9_1, rsi)
int64_t rcx_10 = var_88

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = var_98

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t var_68
int64_t var_38
(*(*rbx + 0x6f8))(rbx, &var_68, &var_38)
void* rax_6 = rbx[0x4a]
float rcx_13
float zmm1_1[0x4]

if (rax_6 == 0)
    float var_60
    rcx_13 = var_60
    zmm1_1 = zx.o(var_68)
else
    void* rax_7 = *(rax_6 + 0x130)
    float var_80_1
    
    if (rax_7 == 0)
        float rax_8 = data_143dbb200
        var_88 = data_143dbb1f8.q
        var_80_1 = rax_8
    else
        zmm1_1 = *(rax_7 + 0x1d0)
        var_88.d = zmm1_1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        var_80_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        var_88:4.d = temp0_1[0]
    
    zmm1_1 = zx.o(var_88)
    rcx_13 = var_80_1
    var_68 = zmm1_1.q
    float var_60_1 = rcx_13

float zmm0_1[0x4] = zx.o(var_38)
var_90 = rcx_13
int32_t var_30
int32_t var_80_2 = var_30
int64_t rax_10 = *arg1
int64_t var_58
__builtin_memset(&var_58, 0, 0x20)
var_88 = zmm0_1.q
var_98 = zmm1_1.q
int64_t var_48
(*(rax_10 + 0x3b0))(arg1, zmm1_1, &var_88, &var_48, &var_58)
int64_t result = (*(*arg1 + 0x3e0))(arg1, arg2, &var_78, &var_48, &var_58)
int64_t rcx_16 = var_58

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = var_48

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int16_t* rcx_18 = var_78

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t rcx_19 = var_28

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19)
