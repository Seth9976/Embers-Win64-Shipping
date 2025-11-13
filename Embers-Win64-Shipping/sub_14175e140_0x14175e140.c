// 函数: sub_14175e140
// 地址: 0x14175e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r15 = result.d

if (result.d s>= 0)
    int32_t r12_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rsi_1 = r15
        
        if (r12_1 s< arg2)
            do
                int32_t rbx_1 = rsi_1 * 2
                uint64_t r11_1 = zx.q(rbx_1 + 1)
                
                if ((r11_1 + 1).d s< arg2)
                    int32_t* r9_1 = arg1[sx.q(r11_1.d)]
                    int32_t* rcx = arg1[sx.q(rbx_1) + 2]
                    
                    if (*(*(*(rcx + 8) + 0x90) + sx.q(*rcx) * 0xc)
                            s< *(*(*(r9_1 + 8) + 0x90) + sx.q(*r9_1) * 0xc))
                        r11_1 = zx.q(rbx_1)
                    
                    r11_1 = zx.q(r11_1.d + 1)
                
                int64_t rax_11 = sx.q(r11_1.d)
                int32_t* r10_2 = arg1[rax_11]
                int64_t rax_12 = sx.q(rsi_1)
                int32_t* rbx_2 = arg1[rax_12]
                result = zx.q(*(*(*(r10_2 + 8) + 0x90) + sx.q(*r10_2) * 0xc))
                
                if (*(*(*(rbx_2 + 8) + 0x90) + sx.q(*rbx_2) * 0xc) s>= result.d)
                    break
                
                arg1[rax_12] = r10_2
                result = zx.q(((r11_1 << 1) + 1).d)
                arg1[rax_11] = rbx_2
                rsi_1 = r11_1.d
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
        int32_t r14_2 = 0
        uint64_t rcx_3 = *arg1
        *arg1 = result
        arg1[i] = rcx_3
        
        if (j s> 1)
            do
                int32_t result_1 = r14_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< j)
                    int32_t* r10_3 = arg1[sx.q(result.d)]
                    int32_t* rdx_3 = arg1[sx.q(result_1) + 2]
                    
                    if (*(*(*(rdx_3 + 8) + 0x90) + sx.q(*rdx_3) * 0xc)
                            s< *(*(*(r10_3 + 8) + 0x90) + sx.q(*r10_3) * 0xc))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rcx_11 = sx.q(result.d)
                int32_t* r11_3 = arg1[rcx_11]
                int64_t rcx_12 = sx.q(r14_2)
                int32_t* rsi_3 = arg1[rcx_12]
                
                if (*(*(*(rsi_3 + 8) + 0x90) + sx.q(*rsi_3) * 0xc)
                        s>= *(*(*(r11_3 + 8) + 0x90) + sx.q(*r11_3) * 0xc))
                    break
                
                arg1[rcx_12] = r11_3
                r14_2 = result.d
                result = zx.q(((result << 1) + 1).d)
                arg1[rcx_11] = rsi_3
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
