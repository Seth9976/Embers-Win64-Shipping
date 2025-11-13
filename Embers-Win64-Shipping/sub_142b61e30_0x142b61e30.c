// 函数: sub_142b61e30
// 地址: 0x142b61e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* rbx = arg3

if (*arg4 s<= 0)
    if (*(arg1 + 0x2e0) != 0)
        goto label_142b61ed0
    
    int64_t* rax = sub_142a86f30(sub_142007a80, sub_142a86b90, sub_142b62550, arg4)
    *(arg1 + 0x2e0) = rax
    
    if (*arg4 s<= 0)
        std::ios_base::width(rax, sub_140a4f210)
    label_142b61ed0:
        
        if (rbx == 0)
            int64_t* rax_3 = j_sub_142a7dd00(0x148)
            rbx = rax_3
            int64_t* arg_20 = rax_3
            
            if (rax_3 == 0)
                rbx = nullptr
            else
                memset(rax_3, 0, 0x148)
                sub_142aa8270(rbx)
                *rbx = &icu_64::MessageFormat::DummyFormat::`vftable'{for `icu_64::Format'}
        
        sub_142a86e20(*(arg1 + 0x2e0), arg2, rbx, arg4)
    else if (rbx != 0)
        (**rbx)(rbx, 1)
else if (rbx != 0)
    (**arg3)(rbx, 1)
