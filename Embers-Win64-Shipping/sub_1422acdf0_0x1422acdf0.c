// 函数: sub_1422acdf0
// 地址: 0x1422acdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x15]
int64_t rbx = arg3

if (result != 0)
label_1422ace1e:
    void* rcx = *(result + 0x1f8)
    
    if (rcx != 0)
        int64_t* rsi_1 = *(rcx + 0x58)
        
        if (rsi_1 != 0)
            arg3.b = 1
            result = (*(*arg1 + 0x6a8))(arg1, rbx, arg3)
            
            if (result != 0)
                result = sub_14221b2f0(result)
                
                if (result.b != 0)
                    return (*(*rsi_1 + 8))(rsi_1, arg1, rbx, arg2)
else
    result, arg3 = sub_141ee69e0(arg1)
    
    if (result != 0)
        goto label_1422ace1e

return result
