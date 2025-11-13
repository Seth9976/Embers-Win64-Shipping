// 函数: sub_14037d6e8
// 地址: 0x14037d6e8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* r11 = *arg1
int64_t r8 = arg1[1]
int64_t r9 = *(arg1 + 0x2c)
int64_t r10 = *(arg1 + 0x34)

if (arg1[8].d != 0)
    r10 = 1
    r9 = 1

float* rdi = arg1[3]
int64_t r15 = sx.q(*(arg1 + 0x3c))
uint64_t result = divu.dp.q(0:(*(arg1 + 0x24)), r9)
float zmm0
float zmm1

if (rdi != 0)
    int64_t rbx_1 = 0
    uint64_t result_1 = result
    
    if (result != 0)
        float* r14_1 = arg1[2]
        
        do
            int64_t rcx_1 = 0
            float* rsi_3 = r14_1
            float* rbp_2 = rdi
            
            if (r10 != 0)
                int32_t zmm2 = float.s(rbx_1)
                
                if (rbx_1 s< 0)
                    zmm2 = zmm2 f+ 1.84467441e+19f
                
                do
                    result = 1
                    zmm1 = zmm2 * *rbp_2
                    rbp_2 = &rbp_2[1]
                    zmm1 = zmm1 + *rsi_3
                    rsi_3 = &rsi_3[1]
                    zmm1 = zmm1 * *r11
                    
                    while (result u< r9)
                        zmm0 = zmm2 * *rbp_2
                        rbp_2 = &rbp_2[1]
                        zmm0 = zmm0 + *rsi_3
                        rsi_3 = &rsi_3[1]
                        zmm0 = zmm0 * r11[result]
                        result += 1
                        zmm1 = zmm1 + zmm0
                    
                    if (r15 != 0)
                        zmm1 = zmm1 f+ *(r8 + (rcx_1 << 2))
                    
                    *(r8 + (rcx_1 << 2)) = zmm1
                    rcx_1 += 1
                while (rcx_1 u< r10)
            
            rbx_1 += 1
            r11 = &r11[r9]
            r8 += r10 << 2
        while (rbx_1 u< result_1)
else
    uint64_t rbx = result
    
    if (result != 0)
        float* rbp_1 = arg1[2]
        uint64_t i
        
        do
            int64_t rcx = 0
            float* rdx_2 = rbp_1
            
            if (r10 != 0)
                do
                    result = 1
                    zmm1 = *r11 * *rdx_2
                    rdx_2 = &rdx_2[1]
                    
                    if (1 u< r9)
                        do
                            zmm0 = r11[result]
                            result += 1
                            zmm0 = zmm0 * *rdx_2
                            rdx_2 = &rdx_2[1]
                            zmm1 = zmm1 + zmm0
                        while (result u< r9)
                    
                    if (r15 != 0)
                        zmm1 = zmm1 f+ *(r8 + (rcx << 2))
                    
                    *(r8 + (rcx << 2)) = zmm1
                    rcx += 1
                while (rcx u< r10)
            
            r11 = &r11[r9]
            r8 += r10 << 2
            i = rbx
            rbx -= 1
        while (i != 1)
return result
