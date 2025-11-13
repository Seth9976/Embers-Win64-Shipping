// 函数: sub_14146f780
// 地址: 0x14146f780
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
                int32_t rbx_1 = r11_1 * 2
                uint64_t r9_1 = zx.q(rbx_1 + 1)
                
                if ((r9_1 + 1).d s< arg2)
                    void* rcx = arg1[sx.q(r9_1.d)]
                    void* rdx_1 = arg1[sx.q(rbx_1) + 2]
                    
                    if (*(rcx + 0x54c) * *(rcx + 0x548) u< *(rdx_1 + 0x54c) * *(rdx_1 + 0x548))
                        r9_1 = zx.q(rbx_1)
                    
                    r9_1 = zx.q(r9_1.d + 1)
                
                int64_t rax_8 = sx.q(r11_1)
                void* rdx_2 = arg1[rax_8]
                int64_t* r11_2 = &arg1[rax_8]
                int64_t rax_9 = sx.q(r9_1.d)
                int64_t* r8_3 = &arg1[rax_9]
                void* rax_10 = arg1[rax_9]
                result = zx.q(*(rdx_2 + 0x54c) * *(rdx_2 + 0x548))
                
                if (*(rax_10 + 0x54c) * *(rax_10 + 0x548) u>= result.d)
                    break
                
                if (r11_2 != r8_3)
                    zmm1 = *r11_2
                    *r11_2 = *r8_3
                    *r8_3 = zmm1
                
                result = zx.q(((r9_1 << 1) + 1).d)
                r11_1 = r9_1.d
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
        
        int32_t rbx_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = rbx_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    void* r8_4 = arg1[sx.q(result.d)]
                    void* rdx_3 = arg1[sx.q(result_1) + 2]
                    
                    if (*(r8_4 + 0x54c) * *(r8_4 + 0x548) u< *(rdx_3 + 0x54c) * *(rdx_3 + 0x548))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rcx_8 = sx.q(rbx_2)
                void* r8_5 = arg1[rcx_8]
                void* rbx_3 = &arg1[rcx_8]
                int64_t rcx_9 = sx.q(result.d)
                void* r9_4 = &arg1[rcx_9]
                void* rcx_10 = arg1[rcx_9]
                
                if (*(rcx_10 + 0x54c) * *(rcx_10 + 0x548) u>= *(r8_5 + 0x54c) * *(r8_5 + 0x548))
                    break
                
                if (rbx_3 != r9_4)
                    zmm1 = *rbx_3
                    *rbx_3 = *r9_4
                    *r9_4 = zmm1
                
                rbx_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_1 -= 8
    while (i s> 0)

return result
