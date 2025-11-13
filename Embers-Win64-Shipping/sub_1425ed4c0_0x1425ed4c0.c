// 函数: sub_1425ed4c0
// 地址: 0x1425ed4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rcx

if (arg3[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg3

if (sub_140a54570(rcx, "h264") != 0)
    *arg2 = nullptr
    return arg2

void*** rax_1 = j_sub_140a82f30(0x1d0)

if (rax_1 == 0)
    *arg2 = nullptr
    return arg2

*rax_1 = &data_143449ea0
InitializeCriticalSection(&rax_1[1])
SetCriticalSectionSpinCount(&rax_1[1], 0xfa0)
rax_1[6] = 0
void* rdx = &rax_1[0x14]
rax_1[7] = 0
void* rcx_3 = rdx + 4
*rax_1 = &data_143449fe8
rax_1[8].b = 0
int64_t i_1 = 3
__builtin_memset(&rax_1[9], 0, 0x34)
*(rax_1 + 0x7c) = 1
rax_1[0x10] = 0
rax_1[0x11] = 0
rax_1[0x12].d = 0x14
*(rax_1 + 0x94) = 2
int64_t i

do
    *rdx = 0
    rdx += 0x60
    *rcx_3 = 0
    *rcx_3
    *(rcx_3 + 4) = 0
    *(rcx_3 + 0x1c) = 0
    __builtin_memset(rcx_3 + 0x24, 0, 0x18)
    rcx_3 += 0x60
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rax_3 = j_sub_140a82f30(zx.q((i_1 + 0x10).d))

if (rax_3 == 0)
    rax_1[0x39] = 0
    rax_1[0x38] = 0
    *arg2 = rax_1
    return arg2

*rax_3 = 0
rax_1[0x39] = rax_3
rax_1[0x38] = rax_3
*arg2 = rax_1
return arg2
