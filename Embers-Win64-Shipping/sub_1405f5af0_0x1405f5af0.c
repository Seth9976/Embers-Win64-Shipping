// 函数: sub_1405f5af0
// 地址: 0x1405f5af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = -2
uint64_t result

if (*arg1 != 0x41be7cff14dd9a1c || arg1[1] != 0x71b5ecc61abab9b1)
    result = *arg1
    
    if (result == 0x42d84ae78ac3587a)
        result = arg1[1]
        
        if (result == 0xff9ee13600ae099)
            goto label_1405f5b49
else
label_1405f5b49:
    int32_t rsi_1 = 0
    struct IMFAttributes var_40 = 0
    result = MFCreateAttributes(&var_40, 1)
    
    if (result.d s>= 0)
        struct IMFAttributes rcx_1 = var_40
        result = (*(*rcx_1 + 0xc0))(rcx_1, &data_142d5b2f8, arg1)
        
        if (result.d s>= 0)
            struct IMFActivate* var_38 = nullptr
            uint32_t pcSourceActivate = 0
            MFEnumDeviceSources(var_40, &var_38, &pcSourceActivate)
            result = zx.q(pcSourceActivate)
            
            if (result.d != 0)
                do
                    int64_t* vtable = var_38[zx.q(rsi_1)].vtable
                    int64_t* vtable_1 = vtable
                    
                    if (vtable != 0)
                        (*(*vtable + 8))(vtable)
                    
                    int64_t rbp_1 = sx.q(arg2[1].d)
                    int32_t rax_5 = (rbp_1 + 1).d
                    arg2[1].d = rax_5
                    
                    if (rax_5 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    *(*arg2 + (rbp_1 << 3)) = vtable
                    
                    if (vtable != 0)
                        (*(*vtable + 8))(vtable)
                    
                    (*(*vtable + 0x10))(vtable)
                    (*(*vtable + 0x10))(vtable)
                    rsi_1 += 1
                while (rsi_1 u< pcSourceActivate)
                
                result = CoTaskMemFree(var_38)
    
    struct IMFAttributes rcx_10 = var_40
    
    if (rcx_10 != 0)
        return (*(*rcx_10 + 0x10))(rcx_10)

return result
