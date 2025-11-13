// 函数: sub_140d922d0
// 地址: 0x140d922d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ab8c0(arg1)
int64_t* rdx = &arg1[6]
arg1[2] = 0
arg1[3] = 0
*arg1 = &data_142ec2eb8
arg1[4] = 0
arg1[5] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
__builtin_memset(&arg1[0xe], 0, 0x50)
InitializeCriticalSection(&arg1[0x18])
SetCriticalSectionSpinCount(&arg1[0x18], 0xfa0)
InitializeCriticalSection(&arg1[0x1d])
SetCriticalSectionSpinCount(&arg1[0x1d], 0xfa0)
arg1[0x22] = 0
arg1[0x23] = 0
int64_t var_18
int64_t* rax_1 = sub_140b139e0(&var_18)
int32_t rdx_1 = rax_1[1].d
int32_t rdx_2 = neg.d(rdx_1)
int64_t var_28 = *rax_1
*rax_1 = 0
int32_t rcx_6 = rax_1[1].d
int32_t rcx_7 = *(rax_1 + 0xc)
rax_1[1] = 0
int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 0x21 + rcx_6

if (rdx_5 s> rcx_7)
    sub_1405947f0(&var_28, rdx_5)

sub_140a2cf70(&var_28, u"SlateDebug/Fonts/LastResort.ttf", 0x1f)

if (&arg1[0x22] == &var_28)
    int64_t rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
else
    int64_t rcx_10 = arg1[0x22]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    arg1[0x22] = var_28
    arg1[0x23].d = rcx_6
    *(arg1 + 0x11c) = rcx_7
    int32_t var_20
    var_20.q = 0
    var_28 = 0

int64_t rcx_12 = var_18

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

arg1[0x24].b = 0
return arg1
