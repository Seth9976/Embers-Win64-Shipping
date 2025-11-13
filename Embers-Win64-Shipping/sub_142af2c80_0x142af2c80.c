// 函数: sub_142af2c80
// 地址: 0x142af2c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_142ae72f0(arg1 + 0x1d8, *(arg1 + 0x1e0) - 1)
int32_t rbx = rax
int32_t i
int32_t rax_5

for (i = rax & 0xffff0000; i u>= (arg2 & 0xffff0000); i = rax_5 & 0xffff0000)
    sub_142b10330(arg1 + 0x1d8)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_1 =
        sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1)
    
    if (rbx s> 0x30005)
        if (rbx == 0x40006)
            sub_142b102e0(arg1 + 0x1b0)
            sub_142a9ebe0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), rax_1)
        else
            if (rbx != 0x40007)
                if (rbx == 0x40008)
                    goto label_142af2d69
                
                abort()
                noreturn
            
        label_142af2d10:
            sub_142b102e0(arg1 + 0x1b0)
            sub_142aa00c0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), rax_1)
        
    label_142af2da8:
        
        if (rax_1 != 0)
            sub_142a9dbc0(rax_1)
            sub_142a47920(rax_1)
    else
        if (rbx == 0x30005)
        label_142af2d69:
            sub_142b102e0(arg1 + 0x1b0)
            sub_142aa04d0(sub_142ae72d0(arg1 + 0x1b0, *(arg1 + 0x1b8) - 1), rax_1)
            goto label_142af2da8
        
        if (rbx == 0x20003)
            sub_142a9f070(rax_1)
        else
            if (rbx != 0x20009)
                if (rbx == 0x30004)
                    goto label_142af2d10
                
                abort()
                noreturn
            
            sub_142b682a0(rax_1, 2)
            sub_142aa0130(rax_1)
    
    rax_5 = sub_142ae72f0(arg1 + 0x1d8, *(arg1 + 0x1e0) - 1)
    rbx = rax_5

return i
