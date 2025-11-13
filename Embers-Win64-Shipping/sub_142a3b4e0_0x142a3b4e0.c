// 函数: sub_142a3b4e0
// 地址: 0x142a3b4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1[1]
int64_t rsi_1 = arg1[2] + rbx
int128_t zmm6
int128_t var_38 = zmm6
int64_t* r14 = **arg1
arg1[6] = -0x4010000000000000
arg1[5] = 0xf4240

while (rbx s< rsi_1)
    int32_t arg_8
    uint64_t rax_1 = sub_142a3e160(r14, rbx, &arg_8, arg2)
    
    if (rax_1 s< 0)
        return -2
    
    int64_t rbx_1 = rbx + sx.q(arg_8)
    
    if (rsi_1 s>= 0 && rbx_1 s>= rsi_1)
        return -2
    
    int64_t rax_2 = sub_142a3e270(r14, rbx_1, &arg_8, arg2)
    
    if (rax_2 s< 0)
        return -2
    
    int64_t rdx_3 = sx.q(arg_8)
    
    if ((rdx_3 - 1).d u> 7)
        return -2
    
    int64_t rbx_2 = rbx_1 + rdx_3
    
    if (rbx_2 u> 0x7fffffffffffffff)
        return -2
    
    if (rsi_1 s>= 0 && rbx_2 s> rsi_1)
        return -2
    
    if (rax_1 == 0x2ad7b1)
        int64_t rax_3 = sub_142a3ea30(r14, rbx_2, rax_2)
        arg1[5] = rax_3
        
        if (rax_3 s<= 0)
            return -2
    else
        int32_t result
        
        if (rax_1 == 0x4489)
            result = sub_142a3e770(r14, rbx_2, rax_2, &arg1[6])
            
            if (result s< 0)
                return result
            
            if (0.0 f> arg1[6])
                return -2
        else
            void* r9_2
            
            if (rax_1 != 0x4d80)
                if (rax_1 == 0x5741)
                    r9_2 = &arg1[8]
                    goto label_142a3b638
                
                if (rax_1 == 0x7ba9)
                    r9_2 = &arg1[9]
                    goto label_142a3b638
            else
                r9_2 = &arg1[7]
            label_142a3b638:
                result, arg2 = sub_142a3e960(r14, rbx_2, rax_2, r9_2)
                
                if (result != 0)
                    return result
    
    rbx = rbx_2 + rax_2
    
    if (rbx s> rsi_1)
        return -2

if (float.d(arg1[5]) f* arg1[6] > 9.2233720368547758e+18)
    return -2

if (rbx != rsi_1)
    return -2

return 0
