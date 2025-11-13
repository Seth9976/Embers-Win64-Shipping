// 函数: sub_142c1b060
// 地址: 0x142c1b060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbx = &data_14369a5d0
void* rsi = *(arg2 + 0x90)
int128_t* const rcx

if (arg3 u< (zx.d(*arg1) << 8) + zx.d(arg1[1]))
    rcx = (zx.q(arg3) << 2) + 2 + arg1
else
    rcx = &data_14369a5d0

uint16_t r9 = zx.w(*(rcx + 2))
uint64_t r10_3 = zx.q(*(rcx + 3))

if (0 != r9 * 0x100 + r10_3.w)
    rbx = &arg1[(zx.q(r9.b) << 8) + r10_3]

char arg_18
int128_t* rax_3 = sub_142c1e670(arg6, arg4, (zx.d(*rcx) << 8) + zx.d(*(rcx + 1)), arg7, &arg_18)

if (arg_18 == 0)
    rax_3.b = 0
    return rax_3

int32_t r8_3 = *(rsi + 0x5c)
uint64_t rbp = zx.q(arg8)

if (r8_3 - rbp.d u>= 2)
    sub_142bf5c70(rsi, rbp.d, r8_3)

uint64_t rax_6 = zx.q(*(rsi + 0x5c))
uint32_t rdx_4 = zx.d(*rbx) << 8
int32_t var_38[0x4]
var_38[0] = 0
int32_t arg_8 = 0
uint64_t r8_4 = zx.q(*(*(rsi + 0x70) + rax_6 * 0x14))
uint32_t rdx_5 = rdx_4 + zx.d(*(rbx + 1))

if (rdx_5 == 1)
    arg5 = sub_142c1e130(rbx, arg2, r8_4, &arg_8, &var_38)
else if (rdx_5 == 2)
    arg5 = sub_142c1e220(rbx, arg2, r8_4.d, &arg_8, arg5, &var_38)
else if (rdx_5 == 3)
    arg5 = sub_142c1e410(rbx, arg2, r8_4, &arg_8, &var_38)

int64_t rax_9 = *(rsi + 0x70)
int32_t arg_10 = 0
arg_18.d = 0
uint64_t r8_5 = zx.q(*(rax_9 + rbp * 0x14))
uint32_t rcx_14 = (zx.d(*rax_3) << 8) + zx.d(*(rax_3 + 1))

if (rcx_14 == 1)
    sub_142c1e130(rax_3, arg2, r8_5, &arg_18, &arg_10)
else if (rcx_14 == 2)
    sub_142c1e220(rax_3, arg2, r8_5.d, &arg_18, arg5, &arg_10)
else if (rcx_14 == 3)
    sub_142c1e410(rax_3, arg2, r8_5, &arg_18, &arg_10)

float _X[0x2] = arg_18.d
_X[0] = _X[0] f- arg_8
uint64_t rax_11 = zx.q(*(rsi + 0x5c))
int64_t rbx_4 = *(rsi + 0x80)
_X = _mm_cvtps_pd(_X).q
uint64_t rdi_1 = rax_11 * 5
round(_X)
float zmm1[0x2] = arg_10
zmm1[0] = zmm1[0] f- var_38[0]
int32_t rax_12 = int.d(_X)
_X = _mm_cvtps_pd(zmm1).q
*(rbx_4 + (rdi_1 << 2) + 8) = rax_12
round(_X)
*(rbx_4 + (rdi_1 << 2) + 0xc) = int.d(_X)
int32_t rax_13
rax_13.b = 1
*(rbx_4 + (rdi_1 << 2) + 0x12) = 1
rbp.w -= *(rsi + 0x5c)
*(rbx_4 + (rdi_1 << 2) + 0x10) = rbp.w
*(rsi + 0x28) |= 8
*(rsi + 0x5c) += 1
return rax_13
