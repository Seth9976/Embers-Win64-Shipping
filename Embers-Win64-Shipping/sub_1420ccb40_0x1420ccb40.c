// 函数: sub_1420ccb40
// 地址: 0x1420ccb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d

if (rbx == 0)
    if (arg2 != 0)
        *arg2 = 0xffffffff
    
    *arg3 = 0
    return 

char* r11 = *arg1
int32_t r8 = 0
int32_t r9 = 1
char rdx = *r11

if (rbx s> 1)
    void* r11_1 = &r11[1]
    
    do
        char rcx = *r11_1
        r11_1 += 1
        int32_t rax_1 = r9
        
        if (rdx u>= rcx)
            rax_1 = r8
        
        r8 = rax_1
        
        if (rdx u>= rcx)
            rcx = rdx
        
        r9 += 1
        rdx = rcx
    while (r9 s< rbx)

if (arg2 != 0)
    *arg2 = r8

*arg3 = rdx
