// 函数: sub_140ae5920
// 地址: 0x140ae5920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbp = result.d
int128_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t r14_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rbp
        
        if (r14_1 s< arg2)
            do
                int32_t r9_1 = r11_1 * 2
                uint64_t rcx = zx.q(r9_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    int64_t rdi_1 = arg1[(sx.q(r9_1) + 2) * 2 + 1].q
                    int64_t rbx_1 = arg1[sx.q(rcx.d) * 2 + 1].q
                    bool c_1 = rbx_1 u< rdi_1
                    
                    if (rbx_1 == rdi_1)
                        c_1 = *(&arg1[sx.q(rcx.d) * 2] + 0x18)
                            u< *(&arg1[(sx.q(r9_1) + 2) * 2] + 0x18)
                    
                    if (c_1 != 0)
                        rcx = zx.q(r9_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int128_t* r9_4 = &arg1[sx.q(r11_1) * 2]
                int128_t* r8_5 = &arg1[sx.q(rcx.d) * 2]
                int64_t r11_2 = r9_4[1].q
                result = r8_5[1].q
                bool c_2 = result u< r11_2
                
                if (result == r11_2)
                    result = *(r9_4 + 0x18)
                    c_2 = *(r8_5 + 0x18) u< result
                
                if (c_2 == 0)
                    break
                
                if (r9_4 != r8_5)
                    zmm2 = *r9_4
                    zmm3 = r9_4[1]
                    *r9_4 = *r8_5
                    r9_4[1] = r8_5[1]
                    *r8_5 = zmm2
                    r8_5[1] = zmm3
                
                result = zx.q(((rcx << 1) + 1).d)
                r11_1 = rcx.d
            while (result.d s< arg2)
        
        r14_1 -= 2
        temp2_1 = rbp
        rbp -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rbp_3 = &arg1[sx.q(i) * 2]
    
    do
        if (arg1 != rbp_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            *arg1 = *rbp_3
            arg1[1] = rbp_3[1]
            *rbp_3 = zmm2
            rbp_3[1] = zmm3
        
        int32_t r11_3 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r11_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    int64_t rsi_1 = arg1[(sx.q(result_1) + 2) * 2 + 1].q
                    int64_t rdi_2 = arg1[sx.q(result.d) * 2 + 1].q
                    bool c_3 = rdi_2 u< rsi_1
                    
                    if (rdi_2 == rsi_1)
                        c_3 = *(&arg1[sx.q(result.d) * 2] + 0x18)
                            u< *(&arg1[(sx.q(result_1) + 2) * 2] + 0x18)
                    
                    if (c_3 != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r9_7 = &arg1[sx.q(r11_3) * 2]
                void* r8_10 = &arg1[sx.q(result.d) * 2]
                int64_t r11_4 = *(r9_7 + 0x10)
                int64_t rcx_6 = *(r8_10 + 0x10)
                bool c_4 = rcx_6 u< r11_4
                
                if (rcx_6 == r11_4)
                    c_4 = *(r8_10 + 0x18) u< *(r9_7 + 0x18)
                
                if (c_4 == 0)
                    break
                
                if (r9_7 != r8_10)
                    zmm2 = *r9_7
                    zmm3 = *(r9_7 + 0x10)
                    *r9_7 = *r8_10
                    *(r9_7 + 0x10) = *(r8_10 + 0x10)
                    *r8_10 = zmm2
                    *(r8_10 + 0x10) = zmm3
                
                r11_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rbp_3 -= 0x20
    while (i s> 0)

return result
