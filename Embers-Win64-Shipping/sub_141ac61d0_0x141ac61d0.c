// 函数: sub_141ac61d0
// 地址: 0x141ac61d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t i = 0
int32_t* result

if (*(arg1 + 0xe0) s> 0)
    int64_t rbp_1 = 0
    int64_t r14_1 = 0
    
    do
        void* rbx_2 = *(arg1 + 0xd8) + r14_1
        
        if (not(9.99999975e-06f f>= *(*(arg1 + 0xe8) + rbp_1)))
            if (sub_141ea6180(rbx_2, arg3).b == 0
                    || (*(rbx_2 + 0x12) == 0 && *(rbx_2 + 0x13) == 0 && *(rbx_2 + 0x14) == 0))
                result.b = 0
            else
                result.b = 1
            
            r15.b |= result.b
        
        i += 1
        r14_1 += 0x1c
        rbp_1 += 4
    while (i s< *(arg1 + 0xe0))
    
    if (r15.b != 0 && sub_141ea6180(arg1 + 0xc8, arg3).b != 0)
        result.b = 1
        return result

result.b = 0
return result
