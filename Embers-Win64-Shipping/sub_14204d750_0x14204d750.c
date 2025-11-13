// 函数: sub_14204d750
// 地址: 0x14204d750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *arg3
int32_t rsi = arg2
int64_t rdi
rdi.b = 1

for (int64_t rbp_2 = sx.q(arg3[1].d) * 0x30 + i; i != rbp_2; i += 0x30)
    if (rdi.b == 0 || (*(*arg1 + 0x918))(arg1, zx.q(rsi), i, zx.q(arg4), arg5, arg6) == 0)
        rdi.b = 0
    else
        rdi.b = 1
    
    rsi += 1

return zx.q(rdi.b)
