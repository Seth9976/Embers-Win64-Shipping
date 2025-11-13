// 函数: sub_14227a0c0
// 地址: 0x14227a0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x58)
void* const rbp_1

if (rbp == 0)
    rbp_1 = nullptr
else
    rbp_1 = *(rbp + 0x50)

if (rbp_1 == 0)
    return 

int64_t var_28
sub_140d3a3a0(&var_28, arg2)
int32_t arg_8
sub_14226aca0(arg1 + 8, &arg_8, var_28)
int64_t rax_1 = sx.q(arg_8)
void* const rax_4

if (rax_1.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_1 * 0x90 + *(arg1 + 8)

uint128_t* rdi_1 = rax_4 + 0x10

if (rax_4 == 0)
    rdi_1 = nullptr

if (rdi_1 == 0)
    int64_t* var_20 = &var_28
    sub_1422586b0(arg1 + 8, &arg_8, &var_20, nullptr)
    rdi_1 = *(arg1 + 8) + sx.q(arg_8) * 0x90 + 0x10
    *(rdi_1 + 0x5c) = *arg4
    *(rdi_1 + 0x64) = arg4[1].d
    rdi_1[5].q = *arg4
    *(rdi_1 + 0x58) = arg4[1].d

*rdi_1 = *arg4
rdi_1[1] = *(arg4 + 0x10)
rdi_1[2] = *(arg4 + 0x20)
rdi_1[3] = *(arg4 + 0x30)
rdi_1[4].q = arg3
*(rdi_1 + 0x48) = *(rbp_1 + 0x520)

if (_finite(_mm_cvtps_pd((*(rdi_1 + 0x5c)).q).q) != 0 && _finite(_mm_cvtps_pd(rdi_1[6].d.q).q) != 0)
    _finite(_mm_cvtps_pd((*(rdi_1 + 0x64)).q).q)

if (_finite(_mm_cvtps_pd(rdi_1[5].d.q).q) != 0 && _finite(_mm_cvtps_pd((*(rdi_1 + 0x54)).q).q) != 0)
    _finite(_mm_cvtps_pd((*(rdi_1 + 0x58)).q).q)

if (_finite(_mm_cvtps_pd((*rdi_1).q).q) != 0 && _finite(_mm_cvtps_pd((*(rdi_1 + 4)).q).q) != 0)
    _finite(_mm_cvtps_pd((*(rdi_1 + 8)).q).q)
