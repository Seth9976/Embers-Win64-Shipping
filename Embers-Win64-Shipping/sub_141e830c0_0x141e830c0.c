// 函数: sub_141e830c0
// 地址: 0x141e830c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_141e7acd0(arg1 + 0x1b0, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
int32_t i = 0
void* const r8_1

if (rax.d == 0xffffffff)
    r8_1 = nullptr
else
    r8_1 = rax * 0x68 + *(arg1 + 0x1b0)

float* result = r8_1 + 8

if (r8_1 == 0)
    result = nullptr

if (arg3 != 0 && result != 0)
    *result = *(arg2 + 8) * *result
    result[1] = *(arg2 + 0xc) * result[1]
    result[6] = *(arg2 + 0x18) * result[6]
    float zmm1 = *(arg2 + 0x10)
    
    if (not(zmm1 >= result[2]))
        result[2] = zmm1
    
    if (*(arg3 + 0x88) s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            result = *(arg3 + 0x80)
            int64_t r8_2 = *(rdi_1 + result)
            
            if (r8_2 != 0)
                result = sub_141e830c0(arg1, arg2, r8_2)
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< *(arg3 + 0x88))

return result
