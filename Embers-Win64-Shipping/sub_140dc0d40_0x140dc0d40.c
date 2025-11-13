// 函数: sub_140dc0d40
// 地址: 0x140dc0d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t* rbx = arg4
void* rax_1 = sub_142bf6cf0(sub_1405948b0(arg1))
int32_t rsi = 0
void* r14 = &arg_18 - rbx

while (true)
    int32_t rdi_1 = *(r14 + rbx)
    int32_t rax_2 = sub_142b91fc0(rax_1)
    *rbx = rax_2
    
    if (rdi_1 != 0)
        if (rax_2 == 0)
            *rbx = sub_142b91fc0(rax_1)
        
        if (*rbx == 0)
            break
    
    rbx = &rbx[1]
    rsi += 1
    
    if (rsi u>= 1)
        rsi = 1
        break

int32_t r15
r15.b = rsi == 1
return zx.q(r15)
