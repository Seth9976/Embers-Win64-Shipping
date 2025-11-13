// 函数: sub_141008d20
// 地址: 0x141008d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efd9d0
__builtin_memset(&arg1[2], 0, 0x20)
void* rax = &arg1[0xb]
arg1[6] = -1
arg1[7] = 0
*(arg1 + 0x4c) = 0
arg1[0xa].d = 0
*(arg1 + 0x54) = 0
int64_t i_2 = 2
int64_t i

do
    rax += 0x80
    int128_t zmm0 = *arg2
    arg2 = &arg2[8]
    *(rax - 0x80) = zmm0
    *(rax - 0x70) = arg2[-7]
    *(rax - 0x60) = arg2[-6]
    *(rax - 0x50) = arg2[-5]
    *(rax - 0x40) = arg2[-4]
    *(rax - 0x30) = arg2[-3]
    *(rax - 0x20) = arg2[-2]
    *(rax - 0x10) = arg2[-1]
    i = i_2
    i_2 -= 1
while (i != 1)
*rax = *arg2
*(rax + 0x10) = arg2[1]
*(rax + 0x20) = arg2[2]
*(rax + 0x30) = arg2[3]
arg1[0x33] = 0
arg1[0x34] = arg1
InitializeCriticalSection(&arg1[0x35])
SetCriticalSectionSpinCount(&arg1[0x35], 0xfa0)
arg1[0x3a] = 0
void* rcx_2 = &arg1[0x3c]
arg1[0x3b] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x40].d = 0xffffffff
*(arg1 + 0x204) = 0
arg1[0x42] = 0
arg1[0x43].d = 0
sub_14105d040(&arg1[0x44], arg1)
__builtin_memset(&arg1[0x83], 0, 0x18)
arg1[0x86] = arg1
InitializeCriticalSection(&arg1[0x87])
SetCriticalSectionSpinCount(&arg1[0x87], 0xfa0)
uint32_t rbp = 4
void* rbx = &arg1[0x8c]

for (int64_t i_1 = 4; i_1 != 0; )
    i_1 -= 1
    int64_t* rax_2 = j_sub_140a82f30(0x10)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        *rax_2 = 0
    
    *(rbx + 8) = rax_2
    *rbx = rax_2
    rbx += 0x10

__builtin_memset(&arg1[0x98], 0, 0x38)
sub_14103e8d0(&arg1[0xa0], arg1)
sub_141009eb0(&arg1[0xae], arg1, (1 << (data_1439c7a34).b) - 1, 1, 0)
arg1[0xae] = &data_142efd630
arg1[0xd5].d = 1
__builtin_memset(&arg1[0xd6], 0, 0x20)
sub_141009eb0(&arg1[0xda], arg1, (1 << (data_1439c7a34).b) - 1, 0, 1)
arg1[0xda] = &data_142efd630
arg1[0x101].d = 1
__builtin_memset(&arg1[0x102], 0, 0x20)
arg1[0x107].d = 0
*(arg1 + 0x83c) = 0
arg1[0x108].d = 0
*(arg1 + 0x844) = 0xffffffff
__builtin_memset(&arg1[0x109], 0, 0x14)
arg1[0x10c] = arg1
arg1[0x106] = &data_142efd9a0
__builtin_memset(&arg1[0x10d], 0, 0x20)
InitializeCriticalSection(&arg1[0x111])
SetCriticalSectionSpinCount(&arg1[0x111], 0xfa0)
arg1[0x117].d = 0xffffffff
*(arg1 + 0x8bc) = 4
arg1[0x118] = arg1
arg1[0x116] = &data_142efd940
arg1[0x119].d = 8
*(arg1 + 0x8cc) = 0xffffffff
arg1[0x11a].d = 0
__builtin_memset(&arg1[0x11b], 0, 0x22)
__builtin_memset(&arg1[0x120], 0, 0x30)
InitializeSRWLock(&arg1[0x126])
arg1[0x127] = 0
void* rcx_14 = &arg1[0x129]
arg1[0x128] = 0
*(rcx_14 + 0x10) = 0
*(rcx_14 + 0x18) = 0
*(rcx_14 + 0x1c) = 0x80
void* rax_3 = *(rcx_14 + 0x10)

if (rax_3 != 0)
    rcx_14 = rax_3

*rcx_14 = 0
*(rcx_14 + 8) = 0
void* rcx_15 = &arg1[0x133]
arg1[0x12d].d = 0xffffffff
*(arg1 + 0x96c) = 0
arg1[0x12f] = 0
arg1[0x130].d = 0
arg1[0x131] = 0
arg1[0x132] = 0
*(rcx_15 + 0x10) = 0
*(rcx_15 + 0x18) = 0
*(rcx_15 + 0x1c) = 0x80
void* rax_4 = *(rcx_15 + 0x10)

if (rax_4 != 0)
    rcx_15 = rax_4

*rcx_15 = 0
*(rcx_15 + 8) = 0
arg1[0x137].d = 0xffffffff
*(arg1 + 0x9bc) = 0
arg1[0x139] = 0
arg1[0x13a].d = 0
__builtin_memset(&arg1[0x94], 0, 0x20)
__builtin_memset(&arg1[0x13b], 0, 0x24)
uint32_t arg_8 = 1
sub_140af2b60()

if (sub_140b2ab80(&data_143dbb3f0, u"MaxGPUCount=", &arg_8) == 0)
    sub_140af2b60()
    char rax_6 = sub_140b21a10(&data_143dbb3f0, &data_142efda58)
    uint32_t rcx_16 = arg_8
    
    if (rax_6 != 0)
        rcx_16 = 4
    
    arg_8 = rcx_16

sub_140af2b60()
char rax_7 = sub_140b21a10(&data_143dbb3f0, u"VMGPU")
int32_t rcx_17 = data_143f0f1d8

if (rax_7 != 0)
    rcx_17 = 1

data_143f0f1d8 = rcx_17

if (rcx_17 == 0)
    uint32_t rax_8 = arg1[0x32].d
    uint32_t rcx_18 = arg_8
    
    if (rax_8 u<= rcx_18)
        rcx_18 = rax_8
    
    if (rcx_18 u<= 4)
        rbp = rcx_18
else if (arg_8 u<= 4)
    rbp = arg_8

arg1[0x32].d = rbp
return arg1
