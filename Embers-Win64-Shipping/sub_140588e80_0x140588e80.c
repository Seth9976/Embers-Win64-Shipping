// 函数: sub_140588e80
// 地址: 0x140588e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x38)
int64_t rdi = *r14
int64_t rcx = **(arg1 + 0x40)

if (rcx != 0 && *(arg1 + 0x68) u< rcx)
    *(arg1 + 0x68) = rcx

int64_t rsi = *(arg1 + 0x68)
int64_t rbx = **(arg1 + 0x18)
int64_t r11_1 = rsi - rbx
int64_t rax_2

if (arg4 == 0)
    rax_2 = 0
label_140588f31:
    int64_t r9_1 = rax_2 + arg3
    
    if (r9_1 u> r11_1
            || (r9_1 != 0 && (((arg5 & 1) != 0 && rdi == 0) || ((arg5 & 2) != 0 && rcx == 0))))
        *arg2 = -1
    else
        int64_t r11_2 = rbx + r9_1
        
        if ((arg5 & 1) != 0 && rdi != 0)
            *r14 = r11_2
            **(arg1 + 0x50) = rsi.d - r11_2.d
        
        if ((arg5 & 2) != 0 && rcx != 0)
            int32_t rcx_3 = **(arg1 + 0x58) + (**(arg1 + 0x40)).d - r11_2.d
            **(arg1 + 0x20) = rbx
            **(arg1 + 0x40) = r11_2
            **(arg1 + 0x58) = rcx_3
        
        *arg2 = r9_1
else if (arg4 != 1)
    if (arg4 == 2)
        rax_2 = r11_1
        goto label_140588f31
    
    *arg2 = -1
else if ((arg5 & 3) == 3)
    *arg2 = -1
else if ((arg5 & 1) == 0)
    if ((arg5 & 2) != 0 && (rcx != 0 || rbx == 0))
        rax_2 = rcx - rbx
        goto label_140588f31
    
    *arg2 = -1
else
    if (rdi != 0 || rbx == 0)
        rax_2 = rdi - rbx
        goto label_140588f31
    
    *arg2 = -1
arg2[1] = 0
arg2[2] = 0
return arg2
