// 函数: sub_14195e3b0
// 地址: 0x14195e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int64_t zmm1

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r10_1 = r11_1 * 2
                uint64_t rcx = zx.q(r10_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    void* rdx_1 = &arg1[sx.q(r10_1)]
                    int64_t rax_5 = sx.q(rcx.d)
                    char r9_1 = arg1[rax_5].b
                    void* r8_1 = &arg1[rax_5]
                    char rax_6 = *(rdx_1 + 0x10)
                    
                    if (rax_6 u< r9_1)
                        rax_6 = 1
                    else if (rax_6 u> r9_1)
                        rax_6 = 0
                    else
                        rax_6 = *(rdx_1 + 0x11)
                        char r9_2 = *(r8_1 + 1)
                        
                        if (rax_6 u< r9_2)
                            rax_6 = 1
                        else if (rax_6 u> r9_2 || *(rdx_1 + 0x13) u>= *(r8_1 + 3))
                            rax_6 = 0
                        else
                            rax_6 = 1
                    
                    if (rax_6 != 0)
                        rcx = zx.q(r10_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int64_t* r8_2 = &arg1[sx.q(r11_1)]
                int64_t rax_8 = sx.q(rcx.d)
                char r9_3 = arg1[rax_8].b
                int64_t* rdx_2 = &arg1[rax_8]
                result = zx.q(*r8_2)
                
                if (result.b u>= r9_3)
                    if (result.b u> r9_3)
                        break
                    
                    result = zx.q(*(r8_2 + 1))
                    char r9_4 = *(rdx_2 + 1)
                    
                    if (result.b u>= r9_4)
                        if (result.b u> r9_4)
                            break
                        
                        result = zx.q(*(rdx_2 + 3))
                        
                        if (*(r8_2 + 3) u>= result.b)
                            break
                
                if (r8_2 != rdx_2)
                    zmm1 = *r8_2
                    *r8_2 = *rdx_2
                    *rdx_2 = zmm1
                
                result = zx.q(((rcx << 1) + 1).d)
                r11_1 = rcx.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int64_t* rsi_1 = &arg1[result]
    
    do
        if (arg1 != rsi_1)
            zmm1 = *arg1
            *arg1 = *rsi_1
            *rsi_1 = zmm1
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r11_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    void* rdx_3 = &arg1[sx.q(result_1)]
                    int64_t rcx_3 = sx.q(result.d)
                    char r9_5 = arg1[rcx_3].b
                    void* r8_3 = &arg1[rcx_3]
                    char rcx_4 = *(rdx_3 + 0x10)
                    
                    if (rcx_4 u< r9_5)
                        rcx_4 = 1
                    else if (rcx_4 u> r9_5)
                        rcx_4 = 0
                    else
                        rcx_4 = *(rdx_3 + 0x11)
                        char r9_6 = *(r8_3 + 1)
                        
                        if (rcx_4 u< r9_6)
                            rcx_4 = 1
                        else if (rcx_4 u> r9_6 || *(rdx_3 + 0x13) u>= *(r8_3 + 3))
                            rcx_4 = 0
                        else
                            rcx_4 = 1
                    
                    if (rcx_4 != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r8_4 = &arg1[sx.q(r11_2)]
                int64_t rcx_6 = sx.q(result.d)
                char r9_7 = arg1[rcx_6].b
                void* rdx_4 = &arg1[rcx_6]
                char rcx_7 = *r8_4
                
                if (rcx_7 u>= r9_7)
                    if (rcx_7 u> r9_7)
                        break
                    
                    char rcx_8 = *(r8_4 + 1)
                    char r9_8 = *(rdx_4 + 1)
                    
                    if (rcx_8 u>= r9_8)
                        if (rcx_8 u> r9_8)
                            break
                        
                        if (*(r8_4 + 3) u>= *(rdx_4 + 3))
                            break
                
                if (r8_4 != rdx_4)
                    zmm1 = *r8_4
                    *r8_4 = *rdx_4
                    *rdx_4 = zmm1
                
                r11_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_1 -= 8
    while (i s> 0)

return result
