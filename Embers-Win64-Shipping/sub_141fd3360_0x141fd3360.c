// 函数: sub_141fd3360
// 地址: 0x141fd3360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r15 = result.d
int64_t zmm0

if (result.d s>= 0)
    int32_t r12_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = r15
        
        if (r12_1 s< arg2)
            do
                int32_t r11_1 = r10_1 * 2
                uint64_t r9_1 = zx.q(r11_1 + 1)
                
                if ((r9_1 + 1).d s< arg2)
                    void* rdx_1 = *arg1[sx.q(r11_1) + 2]
                    zmm0 = *(rdx_1 + 0x18)
                    void* rdx_2 = *arg1[sx.q(r9_1.d)]
                    int32_t var_70_1 = zmm0.d
                    int64_t rcx_2 = zmm0
                    zmm0 = *(rdx_2 + 0x18)
                    
                    if ((rcx_2 u>> 0x20).d * *(rdx_1 + 0x20) * var_70_1
                            s> (zmm0 u>> 0x20).d * *(rdx_2 + 0x20) * zmm0.d)
                        r9_1 = zx.q(r11_1)
                    
                    r9_1 = zx.q(r9_1.d + 1)
                
                int64_t rax_10 = sx.q(r9_1.d)
                int64_t* rsi_1 = arg1[rax_10]
                int64_t rax_11 = sx.q(r10_1)
                int64_t* r14_1 = arg1[rax_11]
                void* rdx_3 = *rsi_1
                void* rcx_6 = *r14_1
                zmm0 = *(rcx_6 + 0x18)
                int32_t rcx_9 = (zmm0 u>> 0x20).d * zmm0.d
                zmm0 = *(rdx_3 + 0x18)
                result = zx.q((zmm0 u>> 0x20).d * *(rdx_3 + 0x20) * zmm0.d)
                
                if (rcx_9 * *(rcx_6 + 0x20) s<= result.d)
                    break
                
                arg1[rax_11] = rsi_1
                result = zx.q(((r9_1 << 1) + 1).d)
                arg1[rax_10] = r14_1
                r10_1 = r9_1.d
            while (result.d s< arg2)
        
        r12_1 -= 2
        temp2_1 = r15
        r15 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t r11_3 = 0
        uint64_t rcx_11 = *arg1
        *arg1 = result
        arg1[i] = rcx_11
        
        if (j s> 1)
            do
                int32_t result_1 = r11_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< j)
                    void* r8_2 = *arg1[sx.q(result_1) + 2]
                    zmm0 = *(r8_2 + 0x18)
                    void* r8_3 = *arg1[sx.q(result.d)]
                    int32_t var_4c_2 = zmm0.d
                    int64_t rcx_15 = zmm0
                    zmm0 = *(r8_3 + 0x18)
                    
                    if ((rcx_15 u>> 0x20).d * *(r8_2 + 0x20) * var_4c_2
                            s> (zmm0 u>> 0x20).d * *(r8_3 + 0x20) * zmm0.d)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rcx_19 = sx.q(result.d)
                int64_t* rsi_2 = arg1[rcx_19]
                int64_t rcx_20 = sx.q(r11_3)
                int64_t* r14_2 = arg1[rcx_20]
                void* r8_4 = *rsi_2
                void* rdx_10 = *r14_2
                zmm0 = *(rdx_10 + 0x18)
                int32_t rdx_13 = (zmm0 u>> 0x20).d * *(rdx_10 + 0x20)
                int32_t var_64_2 = zmm0.d
                zmm0 = *(r8_4 + 0x18)
                
                if (rdx_13 * var_64_2 s<= (zmm0 u>> 0x20).d * *(r8_4 + 0x20) * zmm0.d)
                    break
                
                arg1[rcx_20] = rsi_2
                r11_3 = result.d
                result = zx.q(((result << 1) + 1).d)
                arg1[rcx_19] = r14_2
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
