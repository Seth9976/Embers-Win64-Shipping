// 函数: sub_142bff1c0
// 地址: 0x142bff1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg1 + 0x10)
int32_t* rsi = arg3

if (r12 == 0)
    return 0

int32_t rbx = 0
int64_t r13 = *(arg1 + 0x18)

if (arg2 != 0)
    int64_t rdi_1 = arg5
    
    do
        if (r12(r13, zx.q(*rsi), rdi_1) == 0)
            break
        
        rsi += zx.q(arg4)
        rdi_1 += zx.q(arg6)
        rbx += 1
    while (rbx u< arg2)

return zx.q(rbx)
