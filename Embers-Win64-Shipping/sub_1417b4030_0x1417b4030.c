// 函数: sub_1417b4030
// 地址: 0x1417b4030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= arg1[3].d)
    return 

int64_t r8_1 = arg1[2]
int64_t rdi_1 = sx.q(arg2) << 3
int32_t* rax = rdi_1 + r8_1

if (*(rdi_1 + r8_1 + 4) == 0 || rax == 0)
    return 

int64_t r10_1 = sx.q(*rax)
int64_t rdx = sx.q(arg1[1].d)

if ((r10_1 + 1).d s< rdx.d)
    *(r8_1 + (sx.q(*(*arg1 + rdx * 0x30 - 0x20)) << 3)) = r10_1.d
    rdx = zx.q(arg1[1].d)

int32_t rcx_5 = rdx.d - r10_1.d - 1

if (rcx_5 s>= 1)
    rcx_5 = 1

if (rcx_5 != 0)
    memcpy(r10_1 * 0x30 + *arg1, sx.q(rdx.d - rcx_5) * 0x30 + *arg1, rcx_5 * 0x30)
    rdx = zx.q(arg1[1].d)

arg1[1].d = (rdx - 1).d
sub_1407c4120(arg1)
char arg_c = 0
*(rdi_1 + arg1[2]) = arg3
