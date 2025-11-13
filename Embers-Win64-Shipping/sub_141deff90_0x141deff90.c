// 函数: sub_141deff90
// 地址: 0x141deff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2

if (arg2 == 0)
    rbx = nullptr
else
    void* rax_1 = sub_142452380()
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx = nullptr

int64_t var_28
sub_140d15b50(&var_28, rbx)
int64_t var_20
int64_t rbx_1 = var_20
*(arg1 + 0x18) = var_28
int64_t* result = &var_20

if (arg1 + 0x20 != &var_20)
    int32_t r8_1 = *(arg1 + 0x2c)
    int32_t var_18
    *(arg1 + 0x28) = var_18
    
    if (var_18 != 0 || r8_1 != 0)
        sub_1405a4c70(arg1 + 0x20, var_18, r8_1)
        result = memcpy(*(arg1 + 0x20), rbx_1, var_18 * 2)
        rbx_1 = var_20
    else
        *(arg1 + 0x2c) = var_18

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
