// 函数: sub_141eda6f0
// 地址: 0x141eda6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x1e].b & 1) != 0)
    if ((*(*arg1 + 0x548))() != 0)
    label_141eda71f:
        int64_t* rcx_1 = arg1[0x16]
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x3e8))(rcx_1, 0) == 0)
            return 1
    else if ((*(*arg1 + 0x550))(arg1) != 0)
        goto label_141eda71f

return 0
