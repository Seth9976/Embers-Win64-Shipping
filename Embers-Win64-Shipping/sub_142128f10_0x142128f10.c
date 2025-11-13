// 函数: sub_142128f10
// 地址: 0x142128f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x1d0))
int64_t* rbx = arg2

if (result.d s<= 0)
label_142128f72:
    int64_t* rcx_2 = *(arg1 + 0x190)
    
    if (rcx_2 != 0)
        int64_t* rax_1 = (*(*rcx_2 + 0x280))(rcx_2, arg2)
        return (*(*rax_1 + 0x70))(rax_1, rbx, arg3, arg4)
    
    result.b = 0
else
    arg2 = *arg2
    int64_t result_1 = result
    result = *(arg1 + 0x1c8)
    int64_t r10_1 = 0
    
    while (*result != arg2 || *(result + 0xc) != *(rbx + 0xc) || *(result + 8) != rbx[1].d)
        r10_1 += 1
        result += 0x18
        
        if (r10_1 s>= result_1)
            goto label_142128f72
    
    if (result == -0x10)
        goto label_142128f72
    
    result = *(result + 0x10)
    
    if (result == 0)
        goto label_142128f72
    
    *arg3 = result
    result.b = 1

return result
