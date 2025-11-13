// 函数: sub_142a2ca10
// 地址: 0x142a2ca10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10e8) != 0 && (*(arg1 + (sx.q(arg3) << 2) + 0x1138) & 8) != 0)
    return 1

void* rax_3 = *(arg2 + 0x1b8)
int32_t rbx = 0
void* rcx = *(arg2 + 0x1b0)
int32_t rdx

if (rax_3 == 0)
    rdx = 0
else
    rdx = sx.d(*(rax_3 + 3))

int32_t rax_4

if (rcx == 0)
    rax_4 = 0
else
    rax_4 = sx.d(*(rcx + 3))

int64_t r14 = sx.q(rax_4 + rdx)
uint32_t rdi_3 = (zx.d(*(*(arg1 + 0x1168) + r14 + 0x7af)) * (arg4[1].d - 1) + 0x100) u>> 8

if (*(arg4 + 0xc) s< 0)
    sub_142a23140(arg4)

int64_t r8 = *arg4
uint64_t rcx_3 = zx.q(rdi_3) << 0x38

if (r8 u>= rcx_3)
    rbx = 1
    rdi_3 = arg4[1].d - rdi_3
    r8 -= rcx_3

uint32_t rdx_1 = zx.d(*(zx.q(rdi_3) + &data_143603f00))
*(arg4 + 0xc) -= rdx_1
arg4[1].d = rdi_3 << rdx_1.b
*arg4 = r8 << rdx_1.b
int64_t rax_12 = *(arg2 + 0x188)

if (rax_12 != 0)
    int64_t rdx_2 = zx.q(rbx) + (r14 << 1)
    *(rax_12 + (rdx_2 << 2) + 0x31e8) += 1

return zx.q(rbx)
