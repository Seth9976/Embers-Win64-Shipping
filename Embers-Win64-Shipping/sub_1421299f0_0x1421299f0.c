// 函数: sub_1421299f0
// 地址: 0x1421299f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x1b0))
int64_t* rbx = arg2

if (result.d s<= 0)
label_142129a52:
    int64_t* rcx_2 = *(arg1 + 0x190)
    
    if (rcx_2 != 0)
        int64_t* rax_1 = (*(*rcx_2 + 0x280))(rcx_2, arg2)
        return (*(*rax_1 + 0x58))(rax_1, rbx, arg3, arg4)
    
    result.b = 0
else
    arg2 = *arg2
    int64_t result_1 = result
    result = *(arg1 + 0x1a8)
    int64_t r10_1 = 0
    
    while (*result != arg2 || *(result + 0xc) != *(rbx + 0xc) || *(result + 8) != rbx[1].d)
        r10_1 += 1
        result += 0x20
        
        if (r10_1 s>= result_1)
            goto label_142129a52
    
    if (result == -0x10)
        goto label_142129a52
    
    int128_t zmm0 = *(result + 0x10)
    result.b = 1
    *arg3 = zmm0

return result
