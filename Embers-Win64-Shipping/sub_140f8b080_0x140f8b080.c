// 函数: sub_140f8b080
// 地址: 0x140f8b080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg3
bool r9 = false
int64_t arg_18 = rax
uint32_t r11_1 = (rax u>> 0x20).d

if (r11_1 s> 0)
    int32_t r8 = 0
    int32_t rcx_2 = *(*(sx.q(rax.d) * 0x70 + *(arg2 + 0x18)) + 8)
    int32_t rdx_2 = rcx_2 - 1
    
    if (rcx_2 == 0)
        rdx_2 = 0
    
    if (rdx_2 == r11_1)
        arg_18.d = rax.d
        r9 = true
        
        if ((rax u>> 0x20).d - 1 s>= 0)
            r8 = (rax u>> 0x20).d - 1
        
        arg_18:4.d = r8
        arg_18 = arg_18

return sub_140f8af60(arg1, arg2, &arg_18, r9, arg5, arg4)
