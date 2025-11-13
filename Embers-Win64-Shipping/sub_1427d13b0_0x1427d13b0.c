// 函数: sub_1427d13b0
// 地址: 0x1427d13b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg2
uint64_t result = sub_1427d0f40(arg1 + 8, &arg_8)

if (result != 0)
    void* r8_1 = *(arg1 + 0x70)
    int32_t* rdx_1 = result + 8
    uint64_t rcx_1 = zx.q(*(r8_1 + 0x18))
    
    if ((*(r8_1 + 0x1c) & 0x7fffffff) u> rcx_1.d)
        result = *(r8_1 + 0x10)
        uint64_t r9_1 = result + (rcx_1 << 2)
        
        if (r9_1 != 0)
            result = zx.q(*rdx_1)
            *r9_1 = result.d
        
        *(r8_1 + 0x18) += 1
    else
        result = sub_1427d0ff0(r8_1 + 0x10, rdx_1)

if (*(arg1 + 0x78) != 0)
    result = 0x10
    
    if (0x10 == arg2[1].w)
        result = (*(*arg2 + 0x1b0))(arg2)
        
        if (**(arg1 + 0x70) != result)
            return sub_1427d0920(arg1, result)

return result
