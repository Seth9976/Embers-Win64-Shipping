// 函数: sub_141f89660
// 地址: 0x141f89660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg1 + 0x80)
int32_t r9 = 0
int32_t r8 = r8_1 - 1
float zmm3 = arg2[0]

if (r8_1 - 1 s>= 0)
    int64_t r10_1 = *(arg1 + 0x78)
    int32_t rax_8
    
    do
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r8 - r9)
        int32_t rcx = r9 + ((temp2_1 - temp1_1) s>> 1)
        arg2 = *(r10_1 + (sx.q(rcx) << 3))
        arg2[0] = arg2[0] f- zmm3
        
        if (_mm_and_ps(arg2, 0x7fffffff)[0] f<= arg3)
            return zx.q(rcx)
        
        zmm3 f- arg2[0]
        
        if (zmm3 f<= arg2[0])
            r8 = rcx - 1
        
        rax_8 = rcx + 1
        
        if (zmm3 f<= arg2[0])
            rax_8 = r9
        
        r9 = rax_8
    while (rax_8 s<= r8)

return 0xffffffff
