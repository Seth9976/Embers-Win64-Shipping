// 函数: sub_1403f4080
// 地址: 0x1403f4080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2 - 1)
int64_t r13 = sx.q(arg2)
int64_t r10 = sx.q(result.d)

if (result.d s>= 0)
    float* r9_1 = arg3 - arg1
    int64_t rsi_2 = r13 - 1 - r10
    int64_t rdi_2 = arg4 - arg1
    int64_t r11_1 = arg1 + (r10 << 2)
    float* arg_18 = r9_1
    int64_t var_38_1 = rdi_2
    int64_t temp0_1
    
    do
        int32_t zmm2 = (zx.o(0)).d
        int64_t rcx = r13 - 1
        float zmm0
        
        if (r13 - 1 s> r10)
            if (rsi_2 s>= 4)
                void* rdx = arg4 + ((r13 - 3) << 2)
                int64_t i_1 = ((r13 - r10 - 5) u>> 2) + 1
                float* r8 = r11_1 + (((r13 - 3) * r13) << 2)
                result = i_1 << 2
                rcx = r13 - 1 - result
                int64_t i
                
                do
                    rdx -= 0x10
                    zmm2 = r8[(0 + 2) * r13] f* *(rdx + 0x18) f+ zmm2 f+
                        *(r8 + (((0 + 2) << 2) + -fffffffffffffffc) * r13) f* *(rdx + 0x14)
                    zmm0 = r8[(0 - 1) * r13]
                    float zmm1 = *r8 f* *(rdx + 0x10)
                    r8 = &r8[neg.q(r13) * 4]
                    zmm2 = zmm2 f+ zmm1 f+ zmm0 f* *(rdx + 0xc)
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                r9_1 = arg_18
                rdi_2 = var_38_1
            
            if (rcx s> r10)
                result = r13 * rcx
                float* rdx_1 = r11_1 + (result << 2)
                
                do
                    zmm0 = *(arg4 + (rcx << 2))
                    rcx -= 1
                    zmm0 = zmm0 * *rdx_1
                    rdx_1 = &rdx_1[neg.q(r13)]
                    zmm2 = zmm2 f+ zmm0
                while (rcx s> r10)
        
        zmm0 = *(r9_1 + r11_1)
        r11_1 -= 4
        rsi_2 += 1
        temp0_1 = r10
        r10 -= 1
        *(rdi_2 + r11_1 + 4) = zmm0 f- zmm2
    while (temp0_1 - 1 s>= 0)

return result
