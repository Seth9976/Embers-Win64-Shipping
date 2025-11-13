// 函数: sub_1425ed650
// 地址: 0x1425ed650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rcx

if (arg3[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg3

if (sub_140a54570(rcx, "h264") != 0)
    *arg2 = nullptr
    return arg2

void*** rax_1 = j_sub_140a82f30(0x17c0)

if (rax_1 == 0)
    *arg2 = nullptr
    return arg2

*rax_1 = &data_143449ea0
InitializeCriticalSection(&rax_1[1])
SetCriticalSectionSpinCount(&rax_1[1], 0xfa0)
rax_1[6] = 0
rax_1[7] = 0
*rax_1 = &data_14344a3d8
rax_1[8].b = 0
__builtin_memset(&rax_1[9], 0, 0x18)
InitializeCriticalSection(&rax_1[0xee])
SetCriticalSectionSpinCount(&rax_1[0xee], 0xfa0)
void* rdx = &rax_1[0x2b4]
void* rcx_5 = rdx + 0x28
rax_1[0x2b3].d = 0
int64_t i_1 = 3
int64_t i

do
    *rdx = 0
    rdx += 0x98
    *(rcx_5 - 0x24) = 0
    *(rcx_5 - 0x24)
    *(rcx_5 - 0x20) = 0
    *(rcx_5 - 0x18) = 0
    *(rcx_5 - 0x10) = 0
    __builtin_memset(rcx_5, 0, 0x11)
    __builtin_memset(rcx_5 + 0x28, 0, 0x28)
    rcx_5 += 0x98
    i = i_1
    i_1 -= 1
while (i != 1)
rax_1[0x2ed] = 0
rax_1[0x2ee].d = 0
__builtin_memset(&rax_1[0x2ef], 0, 0x14)
*(rax_1 + 0x178c) = 1
rax_1[0x2f2] = 0
rax_1[0x2f3] = 0
rax_1[0x2f4].d = 0x14
*(rax_1 + 0x17a4) = 2
rax_1[0x2f5] = 0
int64_t* rax_3 = j_sub_140a82f30(zx.q((i_1 + 0x10).d))

if (rax_3 == 0)
    rax_3 = nullptr
else
    *rax_3 = 0

rax_1[0x2f7] = rax_3
rax_1[0x2f6] = rax_3
rax_1[9] = sub_140b67ab0(u"nvEncodeAPI64.dll")
*arg2 = rax_1
return arg2
