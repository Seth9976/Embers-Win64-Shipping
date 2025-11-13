// 函数: sub_142ab9a00
// 地址: 0x142ab9a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
*arg1 = &icu_64::CurrencyPluralInfo::`vftable'{for `icu_64::UObject'}

if (rdi != 0)
    int64_t* rcx = *rdi
    int32_t arg_8 = 0xffffffff
    
    for (void* i = sub_142a86e70(rcx, &arg_8); i != 0; i = sub_142a86e70(*rdi, &arg_8))
        int64_t* rcx_1 = *(i + 8)
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
    
    int64_t* rcx_3 = *rdi
    
    if (rcx_3 != 0)
        sub_142a869e0(rcx_3)
    
    sub_142a47920(rdi)

int64_t* rcx_5 = arg1[2]
arg1[1] = 0

if (rcx_5 != 0)
    (**rcx_5)(rcx_5, 1)

int64_t* rcx_6 = arg1[3]

if (rcx_6 != 0)
    (**rcx_6)(rcx_6, 1)

arg1[2] = 0
arg1[3] = 0
return sub_142a47900(arg1) __tailcall
