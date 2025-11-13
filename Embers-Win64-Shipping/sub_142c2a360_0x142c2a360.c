// 函数: sub_142c2a360
// 地址: 0x142c2a360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbx = &data_14369a5d0
uint16_t rcx = zx.w(*(arg1 + 2))
uint64_t r9 = zx.q(*(arg1 + 3))
int128_t* const r8_2

if (0 != rcx * 0x100 + r9.w)
    r8_2 = (zx.q(rcx.b) << 8) + arg1 + r9
else
    r8_2 = &data_14369a5d0

int32_t rdx = **(arg2 + 8)
uint32_t rcx_3 = (zx.d(*r8_2) << 8) + zx.d(*(r8_2 + 1))
int32_t rdx_1

if (rcx_3 == 1)
    rdx_1 = sub_142c1e900(r8_2, rdx)
else if (rcx_3 == 2)
    rdx_1 = sub_142c1e990(r8_2, rdx)
else
    rdx_1 = -1

int128_t* const rax_4

if (rdx_1 u< (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
    rax_4 = arg1 + ((zx.q(rdx_1) + 3) << 1)
else
    rax_4 = &data_14369a5d0

uint16_t rdx_2 = zx.w(*rax_4)
uint64_t r8_6 = zx.q(*(rax_4 + 1))

if (0 != rdx_2 * 0x100 + r8_6.w)
    rbx = (zx.q(rdx_2.b) << 8) + arg1 + r8_6

int64_t var_10 = 0
uint32_t (* var_18)(int32_t arg1, char* arg2) = sub_142c22220
return sub_142c2a7e0(rbx, arg2, &var_18)
