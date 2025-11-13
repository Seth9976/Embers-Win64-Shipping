// 函数: sub_1410b7640
// 地址: 0x1410b7640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
int16_t* rax_1 = (*(*arg2 + 0x1e8))(arg2, &arg_10)
int64_t r9 = *arg2

if (((*rax_1 u>> 0xb).b & 1) == 0)
    int32_t rax_4 = (*(r9 + 0x1d8))(arg2, arg5, arg6, r9)
    
    if (rax_4 == 2)
        *arg1 = data_1439b52c8
    else if (rax_4 == 3)
        *arg1 = data_1439b52e0
    else if (rax_4 == 4)
        *arg1 = data_1439b52f8
    else if (rax_4 == 5)
        *arg1 = data_1439b52b0
    else if (rax_4 == 6)
        *arg1 = data_1439b5310
else if ((*(r9 + 0x250))(arg2, zx.q(arg3), arg6, r9) == 0)
    *arg1 = data_1439b52b0
else if (arg4 == 0 || arg4 == 3)
    *arg1 = data_1439b5268
else if (arg4 == 1)
    *arg1 = data_1439b5280
else if (arg4 == 2)
    *arg1 = data_1439b5298

char rax_10 = (*(*arg2 + 0x68))(arg2)
int64_t rdx_2 = *arg2
int64_t result = (*(rdx_2 + 0x78))(arg2, rdx_2)

if (result.b != 0)
    int64_t rcx_4 = data_1439b5340
    
    if (rax_10 != 0)
        rcx_4 = data_1439b5328
    
    arg1[1] = rcx_4
    arg1[7].d = 8
else if (rax_10 != 0)
    result = data_14395d9e8
    arg1[1] = result
    arg1[7].d = 0

return result
