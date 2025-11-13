// 函数: sub_140b4b860
// 地址: 0x140b4b860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r8_1 = r11_1 * 2
                uint64_t rcx = zx.q(r8_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    int64_t rdx_3 = (sx.q(r8_1) + 2) * 2
                    int64_t* rax_6 = &arg1[sx.q(rcx.d)]
                    int64_t r9_1 = *(arg1 + (rdx_3 << 3))
                    int64_t temp4_1 = *rax_6
                    bool c_1 = r9_1 u< temp4_1
                    
                    if (r9_1 == temp4_1)
                        int32_t r9_2 = *(arg1 + (rdx_3 << 3) + 8)
                        int32_t temp6_1 = rax_6[1].d
                        c_1 = r9_2 u< temp6_1
                        
                        if (r9_2 == temp6_1)
                            c_1 = *(arg1 + (rdx_3 << 3) + 0xc) u< *(rax_6 + 0xc)
                    
                    rax_6.b = c_1
                    
                    if (rax_6.b != 0)
                        rcx = zx.q(r8_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                uint64_t* r8_4 = &arg1[sx.q(r11_1)]
                int64_t* rdx_6 = &arg1[sx.q(rcx.d)]
                result = *r8_4
                int64_t temp3_1 = *rdx_6
                bool c_2 = result u< temp3_1
                
                if (result == temp3_1)
                    result = zx.q(r8_4[1].d)
                    int32_t temp5_1 = rdx_6[1].d
                    c_2 = result.d u< temp5_1
                    
                    if (result.d == temp5_1)
                        c_2 = *(r8_4 + 0xc) u< *(rdx_6 + 0xc)
                
                result.b = c_2
                
                if (result.b == 0)
                    break
                
                if (r8_4 != rdx_6)
                    zmm1 = *r8_4
                    *r8_4 = *rdx_6
                    *rdx_6 = zmm1
                
                result = zx.q(((rcx << 1) + 1).d)
                r11_1 = rcx.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rsi_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != rsi_3)
            zmm1 = *arg1
            *arg1 = *rsi_3
            *rsi_3 = zmm1
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r11_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    int64_t rdx_9 = (sx.q(result_1) + 2) * 2
                    void* rcx_4 = &arg1[sx.q(result.d)]
                    int64_t r9_3 = *(arg1 + (rdx_9 << 3))
                    int64_t temp10_1 = *rcx_4
                    bool c_3 = r9_3 u< temp10_1
                    
                    if (r9_3 == temp10_1)
                        int32_t r9_4 = *(arg1 + (rdx_9 << 3) + 8)
                        int32_t temp12_1 = *(rcx_4 + 8)
                        c_3 = r9_4 u< temp12_1
                        
                        if (r9_4 == temp12_1)
                            c_3 = *(arg1 + (rdx_9 << 3) + 0xc) u< *(rcx_4 + 0xc)
                    
                    rcx_4.b = c_3
                    
                    if (rcx_4.b != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int128_t* r8_7 = &arg1[sx.q(r11_2)]
                void* rdx_12 = &arg1[sx.q(result.d)]
                uint64_t rcx_5 = *r8_7
                int64_t temp9_1 = *rdx_12
                bool c_4 = rcx_5 u< temp9_1
                
                if (rcx_5 == temp9_1)
                    rcx_5 = zx.q(*(r8_7 + 8))
                    int32_t temp11_1 = *(rdx_12 + 8)
                    c_4 = rcx_5.d u< temp11_1
                    
                    if (rcx_5.d == temp11_1)
                        c_4 = *(r8_7 + 0xc) u< *(rdx_12 + 0xc)
                
                rcx_5.b = c_4
                
                if (rcx_5.b == 0)
                    break
                
                if (r8_7 != rdx_12)
                    zmm1 = *r8_7
                    *r8_7 = *rdx_12
                    *rdx_12 = zmm1
                
                r11_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_3 -= 0x10
    while (i s> 0)

return result
