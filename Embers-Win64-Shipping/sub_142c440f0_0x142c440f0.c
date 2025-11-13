// 函数: sub_142c440f0
// 地址: 0x142c440f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = nullptr

if (arg2 != 0)
    if (arg2 == 1)
        rbx = &data_1436a5f20
    label_142c44156:
        int32_t rax_2 = *rbx
        
        while (rax_2 != arg1)
            rax_2 = rbx[3]
            rbx = &rbx[3]
            
            if (rax_2 == 0)
                return zx.q(arg1)
        
        void arg_10
        
        if (sub_142bf49d0(arg3, rbx[1], 0, &arg_10, arg4) != 0)
            return zx.q(rbx[1])
        
        if (sub_142bf49d0(arg3, rbx[2], 0, &arg_10, arg4) != 0)
            return zx.q(rbx[2])
    else
        if (arg2 == 2)
            rbx = &data_1436a5fe0
            goto label_142c44156
        
        if (arg2 == 3)
            rbx = &data_1436a5f90
            goto label_142c44156
        
        if (arg2 == 4)
            rbx = &data_1436a6080
            goto label_142c44156
        
        if (*nullptr != 0)
            goto label_142c44156

return zx.q(arg1)
