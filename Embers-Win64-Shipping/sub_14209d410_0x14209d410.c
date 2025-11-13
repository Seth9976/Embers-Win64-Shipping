// 函数: sub_14209d410
// 地址: 0x14209d410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2 - 1
int64_t r8 = *arg1
int32_t result_2 = arg1[1].d - 1

if (arg2 s<= 0)
    rax = 0

int64_t r11 = sx.q(rax) * 5
int64_t r9 = sx.q(arg2) * 5
int32_t result_1 = arg2 + 1

if (arg2 s>= result_2)
    result_1 = result_2

int64_t result = sx.q(result_1)
int64_t rbp = result * 5
float zmm0
float zmm1

if (*(r8 + (r9 << 2) + 0x10) != 4 || arg2 == 0 || arg2 == result_2)
    zmm0 = *(r8 + (r9 << 2) + 4)
else
    int64_t r10_1 = sx.q(arg1[4].d)
    float zmm2 = *(r8 + (r9 << 2))
    
    if (r10_1.d s>= 8)
        int32_t rdi_1 = 0
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1.d)
        int32_t rbx_2 = (temp1_1 - temp0_1) s>> 1
        
        if (r10_1.d s<= 0)
        label_14209d553:
            result = 0
        else
            int64_t rsi_1 = arg1[3]
            
            while (true)
                int64_t rdx_2 = sx.q(rbx_2) * 3
                zmm1 = *(rsi_1 + (rdx_2 << 2))
                result = rsi_1 + (rdx_2 << 2)
                zmm0 = zmm1 - zmm2
                
                if (not(zmm0 <= -0.00100000005f) && zmm0 < 0.00100000005f)
                    break
                
                zmm1 - zmm2
                int32_t rax_9 = rbx_2
                
                if (zmm1 <= zmm2)
                    rax_9 = r10_1.d
                
                r10_1 = zx.q(rax_9)
                
                if (zmm1 <= zmm2)
                    rdi_1 = rbx_2 + 1
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r10_1.d + rdi_1)
                rbx_2 = (temp3_1 - temp2_1) s>> 1
                
                if (rdi_1 s>= r10_1.d)
                    goto label_14209d553_1
    else
        int32_t rdx = 0
        
        if (r10_1.d s<= 0)
        label_14209d553_1:
            result = 0
        else
            float* rbx_1 = arg1[3]
            int64_t rcx = 0
            float* rax_3 = rbx_1
            
            while (true)
                zmm0 = *rax_3 - zmm2
                
                if (not(zmm0 <= -0.00100000005f) && zmm0 < 0.00100000005f)
                    result = &rbx_1[sx.q(rdx) * 3]
                    break
                
                rdx += 1
                rcx += 1
                rax_3 = &rax_3[3]
                
                if (rcx s>= r10_1)
                    goto label_14209d553_1
    
    zmm0 = *(r8 + (r9 << 2) + 4)
    
    if (*(result + 9) == 0)
        *(r8 + (r9 << 2) + 8) = zmm0 f- *(r8 + (r11 << 2) + 4)
        *(r8 + (r9 << 2) + 0xc) = *(r8 + (rbp << 2) + 4) f- *(r8 + (r9 << 2) + 4)
        return result

zmm1 = *(r8 + (rbp << 2) + 4)

if (zmm0 < zmm1)
    if (zmm0 f> *(r8 + (r11 << 2) + 4))
        zmm1 = (zmm1 f- *(r8 + (r11 << 2) + 4)) / (*(r8 + (rbp << 2)) f- *(r8 + (r11 << 2)))
    else
        zmm1 = (zx.o(0)).d
else if (zmm0 f>= *(r8 + (r11 << 2) + 4)
        || (not(zmm0 > zmm1) && not(zmm0 f> *(r8 + (r11 << 2) + 4))))
    zmm1 = (zx.o(0)).d
else
    zmm1 = (zmm1 f- *(r8 + (r11 << 2) + 4)) / (*(r8 + (rbp << 2)) f- *(r8 + (r11 << 2)))

*(r8 + (r9 << 2) + 0xc) = zmm1
*(r8 + (r9 << 2) + 8) = zmm1
return result
