// 函数: sub_141c552c0
// 地址: 0x141c552c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143209ec8
EnterCriticalSection(&arg1[0x12])
sub_141c657a0(arg1)
int64_t* rcx_2 = arg1[0xd]

if (rcx_2 != 0)
    if (arg1[0xf].d == 3)
        int64_t* rax_2 = sub_1405f7040(sub_141f88540())
        int64_t r8_1 = *rax_2
        (*(r8_1 + 0xb0))(rax_2, arg1[0xd], r8_1)
        rcx_2 = arg1[0xd]
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    arg1[0xd] = 0

void* rcx_5 = arg1[0xb]

if (rcx_5 != 0)
    int64_t arg_8 = arg1
    sub_1423737b0(rcx_5, &arg_8)

if (arg1 != -0x90)
    LeaveCriticalSection(&arg1[0x12])

DeleteCriticalSection(&arg1[0x17])
DeleteCriticalSection(&arg1[0x12])
int64_t rcx_9 = arg1[0x10]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_14090dae0(&arg1[8])
sub_140596e10(&arg1[5])
*arg1 = &data_142dd6680

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
