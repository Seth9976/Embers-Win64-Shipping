// 函数: sub_1417911c0
// 地址: 0x1417911c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result_1 = arg1
int32_t arg_10
int32_t* result = sub_140865c40(arg2, &arg_10, arg1)

if (*result == 0xffffffff)
    arg_10 = arg3[1].d
    int64_t* var_18 = &result_1
    int32_t* var_10_1 = &arg_10
    void arg_20
    sub_1413b83d0(arg2, &arg_20, &var_18, nullptr)
    int64_t rdi_1 = sx.q(arg3[1].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg3[1].d = rax_1
    
    if (rax_1 s> *(arg3 + 0xc))
        sub_1405a4d70(arg3)
    
    result = result_1
    *(*arg3 + (rdi_1 << 3)) = result

return result
