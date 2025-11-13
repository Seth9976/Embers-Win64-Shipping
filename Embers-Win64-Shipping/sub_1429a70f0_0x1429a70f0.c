// 函数: sub_1429a70f0
// 地址: 0x1429a70f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = arg1
int64_t rdx_2 = (arg3 - arg1) s/ 0x38
int64_t result

if (rdx_2 s<= 0x28)
    result = *arg2
    
    if (result u< *arg1)
        sub_1429a8330(arg2, r11)
        result = *arg2
    
    if (*arg3 u< result)
        result = sub_1429a8330(arg3, arg2)
        
        if (*arg2 u< *r11)
            return sub_1429a8330(arg2, r11) __tailcall
else
    int64_t rax_4 = (rdx_2 + 1) s>> 3
    void* rsi_1 = rax_4 * 0x70
    int64_t* rdi_1 = rax_4 * 0x38
    int64_t rax_5 = *(rdi_1 + arg1)
    int64_t* r8 = rsi_1 + arg1
    void* r9_2 = rdi_1 + arg1
    
    if (rax_5 u< *arg1)
        sub_1429a8330(r9_2, arg1)
        rax_5 = *r9_2
    
    if (*r8 u< rax_5)
        sub_1429a8330(r8, r9_2)
        
        if (*r9_2 u< *r11)
            sub_1429a8330(r9_2, r11)
    
    int64_t rax_6 = *arg2
    int64_t* r11_1 = rdi_1 + arg2
    int64_t* r8_2 = arg2 - rdi_1
    
    if (rax_6 u< *r8_2)
        sub_1429a8330(arg2, r8_2)
        rax_6 = *arg2
    
    if (*r11_1 u< rax_6)
        sub_1429a8330(r11_1, arg2)
        
        if (*arg2 u< *r8_2)
            sub_1429a8330(arg2, r8_2)
    
    void* r8_4 = arg3 - rdi_1
    int64_t* r11_3 = arg3 - rsi_1
    int64_t rax_7 = *r8_4
    
    if (rax_7 u< *r11_3)
        sub_1429a8330(r8_4, r11_3)
        rax_7 = *r8_4
    
    if (*arg3 u< rax_7)
        sub_1429a8330(arg3, r8_4)
        
        if (*r8_4 u< *r11_3)
            sub_1429a8330(r8_4, r11_3)
    
    result = *arg2
    
    if (result u< *r9_2)
        sub_1429a8330(arg2, r9_2)
        result = *arg2
    
    if (*r8_4 u< result)
        result = sub_1429a8330(r8_4, arg2)
        
        if (*arg2 u< *r9_2)
            return sub_1429a8330(arg2, r9_2) __tailcall

return result
