// 函数: sub_1420b7ae0
// 地址: 0x1420b7ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t* rcx_3 = *(sub_140af2bc0() + 0x20)
    *arg1 = *rcx_3
    void* rax_4 = rcx_3[1]
    arg1[1] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    arg1[2].d = rcx_3[2].d
else
    int64_t arg_10 = *(arg2 + 0x18)
    int64_t var_18
    sub_140b63b70(&arg_10, &var_18)
    sub_140a9fb70(arg1, &var_18)
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

return arg1
