// 函数: sub_142698cb0
// 地址: 0x142698cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
int64_t* result

if (rcx != 0)
    result = sub_142656e00(rcx, arg2)
    
    if (result != 0)
        int64_t r8_1 = *result
        
        if ((*(r8_1 + 0x40))(result, *(arg1 + 0x18), r8_1).b != 0)
            result.b = 1
            return result

result.b = 0
return result
