// 函数: sub_14098eed0
// 地址: 0x14098eed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
int32_t arg_10 = 0
int64_t var_18
int64_t r8

if (arg3 == 0)
    arg_10.q = 0
    r8 = 0
else
    int64_t* rax_1 = sub_140d21e10(arg3, &var_18, 0)
    int16_t* rdx_1
    
    if (rax_1[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *rax_1
    
    rdi = 1
    int64_t* rax_2
    rax_2, arg4 = sub_140b58260(&arg_10, rdx_1, 1)
    r8 = *rax_2

sub_14098ebb0(arg1, arg2, r8, arg4)

if ((rdi & 1) != 0)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg2
