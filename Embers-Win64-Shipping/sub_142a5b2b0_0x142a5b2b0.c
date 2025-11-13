// 函数: sub_142a5b2b0
// 地址: 0x142a5b2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::DecimalFormat::`vftable'{for `icu_64::NumberFormat'}
void* rax = arg1[0x2e]

if (rax != 0)
    int64_t* temp0_1 = *(rax + 0x18)
    *(rax + 0x18) = 0
    
    if (temp0_1 != 0)
        (**temp0_1)(temp0_1, 1)
    
    void* rax_2 = arg1[0x2e]
    int64_t* temp0_2 = *(rax_2 + 0x20)
    *(rax_2 + 0x20) = 0
    
    if (temp0_2 != 0)
        (**temp0_2)(temp0_2, 1)
    
    int64_t* rdi_2 = arg1[0x2e]
    
    if (rdi_2 != 0)
        sub_142a5b340(rdi_2)
        sub_142a47920(rdi_2)

return sub_142a57fc0(arg1) __tailcall
