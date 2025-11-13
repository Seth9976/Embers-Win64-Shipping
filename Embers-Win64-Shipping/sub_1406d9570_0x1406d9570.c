// 函数: sub_1406d9570
// 地址: 0x1406d9570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_188
sub_1406caa40(&var_188)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_188, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_188)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rsi = &var_188

if (rax_2 != 0)
    rsi = rax_2

int128_t var_198 = zx.o(0)
var_198.q = 0
var_198:8.q = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_198, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_198)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rdx_4 = &var_198

if (rax_4 != 0)
    rdx_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
int64_t* result = sub_1406d2b40(rsi, rdx_4)
int64_t rcx_4 = var_198.q

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t var_90

if (var_90 != 0)
    result = sub_140a74f90(var_90)

int64_t var_c0

if (var_c0 != 0)
    result = sub_140a74f90(var_c0)

int64_t var_d8

if (var_d8 != 0)
    result = sub_140a74f90(var_d8)

int64_t var_138

if (var_138 != 0)
    result = sub_140a74f90(var_138)

int64_t var_168

if (var_168 != 0)
    result = sub_140a74f90(var_168)

int64_t var_178

if (var_178 != 0)
    result = sub_140a74f90(var_178)

int64_t rcx_11 = var_188.q

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
