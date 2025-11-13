// 函数: sub_141972960
// 地址: 0x141972960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f01cd0)
int64_t arg_28
int64_t var_20 = arg_28
int64_t var_18 = arg3
int64_t var_10 = arg4
int64_t var_38 = arg2
int64_t r8
int64_t var_30 = r8
int64_t r9
int64_t var_28 = r9
sub_141971030(&data_1439c7f30, &arg_28, &var_38)
int64_t rax_3 = sx.q(arg_28.d)

if (rax_3.d == 0xffffffff)
    *arg1 = 0
else
    int64_t rdx_2 = rax_3 << 6
    
    if (rdx_2 == neg.q(data_1439c7f30))
        *arg1 = 0
    else
        int64_t* rax_4 = *(rdx_2 + data_1439c7f30 + 0x30)
        
        if (rax_4 == 0)
            *arg1 = 0
        else
            void* rax_5 = *rax_4
            *arg1 = rax_5
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1

LeaveCriticalSection(&data_143f01cd0)
return arg1
