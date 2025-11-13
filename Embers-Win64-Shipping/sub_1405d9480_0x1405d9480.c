// 函数: sub_1405d9480
// 地址: 0x1405d9480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
(*(*arg1 + 0x40))(arg1, &var_28)
int32_t var_20

if (var_20 s> 1)
    int64_t var_18
    sub_140aae2f0(arg2, sub_140b18720(&var_18, &var_28, 1))
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
else
    sub_1405d9400()
    *arg2 = data_143cd6fd8
    void* rcx_1 = data_143cd6fe0
    arg2[1] = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) += 1
    
    arg2[2].d = data_143cd6fe8

int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
