// 函数: sub_142a5ba70
// 地址: 0x142a5ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t* rbx = arg2
int64_t* result = *(arg1 + 0x170)

if (result != 0)
    rbx = nullptr
    int64_t arg_10 = 0
    void* rbp_1 = *result
    int64_t* rcx = *(rbp_1 + 0x30)
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    *(rbp_1 + 0x30) = arg2
    int32_t arg_8 = 0
    result = sub_142a5f4f0(arg1, &arg_8)

if (rbx == 0)
    return result

return (**rbx)(rbx, 1)
