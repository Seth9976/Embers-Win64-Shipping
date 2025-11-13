// 函数: sub_142bf7b30
// 地址: 0x142bf7b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:6_1

if (arg1 u> 0x4e617262)
    if (arg1 u> 0x526f6867)
        if (arg1 u> 0x536f6764)
            if (arg1 != 0x536f676f && arg1 != 0x53797263)
                cond:6_1 = arg1 == 0x54686161
            label_142bf7c8b:
                
                if (not(cond:6_1))
                    return 4
        else if (arg1 != 0x536f6764)
            if (arg1 == 0x52756e72)
                return 0
            
            if (arg1 != 0x53616d72)
                cond:6_1 = arg1 == 0x53617262
                goto label_142bf7c8b
    else if (arg1 != 0x526f6867 && arg1 != 0x50686c69 && arg1 != 0x4e626174 && arg1 != 0x4e6b6f6f
            && arg1 != 0x4f726b68 && arg1 != 0x50616c6d && arg1 != 0x50686c70
            && arg1 != 0x50686e78)
        cond:6_1 = arg1 == 0x50727469
        goto label_142bf7c8b
else if (arg1 != 0x4e617262)
    if (arg1 u<= 0x4974616c)
        if (arg1 == 0x4974616c)
            return 0
        
        if (arg1 u> 0x43707274)
            if (arg1 != 0x48617472 && arg1 != 0x48656272)
                if (arg1 != 0x48756e67)
                    return 4
                
                return 0
        else if (arg1 != 0x43707274 && arg1 != 0x41646c6d && arg1 != 0x41726162
                && arg1 != 0x41726d69)
            cond:6_1 = arg1 == 0x41767374
            goto label_142bf7c8b
    else if (arg1 u> 0x4d616e69)
        if (arg1 != 0x4d656e64 && arg1 != 0x4d657263)
            cond:6_1 = arg1 == 0x4d65726f
            goto label_142bf7c8b
    else if (arg1 != 0x4d616e69 && arg1 != 0x4b686172 && arg1 != 0x4c796469)
        cond:6_1 = arg1 == 0x4d616e64
        goto label_142bf7c8b
return 5
