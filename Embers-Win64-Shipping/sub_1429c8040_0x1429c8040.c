// 函数: sub_1429c8040
// 地址: 0x1429c8040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int32_t r14 = arg4
int64_t rbx = rbp
int64_t r15 = sx.q(arg3)
uint64_t result

while (true)
    __CheckForDebuggerJustMyCode(&data_14427d007)
    int32_t rsi_1 = rbp.d
    int32_t r8 = r15.d
    int64_t r9 = r15
    r14 += rol.d(r14, r14.b & 0x1f) + 3
    result = sx.q(modu.dp.d(0:r14, r15.d - rbp.d + 1) + rbp.d)
    int32_t i = *(arg1 + (result << 2))
    
    do
        while (*(arg1 + (rbx << 2)) s< i)
            rbx += 1
            rsi_1 += 1
        
        while (*(arg1 + (r9 << 2)) s> i)
            r9 -= 1
            r8 -= 1
        
        if (rbx s> r9)
            break
        
        int32_t rcx_5 = *(arg1 + (rbx << 2))
        rsi_1 += 1
        result = zx.q(*(arg1 + (r9 << 2)))
        r8 -= 1
        *(arg1 + (rbx << 2)) = result.d
        rbx += 1
        *(arg1 + (r9 << 2)) = rcx_5
        r9 -= 1
    while (rbx s<= r9)
    
    if (rbp.d s< r8)
        result = sub_1429c8040(arg1, zx.q(rbp.d), arg5, zx.q(r14))
    
    if (rsi_1 s>= r15.d)
        break
    
    rbp = zx.q(rsi_1)

return result
