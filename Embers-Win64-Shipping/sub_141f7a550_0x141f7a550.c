// 函数: sub_141f7a550
// 地址: 0x141f7a550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ab8c0(arg1)
*arg1 = &data_1432845e8
InitializeCriticalSection(&arg1[2])
SetCriticalSectionSpinCount(&arg1[2], 0xfa0)
void* rcx_2 = &arg1[0xa]
__builtin_memset(&arg1[7], 0, 0x18)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)
void*** var_18 = nullptr

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x16]
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
__builtin_memset(&arg1[0x12], 0, 0x20)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_1 = *(rcx_3 + 0x10)

if (rax_1 != 0)
    rcx_3 = rax_1

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
void*** rax_2 = sub_140a84c80(0, 0x30, 0)
var_18 = rax_2
int32_t var_10 = 3

if (rax_2 != 0)
    rax_2[1] = arg1
    *rax_2 = &data_142d42fd0
    rax_2[2] = __acrt_thread_detach
    rax_2[4] = sub_140a387b0()

void arg_8
arg1[7] = *sub_140a208a0(sub_140b18f30(), &arg_8, &var_18, 0x41200000)
void*** rax_7

if (var_10 == 0)
    rax_7 = var_18
label_141f7a6e1:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    void*** rcx_6 = var_18
    
    if (rcx_6 != 0)
        (*rcx_6)[7](rcx_6, 0)
        rax_7 = var_18
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_18 = rax_7
        
        int32_t var_10_1 = 0
        goto label_141f7a6e1
return arg1
