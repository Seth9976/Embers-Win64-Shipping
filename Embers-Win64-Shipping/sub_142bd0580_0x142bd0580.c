// 函数: sub_142bd0580
// 地址: 0x142bd0580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
void* arg_8 = rbx
int32_t result = sub_142bd01d0(&arg_8, arg2, 0xa)
char* r8 = arg_8

if (r8 != rbx)
    if (r8 u>= arg2 || *r8 != 0x23)
        *arg1 = r8
        return result
    
    void* r8_1 = &r8[1]
    arg_8 = r8_1
    result = sub_142bd01d0(&arg_8, arg2, result)
    r8 = arg_8
    
    if (r8 != r8_1)
        *arg1 = r8
        return result

return 0
