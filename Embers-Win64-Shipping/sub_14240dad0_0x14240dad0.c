// 函数: sub_14240dad0
// 地址: 0x14240dad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x38)

if (result != 0)
label_14240db0c:
    result = *(result + 0x30)
    
    if (result != 0)
        int64_t* rcx_2 = *(result + 0x348)
        
        if (rcx_2 != 0)
            return sub_14240db30(rcx_2) __tailcall
else
    int64_t* rcx
    
    if (((*(arg1 + 8) u>> 4).b & 1) == 0)
        rcx = *(arg1 + 0x20)
    else
        rcx = nullptr
    
    int64_t rax_3 = (*(*rcx + 0x150))(rcx)
    result = sub_1423dd1b0(data_143f5b298, rax_3)
    
    if (result != 0)
        goto label_14240db0c

return result
