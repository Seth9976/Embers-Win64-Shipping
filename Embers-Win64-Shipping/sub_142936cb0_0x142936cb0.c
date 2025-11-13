// 函数: sub_142936cb0
// 地址: 0x142936cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*arg2 == 0)
label_142936d28:
    
    if (arg2[1] == 0)
    label_142936d75:
        
        if (arg2[2] == 0)
            return 1
        
        if (sub_1428b6f70(arg3, "%*scrlTime: ", zx.q(arg4)) s> 0
                && sub_1428e55c0(arg3, arg2[2]) != 0
                && sub_14289aa40(arg3, &data_14370209c, 1) s> 0)
            return 1
    else if (sub_1428b6f70(arg3, "%*scrlNum: ", zx.q(arg4)) s> 0
            && sub_14294a0c0(arg3, arg2[1]) s> 0 && sub_14289aa40(arg3, &data_14370209c, 1) s> 0)
        goto label_142936d75
else if (sub_1428b6f70(arg3, "%*scrlUrl: ", zx.q(arg4)) s> 0 && sub_14292ba90(arg3, *arg2) != 0
        && sub_14289aa40(arg3, &data_14370209c, 1) s> 0)
    goto label_142936d28

return 0
