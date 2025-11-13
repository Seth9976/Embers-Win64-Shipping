// 函数: sub_1428156d0
// 地址: 0x1428156d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x58)
int64_t rdx = 0
int32_t r8 = 0

if (r9 != 0)
    int64_t r10_1 = *(arg1 + 0x50)
    
    do
        if (*(r10_1 + (zx.q(r8) << 3)) == arg2)
            int32_t rcx = *(r10_1 + (zx.q(r8) << 3) + 4)
            
            if (rcx != 0xffffffff)
                rdx = zx.q(rcx) + *(arg1 + 0x18)
            
            return sub_142815640(arg1, rdx) __tailcall
        
        r8 += 1
    while (r8 u< r9)

return 0
