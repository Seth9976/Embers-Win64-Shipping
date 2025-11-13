// 函数: sub_14146f190
// 地址: 0x14146f190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rbx_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r11_1 = rbx_1 * 2
                uint64_t r9_1 = zx.q(r11_1 + 1)
                
                if ((r9_1 + 1).d s< arg2)
                    void* rdx_1 = arg1[sx.q(r9_1.d)]
                    void* rcx = arg1[sx.q(r11_1) + 2]
                    
                    if (*(rdx_1 + 0x54c) * *(rdx_1 + 0x548) u< *(rcx + 0x54c) * *(rcx + 0x548))
                        r9_1 = zx.q(r11_1)
                    
                    r9_1 = zx.q(r9_1.d + 1)
                
                int64_t rax_8 = sx.q(r9_1.d)
                void* rdx_2 = arg1[rax_8]
                int64_t rax_9 = sx.q(rbx_1)
                void* r8_3 = arg1[rax_9]
                result = zx.q(*(rdx_2 + 0x54c) * *(rdx_2 + 0x548))
                
                if (result.d u>= *(r8_3 + 0x54c) * *(r8_3 + 0x548))
                    break
                
                arg1[rax_9] = rdx_2
                result = zx.q(((r9_1 << 1) + 1).d)
                arg1[rax_8] = r8_3
                rbx_1 = r9_1.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t rdi_1 = 0
        int64_t rcx_3 = *arg1
        *arg1 = result
        arg1[i] = rcx_3
        
        if (j s> 1)
            do
                int32_t result_1 = rdi_1 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< j)
                    void* r8_4 = arg1[sx.q(result.d)]
                    void* rdx_3 = arg1[sx.q(result_1) + 2]
                    
                    if (*(r8_4 + 0x54c) * *(r8_4 + 0x548) u< *(rdx_3 + 0x54c) * *(rdx_3 + 0x548))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rcx_9 = sx.q(result.d)
                void* r8_5 = arg1[rcx_9]
                int64_t rcx_10 = sx.q(rdi_1)
                void* r9_4 = arg1[rcx_10]
                
                if (*(r8_5 + 0x54c) * *(r8_5 + 0x548) u>= *(r9_4 + 0x54c) * *(r9_4 + 0x548))
                    break
                
                arg1[rcx_10] = r8_5
                rdi_1 = result.d
                result = zx.q(((result << 1) + 1).d)
                arg1[rcx_9] = r9_4
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
