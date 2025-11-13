// 函数: sub_14095f200
// 地址: 0x14095f200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (sub_140d3c6e0(arg1 + 8) == 0)
    int64_t rcx_7 = *arg2
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    result.b = 0
else
    void var_28
    int64_t* rax = sub_140596d10(&var_28, arg2)
    void var_18
    (*(arg1 + 0x10))(sub_140d3c6e0(arg1 + 8), sub_140596d10(&var_18, rax), zx.q(arg3))
    int64_t rcx_5 = *rax
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = *arg2
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    result.b = 1

return result
