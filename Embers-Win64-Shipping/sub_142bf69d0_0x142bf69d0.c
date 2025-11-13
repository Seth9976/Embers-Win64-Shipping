// 函数: sub_142bf69d0
// 地址: 0x142bf69d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg4
EnterCriticalSection(arg2)
int32_t rbx = 0

if (arg3 != 0)
    int32_t* rdi_1 = arg6
    
    do
        *rsi
        int32_t rax_1 = sub_142b91fc0(arg2->__offset(0x28).q)
        *rdi_1 = rax_1
        
        if (rax_1 == 0)
            break
        
        rsi += zx.q(arg5)
        rdi_1 += zx.q(arg7)
        rbx += 1
    while (rbx u< arg3)

LeaveCriticalSection(arg2)
return zx.q(rbx)
