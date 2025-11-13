// 函数: sub_1428f0a80
// 地址: 0x1428f0a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0xa)
    if (sub_14292e790(&arg4[2], *arg2) s> 0)
    label_1428f0ae0:
        int64_t* rax_4 = sub_14292de10(*arg2, *arg4)
        arg4[1] = rax_4
        
        if (rax_4 != 0)
            return 1
else
    if (arg1 != 0xb)
        if (arg1 == 0xc)
            goto label_1428f0ae0
        
        if (arg1 != 0xd)
            return 1
    
    if (sub_14292d850(*arg2, arg4[1]) s> 0)
        return 1

return 0
