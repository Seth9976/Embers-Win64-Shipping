// 函数: sub_1405ff500
// 地址: 0x1405ff500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (*(arg1 + 0x58) == 0)
    int64_t result
    result.b = 0
    return result

void* arg_8 = &arg1[4]
EnterCriticalSection(&arg1[4])
char rax = sub_1405f2790(&arg1[0x34], arg2.d)
char rax_1

if (rax == 0)
    rax_1 = sub_1405f2790(&arg1[0x38], arg2.d)

int32_t* rdi

if (rax == 0 && rax_1 == 0)
    rdi.b = 0
else if (arg1[0x1c].b == 0)
    rdi = zx.q(sub_1405f20d0(&arg1[-2], arg2))
else
    void arg_10
    
    if (&arg_10 != &arg1[0x25])
        arg1[0x25] = arg2.d
        arg1[0x26].b = 1
    
    rdi.b = 1

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[4])

return zx.q(rdi.b)
