// 函数: sub_1405c93e0
// 地址: 0x1405c93e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int64_t rax = sub_140d1fd20(arg1, data_143cd6360)

if (rax == 0)
    void* rax_3 = sub_140d21c30(arg1, sub_1405c7ce0())
    
    if (rax_3 != 0)
        int64_t r8_2 = *rax_3
        return (*(r8_2 + 8))(rax_3, arg2, r8_2)
else
    int64_t r9_1 = *arg1
    int64_t var_18 = arg2
    (*(r9_1 + 0x210))(arg1, rax, &var_18, r9_1, var_18, result)

return result
