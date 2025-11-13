// 函数: sub_14226df60
// 地址: 0x14226df60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x298)
int64_t result

if (rbx == 0)
    result.b = 0
else
    void* rax = sub_142531230()
    void* r9_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(r9_1 + 0x38))
        result.b = 0
    else if (*(*(r9_1 + 0x30) + (result << 3)) != rax + 0x30)
        result.b = 0
    else
        int64_t* rcx_1 = *(rbx + 0x70)
        
        if (rcx_1 == 0)
            result.b = 0
        else
            int32_t arg_8
            result = (*(*rcx_1 + 0x2d8))(rcx_1, &arg_8)
            
            if (result.b != 0)
                *arg2 = arg_8
                *arg3 = arg4

return result
