// 函数: sub_142c79390
// 地址: 0x142c79390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
char* rdx = *(rcx + 0x650)
void* rsi = *(rcx + 0x250)

if (rdx == 0)
    return 0

int32_t rax = sub_142c51e30(rcx, rdx, 0, rsi + 0x38, nullptr, 1)
int32_t rdi = rax

if (rax != 0)
    return rax

char* rbx_1 = *(rsi + 0x38)
char i = *rbx_1

while (i != 0)
    if (i == 0x20)
        if (*rbx_1 == 0)
            break
        
        *(rsi + 0x40) = data_143ccb8b0(rbx_1)
        *rbx_1 = 0
        
        if (*(rsi + 0x40) == 0)
            rdi = 0x1b
        
        return zx.q(rdi)
    
    i = rbx_1[1]
    rbx_1 = &rbx_1[1]

return rdi
