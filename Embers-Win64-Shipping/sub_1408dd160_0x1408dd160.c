// 函数: sub_1408dd160
// 地址: 0x1408dd160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = *(arg1 + 0x14)
int32_t r11 = 0
uint64_t i_1 = zx.q(*(arg1 + 0xc))
uint32_t rsi = arg1[2].d
int32_t r15 = 0
int64_t r13 = sx.q(arg2)
int32_t r12 = 0
int32_t rdi = 0

if (r14 != 0)
    int32_t r10_1 = arg1[1].d
    int32_t r8_1 = (r13 + 1).d
    uint32_t i_2 = divu.dp.d(0:(i_1.d), r10_1)
    r15 = i_2 * r13.d
    uint32_t temp0_1 = divu.dp.d(0:rsi, r10_1)
    rdi = *(*arg1[5] + (r13 << 2))
    i_1 = zx.q(i_1.d - r15)
    r12 = temp0_1 * r13.d
    
    if (r8_1 != r10_1)
        i_1 = zx.q(i_2)
    
    rsi -= r12
    
    if (r8_1 != r10_1)
        rsi = temp0_1

void* rcx_2 = arg1[3]
int64_t var_38 = 0
int64_t var_30 = 0
int64_t var_48 = zx.q(rdi) + *rcx_2
uint64_t result = zx.q(*(rcx_2 + 8) - rdi)
int64_t* rdi_1 = &var_48
uint64_t result_1 = result

if (r14 == 0)
    rdi_1 = arg1[4]

if (i_1.d != 0)
    result = arg1[6]
    
    if (*(result + 0xa7) == 0)
        result = *(result + 0x90)
        int64_t r8_2 = result + (sx.q(r15) << 2)
        
        if (i_1.d != 0)
            int64_t r15_2 = *arg1 + 0x10
            uint64_t i
            
            do
                int32_t r9_2 = rdi_1[3].d
                uint64_t rdx_2 = zx.q(*(rdi_1 + 0x1c))
                int64_t r10_4 = *(rdx_2 + *rdi_1) << r9_2.b | rdi_1[2]
                int32_t r9_3 = r9_2 | 0x38
                rdi_1[2] = r10_4
                *(rdi_1 + 0x1c) = ((0x3f - r9_2) u>> 3) + rdx_2.d
                uint64_t rax_13 = zx.q(r10_4.d) & 0x7ff
                rdi_1[3].d = r9_3
                int32_t rcx_5 = sx.d(*(r15_2 + (rax_13 << 1)))
                uint64_t r10_5 = r10_4 u>> rcx_5.b
                int32_t r9_4 = r9_3 - rcx_5
                rdi_1[2] = r10_5
                rdi_1[3].d = r9_4
                int64_t r14_1 = sx.q(*(r15_2 + (rax_13 << 1) + 1))
                result = zx.q((r14_1 - 2).d)
                
                if (r14_1.d s>= 4)
                    int32_t rax_14 = result.d s>> 1
                    char rcx_6 = rax_14.b
                    rdi_1[2] = r10_5 u>> rcx_6
                    rdi_1[3].d = r9_4 - rax_14
                    result =
                        zx.q((((1 << rcx_6).d - 1) & r10_5.d) + *(&data_143cebee0 + (r14_1 << 2)))
                
                r11 += result.d
                *r8_2 = r11
                r8_2 += 4
                i = i_1
                i_1 -= 1
            while (i != 1)

if (rsi != 0)
    int64_t r14_2 = sx.q(r12)
    int64_t r15_3 = r14_2 * 0xc
    sub_1408e0d60(*arg1, rdi_1, *arg1[6] + r15_3, 0xc, rsi)
    result = arg1[6]
    
    if (*(result + 0xa3) != 0)
        sub_1408dfeb0(*arg1, rdi_1, *(result + 0x40) + (r14_2 << 2), 4, rsi)
        result = arg1[6]
    
    if (*(result + 0xa0) != 0)
        int64_t rcx_9 = *arg1
        sub_1408e0c20(rcx_9, rdi_1, *(result + 0x20) + (r14_2 << 2), 4, rsi, rcx_9 + 0x3010)
        result = arg1[6]
    
    if (*(result + 0xa1) != 0)
        int64_t rcx_10 = *arg1
        sub_1408e0c20(rcx_10, rdi_1, *(result + 0x30) + (r14_2 << 2), 4, rsi, rcx_10 + 0x4010)
        result = arg1[6]
    
    if (*(result + 0xa2) != 0)
        sub_1408e1940(*arg1, rdi_1, *(result + 0x10) + (r14_2 << 3), 8, rsi)
        result = arg1[6]
    
    if (*(result + 0xa4) != 0)
        return sub_1408e08c0(*arg1, rdi_1, *(result + 0x50) + r15_3, 0xc, rsi)

return result
