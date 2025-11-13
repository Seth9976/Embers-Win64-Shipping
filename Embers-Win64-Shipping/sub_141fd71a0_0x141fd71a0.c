// 函数: sub_141fd71a0
// 地址: 0x141fd71a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141cbe500(arg1, arg2)
*arg1 = &data_143292cb0
__builtin_memset(&arg1[7], 0, 0x20)
__builtin_memset(&arg1[0xd], 0, 0x2c)

if (arg1[9] != &data_142d40450)
    arg1[0xa].d = 0
    
    if (0 s> *(arg1 + 0x54))
        sub_140594770(&arg1[9])

if (arg1[7] != &data_142d40450)
    int32_t rdx = 0
    arg1[8].d = 0
    
    if (*(arg1 + 0x44) != 0)
        sub_1405947f0(&arg1[7], 0)
        rdx = arg1[8].d
    
    arg1[8].d = rdx
    
    if (rdx s> *(arg1 + 0x44))
        sub_140594770(&arg1[7])

arg1[0xc].b = 1
int64_t var_18
int64_t* rax = sub_140b13890(&var_18)
int64_t rcx_4 = *rax
int32_t rdx_1 = rax[1].d
int32_t rdx_2 = neg.d(rdx_1)
*rax = 0
int32_t r8 = rax[1].d
int64_t var_28 = rcx_4
int32_t rcx_5 = *(rax + 0xc)
int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 0x13 + r8
int32_t var_20 = r8
int32_t var_1c = rcx_5
rax[1] = 0

if (rdx_5 s> rcx_5)
    sub_1405947f0(&var_28, rdx_5)

sub_140a20ba0(&var_28, u"Deviceprofiles.ini", 0x12)
int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return arg1
