// 函数: sub_141ff3de0
// 地址: 0x141ff3de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3] = 0
arg1[4] = 0
*arg1 = &data_14329ad70
arg1[1] = &data_14329ada0
arg1[2] = &data_14329adb8
arg1[5] = 0
arg1[6] = 0
void var_28
*(arg1 + 0x28) = *sub_140b214c0(&var_28)
arg1[7] = *arg3
void* rax_2 = arg3[1]
arg1[8] = rax_2

if (rax_2 != 0)
    *(rax_2 + 0xc) += 1

arg1[9].b = 1
arg1[0xa] = 0
int32_t i_1 = arg4[1].d
int64_t* rbx_1 = *arg4
arg1[0xb].d = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[0xa], i_1, 0)
    int64_t* rcx_2 = arg1[0xa]
    int32_t i
    
    do
        *rcx_2 = *rbx_1
        void* rax_4 = rbx_1[1]
        rcx_2[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        rcx_2 = &rcx_2[2]
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x5c) = 0

arg1[0xc] = 0
arg1[0xd].d = 0

if (arg5 != &arg1[0xc] && arg5[1].d != 0)
    int64_t* rcx_3 = *arg5
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x40))(rcx_3)

sub_140b214c0(&arg1[0xe])
int64_t rax_6 = j_sub_140a82f30(0x18)

if (rax_6 == 0)
    rax_6 = 0
else
    __builtin_memset(rax_6, 0, 0x18)

arg1[0x11] = rax_6
arg1[0x10] = rax_6
arg1[0x12].b = 0
*(arg1 + 0x94) = *arg2
arg1[0x14] = 0
arg1[0x15].d = 0
InitializeCriticalSection(&arg1[0x16])
SetCriticalSectionSpinCount(&arg1[0x16], 0xfa0)
int64_t* rax_8 = sub_140a242a0()
int64_t r8 = *rax_8
uint32_t rdx_2 = zx.d((*(r8 + 0x10))(rax_8, 0, r8))
uint32_t rax_10 = 0xff

if (rdx_2 != 0xff)
    rax_10 = rdx_2

*(arg1 + 0x9c) = rax_10
sub_140745b20(arg5)
return arg1
