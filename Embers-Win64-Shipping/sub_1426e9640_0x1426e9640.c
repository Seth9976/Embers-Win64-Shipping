// 函数: sub_1426e9640
// 地址: 0x1426e9640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t rax_2 = sub_141ffde90(zx.d(*(arg2 + 0x28)))
float zmm2[0x4] = *(arg2 + 0x20)
int32_t zmm1 = *(arg2 + 0x1c)
TEB* gsbase
int64_t rcx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
int32_t var_150 = *(arg2 + 0x18)
int32_t var_14c = zmm1
float var_148 = zmm2[0]

if (data_143f722d0 s> *(0x14 + rcx_2))
    _Init_thread_header(&data_143f722d0)
    
    if (data_143f722d0 == 0xffffffff)
        sub_140b58170(&data_143f722c8, "EnvQueryTrace", 1)
        _Init_thread_footer(&data_143f722d0)

void var_158
void var_98
sub_141eb54c0(&var_98, data_143f722c8, &var_158, *(arg2 + 0x2c) & 1, nullptr)
void var_138
int64_t* result = sub_1426c5200(&var_138, arg1, rax_2, &var_98, &var_150, arg4)
uint32_t rcx_5 = zx.d(*(arg2 + 0x2a))
int64_t* var_168_1

if (rcx_5 == 0)
    var_168_1.d = *(arg2 + 0x24)
    result =
        sub_1426c3fa0(&var_138, arg3, *(arg2 + 0x14), *(arg2 + 0x10) ^ data_142d3f780, var_168_1.d)
else if (rcx_5 == 1)
    var_168_1.d = *(arg2 + 0x24)
    result =
        sub_1426c37e0(&var_138, arg3, *(arg2 + 0x14), *(arg2 + 0x10) ^ data_142d3f780, var_168_1.d)
else if (rcx_5 == 2)
    var_168_1.d = *(arg2 + 0x24)
    result =
        sub_1426c3af0(&var_138, arg3, *(arg2 + 0x14), *(arg2 + 0x10) ^ data_142d3f780, var_168_1.d)
else if (rcx_5 == 3)
    var_168_1.d = *(arg2 + 0x24)
    result =
        sub_1426c3d40(&var_138, arg3, *(arg2 + 0x14), *(arg2 + 0x10) ^ data_142d3f780, var_168_1.d)
int64_t var_a8

if (var_a8 != 0)
    result = sub_140a74f90(var_a8)

int64_t var_c0

if (var_c0 != 0)
    result = sub_140a74f90(var_c0)

int64_t var_e0

if (var_e0 != 0)
    result = sub_140a74f90(var_e0)

int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_188)
return result
