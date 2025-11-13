// 函数: sub_141e4dc20
// 地址: 0x141e4dc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int64_t zmm1

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r8_1 = rdi
        
        if (rsi_1 s< arg2)
            do
                int32_t rdx_1 = r8_1 * 2
                uint64_t rcx = zx.q(rdx_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    void* r9_1 = &arg1[sx.q(rdx_1)]
                    int32_t* r11_1 = &arg1[sx.q(rcx.d)]
                    int32_t rax_6 = *(r9_1 + 0x10)
                    int32_t rax_7 = rax_6 - *r11_1
                    
                    if (rax_6 == *r11_1)
                        rax_7 = *(r9_1 + 0x14) - r11_1[1]
                    
                    if (rax_7 s< 0)
                        rcx = zx.q(rdx_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int32_t* r8_2 = &arg1[sx.q(r8_1)]
                int32_t* rdx_2 = &arg1[sx.q(rcx.d)]
                int32_t rax_11 = *r8_2
                result = zx.q(rax_11 - *rdx_2)
                
                if (rax_11 == *rdx_2)
                    result = zx.q(r8_2[1] - rdx_2[1])
                
                if (result.d s>= 0)
                    break
                
                if (r8_2 != rdx_2)
                    zmm1 = *r8_2
                    *r8_2 = *rdx_2
                    *rdx_2 = zmm1
                
                result = zx.q(((rcx << 1) + 1).d)
                r8_1 = rcx.d
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int64_t* rdi_1 = &arg1[result]
    
    do
        if (arg1 != rdi_1)
            zmm1 = *arg1
            *arg1 = *rdi_1
            *rdi_1 = zmm1
        
        int32_t r8_3 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r8_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    void* r11_2 = &arg1[sx.q(result_1)]
                    void* rbx_1 = &arg1[sx.q(result.d)]
                    int32_t rcx_4 = *(r11_2 + 0x10)
                    int32_t rcx_5 = rcx_4 - *rbx_1
                    
                    if (rcx_4 == *rbx_1)
                        rcx_5 = *(r11_2 + 0x14) - *(rbx_1 + 4)
                    
                    if (rcx_5 s< 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r8_4 = &arg1[sx.q(r8_3)]
                void* rdx_3 = &arg1[sx.q(result.d)]
                int32_t rcx_9 = *r8_4
                int32_t rcx_10 = rcx_9 - *rdx_3
                
                if (rcx_9 == *rdx_3)
                    rcx_10 = *(r8_4 + 4) - *(rdx_3 + 4)
                
                if (rcx_10 s>= 0)
                    break
                
                if (r8_4 != rdx_3)
                    zmm1 = *r8_4
                    *r8_4 = *rdx_3
                    *rdx_3 = zmm1
                
                r8_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rdi_1 -= 8
    while (i s> 0)

return result
