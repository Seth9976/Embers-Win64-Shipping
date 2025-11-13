// 函数: sub_142ae90e0
// 地址: 0x142ae90e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_142aea170(arg1, arg2, arg4)

if (arg3 == 0 || *arg4 s> 0)
    return result

int32_t i_3 = (*(*(result + 0x38) + 0x18))(result)
int64_t rbx_1 = *(arg2 + 0x48)
int16_t* rax = sub_142a7dd00(sx.q(i_3 + 1) * 2)
int16_t* r8_2 = rax

if (rax != 0)
    int64_t i_2 = sx.q(i_3)
    
    if (i_3 s> 0)
        int64_t i_1 = i_2
        int64_t i
        
        do
            *rax = *(rbx_1 - r8_2 + rax)
            rax = &rax[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    r8_2[i_2] = 0
    result[2] |= 0x20
    *(result + 0x48) = r8_2
else
    *arg4 = 7

return result
