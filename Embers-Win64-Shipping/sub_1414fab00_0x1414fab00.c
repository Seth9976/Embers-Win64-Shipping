// 函数: sub_1414fab00
// 地址: 0x1414fab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_142fbb408
*(arg1 + 0x10) = *arg2
InitializeCriticalSection(&arg1[4])
SetCriticalSectionSpinCount(&arg1[4], 0xfa0)
int64_t rdi = 0
arg1[9] = 0
arg1[0xa].d = 0
__builtin_memset(&arg1[0xb], 0, 0x18)
*(arg1 + 0x74) = 0
arg1[0x10] = &data_14399e5d8
__builtin_memset(&arg1[0x11], 0, 0x130)
arg1[0xe].d = 0x4000
arg1[0xf].d = 0
*(arg1 + 0x1bc) = 0
arg1[0x38].w = arg3
*(arg1 + 0x1c2) = 0
int64_t var_38
__builtin_memset(&var_38, 0, 0x1d)
int64_t* rax = sub_1425b9300()
uint64_t rcx_2 = rax[0x23]

if (rcx_2 == 0)
    int64_t rdx = *rax
    (*(rdx + 0x390))(rax, rdx)
    rcx_2 = rax[0x23]

void* rbx_2 = arg2 + 6
sub_1424351d0(rcx_2, rbx_2, zx.d(*(arg2 + 5)), *arg2, &var_38)
int32_t i = 0

if (*(arg2 + 5) u> 0)
    do
        int32_t rcx_4 = *arg2
        rdi += sub_141998630(rcx_4, rcx_4, 0, *rbx_2)
        rbx_2 += 1
        i += 1
    while (i s< zx.d(*(arg2 + 5)))

int32_t var_20
uint32_t temp0 = (divu.dp.q(0:(zx.q(var_20 << 0x14)), rdi)).d
uint32_t rcx_5 = 1

if (temp0 u>= 1)
    rcx_5 = temp0

int32_t temp0_1 = _mm_sqrt_ss(0, float.s(zx.q(rcx_5)))
int32_t rdx_6 = int.d(temp0_1 f+ temp0_1 f- 0.5f) s>> 1
arg1[0x37].d = rdx_6
int32_t r8_1 = *arg2
int32_t rax_6 = data_1439c7a78

if (rdx_6 * r8_1 u> rax_6)
    *(arg1 + 0x1c3) = 1
    int32_t temp0_2 = divu.dp.d(0:rax_6, r8_1)
    rdx_6 = temp0_2
    arg1[0x37].d = temp0_2

sub_14150ae80(&arg1[4], rdx_6 * rdx_6)
int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

return arg1
