// 函数: sub_141f895f0
// 地址: 0x141f895f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg1 + 0x78)
int32_t r9 = 0
int32_t r8 = r8_1 - 1
float zmm3 = arg2[0]

if (r8_1 - 1 s>= 0)
    int64_t r10_1 = *(arg1 + 0x70)
    int32_t rax_8
    
    do
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r8 - r9)
        int32_t rdx_2 = r9 + ((temp2_1 - temp1_1) s>> 1)
        arg2 = *(sx.q(rdx_2) * 0x1c + r10_1 + 4)
        arg2[0] = arg2[0] f- zmm3
        
        if (_mm_and_ps(arg2, 0x7fffffff)[0] f<= arg3)
            return zx.q(rdx_2)
        
        zmm3 f- arg2[0]
        
        if (zmm3 f<= arg2[0])
            r8 = rdx_2 - 1
        
        rax_8 = rdx_2 + 1
        
        if (zmm3 f<= arg2[0])
            rax_8 = r9
        
        r9 = rax_8
    while (rax_8 s<= r8)

return 0xffffffff
