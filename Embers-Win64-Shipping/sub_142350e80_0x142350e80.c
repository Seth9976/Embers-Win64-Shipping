// 函数: sub_142350e80
// 地址: 0x142350e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_14332efc8
__builtin_memset(&arg1[5], 0, 0x18)
int64_t arg_8
int64_t rax

if (data_143dbb3b4 == 0)
    arg_8 = 0
    rax = 0
else
    rax = arg1[3]

arg_8 = rax
int32_t rcx
rcx.b = sub_140b5b8a0(rax.d, 0) == 0

if ((arg_8:4.d != 0 | rcx.b) == 0)
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    arg1[7].d = performanceCount
else
    int64_t var_18
    int64_t* rax_2 = sub_140b63b70(&arg_8, &var_18)
    int32_t r8_1 = rax_2[1].d
    int16_t* rdx_1
    
    if (r8_1 == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *rax_2
    
    int32_t rcx_2 = r8_1 - 1
    
    if (r8_1 == 0)
        rcx_2 = 0
    
    int32_t rax_3 = sub_1405969c0(rcx_2, rdx_1)
    int64_t rcx_3 = var_18
    arg1[7].d = rax_3
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

*(arg1 + 0x3c) = arg1[7].d
arg1[8].b = 0
return arg1
