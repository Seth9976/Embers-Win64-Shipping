// 函数: sub_142b4f0a0
// 地址: 0x142b4f0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a4ab40(arg4)

if ((*(arg2 + 8) & 0xffe0) != 0)
    int32_t arg_10 = 0
    struct icu_64::TZDBNames::VTable** rax_1 = sub_142b4f210(arg2, &arg_10)
    
    if (arg_10 s<= 0 && rax_1 != 0)
        int64_t* rax_2 = rax_1[1]
        
        if (rax_2 != 0)
            int64_t r8
            
            if (arg3 == 0x10)
                r8 = *rax_2
            label_142b4f105:
                
                if (r8 != 0)
                    sub_142a4aa20(arg4, 1, r8, 0xffffffff)
            else if (arg3 == 0x20)
                r8 = rax_2[1]
                goto label_142b4f105

return arg4
