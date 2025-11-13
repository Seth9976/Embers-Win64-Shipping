// 函数: sub_141df0480
// 地址: 0x141df0480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = memset(*arg2, 0, sx.q(arg2[1].d) << 3)
int32_t i = 0

if (arg1[1].d s> 0)
    int32_t* r8_2 = nullptr
    
    do
        void* rdx = *arg1
        result = *arg3
        int64_t r10_1 = sx.q(*(rdx + r8_2))
        float zmm0_1 = *(result + (r10_1 << 2)) f* *(rdx + r8_2 + 4)
        
        if (not(zmm0_1 <= 9.99999975e-06f))
            *(r8_2 + *arg2) = r10_1.d
            result = *arg2
            *(r8_2 + result + 4) = zmm0_1
        
        i += 1
        r8_2 = &r8_2[2]
    while (i s< arg1[1].d)

return result
