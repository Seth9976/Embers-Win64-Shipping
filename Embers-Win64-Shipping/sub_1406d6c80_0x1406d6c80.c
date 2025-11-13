// 函数: sub_1406d6c80
// 地址: 0x1406d6c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_198
sub_1406caa40(&var_198)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_198, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_198)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rsi = &var_198

if (rax_2 != 0)
    rsi = rax_2

int128_t var_318
sub_1406caa40(&var_318)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_318, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_318)

int128_t* rax_4 = *(arg2 + 0x38)
int128_t* rbx = &var_318

if (rax_4 != 0)
    rbx = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rcx_4
rcx_4.b = rax_5 != 0
*(arg2 + 0x20) = rcx_4 + rax_5
int16_t* var_328 = nullptr
int32_t var_320 = 0
int16_t* var_338 = nullptr
int32_t var_330 = 0
sub_141d49a40(sub_140a1ae20(), rsi, &var_328, 0, 0, 0, nullptr, 1)
sub_141d49a40(sub_140a1ae20(), rbx, &var_338, 0, 0, 0, nullptr, 1)
int16_t* const rcx_8 = &data_142d40450
int16_t* rdx_6 = &data_142d40450

if (var_330 != 0)
    rdx_6 = var_338

if (var_320 != 0)
    rcx_8 = var_328

int32_t result = sub_140a54510(rcx_8, rdx_6)
rbx.b = result == 0
int16_t* rcx_9 = var_338

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int16_t* rcx_10 = var_328

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

*arg3 = rbx.b
int64_t var_220

if (var_220 != 0)
    result = sub_140a74f90(var_220)

int64_t var_250

if (var_250 != 0)
    result = sub_140a74f90(var_250)

int64_t var_268

if (var_268 != 0)
    result = sub_140a74f90(var_268)

int64_t var_2c8

if (var_2c8 != 0)
    result = sub_140a74f90(var_2c8)

int64_t var_2f8

if (var_2f8 != 0)
    result = sub_140a74f90(var_2f8)

int64_t var_308

if (var_308 != 0)
    result = sub_140a74f90(var_308)

int64_t rcx_17 = var_318.q

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t var_a0

if (var_a0 != 0)
    result = sub_140a74f90(var_a0)

int64_t var_d0

if (var_d0 != 0)
    result = sub_140a74f90(var_d0)

int64_t var_e8

if (var_e8 != 0)
    result = sub_140a74f90(var_e8)

int64_t var_148

if (var_148 != 0)
    result = sub_140a74f90(var_148)

int64_t var_178

if (var_178 != 0)
    result = sub_140a74f90(var_178)

int64_t var_188

if (var_188 != 0)
    result = sub_140a74f90(var_188)

int64_t rcx_24 = var_198.q

if (rcx_24 == 0)
    return result

return sub_140a74f90(rcx_24)
