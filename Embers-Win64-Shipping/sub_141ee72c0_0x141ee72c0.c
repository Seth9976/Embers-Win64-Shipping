// 函数: sub_141ee72c0
// 地址: 0x141ee72c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
bool rdx = sub_140b5b8a0(arg2.d, 0) == 0
int32_t rax_3

if ((arg_10:4.d != 0 | rdx) == 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    rax_3 = performanceCount.d
    *arg1 = rax_3
else
    int64_t var_18
    int64_t* rax_2 = sub_140b63b70(&arg_10, &var_18)
    int32_t r8_1 = rax_2[1].d
    int16_t* rdx_2
    
    if (r8_1 == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_2
    
    int32_t rcx_2 = r8_1 - 1
    
    if (r8_1 == 0)
        rcx_2 = 0
    
    rax_3 = sub_1405969c0(rcx_2, rdx_2)
    int64_t rcx_3 = var_18
    *arg1 = rax_3
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
        int32_t rax_4 = *arg1
        arg1[1] = rax_4
        return rax_4

arg1[1] = rax_3
return rax_3
