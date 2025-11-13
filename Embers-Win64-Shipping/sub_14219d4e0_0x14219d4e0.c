// 函数: sub_14219d4e0
// 地址: 0x14219d4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0)
    return 

int64_t rbx_1 = sx.q(arg3)
int32_t r8 = *(arg1 + 0x2b0)

if (r8 s< (rbx_1 + 1).d)
    int32_t r8_2 = (rbx_1 + 1).d + *(arg1 + 0x2b0) - r8
    *(arg1 + 0x2b0) = r8_2
    
    if (r8_2 s> *(arg1 + 0x2b4))
        sub_1406105e0(arg1 + 0x2a8)

*(*(arg1 + 0x2a8) + (rbx_1 << 2)) = arg2.d
