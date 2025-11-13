// 函数: sub_14037d620
// 地址: 0x14037d620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[2]
float* r10 = arg1[3]
int32_t* r9 = *arg1
float zmm2 = *rax
float zmm3 = rax[1]
float* rdx = arg1[1]
int64_t result = sx.q(*(arg1 + 0x3c))
int64_t i = *(arg1 + 0x24)
float zmm0
float zmm1

if (r10 != 0)
    float zmm4 = *r10
    float zmm5 = r10[1]
    
    while (i != 0)
        zmm1 = *r9
        i -= 1
        r9 = &r9[1]
        zmm0 = zmm1
        zmm1 = zmm1 * zmm3
        zmm0 = zmm0 * zmm2
        
        if (result == 0)
            *rdx = zmm0
        else
            *rdx = zmm0 + *rdx
            zmm1 = zmm1 + rdx[1]
        
        rdx[1] = zmm1
        rdx = &rdx[2]
        zmm2 = zmm2 + zmm4
        zmm3 = zmm3 + zmm5
else if (i != 0)
    do
        zmm1 = *r9
        i -= 1
        r9 = &r9[1]
        zmm0 = zmm1
        zmm1 = zmm1 * zmm3
        zmm0 = zmm0 * zmm2
        
        if (result == 0)
            *rdx = zmm0
        else
            *rdx = zmm0 + *rdx
            zmm1 = zmm1 + rdx[1]
        
        rdx[1] = zmm1
        rdx = &rdx[2]
    while (i != 0)
return result
