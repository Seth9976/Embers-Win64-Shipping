// 函数: sub_141527e80
// 地址: 0x141527e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double* rdx = *(arg1 + 0x30)
*(arg1 + 0x1c) = 0
uint128_t zmm6 = arg4
uint128_t zmm7 = arg3
double zmm4 = arg4.q * rdx[2]
arg4 = zx.o(arg5)
uint128_t zmm8 = arg2
double zmm5 = arg3.q * rdx[1] + arg2.q * *rdx + zmm4
int32_t result

if (not(zmm5 f>= arg4.q))
    int32_t rcx = 1
    int32_t r9_2 = *(arg1 + 0x18) s>> 3
    result = 1
    
    if (r9_2 s<= 1)
        return sub_141527f80(arg1, zmm8, zmm7, zmm6, arg4.q, zmm5)
    
    void* r8_1 = &rdx[3]
    void* rdx_1 = &rdx[5]
    
    while (true)
        arg3.q = zmm7.q f* *(rdx_1 - 8)
        arg2.q = zmm6.q f* *rdx_1
        arg3.q = arg3.q f+ zmm8.q f* *r8_1
        arg3.q = arg3.q f+ arg2.q
        
        if (not(arg3.q f<= zmm5))
            if (arg3.q f> arg4.q)
                break
            
            zmm5 = arg3.q
            *(arg1 + 0x1c) = result
        
        rcx += result
        r8_1 += 0x18
        result += 1
        rdx_1 += 0x18
        
        if (rcx s>= r9_2)
            return sub_141527f80(arg1, zmm8, zmm7, zmm6, arg4.q, zmm5)

result.b = 1
return result
