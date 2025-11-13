// 函数: sub_141e24250
// 地址: 0x141e24250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1]
int64_t result = sub_140b5b8a0(*arg2, 0)

if ((rbx == 0 & result.b) == 0)
    int32_t rbx_1 = arg2[3]
    result = sub_140b5b8a0(arg2[2], 0)
    int32_t rcx_1
    rcx_1.b = rbx_1 == 0
    
    if ((rcx_1.b & result.b) == 0)
        result = zx.q(*(arg1 + 0x180))
        
        if (result.d s>= 2)
            int32_t temp0_1 = result.d
            result = zx.q(result.d - 2)
            
            if (temp0_1 - 2 s>= 0)
                int32_t zmm2 = *arg3
                int64_t r8 = sx.q(result.d)
                result = (r8 + 1) * 3
                int64_t* rdx = *(arg1 + 0x178) + (result << 2)
                int64_t temp1_1
                
                do
                    float zmm1 = *(rdx - 4)
                    
                    if (not(zmm1 f> zmm2))
                        result = *arg2
                        
                        if (*(rdx - 0xc) == result)
                            result = *(arg2 + 8)
                            
                            if (*rdx == result && (rdx[1].d f- zmm1) f* arg2[4] + zmm1 f<= zmm2)
                                return result
                    
                    rdx -= 0xc
                    temp1_1 = r8
                    r8 -= 1
                while (temp1_1 - 1 s>= 0)

*arg3
return result
