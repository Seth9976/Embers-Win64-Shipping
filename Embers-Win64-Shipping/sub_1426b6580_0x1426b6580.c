// 函数: sub_1426b6580
// 地址: 0x1426b6580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    int64_t result
    result.b = 0
    return result

int64_t* rsi = *(arg1 + 0x258)
int64_t rdi
rdi.b = 0

if (rsi != 0)
    int64_t rax = sub_14273e530()
    int64_t r8 = *rsi
    int64_t* rax_1 = (*(r8 + 0x610))(rsi, rax, r8)
    
    if (rax_1 != 0)
        sub_1426bb1c0(rax_1, arg2, zx.d(arg3), 0)
        rdi.b = 1

return zx.q(rdi.b)
