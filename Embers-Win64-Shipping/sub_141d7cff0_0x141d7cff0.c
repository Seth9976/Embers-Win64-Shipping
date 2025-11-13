// 函数: sub_141d7cff0
// 地址: 0x141d7cff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0x20)
int64_t rsi = *(arg2 + 0x18)
int64_t var_18 = 0

if (rdi != 0)
    sub_1405a4c70(&var_18, rdi, 0)
    memcpy(var_18, rsi, rdi * 2)
else
    int32_t var_c_1 = rdi

int32_t result = sub_140a23cf0(&var_18, u"{frame}", 1, 0, 0xffffffff)
int64_t rdi_1

if (result != 0xffffffff)
    rdi_1 = var_18
else
    result = sub_140a23cf0(&var_18, u"{shot_frame}", result + 2, 0, result)
    
    if (result != 0xffffffff)
        rdi_1 = var_18
    else
        sub_140a20ba0(&var_18, u".{frame}", result + 9)
        result = &var_18
        
        if (arg2 + 0x18 == &var_18)
            rdi_1 = var_18
        else
            rdi_1 = var_18
            int32_t r8_5 = *(arg2 + 0x24)
            *(arg2 + 0x20) = rdi
            
            if (rdi != 0 || r8_5 != 0)
                sub_1405a4c70(arg2 + 0x18, rdi, r8_5)
                result = memcpy(*(arg2 + 0x18), rdi_1, rdi * 2)
                rdi_1 = var_18
            else
                *(arg2 + 0x24) = rdi

if (rdi_1 == 0)
    return result

return sub_140a74f90(rdi_1)
