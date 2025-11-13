// 函数: sub_1429db950
// 地址: 0x1429db950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *arg2

if (arg1[0x37].d != 0)
    *arg1 = "Not supported in frame parallel decode"
    return 4

if (r8 == 0)
    return 8

int64_t r9 = sx.q(*r8)
void* rdx = **(arg1[0x38] + 0x18)

if (r9.d u<= 7)
    int64_t rcx_1 = sx.q(*(rdx + (r9 << 2) + 0x410))
    
    if (rcx_1.d s>= 0)
        int64_t rcx_2 = rcx_1 * 0xd0
        void* rdx_2 = *(rdx + 0x47e8) + 0x70
        
        if (rdx_2 != neg.q(rcx_2))
            sub_1429dc940(&r8[2], rdx_2 + rcx_2, 0, r9.d)
            return 0

return 1
