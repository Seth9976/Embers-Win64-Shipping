// 函数: sub_140b24bd0
// 地址: 0x140b24bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10

if (arg4 == 0)
    r10 = arg1[2]
else
    r10 = *(arg4 + 8)

int64_t r8 = *arg1

if (r10 u>= r8 && r10 u<= arg1[1] - 2)
    int16_t* var_20_1 = r10
    int32_t var_14_1 = ((r10 - r8) s>> 1).d
    
    if (*r10 == arg3)
        void* var_20_2 = &r10[1]
        
        if (arg4 != 0 && &r10[1] u> *(arg4 + 8))
            *(arg4 + 8) = &r10[1]
        
        *arg2 = r10.o
        arg2[1].q = 0.q
        *(arg2 + 0x18) = 1
        return arg2

*(arg2 + 0x18) = 0
return arg2
