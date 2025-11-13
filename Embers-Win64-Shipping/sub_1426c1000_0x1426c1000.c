// 函数: sub_1426c1000
// 地址: 0x1426c1000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_1 = *(arg1 + 0xc8)
void* r9 = &arg1[2]
int64_t result = sx.q(*arg1)

if (rdx_1 != 0)
    r9 = rdx_1

if (*(r9 + result * 0x18 + 0x10) == 0xffffffff)
    int32_t i = arg1[0x34] - 1
    
    while (result.d s< i)
        result = zx.q(result.d + 1)
        void* r8_1 = &arg1[2]
        *arg1 = result.d
        void* rcx = *(arg1 + 0xc8)
        
        if (rcx != 0)
            r8_1 = rcx
        
        if (*(r8_1 + sx.q(result.d) * 0x18 + 0x10) != 0xffffffff)
            break

return result
