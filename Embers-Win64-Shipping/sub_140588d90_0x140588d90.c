// 函数: sub_140588d90
// 地址: 0x140588d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x38)
int64_t r11_1 = *(arg3 + 8) + *arg3
int64_t rsi = *r14
int64_t rcx = **(arg1 + 0x40)

if (rcx != 0 && *(arg1 + 0x68) u< rcx)
    *(arg1 + 0x68) = rcx

int64_t rbx = *(arg1 + 0x68)
int64_t rdi = **(arg1 + 0x18)

if (r11_1 u> rbx - rdi
        || (r11_1 != 0 && (((arg4 & 1) != 0 && rsi == 0) || ((arg4 & 2) != 0 && rcx == 0))))
    *arg2 = -1
else
    int64_t r8 = rdi + r11_1
    
    if ((arg4 & 1) != 0 && rsi != 0)
        *r14 = r8
        **(arg1 + 0x50) = rbx.d - r8.d
    
    if ((arg4 & 2) != 0 && rcx != 0)
        int32_t rcx_3 = **(arg1 + 0x58) + (**(arg1 + 0x40)).d - r8.d
        **(arg1 + 0x20) = rdi
        **(arg1 + 0x40) = r8
        **(arg1 + 0x58) = rcx_3
    
    *arg2 = r11_1

arg2[1] = 0
arg2[2] = 0
return arg2
