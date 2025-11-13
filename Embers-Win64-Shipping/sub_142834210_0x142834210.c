// 函数: sub_142834210
// 地址: 0x142834210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
void* i_1 = &var_18
void* i = arg2
void* i_2 = arg1

if (arg1 != 0)
    while (i != 0)
        if (arg3(*i_2, *i) s>= 0)
            *(i_1 + 8) = i
            i_1 = i
            i = *(i + 8)
        else
            *(i_1 + 8) = i_2
            i_1 = i_2
            i_2 = *(i_2 + 8)
        
        if (i_2 == 0)
            break

if (i_2 != 0)
    i = i_2

*(i_1 + 8) = i
int64_t result
return result
