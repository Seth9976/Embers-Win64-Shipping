// 函数: sub_141c4e480
// 地址: 0x141c4e480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143209a60
int32_t rax = data_143f350a0
arg1[2].d = rax
__builtin_memset(&arg1[3], 0, 0x20)
void* rcx = &arg1[7]
data_143f350a0 = rax + 1
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x14]
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = arg2
arg1[0x12] = 0
arg1[0x13] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
__builtin_memset(&arg1[0x1c], 0, 0x48)
__builtin_memset(&arg1[0x26], 0, 0x18)
arg1[0x2a].d = 0
arg1[0x2b] = 0
*(arg1 + 0x160) = data_14399f720
__builtin_memset(&arg1[0x2e], 0, 0x28)
InitializeCriticalSection(&arg1[0x33])
SetCriticalSectionSpinCount(&arg1[0x33], 0xfa0)
CvtStSymsToSz::CvtStSymsToSz(&arg1[0x38])
__builtin_memset(&arg1[0x3b], 0, 0x58)
sub_141c4a250(&arg1[0x46])
arg1[0x47].b = 0
arg1[0x48] = 0
arg1[0x49].d = 0x3f800000
*(arg1 + 0x24c) = 0x3f800000
arg1[0x4a].d = 0x3f800000
__builtin_memset(&arg1[0x4f], 0, 0x14)
InitializeCriticalSection(&arg1[0x52])
SetCriticalSectionSpinCount(&arg1[0x52], 0xfa0)
__builtin_memset(&arg1[0x57], 0, 0x18)
int64_t* rax_4 = j_sub_140a82f30(0x50)

if (rax_4 == 0)
    rax_4 = nullptr
else
    *rax_4 = 0
    rax_4[2] = 0
    rax_4[4] = 0

arg1[0x5b] = rax_4
arg1[0x5a] = rax_4
arg1[0x5c] = 0
arg1[0x5d] = 0
InitializeCriticalSection(&arg1[0x5e])
SetCriticalSectionSpinCount(&arg1[0x5e], 0xfa0)
arg1[0x63] = 0
arg1[0x64] = 0
*(arg1 + 0x32c) &= 0xf8
arg1[0x65].d = 0
arg1[0x66].d = 0
arg1[0x67] = 0
arg1[0x68] = 0
InitializeCriticalSection(&arg1[0x69])
SetCriticalSectionSpinCount(&arg1[0x69], 0xfa0)
InitializeCriticalSection(&arg1[0x6e])
SetCriticalSectionSpinCount(&arg1[0x6e], 0xfa0)
arg1[0x73] = 0
void*** rbx_1 = arg1[0x4f]
int32_t i_3 = arg1[0x50].d

if (*(arg1 + 0x284) s< 0)
    if (i_3 != 0)
        int32_t i
        
        do
            sub_141c31b70(rbx_1)
            rbx_1 = &rbx_1[5]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    arg1[0x50].d = 0
    
    if (*(arg1 + 0x284) != 0)
        sub_1405c5660(&arg1[0x4f], 0)
else
    if (i_3 != 0)
        int32_t i_1
        
        do
            sub_141c31b70(rbx_1)
            rbx_1 = &rbx_1[5]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    arg1[0x50].d = 0

int64_t rbx_2 = sx.q(arg1[0x50].d)
int32_t rax_5 = (rbx_2 + 8).d
arg1[0x50].d = rax_5

if (rax_5 s> *(arg1 + 0x284))
    sub_1405c4ec0(&arg1[0x4f])

int32_t i_4 = 8
void*** rbx_3 = &arg1[0x4f][rbx_2 * 5]
int32_t i_2

do
    sub_141c2e3b0(rbx_3)
    rbx_3 = &rbx_3[5]
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
return arg1
