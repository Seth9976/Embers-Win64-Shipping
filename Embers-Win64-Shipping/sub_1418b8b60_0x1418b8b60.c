// 函数: sub_1418b8b60
// 地址: 0x1418b8b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[0x43] = 0
arg1[0x44].b = 0
__builtin_memset(&arg1[0x45], 0, 0x20)
memset(&arg1[2], 0, 0x208)
arg1[0x49] = arg1
arg1[0x4a] = 0
arg1[0x4b] = &arg1[2]
__builtin_memset(&arg1[0x4c], 0, 0x110)
InitializeCriticalSection(&arg1[0x6e])
SetCriticalSectionSpinCount(&arg1[0x6e], 0xfa0)
__builtin_memset(&arg1[0x73], 0, 0x14)
arg1[0x76] = arg1
InitializeCriticalSection(&arg1[0x77])
SetCriticalSectionSpinCount(&arg1[0x77], 0xfa0)
__builtin_memset(&arg1[0x7c], 0, 0x90)
InitializeSRWLock(&arg1[0x8e])
void* rbx_2 = &arg1[0x8f]
int64_t i_1 = 0xa
void* rax = rbx_2 + 0x20
int64_t i

do
    *rbx_2 = 0
    void* rdx = rax - 0x10
    *(rax - 0x18) = 0
    rbx_2 += 0x50
    *rax = 0
    *(rax + 8) = 0
    *(rax + 0xc) = 0x80
    void* rcx_6 = *rax
    rax += 0x50
    
    if (rcx_6 != 0)
        rdx = rcx_6
    
    *rdx = 0
    *(rdx + 8) = 0
    *(rax - 0x40) = 0xffffffff
    *(rax - 0x3c) = 0
    *(rax - 0x30) = 0
    *(rax - 0x28) = 0
    i = i_1
    i_1 -= 1
while (i != 1)
__builtin_memset(&arg1[0xf3], 0, 0x24)
void* rcx_7 = &arg1[0x29e]
arg1[0xf8] = arg3
arg1[0x184] = 0
arg1[0x185] = 0
arg1[0x29c] = 0
arg1[0x29d] = 0
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_1 = *(rcx_7 + 0x10)

if (rax_1 != 0)
    rcx_7 = rax_1

*rcx_7 = 0
*(rcx_7 + 8) = 0
void* rcx_8 = &arg1[0x342]
arg1[0x2a2].d = 0xffffffff
*(arg1 + 0x1514) = 0
arg1[0x2a4] = 0
arg1[0x2a5].d = 0
__builtin_memset(&arg1[0x2a6], 0, 0x4a)
__builtin_memset(arg1 + 0x157c, 0, 0x14)
arg1[0x340] = 0
arg1[0x341] = 0
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_2 = *(rcx_8 + 0x10)

if (rax_2 != 0)
    rcx_8 = rax_2

*rcx_8 = 0
*(rcx_8 + 8) = 0
void* rcx_9 = &arg1[0x350]
arg1[0x346].d = 0xffffffff
*(arg1 + 0x1a34) = 0
arg1[0x348] = 0
arg1[0x349].d = 0
__builtin_memset(&arg1[0x34a], 0, 0x30)
*(rcx_9 + 0x10) = 0
*(rcx_9 + 0x18) = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_3 = *(rcx_9 + 0x10)

if (rax_3 != 0)
    rcx_9 = rax_3

*rcx_9 = 0
*(rcx_9 + 8) = 0
arg1[0x354].d = 0xffffffff
*(arg1 + 0x1aa4) = 0
arg1[0x356] = 0
arg1[0x357].d = 0
arg1[0x359].b = 0
__builtin_memset(&arg1[0x35a], 0, 0x24)
arg1[0x35f] = 0
arg1[0x360] = 0
arg1[0x358] = arg2
memset(&arg1[0xf9], 0, 0x338)
memset(&arg1[0x160], 0, 0x11c)
memset(&arg1[0x186], 0, 0x8ac)
memset(&arg1[0x2b2], 0, 0x470)
data_143efb6c0(arg1[0xf8], &arg1[0xf9])
int32_t rcx_15 = arg1[0xfa].d
bool cond:1_1

if (rcx_15 s> 0x10de)
    if (rcx_15 == 0x13b5 || rcx_15 == 0x5143)
        *(arg1 + 0x157c) = rcx_15
    else
        cond:1_1 = rcx_15 == 0x8086
    label_1418b90af:
        
        if (cond:1_1)
            *(arg1 + 0x157c) = rcx_15
        else
            *(arg1 + 0x157c) = 0xffffffff
else if (rcx_15 == 0x10de)
    *(arg1 + 0x157c) = rcx_15
else if (rcx_15 == 0)
    *(arg1 + 0x157c) = 0
else
    if (rcx_15 != 0x1002)
        cond:1_1 = rcx_15 == 0x1010
        goto label_1418b90af
    
    *(arg1 + 0x157c) = rcx_15
return arg1
