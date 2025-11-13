// 函数: sub_141a919e0
// 地址: 0x141a919e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_140d3c6e0(*arg1 + 0x1c)
int32_t* result_1 = result
void* rcx_2
bool cond:0_1

if (result == 0)
    cond:0_1 = arg2 == 0
label_141a91a48:
    
    if (cond:0_1)
        return result
    
    rcx_2 = *arg1
else
    rcx_2 = *arg1
    
    if (result == arg2)
        result = sub_140d3c6e0(rcx_2 + 0x24)
        
        if (*(result_1 + 0x430) == result)
            if (arg3 == 0)
                return result
            
            result = sub_140d3c6e0(*arg1 + 0x34)
            cond:0_1 = *(arg3 + 0x430) == result
            goto label_141a91a48
        
        rcx_2 = *arg1
return sub_141acad10(rcx_2, arg2, arg3)
