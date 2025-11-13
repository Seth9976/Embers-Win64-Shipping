// 函数: sub_1429370a0
// 地址: 0x1429370a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (sub_1428b6f70(arg3, "%*sIssuer: ", zx.q(arg4)) s> 0
        && sub_1428f6c70(arg3, *arg2, 0, 0x82031f) s> 0)
    int32_t rdi_1 = 0
    
    if (sub_142898c70(arg2[1]) s<= 0)
        return 1
    
    while (true)
        int64_t* rax_3 = sub_142898ea0(arg2[1], rdi_1)
        
        if (sub_1428b6f70(arg3, "\n%*s", zx.q(arg4 * 2)) s<= 0)
            return 0
        
        if (sub_1428cdc60(arg3, *rax_3) s<= 0)
            return 0
        
        if (sub_14289a750(arg3, &data_14353a144) s<= 0)
            return 0
        
        sub_14292c5b0(arg3, rax_3[1])
        rdi_1 += 1
        
        if (rdi_1 s>= sub_142898c70(arg2[1]))
            return 1

return 0
