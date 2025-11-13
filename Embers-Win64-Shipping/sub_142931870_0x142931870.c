// 函数: sub_142931870
// 地址: 0x142931870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg3 != 0)
    if (arg1 == 0)
        return getenv(arg3)
    
    char* var_28
    int64_t* rax_1
    
    if (arg2 != 0)
        int64_t* rcx = *(arg1 + 0x10)
        var_28 = arg2
        char* var_20_1 = arg3
        rax_1 = sub_1428a8d10(rcx, &var_28)
        
        if (rax_1 != 0)
            return rax_1[2]
        
        int64_t rcx_1 = 0
        
        while (true)
            char rax_2 = arg2[rcx_1]
            rcx_1 += 1
            
            if (rax_2 != *(rcx_1 + 0x1435386c7))
                break
            
            if (rcx_1 == 4)
                char* result = getenv(arg3)
                
                if (result != 0)
                    return result
                
                break
    
    int64_t* rcx_3 = *(arg1 + 0x10)
    var_28 = "default"
    char* var_20_2 = arg3
    rax_1 = sub_1428a8d10(rcx_3, &var_28)
    
    if (rax_1 != 0)
        return rax_1[2]

return nullptr
