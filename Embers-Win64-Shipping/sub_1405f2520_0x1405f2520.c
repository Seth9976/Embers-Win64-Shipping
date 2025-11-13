// 函数: sub_1405f2520
// 地址: 0x1405f2520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t result

if (*(arg1 + 0xc4) == 5)
    int64_t* rcx_5 = *(arg1 + 0x60)
    
    if ((*(*rcx_5 + 0x40))(rcx_5).d s>= 0)
        if (arg2 == 0)
            result.b = 1
            return result
        
        int64_t* rcx_6 = *(arg1 + 0x60)
        
        if ((*(*rcx_6 + 0x38))(rcx_6, 1, arg2).d s>= 0)
        label_1405f261b:
            *(arg1 + 0x78) = 1
            result.b = 1
            return result
else
    void arg_8
    *(arg1 + 0x70) = *(*(*(arg1 + 8) + 0x30))(arg1 + 8, &arg_8)
    int64_t* rcx_1 = *(arg1 + 0x60)
    
    if ((*(*rcx_1 + 0x58))(rcx_1).d s>= 0)
        if (*(arg1 + 0xb8) == 0)
            if (arg1 + 0x70 != arg1 + 0xb0)
                if (*(arg1 + 0xb8) != 0)
                    *(arg1 + 0xb8) = 0
                
                *(arg1 + 0xb0) = *(arg1 + 0x70)
                *(arg1 + 0xb8) = 1
            
            *(arg1 + 0x70) = 0
        
        int64_t* rcx_4 = *(arg1 + 0xa8)
        
        if (rcx_4 != arg2)
            if (arg2 != 0)
                (*(*arg2 + 8))(arg2)
                rcx_4 = *(arg1 + 0xa8)
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x10))(rcx_4)
            
            *(arg1 + 0xa8) = arg2
        
        goto label_1405f261b

result.b = 0
return result
