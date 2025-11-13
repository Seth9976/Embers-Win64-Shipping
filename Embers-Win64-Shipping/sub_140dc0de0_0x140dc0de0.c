// 函数: sub_140dc0de0
// 地址: 0x140dc0de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg4
void* rax_1 = sub_142bf6cf0(sub_1405948b0(arg1))
int32_t* rbx = arg6
int32_t rsi = 0

if (arg3 != 0)
    do
        *rdi
        int32_t rax_2 = sub_142b91fc0(rax_1)
        *rbx = rax_2
        int32_t rcx_2 = *rdi
        
        if (rcx_2 != 0)
            if (rax_2 == 0)
                *rbx = sub_142b91fc0(rax_1)
                rcx_2 = *rdi
            
            if (rcx_2 != 0 && *rbx == 0)
                return zx.q(rsi)
        
        rdi += zx.q(arg5)
        rbx += zx.q(arg7)
        rsi += 1
    while (rsi u< arg3)

return zx.q(arg3)
