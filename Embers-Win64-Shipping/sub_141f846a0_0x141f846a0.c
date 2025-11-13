// 函数: sub_141f846a0
// 地址: 0x141f846a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x38)

if (result != 0)
    void* rdi_1 = result[0x11]
    
    if (rdi_1 != 0)
    label_141f846de:
        int64_t rbx_1 = **(rdi_1 + 0x68)
        sub_140b19e60()
        return (*(rbx_1 + 0x2b8))(*(rdi_1 + 0x68), &data_1439a8bd0)
    
    if (result[0x13].d s> rdi_1.d)
        result = result[0x12]
        rdi_1 = *result
        
        if (rdi_1 != 0)
            goto label_141f846de

return result
