// 函数: sub_142714c80
// 地址: 0x142714c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx_1

if (*(arg2 + 0x18) == 0)
    rbx_1 = nullptr
else
    void* rax_1 = sub_14272ef20()
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(arg2 + 0x18)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

uint64_t result

if (rbx_1 != sub_14272e8c0())
    result.b = 0
else
    int64_t var_28
    (*(*arg1 + 0x278))(arg1, &var_28, arg4)
    char rdx_2 = *(arg2 + 0x20)
    int64_t var_18 = var_28
    int32_t var_20
    int32_t var_10_1 = var_20
    sub_1426a5bd0(arg3, rdx_2, &var_18)
    result.b = 1

return result
