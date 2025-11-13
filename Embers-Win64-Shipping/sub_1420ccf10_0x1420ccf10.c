// 函数: sub_1420ccf10
// 地址: 0x1420ccf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d

if (rbx == 0)
    if (arg2 != 0)
        *arg2 = 0xffffffff
    
    *arg3 = 0
    return 

int32_t* r11 = *arg1
int32_t rdx = 0
int32_t r9 = 1
int32_t r8 = *r11

if (rbx s> 1)
    void* r11_1 = &r11[1]
    
    do
        int32_t rcx = *r11_1
        r11_1 += 4
        int32_t rax = r9
        
        if (rcx s>= r8)
            rax = rdx
        
        if (rcx s>= r8)
            rcx = r8
        
        r9 += 1
        rdx = rax
        r8 = rcx
    while (r9 s< rbx)

if (arg2 != 0)
    *arg2 = rdx

*arg3 = r8
