// 函数: sub_141d589e0
// 地址: 0x141d589e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_141d4e3f0(*(arg1 + 0x110), &var_18, arg3)
int64_t rbx = var_18
int64_t* result = &var_18

if (arg2 != &var_18)
    int32_t r8 = *(arg2 + 0xc)
    int32_t var_10
    arg2[1].d = var_10
    
    if (var_10 != 0 || r8 != 0)
        sub_1405a4be0(arg2, var_10, r8)
        result = memcpy(*arg2, rbx, var_10 << 4)
        rbx = var_18
    else
        *(arg2 + 0xc) = var_10

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
