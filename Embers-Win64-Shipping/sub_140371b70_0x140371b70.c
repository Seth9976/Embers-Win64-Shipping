// 函数: sub_140371b70
// 地址: 0x140371b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = -6

if (arg3 != 0 && arg4 == 0x58 && *arg3 == 0x31)
    if (arg1 == 0)
        rbx = -2
    else
        *(arg1 + 0x20) = 0
        int64_t (* rax_1)(int64_t arg1, int32_t arg2, int32_t arg3) = *(arg1 + 0x30)
        
        if (rax_1 == 0)
            rax_1 = sub_140374330
            *(arg1 + 0x30) = sub_140374330
            *(arg1 + 0x40) = 0
            
            if (*(arg1 + 0x38) == 0)
                *(arg1 + 0x38) = sub_140374340
        else if (*(arg1 + 0x38) == 0)
            *(arg1 + 0x38) = sub_140374340
        
        void* rax_2 = rax_1(*(arg1 + 0x40), 1, 0x1be8)
        
        if (rax_2 == 0)
            rbx = -4
        else
            *(arg1 + 0x28) = rax_2
            *(rax_2 + 0x38) = 0
            int32_t rax_3 = sub_140371a40(arg1, arg2)
            
            if (rax_3 == 0)
                rbx = 0
            else
                rbx = rax_3
                (*(arg1 + 0x38))(*(arg1 + 0x40), rax_2)
                *(arg1 + 0x28) = 0

return zx.q(rbx)
