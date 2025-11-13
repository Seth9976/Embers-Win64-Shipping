// 函数: sub_141ab6630
// 地址: 0x141ab6630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi

if (arg2[4].d == 0)
    rsi = &data_142d40450
else
    rsi = arg2[3]

int64_t arg_8 = *(sub_141ae2020() + 0x18)
int16_t* var_38
sub_140b63b70(&arg_8, &var_38)
float zmm0[0x2] = *arg2
int16_t* const r8 = &data_142d40450
zmm0[0] = zmm0[0] * 100f
int16_t* const var_58 = rsi
int32_t var_30

if (var_30 != 0)
    r8 = var_38

_mm_cvtps_pd(zmm0)
int64_t var_48
sub_140a2e390(&var_48, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

sub_140a20b00(&var_48, U"(", 1)
float zmm0_1[0x2] = *(arg1 + 0x24)
zmm0_1[0] = zmm0_1[0] * 100f
sub_140a2e390(&var_38, u"Alpha: %.1f%%", _mm_cvtps_pd(zmm0_1))
int32_t r8_3

if (var_30 == 0)
    r8_3 = 0
else
    r8_3 = var_30 - 1

sub_140a20ba0(&var_48, var_38, r8_3)
int16_t* rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140a2e390(&var_38, u" HandFKWeight: %f)", _mm_cvtps_pd(*(arg1 + 0x118)))
int32_t r8_6

if (var_30 == 0)
    r8_6 = 0
else
    r8_6 = var_30 - 1

int64_t r8_7 = sub_140a20ba0(&var_48, var_38, r8_6)
int16_t* rcx_11 = var_38

if (rcx_11 != 0)
    r8_7 = sub_140a74f90(rcx_11)

int32_t i = 0

if (*(arg1 + 0x110) s> 0)
    do
        int64_t var_28
        int64_t* rax_1 = sub_140b63b70((sx.q(i) << 4) + *(arg1 + 0x108), &var_28)
        int16_t* const r8_8
        
        if (rax_1[1].d == 0)
            r8_8 = &data_142d40450
        else
            r8_8 = *rax_1
        
        sub_140a2e390(&var_38, u", %s)", r8_8)
        int32_t r8_10
        
        if (var_30 == 0)
            r8_10 = 0
        else
            r8_10 = var_30 - 1
        
        r8_7 = sub_140a20ba0(&var_48, var_38, r8_10)
        int16_t* rcx_17 = var_38
        
        if (rcx_17 != 0)
            r8_7 = sub_140a74f90(rcx_17)
        
        int64_t rcx_18 = var_28
        
        if (rcx_18 != 0)
            r8_7 = sub_140a74f90(rcx_18)
        
        i += 1
    while (i s< *(arg1 + 0x110))

sub_140a2e390(&var_38, &data_142da76f4, r8_7)
int32_t r8_11

if (var_30 == 0)
    r8_11 = 0
else
    r8_11 = var_30 - 1

sub_140a20ba0(&var_48, var_38, r8_11)
int16_t* rcx_21 = var_38

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rsi_1 = var_48
var_38 = nullptr
int32_t var_40
int32_t var_30_1 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_38, var_40, 0)
    memcpy(var_38, rsi_1, var_40 * 2)
else
    int32_t var_2c_1 = var_40

sub_141e14220(arg2, &var_38, 0)
int64_t result = sub_141e21d10(arg1 + 0x10, arg2)
int64_t rcx_26 = var_48

if (rcx_26 == 0)
    return result

return sub_140a74f90(rcx_26)
