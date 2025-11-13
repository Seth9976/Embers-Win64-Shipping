// 函数: sub_142a6b0c0
// 地址: 0x142a6b0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t rbp

if (arg1[1].b != 0)
label_142a6b10e:
    
    if (*(arg1 + 9) != 0)
        rbp = arg1[5].d
    else
        (*(*arg1 + 0xe0))(arg1, &arg_8)
        
        if (arg_8 s> 0)
            rbp = 0
        else
            *(arg1 + 9) = 0x101
            rbp = arg1[5].d
else
    (*(*arg1 + 0xd8))(arg1, &arg_8)
    
    if (arg_8 s<= 0)
        if (arg1[0x1d].b != 0 || *(arg1 + 0xa) == 0)
            *(arg1 + 9) = 0
        
        arg1[1].b = 1
        *(arg1 + 0xb) = 0
        goto label_142a6b10e
    
    rbp = 0

uint32_t result = (*(*arg1 + 0xb8))(arg1, zx.q(rbp), &arg_8)
uint32_t result_1 = result

if (arg_8 s> 0 || result == 0)
    result.b = 0
else if (result == 1)
    result.b = 1
else
    if (result - 2 u<= 1)
        int32_t r14_1 = arg1[0xc].d
        result = (*(*arg1 + 0xc0))(arg1, zx.q(rbp), &arg_8)
        
        if (arg_8 s<= 0)
            if (result_1 != 2)
                return r14_1 s< result
            
            return r14_1 s>= result
    
    result.b = 0

return result
