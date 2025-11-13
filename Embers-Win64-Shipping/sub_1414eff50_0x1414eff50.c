// 函数: sub_1414eff50
// 地址: 0x1414eff50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbp = result.d

if (result.d s>= 0)
    int32_t r14_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rbp
        
        if (r14_1 s< arg2)
            do
                int32_t rdi_1 = r11_1 * 2
                uint64_t r10_1 = zx.q(rdi_1 + 1)
                
                if ((r10_1 + 1).d s< arg2)
                    int64_t rdx_1 = *(*arg4 + 8)
                    int32_t* r8_2 = (sx.q(arg1[sx.q(rdi_1) + 2].d) << 4) + rdx_1
                    int32_t* rcx_2 = (sx.q(arg1[sx.q(r10_1.d)].d) << 4) + rdx_1
                    
                    if ((zx.d(*(r8_2 + 3)) << 0x18 | (*r8_2 & 0xffffff))
                            u< (zx.d(*(rcx_2 + 3)) << 0x18 | (*rcx_2 & 0xffffff)))
                        r10_1 = zx.q(rdi_1)
                    
                    r10_1 = zx.q(r10_1.d + 1)
                
                int64_t rax_11 = sx.q(r11_1)
                int64_t* r11_2 = &arg1[rax_11]
                int64_t rcx_6 = *(*arg4 + 8)
                int32_t* r8_5 = (sx.q(arg1[rax_11].d) << 4) + rcx_6
                int64_t rax_13 = sx.q(r10_1.d)
                int64_t* rdi_2 = &arg1[rax_13]
                int64_t rax_15 = sx.q(arg1[rax_13].d) * 2
                result = zx.q(*r8_5) & 0xffffff
                
                if ((zx.d(*(r8_5 + 3)) << 0x18 | result.d) u>= (
                        zx.d(*(rcx_6 + (rax_15 << 3) + 3)) << 0x18
                        | (*(rcx_6 + (rax_15 << 3)) & 0xffffff)))
                    break
                
                int64_t rcx_10 = *r11_2
                *r11_2 = *rdi_2
                result = zx.q(((r10_1 << 1) + 1).d)
                *rdi_2 = rcx_10
                r11_1 = r10_1.d
            while (result.d s< arg2)
        
        r14_1 -= 2
        temp2_1 = rbp
        rbp -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t r11_3 = 0
        int64_t rcx_11 = *arg1
        *arg1 = result
        arg1[i] = rcx_11
        
        if (j s> 1)
            do
                int32_t result_1 = r11_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< j)
                    int64_t r8_6 = *(*arg4 + 8)
                    int32_t* r10_4 = (sx.q(arg1[sx.q(result_1) + 2].d) << 4) + r8_6
                    int32_t* rdx_10 = (sx.q(arg1[sx.q(result.d)].d) << 4) + r8_6
                    
                    if ((zx.d(*(r10_4 + 3)) << 0x18 | (*r10_4 & 0xffffff))
                            u< (zx.d(*(rdx_10 + 3)) << 0x18 | (*rdx_10 & 0xffffff)))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rcx_20 = sx.q(r11_3)
                int64_t r11_5 = sx.q(arg1[rcx_20].d) * 2
                void* rsi_1 = &arg1[rcx_20]
                int64_t rdx_14 = *(*arg4 + 8)
                int64_t rcx_22 = sx.q(result.d)
                void* r14_2 = &arg1[rcx_22]
                int32_t* r10_7 = (sx.q(arg1[rcx_22].d) << 4) + rdx_14
                
                if ((zx.d(*(rdx_14 + (r11_5 << 3) + 3)) << 0x18
                        | (*(rdx_14 + (r11_5 << 3)) & 0xffffff))
                        u>= (zx.d(*(r10_7 + 3)) << 0x18 | (*r10_7 & 0xffffff)))
                    break
                
                r11_3 = result.d
                int64_t rdx_18 = *rsi_1
                result = zx.q(((result << 1) + 1).d)
                *rsi_1 = *r14_2
                *r14_2 = rdx_18
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
