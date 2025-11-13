// 函数: sub_140f2d340
// 地址: 0x140f2d340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg1
int64_t var_18 = *r8
void* rax_1 = r8[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

char result = sub_140e6a270(arg2, &var_18, arg4)

if (result == 0)
    return result

return sub_140e88c70(arg2, *arg1, 2, arg3)
