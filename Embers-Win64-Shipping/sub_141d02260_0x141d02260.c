// 函数: sub_141d02260
// 地址: 0x141d02260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t var_38 = 0
int32_t var_30 = 0
int32_t rsi = 0
EnterCriticalSection(arg1 + 0x38)
int64_t rbp = sx.q(*(arg1 + 0x18))
int32_t temp0 = rbp.d

if (temp0 != 0)
    if (temp0 s> 0)
        sub_1405a5410(&var_38, rbp.d)
        rsi = var_30
        rdi = var_38
    
    memcpy((sx.q(rsi) << 4) + rdi, *(arg1 + 0x10), (rbp << 4).d)
    var_30 = rsi + rbp.d

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

char rax = sub_141d02340(&var_38, arg2, arg3, arg4)

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(rax)
