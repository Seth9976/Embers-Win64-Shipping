// 函数: sub_142444aa0
// 地址: 0x142444aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x38)
int64_t result

if (rcx != 0)
label_142444acb:
    
    if ((*(*rcx + 0x368))(rcx).b != 0)
        goto label_142444ad5
else
    rcx = *(arg1 + 0xf0)
    
    if (rcx != 0)
        goto label_142444acb
    
label_142444ad5:
    
    if (*(arg1 + 0x128) == 0)
        int64_t* rbx_1 = *(arg1 + 0x188)
        void var_78
        result = (*(*rbx_1 + 0x330))(rbx_1, sub_1423cf790(&var_78, arg2), arg1)
        *(arg1 + 0x128) = result
        
        if (result != 0)
            result.b = 1
            return result

result.b = 0
return result
