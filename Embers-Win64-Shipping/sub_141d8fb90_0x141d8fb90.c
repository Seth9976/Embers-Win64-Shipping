// 函数: sub_141d8fb90
// 地址: 0x141d8fb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int16_t* var_68
sub_140a2e390(&var_68, u"event%d", arg3)
int16_t* const rsi = &data_142d40450
int16_t* const r14 = &data_142d40450
int32_t var_60

if (var_60 != 0)
    r14 = var_68

int16_t* var_78
sub_141d8fd20(&var_78, arg2)
int16_t* const rbx_1 = &data_142d40450
int32_t var_70

if (var_70 != 0)
    rbx_1 = var_78

int64_t* rax_2 = sub_140b257f0()
int16_t* const rax_3

if (rax_2[1].d == 0)
    rax_3 = &data_142d40450
else
    rax_3 = *rax_2

int16_t* const var_58 = rax_3
uint64_t var_98 = 0
wchar16 const* const var_50 = u"Demos/"
int32_t var_90 = 0
sub_140b0f5f0(&var_98, &var_58, 2)
int16_t* const rax_4 = &data_142d40450
int16_t* const var_40 = rbx_1

if (var_90 != 0)
    rax_4 = var_98

int16_t* const var_48 = rax_4
uint64_t var_88 = 0
int32_t var_80 = 0
sub_140b0f5f0(&var_88, &var_48, 2)
uint64_t rcx_4 = var_98

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int16_t* rcx_5 = var_78

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = 0

if (var_80 != 0)
    rsi = var_88

var_48 = rsi
wchar16 const* const var_40_1 = u"events"
int16_t* const var_38 = r14
arg1[1] = 0
sub_140b0f5f0(arg1, &var_48, 3)
uint64_t rcx_7 = var_88

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int16_t* rcx_8 = var_68

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
