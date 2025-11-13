// 函数: sub_1426e9390
// 地址: 0x1426e9390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t rax_2 = sub_141ffde90(zx.d(*(arg2 + 0x28)))
float zmm2[0x4] = *(arg2 + 0x20)
int32_t zmm1 = *(arg2 + 0x1c)
TEB* gsbase
int64_t rcx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
int32_t var_160 = *(arg2 + 0x18)
int32_t var_15c = zmm1
float var_158 = zmm2[0]

if (data_143f722e0 s> *(0x14 + rcx_2))
    _Init_thread_header(&data_143f722e0)
    
    if (data_143f722e0 == 0xffffffff)
        sub_140b58170(&data_143f722d8, "EnvQueryTrace", 1)
        _Init_thread_footer(&data_143f722e0)

void var_168
void var_a8
sub_141eb54c0(&var_a8, data_143f722d8, &var_168, *(arg2 + 0x2c) & 1, nullptr)
void var_148
sub_1426c5200(&var_148, arg1, rax_2, &var_a8, &var_160, 0)
int32_t var_b0
int64_t r14_1 = sx.q(var_b0)
int64_t count_1 = sx.q(arg3[1].d)
int32_t count = (r14_1 + count_1).d
int64_t var_b8
int32_t var_ac

if (count s> var_ac)
    sub_1405daba0(&var_b8)

void** result = memset(r14_1 + var_b8, 0, count_1)
uint32_t rcx_8 = zx.d(*(arg2 + 0x2a))
int64_t* var_178_1

if (rcx_8 == 0)
    var_178_1.d = *(arg2 + 0x24)
    result =
        sub_1426c3fa0(&var_148, arg3, *(arg2 + 0x14), *(arg2 + 0x10) ^ data_142d3f780, var_178_1.d)
else if (rcx_8 == 1)
    var_178_1.d = *(arg2 + 0x24)
    result =
        sub_1426c37e0(&var_148, arg3, *(arg2 + 0x14), *(arg2 + 0x10) ^ data_142d3f780, var_178_1.d)
else if (rcx_8 == 2)
    var_178_1.d = *(arg2 + 0x24)
    result =
        sub_1426c3af0(&var_148, arg3, *(arg2 + 0x14), *(arg2 + 0x10) ^ data_142d3f780, var_178_1.d)
else if (rcx_8 == 3)
    var_178_1.d = *(arg2 + 0x24)
    result =
        sub_1426c3d40(&var_148, arg3, *(arg2 + 0x14), *(arg2 + 0x10) ^ data_142d3f780, var_178_1.d)

if (count != 0)
    int32_t rax_3 = arg4[1].d
    int32_t rdx_9 = rax_3 + count
    
    if (rdx_9 s> *(arg4 + 0xc))
        sub_1405c5510(arg4, rdx_9)
        rax_3 = arg4[1].d
    
    result = memcpy(sx.q(rax_3) + *arg4, var_b8, count)
    arg4[1].d += count

int64_t rcx_18 = var_b8

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t var_d0

if (var_d0 != 0)
    result = sub_140a74f90(var_d0)

int64_t var_f0

if (var_f0 != 0)
    result = sub_140a74f90(var_f0)

int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_198)
return result
