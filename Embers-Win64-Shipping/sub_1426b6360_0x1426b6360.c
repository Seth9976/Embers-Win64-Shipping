// 函数: sub_1426b6360
// 地址: 0x1426b6360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0xc0)
uint64_t result

if (r8 != 0 && arg2 != 0xff)
    result = zx.q(*(r8 + 0x4c))
    
    if (arg2 u< result.b)
        void* rcx_3 = *(r8 + 0x30)
        
        if (rcx_3 != 0)
            result = sub_1426b21a0(rcx_3, arg2)
            goto label_1426b63a3
    else
        result = *(r8 + 0x38) + (zx.q(arg2) - zx.q(result.b)) * 0x18
    label_1426b63a3:
        
        if (result != 0)
            return *(result + 0x10) & 1

result.b = 0
return result
