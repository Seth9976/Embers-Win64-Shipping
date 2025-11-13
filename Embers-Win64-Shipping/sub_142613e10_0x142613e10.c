// 函数: sub_142613e10
// 地址: 0x142613e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0xc)
*(arg1 + 0xc) = i + 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(i - 1)
int32_t i_1 = (temp1 - temp0) s>> 1

if (i s> 0)
    int32_t zmm0 = *(arg2 + 0x10)
    
    do
        int64_t rdx_1 = *arg1
        void* r8_1 = *(rdx_1 + (sx.q(i_1) << 3))
        
        if (zmm0 f>= *(r8_1 + 0x10))
            break
        
        int64_t i_2 = sx.q(i)
        i = i_1
        *(rdx_1 + (i_2 << 3)) = r8_1
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i_1 - 1)
        i_1 = (temp3_1 - temp2_1) s>> 1
    while (i s> 0)

int64_t result = *arg1
*(result + (sx.q(i) << 3)) = arg2
return result
