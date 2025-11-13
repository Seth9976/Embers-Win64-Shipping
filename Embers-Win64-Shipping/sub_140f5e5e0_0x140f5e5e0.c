// 函数: sub_140f5e5e0
// 地址: 0x140f5e5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1407473e0(arg1 + 0x5b8, arg2)

if (arg3[5].d == 0)
label_140f5e61a:
    
    if (arg3[3].b == 0)
        return result
else
    int64_t* rcx_1 = arg3[4]
    
    if (rcx_1 == 0)
        goto label_140f5e61a
    
    result = (*(*rcx_1 + 0x28))(rcx_1)
    
    if (result == 0)
        goto label_140f5e61a

sub_14065da90(arg1 + 0x5c8, arg3)
*(arg1 + 0x5e0) = arg3[3].b
return sub_140692f90(arg1 + 0x5e8, &arg3[4])
