// 函数: sub_140d734c0
// 地址: 0x140d734c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140597df0(arg1, arg2)

if (&arg1[2] != &arg2[2])
    int64_t* rbx_1 = arg1[2]
    int32_t i_1 = arg1[3].d
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_1 = &rbx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_1405967a0(&arg1[2], arg2[2], arg2[3].d, *(arg1 + 0x1c), 0)

arg1[4].b = arg2[4].b
return arg1
