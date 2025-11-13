// 函数: sub_140640c30
// 地址: 0x140640c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg3
int64_t rcx

if (data_143ddb400 != 0)
    int16_t* const rsi_1 = &data_142d40450
    int16_t* rbp_1
    
    if (arg2[1].d == 0)
        rbp_1 = &data_142d40450
    else
        rbp_1 = *arg2
    
    if (arg1[1].d != 0)
        rsi_1 = *arg1
    
    arg3.b = 1
    void arg_20
    char* rax = sub_140ae16d0(result, &arg_20, arg3.b)
    result = sub_140b00590(data_143ddb400, rsi_1, rbp_1, *rax, &data_143de5830)
    rcx = *arg1
else
    rcx = *arg1

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t rcx_3 = *arg2

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
