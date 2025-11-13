// 函数: sub_142ba3020
// 地址: 0x142ba3020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x1c))
void* r8 = *(arg1 + 0x20)
void* rcx_2 = result * 0x30 + r8

if (arg2 != 0)
    if (r8 u< rcx_2)
        void* rbx_2 = r8 + 0x14
        int64_t i_3 = (rcx_2 - r8 - 1) u/ 0x30 + 1
        int64_t i
        
        do
            result = zx.q(sub_142b93e80(sx.d(*(rbx_2 - 6)), arg3) + arg4)
            *rbx_2 = result.d
            rbx_2 += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (r8 u< rcx_2)
    int32_t* rbx_1 = r8 + 0x10
    int64_t i_2 = (rcx_2 - r8 - 1) u/ 0x30 + 1
    int64_t i_1
    
    do
        result = zx.q(sub_142b93e80(sx.d(rbx_1[-1].w), arg3) + arg4)
        *rbx_1 = result.d
        rbx_1 = &rbx_1[0xc]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
