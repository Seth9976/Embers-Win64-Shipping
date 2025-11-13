// 函数: sub_141a2b430
// 地址: 0x141a2b430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbp = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t r15_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rbx_1 = rbp
        
        if (r15_1 s< arg2)
            void* rsi_1 = r12 + arg1
            
            do
                int32_t r11_1 = rbx_1 * 2
                uint64_t rcx = zx.q(r11_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    int64_t rdx_4 = ((sx.q(r11_1) + 2) << 4) + r12
                    int32_t* rax_7 = (sx.q(rcx.d) << 4) + r12 + arg1
                    int32_t r8 = *(rdx_4 + arg1)
                    int32_t temp4_1 = *rax_7
                    
                    if (r8 u< temp4_1)
                        rax_7.b = 1
                    else if (r8 u> temp4_1)
                        rax_7.b = 0
                    else
                        int32_t r8_1 = *(rdx_4 + arg1 + 4)
                        int32_t temp8_1 = rax_7[1]
                        
                        if (r8_1 u< temp8_1)
                            rax_7.b = 1
                        else if (r8_1 != temp8_1 || *(rdx_4 + arg1 + 8) u>= rax_7[2])
                            rax_7.b = 0
                        else
                            rax_7.b = 1
                    
                    if (rax_7.b != 0)
                        rcx = zx.q(r11_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int64_t rdx_6 = sx.q(rbx_1) << 4
                int64_t r8_3 = sx.q(rcx.d) * 2
                result = zx.q(*(rsi_1 + rdx_6))
                int32_t temp3_1 = *(rsi_1 + (r8_3 << 3))
                
                if (result.d u>= temp3_1)
                    if (result.d u> temp3_1)
                        break
                    
                    result = zx.q(*(rsi_1 + rdx_6 + 4))
                    int32_t temp7_1 = *(rsi_1 + (r8_3 << 3) + 4)
                    
                    if (result.d u>= temp7_1)
                        if (result.d != temp7_1)
                            break
                        
                        result = zx.q(*(rsi_1 + (r8_3 << 3) + 8))
                        
                        if (*(rsi_1 + rdx_6 + 8) u>= result.d)
                            break
                
                int128_t* rax_8 = arg1 + (r8_3 << 3)
                int128_t* rdx_7 = &arg1[sx.q(rbx_1)]
                
                if (rdx_7 != rax_8)
                    zmm1 = *rdx_7
                    *rdx_7 = *rax_8
                    *rax_8 = zmm1
                
                result = zx.q(((rcx << 1) + 1).d)
                rbx_1 = rcx.d
            while (result.d s< arg2)
        
        r15_1 -= 2
        temp2_1 = rbp
        rbp -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rbp_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != rbp_3)
            zmm1 = *arg1
            *arg1 = *rbp_3
            *rbp_3 = zmm1
        
        int32_t rbx_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = rbx_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    int32_t* rdx_11 = ((sx.q(result_1) + 2) << 4) + r12
                    void* rcx_5 = (sx.q(result.d) << 4) + r12 + arg1
                    int32_t r8_4 = *(rdx_11 + arg1)
                    int32_t temp6_1 = *rcx_5
                    
                    if (r8_4 u< temp6_1)
                        rcx_5.b = 1
                    else if (r8_4 u> temp6_1)
                        rcx_5.b = 0
                    else
                        int32_t r8_5 = *(rdx_11 + arg1 + 4)
                        int32_t temp10_1 = *(rcx_5 + 4)
                        
                        if (r8_5 u< temp10_1)
                            rcx_5.b = 1
                        else if (r8_5 != temp10_1 || *(rdx_11 + arg1 + 8) u>= *(rcx_5 + 8))
                            rcx_5.b = 0
                        else
                            rcx_5.b = 1
                    
                    if (rcx_5.b != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t r11_3 = sx.q(rbx_2) * 2
                int64_t rbx_4 = sx.q(result.d) * 2
                int64_t rdx_12 = r12 + (r11_3 << 3)
                int32_t r8_6 = *(rdx_12 + arg1)
                int64_t rcx_6 = r12 + (rbx_4 << 3)
                int32_t temp5_1 = *(rcx_6 + arg1)
                
                if (r8_6 u>= temp5_1)
                    if (r8_6 u> temp5_1)
                        break
                    
                    int32_t r8_7 = *(rdx_12 + arg1 + 4)
                    int32_t temp9_1 = *(rcx_6 + arg1 + 4)
                    
                    if (r8_7 u>= temp9_1)
                        if (r8_7 != temp9_1)
                            break
                        
                        if (*(rdx_12 + arg1 + 8) u>= *(rcx_6 + arg1 + 8))
                            break
                
                void* rcx_8 = arg1 + (rbx_4 << 3)
                void* rdx_13 = arg1 + (r11_3 << 3)
                
                if (rdx_13 != rcx_8)
                    zmm1 = *rdx_13
                    *rdx_13 = *rcx_8
                    *rcx_8 = zmm1
                
                rbx_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rbp_3 -= 0x10
    while (i s> 0)

return result
