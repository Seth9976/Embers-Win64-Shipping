// 函数: sub_140fd8670
// 地址: 0x140fd8670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*(arg1 + 0xf4) = 0
__builtin_memset(arg1 + 0xfc, 0xff, 0x20)
__builtin_memset(arg1 + 0x11c, 0, 0x1e)
memset(&arg1[4], 0, 0x120)
*arg1 = &data_142ef5d68
arg1[3] = &data_142ef64d0
arg1[0x28] = arg2

if (arg2 != 0)
    (*(*arg2 + 8))(arg2)

__builtin_memset(&arg1[0x2a], 0, 0x20)
arg1[0x2e] = &data_142ef5be0
arg1[0x2f].b = 0
*(arg1 + 0x17c) = 0
arg1[0x30].d = 0x3f800000
arg1[0x31] = 0
memset(&arg1[0x32], 0, 0x1800)
arg1[0x4c1] = 0
void* rcx_3 = &arg1[0x4c3]
arg1[0x4c2] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_2 = *(rcx_3 + 0x10)

if (rax_2 != 0)
    rcx_3 = rax_2

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x4c7].d = 0xffffffff
*(arg1 + 0x263c) = 0
arg1[0x4c9] = 0
arg1[0x4ca].d = 0
InitializeCriticalSection(&arg1[0x4cb])
SetCriticalSectionSpinCount(&arg1[0x4cb], 0xfa0)
__builtin_memset(&arg1[0x4d0], 0, 0x18)
arg1[0x4d3].d = arg3
arg1[0x4d4] = 0
*(arg1 + 0x26dc) = 0
__builtin_memset(&arg1[0x4dd], 0, 0x80)
arg1[0x4f8] = 0
arg1[0x4f9] = 0
__builtin_memset(arg1 + 0x40f4, 0, 0x18)
*(arg1 + 0x410c) = 0xffffffff
__builtin_memset(&arg1[0x822], 0, 0x2a0)
arg1[0x878] = 0
arg1[0x879] = 0
arg1[0x87a].d = 0x22
*(arg1 + 0x43d4) = 0
__builtin_memset(&arg1[0x87b], 0, 0x60)
arg1[0x888].d = 0xffffffff
*(arg1 + 0x4444) = 4
arg1[0x887] = &data_142ef5ce8
__builtin_memset(&arg1[0x889], 0, 0x13880)
arg1[0x2f99].d = 0
InitializeCriticalSection(&arg1[0x2f9a])
SetCriticalSectionSpinCount(&arg1[0x2f9a], 0xfa0)
arg1[0x887] = &data_142ef5d28

if (sub_140a80f40() == 0)
    sub_141997e80(&arg1[0x887])
else
    arg1[0x887][5](&arg1[0x887])

arg1[0x2f9f] = 0
arg1[0x2fa1].b = 0
arg1[0x2fa3].d = 0
void* rdx = &arg1[0x2fb5]
*(arg1 + 0x17d1c) = 0
arg1[0x2fa2] = &data_142ef5cc8
arg1[0x2fa4].d = 0
*(arg1 + 0x17d24) = 0xffffffff
__builtin_memset(&arg1[0x2fa5], 0, 0x14)
arg1[0x2fa9].d = 0xffffffff
*(arg1 + 0x17d4c) = 4
arg1[0x2fa8] = &data_142ef5bf8
arg1[0x2faa] = arg1
arg1[0x2fab].d = 4
*(arg1 + 0x17d5c) = 0xffffffff
arg1[0x2fac].d = 0
__builtin_memset(&arg1[0x2fad], 0, 0x11)
arg1[0x2fb0] = arg1
__builtin_memset(&arg1[0x2fb1], 0, 0x20)
*(rdx + 0x1c) = 0x80
void* rax_5 = *(rdx + 0x10)

if (rax_5 != 0)
    rdx = rax_5

__builtin_memset(rdx, 0, 0x1c)
arg1[0x2fb9].d = 0xffffffff
*(arg1 + 0x17dcc) = 0
arg1[0x2fbb] = 0
arg1[0x2fbc].d = 0
arg1[0x2fbd] = 0
arg1[0x2fbe] = 0
arg1[0x2fa8][5]()
int32_t var_38
sub_140de7870(&arg1[0x2fb3], &var_38)
int32_t* var_30
*var_30 = data_143e2b9a0
sub_140596d10(&var_30[2], &data_143e2b990)
int32_t rax_8 = var_38
var_30[6] = 0xffffffff
void arg_20
sub_140619c60(&arg1[0x2fb3], &arg_20, *var_30, var_30, rax_8, nullptr)
int128_t* rcx_13 = arg5
void* rax_9 = &arg1[0x2fc0]
int64_t i_1 = 2
arg1[0x2fbf].d = arg4
int64_t i

do
    rax_9 += 0x80
    int128_t zmm0_1 = *rcx_13
    rcx_13 = &rcx_13[8]
    *(rax_9 - 0x80) = zmm0_1
    *(rax_9 - 0x70) = rcx_13[-7]
    *(rax_9 - 0x60) = rcx_13[-6]
    *(rax_9 - 0x50) = rcx_13[-5]
    *(rax_9 - 0x40) = rcx_13[-4]
    *(rax_9 - 0x30) = rcx_13[-3]
    *(rax_9 - 0x20) = rcx_13[-2]
    *(rax_9 - 0x10) = rcx_13[-1]
    i = i_1
    i_1 -= 1
while (i != 1)
*rax_9 = *rcx_13
*(rax_9 + 0x10) = rcx_13[1]
*(rax_9 + 0x20) = rcx_13[2]
sub_140af2b60()
bool cond:0 = sub_140b21a10(&data_143dbb3f0, u"novendordevice") == 0
*(arg1 + 0x17f31) = 0
*(arg1 + 0x17f34) = 0
arg1[0x2fe6].b = cond:0
int64_t rdi_3 = data_143e2b988
int64_t rcx_14

if (data_143de5480 == 0)
    rcx_14 = 0
else
    rcx_14.b = GetCurrentThreadId() != data_143de5470

int32_t rax_12 = *(rdi_3 + (rcx_14 << 2))
int32_t rcx_15 = 0

if (rax_12 s>= 0)
    rcx_15 = rax_12

int32_t rcx_16 = rcx_15 << 0x14
arg1[0x4db].d = rcx_16
int64_t rax_13 = sub_140a82f30(rcx_16, 0)
uint64_t count = zx.q(arg1[0x4db].d)
arg1[0x4da] = rax_13
memset(rax_13, 0, count)
void* rcx_18 = data_143ddb400
data_143f0f208 = 0
data_143f0f200 = 0
sub_140af3c10(rcx_18, TextureStreaming", PoolSizeVRAMPercentage", &data_143f0f208, &data_143de5780)
int64_t* rcx_19 = arg1[0x28]
int64_t* arg_8 = nullptr
int32_t rax_15
rax_15.b = (**rcx_19)(rcx_19, &data_142ef6c70, &arg_8) s>= 0
arg1[0x29].b = rax_15.b
int32_t arg_18

if (sub_14197ee80(&arg_18) != 0)
    int32_t rax_17 = arg_18
    data_1439c7a08 = rax_17
    
    if (rax_17 == 1)
        data_143f0f1a0 = 0xe
else if (((arg1[0x4d3].d - 0xb000) & 0xfffffeff) == 0)
    data_1439c7a08 = 3
    data_143f0f1a0 = 0

bool cond:5 = data_143de5480 == 0
int64_t rdi_4 = data_143e2b970
data_1439c85fc = 0
data_1439c8624 = 2
data_1439c864c = 0x5a
data_1439c8674 = 0x3d
data_1439c869c = 0x38
data_1439c86c4 = 0x46
data_1439c86ec = 0x49
data_1439c8714 = 0x4c
data_1439c8c14 = 0x50
data_1439c873c = 0
int64_t rcx_21

if (cond:5)
    rcx_21 = 0
else
    rcx_21.b = GetCurrentThreadId() != data_143de5470

if (*(rdi_4 + (rcx_21 << 2)) == 0)
    data_1439c87b4 = 0x13
    data_1439c87ac = 5
    data_1439c8cdc = 0x16
    data_1439c8cd4 = 5
else
    data_1439c87b4 = 0x2c
    data_1439c87ac = 4
    data_1439c8cdc = 0x2f
    data_1439c8cd4 = 4

data_1439c87b8 = 1
data_1439c8f84 = 0x1f
data_1439c8ce0 = 1
data_1439c87dc = 0x35
data_1439c87d4 = 2
data_1439c87e0 = 1
data_1439c8804 = 0x29
data_1439c882c = 0x23
data_1439c8854 = 0x22
data_1439c887c = 0x22
data_1439c88a4 = 0x10
data_1439c88cc = 0x18
data_1439c88f4 = 0xb
data_1439c891c = 0x2c
data_1439c8944 = 0x36
data_1439c896c = 0x36
data_1439c8764 = 0x1a
data_1439c875c = 4
data_1439c878c = 0xa
data_1439c8784 = 8
data_1439c8a0c = 0x1a
data_1439c8a04 = 4
data_1439c8a10 = 1
data_1439c89bc = 0x33
data_1439c8994 = 0x53
data_1439c89e4 = 0x42
data_1439c8a34 = 0x41
data_1439c8a5c = 0x2a
data_1439c8a84 = 0x2b
data_1439c8afc = 0x39
data_1439c8b24 = 0x3b
data_1439c8b4c = 0xc
data_1439c8b74 = 0xe
data_1439c8b9c = 0x55
data_1439c8bc4 = 0x1b
data_1439c8f5c = 0x1e
data_1439c8c3c = 0x31
data_1439c8d7c = 3
data_1439c8da4 = 0x24
data_1439c909c = 0x11
data_1439c8e94 = 0x5f
data_1439c8ebc = 0x61
data_1439c8ee4 = 0x3e
data_1439c8fac = 0xb
data_1439c8fd4 = 0xd
data_1439c9074 = 0x67
data_1439c9078 = 1
int32_t temp1 = arg1[0x4d3].d
int32_t rax_21

if (temp1 s< 0xb000)
    rax_21 = data_1439c7a78
else
    rax_21 = 0x4000
    data_143f0f1bf = 1
    data_1439c7a78 = 0x4000
    data_1439c7a8c = 0x4000
    data_1439c7a24 = 0x800
    data_143f0f225 = 1
    data_143f0f223 = 0

uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(rax_21)
int32_t rdx_3

if (temp1 == 0xb000)
    rdx_3 = 0x20
else
    rdx_3 = 0x1f - temp0_1

int32_t rdx_5 = rdx_3 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(rax_21 - 1)
int32_t r8_2

if (rdx_5 == 0)
    r8_2 = 0x20
else
    r8_2 = 0x1f - temp0_2

data_1439c7a70 = rax_21
data_1439c7a74 = rax_21
data_143f0f1b7 = 1
int32_t rdi_7 = ((0x20 - r8_2) & not.d(rdx_5)) + 1
data_143f0f21c = 1
data_143f0f19d = 1

if (rdi_7 s>= 0xe)
    rdi_7 = 0xe

data_1439c7a00 = rdi_7
sub_140fe9610(arg1)
arg1[0x876] = 0
arg1[0x877].d = 0
sub_1419ce440()
int64_t rdi_8 = sx.q(arg1[0x879].d)
int64_t rbx_3 = sx.q(data_143f213d8)
int32_t rax_22 = (rbx_3 + rdi_8).d
arg1[0x879].d = rax_22

if (rax_22 s> *(arg1 + 0x43cc))
    sub_1405a4d70(&arg1[0x878])

memset(&arg1[0x878][rdi_8], 0, rbx_3 << 3)
int64_t* rcx_27 = arg_8

if (rcx_27 != 0)
    (*(*rcx_27 + 0x10))(rcx_27)

return arg1
