// 函数: sub_141a50fa0
// 地址: 0x141a50fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[1].d)
int32_t* rbx = *arg3

if (result.d s> 0)
    int32_t* r14_1 = *arg2 - rbx
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        if (arg1 != -0x30)
            result = sub_141f893b0(arg1 + 0x30, *(r14_1 + rbx))
            
            if (result.d != 0xffffffff)
                int64_t rcx_1 = sx.q(result.d)
                result = *(arg1 + 8)
                *rbx = *(result + (rcx_1 << 2))
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
