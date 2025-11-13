// 函数: sub_141e4ba90
// 地址: 0x141e4ba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_2 = sub_141e5f5c0(arg1 + 0x1f0, arg2)
void* result_1 = result_2
void* result

if (result_2 == 0)
    *(arg1 + 0x268) += 1
    void* rbp_1 = *(arg1 + 0x240)
    
    if (rbp_1 != 0)
        *(arg1 + 0x250) = result_2.d
        
        if (*(arg1 + 0x254) s<= 0xffffffff)
            sub_1405947f0(arg1 + 0x248, 0)
        
        sub_141e5ced0(rbp_1, arg1 + 0x248)
    
    sub_141e53e10(arg1 + 0x1f0, *arg2)
    *(arg1 + 0x240) = sub_141e5f5c0(arg1 + 0x1f0, &data_143f398c8)
    result = sub_141e5f5c0(arg1 + 0x1f0, arg2)
    result_1 = result

if (result_2 == 0 && result == 0)
    result.b = 0
else if (sub_141e5dcb0(result_1, *arg3, arg3).b != 0)
    result.b = 0
else
    void var_28
    int64_t* rax_1 = sub_141e544b0(result_1, &var_28, *arg3)
    *arg3 = *rax_1
    arg3[1].d = rax_1[1].d
    result.b = 1

return result
