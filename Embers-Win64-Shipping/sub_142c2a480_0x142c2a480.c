// 函数: sub_142c2a480
// 地址: 0x142c2a480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbx = &data_14369a5d0
uint16_t rcx = zx.w(*(arg1 + 4))
uint64_t r9 = zx.q(*(arg1 + 5))
int128_t* const rdi

if (0 != rcx * 0x100 + r9.w)
    rdi = (zx.q(rcx.b) << 8) + arg1 + r9
else
    rdi = &data_14369a5d0

int32_t rax_1 = sub_142c1e750(rdi, **(arg2 + 8))
int128_t* const rax_2

if (rax_1 u< (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7)))
    rax_2 = arg1 + ((zx.q(rax_1) + 4) << 1)
else
    rax_2 = &data_14369a5d0

uint16_t rdx_4 = zx.w(*rax_2)
uint64_t r8_2 = zx.q(*(rax_2 + 1))

if (0 != rdx_4 * 0x100 + r8_2.w)
    rbx = (zx.q(rdx_4.b) << 8) + arg1 + r8_2

int128_t* const var_20 = rdi
int64_t (* var_28)(int32_t arg1, char* arg2, char* arg3) = sub_142c22150
return sub_142c2a7e0(rbx, arg2, &var_28)
