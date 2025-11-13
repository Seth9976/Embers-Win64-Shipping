// 函数: sub_142c29f80
// 地址: 0x142c29f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbx = &data_14369a5d0
uint16_t rcx = zx.w(*(arg1 + 4))
uint64_t r9 = zx.q(*(arg1 + 5))
int128_t* const r14

if (0 != rcx * 0x100 + r9.w)
    r14 = (zx.q(rcx.b) << 8) + arg1 + r9
else
    r14 = &data_14369a5d0

uint16_t rdx = zx.w(*(arg1 + 6))
uint64_t r8_2 = zx.q(*(arg1 + 7))
int128_t* const rsi

if (0 != rdx * 0x100 + r8_2.w)
    rsi = (zx.q(rdx.b) << 8) + arg1 + r8_2
else
    rsi = &data_14369a5d0

uint16_t rdx_1 = zx.w(*(arg1 + 8))
uint64_t r8_3 = zx.q(*(arg1 + 9))
int128_t* const rbp

if (0 != rdx_1 * 0x100 + r8_3.w)
    rbp = (zx.q(rdx_1.b) << 8) + arg1 + r8_3
else
    rbp = &data_14369a5d0

int32_t rax_1 = sub_142c1e750(rsi, **(arg2 + 8))
int128_t* const rax_2

if (rax_1 u< (zx.d(*(arg1 + 0xa)) << 8) + zx.d(*(arg1 + 0xb)))
    rax_2 = arg1 + ((zx.q(rax_1) + 6) << 1)
else
    rax_2 = &data_14369a5d0

uint16_t rdx_6 = zx.w(*rax_2)
uint64_t r8_4 = zx.q(*(rax_2 + 1))

if (0 != rdx_6 * 0x100 + r8_4.w)
    rbx = (zx.q(rdx_6.b) << 8) + arg1 + r8_4

int128_t* const var_40 = r14
int64_t (* var_48)(int32_t arg1, char* arg2, char* arg3) = sub_142c22150
int128_t* const var_38 = rsi
int128_t* const var_30 = rbp
return sub_142c2a280(rbx, arg2, &var_48)
