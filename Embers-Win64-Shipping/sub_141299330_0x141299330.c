// 函数: sub_141299330
// 地址: 0x141299330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10

if (((*(*(*arg2 + 0x1e8))(arg2, &arg_10) u>> 0xb).b & 1) != 0)
    *arg1 = data_1439b65f8
else
    int32_t rax_3 = (*(*arg2 + 0x1d8))(arg2)
    
    if (rax_3 == 2)
        char rax_13 = (*(*arg2 + 0x70))(arg2)
        int64_t rcx_6 = data_1439b6628
        
        if (rax_13 != 0)
            rcx_6 = data_1439b6610
        
        *arg1 = rcx_6
    else if (rax_3 == 3)
        *arg1 = data_1439b6640
    else if (rax_3 == 4)
        *arg1 = data_1439b52f8
    else if (rax_3 == 5)
        *arg1 = data_1439b65f8
    else if (rax_3 == 6)
        *arg1 = data_1439b5310
    else if (((*(*(*arg2 + 0x1e8))(arg2, &arg_10) u>> 0xa).b & 1) != 0)
        *arg1 = data_1439b65f8

int64_t result = (*(*arg2 + 0x68))(arg2)

if (result.b != 0)
    result = data_14395d9e8
    arg1[1] = result
    arg1[7].d = 0

return result
