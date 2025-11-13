// 函数: sub_142b7d330
// 地址: 0x142b7d330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int32_t* rdi = arg4

if (*arg4 s<= 0)
    int32_t rsi_1 = *(arg1 + 0x70)
    
    if (rsi_1 s<= 0x7ffff)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 = j_sub_142a7dd00(0x50)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_1 = rax_1
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_20 = rax_1
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            sub_142a479b0(rax_1, arg2)
            rbx_1[8].d = arg3
            *(rbx_1 + 0x44) = 1
            rbx_1[9].d = 1
            *(rbx_1 + 0x4c) = 0xffffffff
        
        if (rbx_1 != 0)
            sub_142ae7110(arg1 + 0x68, rbx_1, rdi)
            return zx.q(rsi_1)
        
        *rdi = 7
        return 0xffffffff
    
    *arg4 = 0xf

return 0xffffffff
