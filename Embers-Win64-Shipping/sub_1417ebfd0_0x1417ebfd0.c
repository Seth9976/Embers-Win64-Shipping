// 函数: sub_1417ebfd0
// 地址: 0x1417ebfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t var_10 = 0
int64_t* result = sub_1417ebc50(arg1, arg2, arg3, arg4, arg5, arg6, 1, &var_18)
int64_t* rax_2

if (var_10 == 0)
    rax_2 = var_18
else
    int64_t* rcx = var_18
    
    if (rcx == 0)
        return result
    
    int64_t r8 = *rcx
    (*(r8 + 0x38))(rcx, 0, r8)
    rax_2 = var_18
    
    if (rax_2 != 0)
        rax_2 = sub_140a84c80(rax_2, 0, 0)
        var_18 = rax_2
    
    int32_t var_10_1 = 0

if (rax_2 != 0)
    sub_140a74f90(rax_2)

return result
