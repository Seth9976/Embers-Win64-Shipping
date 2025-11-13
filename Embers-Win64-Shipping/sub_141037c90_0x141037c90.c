// 函数: sub_141037c90
// 地址: 0x141037c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[6])
uint32_t rdi = 0

if (arg1[0x12].d s<= 0)
label_141037d12:
    int64_t* rax_2
    int512_t zmm0
    rax_2, zmm0 = sub_14101a2c0(arg1)
    int64_t rdi_1 = sx.q(arg1[0x12].d)
    int32_t rcx_4 = (rdi_1 + 1).d
    arg1[0x12].d = rcx_4
    
    if (rcx_4 s> *(arg1 + 0x94))
        zmm0 = sub_1405a4d70(&arg1[0x11])
    
    *(arg1[0x11] + (rdi_1 << 3)) = rax_2
    rdi = zx.d(sub_141037ba0(*(arg1[0x11] + (sx.q(arg1[0x12].d) << 3) - 8), arg2, arg3, arg4, zmm0))
else
    int64_t* rsi_1 = nullptr
    
    while (true)
        char rax_1
        rax_1, arg5 = sub_141037ba0(*(rsi_1 + arg1[0x11]), arg2, arg3, arg4, arg5)
        
        if (rax_1 != 0)
            rdi.b = 1
            break
        
        rdi += 1
        rsi_1 = &rsi_1[1]
        
        if (rdi s>= arg1[0x12].d)
            goto label_141037d12

if (arg1 != -0x30)
    LeaveCriticalSection(&arg1[6])

return zx.q(rdi.b)
