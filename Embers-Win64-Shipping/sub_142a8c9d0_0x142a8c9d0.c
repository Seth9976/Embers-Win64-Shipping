// 函数: sub_142a8c9d0
// 地址: 0x142a8c9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int64_t r10 = sx.q(arg2)
char* r9 = arg1

if (arg1 != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((r10 - 0x20).d)
    void* rdx_2 = &arg1[r10]
    
    if (arg1 u< rdx_2)
        do
            uint32_t rcx = zx.d(*r9)
            r9 = &r9[sx.q(((temp1_1 + (temp0_1 & 0x1f)) s>> 5) + 1)]
            r8 = r8 * 0x25 + rcx
        while (r9 u< rdx_2)

return zx.q(r8)
