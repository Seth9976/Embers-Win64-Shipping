// 函数: sub_140dc1420
// 地址: 0x140dc1420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = *(arg1 + 0x278)
int64_t* rdi = nullptr
int64_t i = data_143e244d8
int64_t i_1 = i
void* rcx_1 = &r11[sx.q(*(arg1 + 0x280)) * 3]

if (r11 == rcx_1)
label_140dc1472:
    r11 = nullptr
else
    while (*r11 != i)
        r11 = &r11[3]
        
        if (r11 == rcx_1)
            goto label_140dc1472

void* rsi = &r11[1]

if (r11 == 0)
    rsi = nullptr

if (rsi == 0 || *(rsi + 8) == 0)
label_140dc14b8:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rcx_2 = *rsi
    
    if (rcx_2 == 0)
        goto label_140dc14b8
    
    if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        goto label_140dc14b8
    
    if (*(rsi + 8) != 0)
        rdi = *rsi
    
    (*(*rdi + 0x48))(rdi, arg2, arg3, arg4)

return arg2
