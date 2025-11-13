// 函数: sub_142ad92d0
// 地址: 0x142ad92d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x308) != 0
int32_t arg_8 = 0

if (not(cond:0))
    sub_142ad7b90()
    sub_142a860a0(&data_1440167e0)
    
    if (*(arg1 + 0x308) == 0)
        struct icu_64::Format::icu_64::TimeZoneFormat::VTable** rax_1 =
            sub_142ac7a40(arg1 + 0x220, &arg_8)
        
        if (arg_8 s> 0)
            return 0
        
        *(arg1 + 0x308) = rax_1
    
    sub_142ad7b90()
    sub_142a860d0(&data_1440167e0)

return *(arg1 + 0x308)
